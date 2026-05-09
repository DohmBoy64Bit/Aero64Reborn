#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802094FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802094FC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80209500: jr          $ra
    // 0x80209504: sw          $a0, -0x18E4($at)
    MEM_W(-0X18E4, ctx->r1) = ctx->r4;
    return;
    // 0x80209504: sw          $a0, -0x18E4($at)
    MEM_W(-0X18E4, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_802209A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802209A4: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802209A8: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x802209AC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802209B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802209B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802209B8: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x802209BC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x802209C0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x802209C4: lui         $t8, 0x2
    ctx->r24 = S32(0X2 << 16);
    // 0x802209C8: ori         $t8, $t8, 0x2000
    ctx->r24 = ctx->r24 | 0X2000;
    // 0x802209CC: lui         $t7, 0xB600
    ctx->r15 = S32(0XB600 << 16);
    // 0x802209D0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x802209D4: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802209D8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802209DC: addiu       $t7, $zero, 0x1005
    ctx->r15 = ADD32(0, 0X1005);
    // 0x802209E0: lui         $t6, 0xB700
    ctx->r14 = S32(0XB700 << 16);
    // 0x802209E4: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x802209E8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x802209EC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802209F0: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x802209F4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x802209F8: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x802209FC: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80220A00: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80220A04: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80220A08: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x80220A0C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80220A10: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A14: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x80220A18: lui         $t7, 0x10
    ctx->r15 = S32(0X10 << 16);
    // 0x80220A1C: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220A20: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220A24: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220A28: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80220A2C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A30: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80220A34: ori         $t9, $t9, 0x1001
    ctx->r25 = ctx->r25 | 0X1001;
    // 0x80220A38: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80220A3C: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80220A40: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80220A44: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80220A48: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A4C: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x80220A50: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x80220A54: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220A58: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220A5C: addiu       $t8, $zero, -0x3C8
    ctx->r24 = ADD32(0, -0X3C8);
    // 0x80220A60: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220A64: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220A68: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A6C: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80220A70: lui         $t8, 0xC18
    ctx->r24 = S32(0XC18 << 16);
    // 0x80220A74: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220A78: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220A7C: sw          $ra, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r31;
    // 0x80220A80: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80220A84: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220A88: ori         $t8, $t8, 0x4A50
    ctx->r24 = ctx->r24 | 0X4A50;
    // 0x80220A8C: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80220A90: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220A94: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220A98: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220A9C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220AA0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220AA4: lui         $t6, 0xFF10
    ctx->r14 = S32(0XFF10 << 16);
    // 0x80220AA8: ori         $t6, $t6, 0x13F
    ctx->r14 = ctx->r14 | 0X13F;
    // 0x80220AAC: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220AB0: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220AB4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80220AB8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220ABC: lw          $a0, 0x4388($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4388);
    // 0x80220AC0: jal         0x802375F0
    // 0x80220AC4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80220AC4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x80220AC8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80220ACC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80220AD0: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80220AD4: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x80220AD8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220ADC: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80220AE0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80220AE4: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220AE8: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220AEC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220AF0: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80220AF4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80220AF8: lw          $t6, 0xC($t9)
    ctx->r14 = MEM_W(ctx->r25, 0XC);
    // 0x80220AFC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80220B00: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B04: lui         $t6, 0xFF10
    ctx->r14 = S32(0XFF10 << 16);
    // 0x80220B08: ori         $t6, $t6, 0x13F
    ctx->r14 = ctx->r14 | 0X13F;
    // 0x80220B0C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220B10: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220B14: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220B18: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80220B1C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B20: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220B24: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220B28: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220B2C: lw          $a0, -0x17A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17A8);
    // 0x80220B30: jal         0x802375F0
    // 0x80220B34: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x80220B34: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80220B38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80220B3C: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x80220B40: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80220B44: addiu       $a1, $a1, 0x3B90
    ctx->r5 = ADD32(ctx->r5, 0X3B90);
    // 0x80220B48: sw          $v0, 0x4($ra)
    MEM_W(0X4, ctx->r31) = ctx->r2;
    // 0x80220B4C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B50: lui         $t8, 0xFCFF
    ctx->r24 = S32(0XFCFF << 16);
    // 0x80220B54: lui         $t9, 0xFFFE
    ctx->r25 = S32(0XFFFE << 16);
    // 0x80220B58: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220B5C: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220B60: ori         $t9, $t9, 0x7838
    ctx->r25 = ctx->r25 | 0X7838;
    // 0x80220B64: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x80220B68: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220B6C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80220B70: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B74: lui         $t8, 0xC18
    ctx->r24 = S32(0XC18 << 16);
    // 0x80220B78: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80220B7C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80220B80: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80220B84: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80220B88: ori         $t8, $t8, 0x4A50
    ctx->r24 = ctx->r24 | 0X4A50;
    // 0x80220B8C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80220B90: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80220B94: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220B98: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x80220B9C: lui         $t6, 0xB600
    ctx->r14 = S32(0XB600 << 16);
    // 0x80220BA0: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80220BA4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80220BA8: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x80220BAC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80220BB0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220BB4: addiu       $t6, $zero, 0x2000
    ctx->r14 = ADD32(0, 0X2000);
    // 0x80220BB8: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80220BBC: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80220BC0: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80220BC4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x80220BC8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80220BCC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80220BD0: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x80220BD4: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80220BD8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80220BDC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x80220BE0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80220BE4: lw          $t9, 0xC($t5)
    ctx->r25 = MEM_W(ctx->r13, 0XC);
    // 0x80220BE8: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80220BEC: addiu       $t7, $t7, 0x3B98
    ctx->r15 = ADD32(ctx->r15, 0X3B98);
    // 0x80220BF0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80220BF4: lhu         $t2, -0x178C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X178C);
    // 0x80220BF8: lh          $t9, 0x4($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X4);
    // 0x80220BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80220C00: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x80220C04: addu        $t3, $t6, $t7
    ctx->r11 = ADD32(ctx->r14, ctx->r15);
    // 0x80220C08: lw          $t8, 0x0($t3)
    ctx->r24 = MEM_W(ctx->r11, 0X0);
    // 0x80220C0C: or          $t2, $t6, $zero
    ctx->r10 = ctx->r14 | 0;
    // 0x80220C10: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x80220C14: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80220C18: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80220C1C: sw          $t7, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r15;
    // 0x80220C20: addiu       $t9, $t9, 0x3BA0
    ctx->r25 = ADD32(ctx->r25, 0X3BA0);
    // 0x80220C24: lh          $t6, 0x6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X6);
    // 0x80220C28: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x80220C2C: lw          $t8, 0x0($t4)
    ctx->r24 = MEM_W(ctx->r12, 0X0);
    // 0x80220C30: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80220C34: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80220C38: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x80220C3C: jr          $ra
    // 0x80220C40: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
    return;
    // 0x80220C40: sw          $t9, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r25;
;}
RECOMP_FUNC void func_80205708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020570C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205710: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205714: jal         0x80237F60
    // 0x80205718: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80237F60(rdram, ctx);
        goto after_0;
    // 0x80205718: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_0:
    // 0x8020571C: beq         $v0, $zero, L_8020572C
    if (ctx->r2 == 0) {
        // 0x80205720: nop
    
            goto L_8020572C;
    }
    // 0x80205720: nop

    // 0x80205724: jal         0x802057FC
    // 0x80205728: nop

    func_802057FC(rdram, ctx);
        goto after_1;
    // 0x80205728: nop

    after_1:
L_8020572C:
    // 0x8020572C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205730: jal         0x80238A70
    // 0x80205734: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80238A70(rdram, ctx);
        goto after_2;
    // 0x80205734: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_2:
    // 0x80205738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020573C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80205740: jr          $ra
    // 0x80205744: nop

    return;
    // 0x80205744: nop

;}
RECOMP_FUNC void func_8023A5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A5D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8023A5D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023A5D8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023A5DC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023A5E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8023A5E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023A5E8: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8023A5EC: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8023A5F0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8023A5F4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8023A5F8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023A5FC: bne         $t7, $zero, L_8023A60C
    if (ctx->r15 != 0) {
        // 0x8023A600: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8023A60C;
    }
    // 0x8023A600: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8023A604: b           L_8023A6DC
    // 0x8023A608: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8023A6DC;
    // 0x8023A608: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023A60C:
    // 0x8023A60C: jal         0x802452EC
    // 0x8023A610: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802452EC(rdram, ctx);
        goto after_0;
    // 0x8023A610: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8023A614: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8023A618: bne         $v0, $at, L_8023A628
    if (ctx->r2 != ctx->r1) {
        // 0x8023A61C: nop
    
            goto L_8023A628;
    }
    // 0x8023A61C: nop

    // 0x8023A620: b           L_8023A6DC
    // 0x8023A624: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8023A6DC;
    // 0x8023A624: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023A628:
    // 0x8023A628: lbu         $t8, 0x65($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X65);
    // 0x8023A62C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8023A630: beq         $t8, $zero, L_8023A650
    if (ctx->r24 == 0) {
        // 0x8023A634: nop
    
            goto L_8023A650;
    }
    // 0x8023A634: nop

    // 0x8023A638: jal         0x802456A0
    // 0x8023A63C: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    func_802456A0(rdram, ctx);
        goto after_1;
    // 0x8023A63C: sb          $zero, 0x65($s1)
    MEM_B(0X65, ctx->r17) = 0;
    after_1:
    // 0x8023A640: beq         $v0, $zero, L_8023A650
    if (ctx->r2 == 0) {
        // 0x8023A644: nop
    
            goto L_8023A650;
    }
    // 0x8023A644: nop

    // 0x8023A648: b           L_8023A6E0
    // 0x8023A64C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8023A6E0;
    // 0x8023A64C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023A650:
    // 0x8023A650: lw          $t9, 0x50($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X50);
    // 0x8023A654: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023A658: blez        $t9, L_8023A6C0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023A65C: addiu       $s3, $sp, 0x30
        ctx->r19 = ADD32(ctx->r29, 0X30);
            goto L_8023A6C0;
    }
    // 0x8023A65C: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
L_8023A660:
    // 0x8023A660: lw          $t0, 0x5C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X5C);
    // 0x8023A664: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8023A668: addu        $a2, $t0, $s0
    ctx->r6 = ADD32(ctx->r8, ctx->r16);
    // 0x8023A66C: andi        $t1, $a2, 0xFFFF
    ctx->r9 = ctx->r6 & 0XFFFF;
    // 0x8023A670: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x8023A674: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8023A678: jal         0x80245710
    // 0x8023A67C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_80245710(rdram, ctx);
        goto after_2;
    // 0x8023A67C: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_2:
    // 0x8023A680: beq         $v0, $zero, L_8023A694
    if (ctx->r2 == 0) {
        // 0x8023A684: lhu         $t2, 0x34($sp)
        ctx->r10 = MEM_HU(ctx->r29, 0X34);
            goto L_8023A694;
    }
    // 0x8023A684: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x8023A688: b           L_8023A6E0
    // 0x8023A68C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8023A6E0;
    // 0x8023A68C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023A690: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
L_8023A694:
    // 0x8023A694: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8023A698: beq         $t2, $zero, L_8023A6AC
    if (ctx->r10 == 0) {
        // 0x8023A69C: nop
    
            goto L_8023A6AC;
    }
    // 0x8023A69C: nop

    // 0x8023A6A0: beq         $t3, $zero, L_8023A6AC
    if (ctx->r11 == 0) {
        // 0x8023A6A4: nop
    
            goto L_8023A6AC;
    }
    // 0x8023A6A4: nop

    // 0x8023A6A8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8023A6AC:
    // 0x8023A6AC: lw          $t4, 0x50($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X50);
    // 0x8023A6B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023A6B4: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8023A6B8: bne         $at, $zero, L_8023A660
    if (ctx->r1 != 0) {
        // 0x8023A6BC: nop
    
            goto L_8023A660;
    }
    // 0x8023A6BC: nop

L_8023A6C0:
    // 0x8023A6C0: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x8023A6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8023A6C8: sw          $s2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r18;
    // 0x8023A6CC: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8023A6D0: lw          $t6, 0x50($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X50);
    // 0x8023A6D4: nop

    // 0x8023A6D8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_8023A6DC:
    // 0x8023A6DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023A6E0:
    // 0x8023A6E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023A6E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023A6E8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023A6EC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023A6F0: jr          $ra
    // 0x8023A6F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8023A6F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80222D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222D4C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80222D50: addiu       $v1, $v1, -0x177C
    ctx->r3 = ADD32(ctx->r3, -0X177C);
    // 0x80222D54: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80222D58: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80222D5C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80222D60: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80222D64: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80222D68: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80222D6C: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80222D70: sh          $t7, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r15;
    // 0x80222D74: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80222D78: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80222D7C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80222D80: addiu       $a1, $a1, 0x38D0
    ctx->r5 = ADD32(ctx->r5, 0X38D0);
    // 0x80222D84: addiu       $a2, $a2, 0xBE2
    ctx->r6 = ADD32(ctx->r6, 0XBE2);
    // 0x80222D88: jal         0x80231C58
    // 0x80222D8C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80222D8C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    after_0:
    // 0x80222D90: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80222D94: beq         $v0, $zero, L_80222DAC
    if (ctx->r2 == 0) {
        // 0x80222D98: addiu       $v1, $v1, -0x177C
        ctx->r3 = ADD32(ctx->r3, -0X177C);
            goto L_80222DAC;
    }
    // 0x80222D98: addiu       $v1, $v1, -0x177C
    ctx->r3 = ADD32(ctx->r3, -0X177C);
    // 0x80222D9C: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x80222DA0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80222DA4: b           L_80222E14
    // 0x80222DA8: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
        goto L_80222E14;
    // 0x80222DA8: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
L_80222DAC:
    // 0x80222DAC: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80222DB0: lhu         $t0, -0x178C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X178C);
    // 0x80222DB4: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x80222DB8: lh          $t3, 0x0($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X0);
    // 0x80222DBC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80222DC0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80222DC4: lw          $t2, 0x43A8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X43A8);
    // 0x80222DC8: addiu       $t5, $sp, 0x50
    ctx->r13 = ADD32(ctx->r29, 0X50);
    // 0x80222DCC: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x80222DD0: addiu       $t7, $t5, 0x3C
    ctx->r15 = ADD32(ctx->r13, 0X3C);
    // 0x80222DD4: or          $t8, $sp, $zero
    ctx->r24 = ctx->r29 | 0;
    // 0x80222DD8: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
L_80222DDC:
    // 0x80222DDC: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80222DE0: addiu       $t5, $t5, 0xC
    ctx->r13 = ADD32(ctx->r13, 0XC);
    // 0x80222DE4: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x80222DE8: sw          $at, -0x4($t8)
    MEM_W(-0X4, ctx->r24) = ctx->r1;
    // 0x80222DEC: lw          $at, -0x8($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X8);
    // 0x80222DF0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80222DF4: lw          $at, -0x4($t5)
    ctx->r1 = MEM_W(ctx->r13, -0X4);
    // 0x80222DF8: bne         $t5, $t7, L_80222DDC
    if (ctx->r13 != ctx->r15) {
        // 0x80222DFC: sw          $at, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->r1;
            goto L_80222DDC;
    }
    // 0x80222DFC: sw          $at, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r1;
    // 0x80222E00: lw          $at, 0x0($t5)
    ctx->r1 = MEM_W(ctx->r13, 0X0);
    // 0x80222E04: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80222E08: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80222E0C: jal         0x80228EB0
    // 0x80222E10: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    func_80228EB0(rdram, ctx);
        goto after_1;
    // 0x80222E10: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
L_80222E14:
    // 0x80222E14: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80222E18: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80222E1C: jr          $ra
    // 0x80222E20: nop

    return;
    // 0x80222E20: nop

;}
RECOMP_FUNC void func_8024416C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024416C: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x80244170: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80244174: sw          $a2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r6;
    // 0x80244178: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x8024417C: sra         $t9, $a0, 3
    ctx->r25 = S32(SIGNED(ctx->r4) >> 3);
    // 0x80244180: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80244184: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80244188: bne         $t9, $zero, L_80244198
    if (ctx->r25 != 0) {
        // 0x8024418C: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_80244198;
    }
    // 0x8024418C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80244190: jr          $ra
    // 0x80244194: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80244194: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80244198:
    // 0x80244198: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8024419C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x802441A0: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x802441A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802441A8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802441AC: bgez        $a2, L_802441C4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802441B0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_802441C4;
    }
    // 0x802441B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802441B4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x802441B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802441BC: nop

    // 0x802441C0: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_802441C4:
    // 0x802441C4: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x802441C8: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x802441CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802441D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802441D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802441D8: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802441DC: div.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x802441E0: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
L_802441E4:
    // 0x802441E4: beq         $t7, $zero, L_802441F4
    if (ctx->r15 == 0) {
        // 0x802441E8: sra         $t8, $a0, 1
        ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
            goto L_802441F4;
    }
    // 0x802441E8: sra         $t8, $a0, 1
    ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
    // 0x802441EC: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x802441F0: nop

L_802441F4:
    // 0x802441F4: beq         $t8, $zero, L_8024420C
    if (ctx->r24 == 0) {
        // 0x802441F8: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_8024420C;
    }
    // 0x802441F8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x802441FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244200: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80244204: bnel        $v0, $v1, L_802441E4
    if (ctx->r2 != ctx->r3) {
        // 0x80244208: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_802441E4;
    }
    goto skip_0;
    // 0x80244208: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    skip_0:
L_8024420C:
    // 0x8024420C: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80244210: nop

    // 0x80244214: jr          $ra
    // 0x80244218: nop

    return;
    // 0x80244218: nop

;}
RECOMP_FUNC void func_80234DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234DF0: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x80234DF4: lw          $t9, 0xC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XC);
    // 0x80234DF8: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x80234DFC: add         $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x80234E00: add         $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x80234E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80234E08: addi        $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80234E0C: add         $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
L_80234E10:
    // 0x80234E10: bne         $a2, $zero, L_80234E24
    if (ctx->r6 != 0) {
        // 0x80234E14: nop
    
            goto L_80234E24;
    }
    // 0x80234E14: nop

    // 0x80234E18: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80234E1C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80234E20: addi        $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_80234E24:
    // 0x80234E24: slt         $t1, $t0, $zero
    ctx->r9 = SIGNED(ctx->r8) < SIGNED(0) ? 1 : 0;
    // 0x80234E28: beq         $t1, $zero, L_80234E44
    if (ctx->r9 == 0) {
        // 0x80234E2C: nop
    
            goto L_80234E44;
    }
    // 0x80234E2C: nop

    // 0x80234E30: lb          $t2, 0x0($t9)
    ctx->r10 = MEM_B(ctx->r25, 0X0);
    // 0x80234E34: addi        $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x80234E38: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80234E3C: b           L_80234E74
    // 0x80234E40: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
        goto L_80234E74;
    // 0x80234E40: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
L_80234E44:
    // 0x80234E44: lhu         $t2, 0x0($a3)
    ctx->r10 = MEM_HU(ctx->r7, 0X0);
    // 0x80234E48: addi        $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80234E4C: srl         $t3, $t2, 12
    ctx->r11 = S32(U32(ctx->r10) >> 12);
    // 0x80234E50: andi        $t2, $t2, 0xFFF
    ctx->r10 = ctx->r10 & 0XFFF;
    // 0x80234E54: sub         $t1, $a1, $t2
    ctx->r9 = SUB32(ctx->r5, ctx->r10);
    // 0x80234E58: addi        $t3, $t3, 0x3
    ctx->r11 = ADD32(ctx->r11, 0X3);
L_80234E5C:
    // 0x80234E5C: lb          $t2, -0x1($t1)
    ctx->r10 = MEM_B(ctx->r9, -0X1);
    // 0x80234E60: addi        $t3, $t3, -0x1
    ctx->r11 = ADD32(ctx->r11, -0X1);
    // 0x80234E64: addi        $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80234E68: addi        $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80234E6C: bne         $t3, $zero, L_80234E5C
    if (ctx->r11 != 0) {
        // 0x80234E70: sb          $t2, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r10;
            goto L_80234E5C;
    }
    // 0x80234E70: sb          $t2, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r10;
L_80234E74:
    // 0x80234E74: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x80234E78: bne         $a1, $t8, L_80234E10
    if (ctx->r5 != ctx->r24) {
        // 0x80234E7C: addi        $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_80234E10;
    }
    // 0x80234E7C: addi        $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x80234E80: jr          $ra
    // 0x80234E84: nop

    return;
    // 0x80234E84: nop

;}
RECOMP_FUNC void func_80207210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80207210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80207214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80207218: jal         0x802070D4
    // 0x8020721C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802070D4(rdram, ctx);
        goto after_0;
    // 0x8020721C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80207220: jal         0x80207040
    // 0x80207224: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80207040(rdram, ctx);
        goto after_1;
    // 0x80207224: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80207228: beq         $v0, $zero, L_80207244
    if (ctx->r2 == 0) {
        // 0x8020722C: lui         $t6, 0x8026
        ctx->r14 = S32(0X8026 << 16);
            goto L_80207244;
    }
    // 0x8020722C: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80207230: lw          $t6, -0x3D40($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3D40);
    // 0x80207234: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80207238: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8020723C: lw          $t7, -0x3D3C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D3C);
    // 0x80207240: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80207244:
    // 0x80207244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80207248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8020724C: jr          $ra
    // 0x80207250: nop

    return;
    // 0x80207250: nop

;}
RECOMP_FUNC void func_8022A2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A2F0: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8022A2F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A2F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A2FC: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8022A300: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8022A304: jal         0x80228DE0
    // 0x8022A308: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A308: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x8022A30C: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8022A310: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
L_8022A314:
    // 0x8022A314: blez        $t0, L_8022A410
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8022A318: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8022A410;
    }
    // 0x8022A318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8022A31C: sll         $t6, $t0, 4
    ctx->r14 = S32(ctx->r8 << 4);
    // 0x8022A320: addiu       $t7, $sp, 0x50
    ctx->r15 = ADD32(ctx->r29, 0X50);
    // 0x8022A324: sll         $t8, $t0, 4
    ctx->r24 = S32(ctx->r8 << 4);
    // 0x8022A328: andi        $t3, $t0, 0x3
    ctx->r11 = ctx->r8 & 0X3;
    // 0x8022A32C: addu        $t5, $s0, $t8
    ctx->r13 = ADD32(ctx->r16, ctx->r24);
    // 0x8022A330: addu        $t4, $t6, $t7
    ctx->r12 = ADD32(ctx->r14, ctx->r15);
    // 0x8022A334: beq         $t3, $zero, L_8022A390
    if (ctx->r11 == 0) {
        // 0x8022A338: sll         $t2, $t0, 2
        ctx->r10 = S32(ctx->r8 << 2);
            goto L_8022A390;
    }
    // 0x8022A338: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x8022A33C: sll         $t9, $zero, 4
    ctx->r25 = S32(0 << 4);
    // 0x8022A340: addu        $t6, $s0, $t9
    ctx->r14 = ADD32(ctx->r16, ctx->r25);
    // 0x8022A344: sll         $t1, $zero, 2
    ctx->r9 = S32(0 << 2);
    // 0x8022A348: sll         $t8, $zero, 4
    ctx->r24 = S32(0 << 4);
    // 0x8022A34C: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x8022A350: addu        $a0, $t9, $t7
    ctx->r4 = ADD32(ctx->r25, ctx->r15);
    // 0x8022A354: addu        $v0, $t4, $t1
    ctx->r2 = ADD32(ctx->r12, ctx->r9);
    // 0x8022A358: addu        $a1, $t5, $t1
    ctx->r5 = ADD32(ctx->r13, ctx->r9);
    // 0x8022A35C: addu        $v1, $t6, $t2
    ctx->r3 = ADD32(ctx->r14, ctx->r10);
    // 0x8022A360: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
L_8022A364:
    // 0x8022A364: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8022A368: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022A36C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022A370: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x8022A374: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8022A378: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8022A37C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022A380: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8022A384: bne         $a3, $a2, L_8022A364
    if (ctx->r7 != ctx->r6) {
        // 0x8022A388: swc1        $f6, -0x10($a0)
        MEM_W(-0X10, ctx->r4) = ctx->f6.u32l;
            goto L_8022A364;
    }
    // 0x8022A388: swc1        $f6, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = ctx->f6.u32l;
    // 0x8022A38C: beq         $a2, $t0, L_8022A410
    if (ctx->r6 == ctx->r8) {
        // 0x8022A390: sll         $t6, $a2, 4
        ctx->r14 = S32(ctx->r6 << 4);
            goto L_8022A410;
    }
L_8022A390:
    // 0x8022A390: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x8022A394: addu        $t8, $s0, $t6
    ctx->r24 = ADD32(ctx->r16, ctx->r14);
    // 0x8022A398: sll         $t1, $a2, 2
    ctx->r9 = S32(ctx->r6 << 2);
    // 0x8022A39C: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x8022A3A0: addu        $t7, $t9, $t2
    ctx->r15 = ADD32(ctx->r25, ctx->r10);
    // 0x8022A3A4: addiu       $t6, $sp, 0x50
    ctx->r14 = ADD32(ctx->r29, 0X50);
    // 0x8022A3A8: addu        $a0, $t7, $t6
    ctx->r4 = ADD32(ctx->r15, ctx->r14);
    // 0x8022A3AC: addu        $v0, $t4, $t1
    ctx->r2 = ADD32(ctx->r12, ctx->r9);
    // 0x8022A3B0: addu        $a1, $t5, $t1
    ctx->r5 = ADD32(ctx->r13, ctx->r9);
    // 0x8022A3B4: addu        $v1, $t8, $t2
    ctx->r3 = ADD32(ctx->r24, ctx->r10);
L_8022A3B8:
    // 0x8022A3B8: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8022A3BC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8022A3C0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8022A3C4: swc1        $f8, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f8.u32l;
    // 0x8022A3C8: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x8022A3CC: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x8022A3D0: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x8022A3D4: swc1        $f10, -0x40($a0)
    MEM_W(-0X40, ctx->r4) = ctx->f10.u32l;
    // 0x8022A3D8: lwc1        $f16, -0x30($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, -0X30);
    // 0x8022A3DC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8022A3E0: swc1        $f16, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f16.u32l;
    // 0x8022A3E4: lwc1        $f18, -0xC($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, -0XC);
    // 0x8022A3E8: swc1        $f18, -0x30($a0)
    MEM_W(-0X30, ctx->r4) = ctx->f18.u32l;
    // 0x8022A3EC: lwc1        $f4, -0x20($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, -0X20);
    // 0x8022A3F0: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8022A3F4: lwc1        $f6, -0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, -0X8);
    // 0x8022A3F8: swc1        $f6, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = ctx->f6.u32l;
    // 0x8022A3FC: lwc1        $f8, -0x10($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0X10);
    // 0x8022A400: swc1        $f8, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f8.u32l;
    // 0x8022A404: lwc1        $f10, -0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, -0X4);
    // 0x8022A408: bne         $a2, $t0, L_8022A3B8
    if (ctx->r6 != ctx->r8) {
        // 0x8022A40C: swc1        $f10, -0x10($a0)
        MEM_W(-0X10, ctx->r4) = ctx->f10.u32l;
            goto L_8022A3B8;
    }
    // 0x8022A40C: swc1        $f10, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = ctx->f10.u32l;
L_8022A410:
    // 0x8022A410: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8022A414: bne         $t0, $ra, L_8022A314
    if (ctx->r8 != ctx->r31) {
        // 0x8022A418: nop
    
            goto L_8022A314;
    }
    // 0x8022A418: nop

    // 0x8022A41C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8022A420: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8022A424: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8022A428: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8022A42C: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8022A430: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8022A434: lwc1        $f4, 0x34($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8022A438: lwc1        $f16, 0x30($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X30);
    // 0x8022A43C: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022A440: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8022A444: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x8022A448: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x8022A44C: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x8022A450: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8022A454: jal         0x8022A0D0
    // 0x8022A458: nop

    func_8022A0D0(rdram, ctx);
        goto after_1;
    // 0x8022A458: nop

    after_1:
    // 0x8022A45C: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x8022A460: jal         0x80228DE0
    // 0x8022A464: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_80228DE0(rdram, ctx);
        goto after_2;
    // 0x8022A464: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x8022A468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A46C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A470: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x8022A474: jr          $ra
    // 0x8022A478: nop

    return;
    // 0x8022A478: nop

;}
RECOMP_FUNC void func_80214E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80214E7C: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80214E80: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80214E84: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x80214E88: addiu       $s5, $s5, 0xBC0
    ctx->r21 = ADD32(ctx->r21, 0XBC0);
    // 0x80214E8C: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
    // 0x80214E90: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80214E94: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x80214E98: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x80214E9C: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x80214EA0: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80214EA4: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x80214EA8: addiu       $s3, $s3, -0x3C68
    ctx->r19 = ADD32(ctx->r19, -0X3C68);
    // 0x80214EAC: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80214EB0: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x80214EB4: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x80214EB8: mov.s       $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    ctx->f22.fl = ctx->f12.fl;
    // 0x80214EBC: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x80214EC0: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x80214EC4: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x80214EC8: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x80214ECC: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x80214ED0: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80214ED4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80214ED8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80214EDC: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x80214EE0: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x80214EE4: blez        $v1, L_8021512C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80214EE8: or          $s4, $zero, $zero
        ctx->r20 = 0 | 0;
            goto L_8021512C;
    }
    // 0x80214EE8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80214EEC: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80214EF0: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x80214EF4: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x80214EF8: addiu       $s6, $s6, -0x3C6C
    ctx->r22 = ADD32(ctx->r22, -0X3C6C);
    // 0x80214EFC: addiu       $s7, $s7, -0x3C60
    ctx->r23 = ADD32(ctx->r23, -0X3C60);
    // 0x80214F00: addiu       $fp, $zero, 0x24
    ctx->r30 = ADD32(0, 0X24);
L_80214F04:
    // 0x80214F04: multu       $s4, $fp
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80214F08: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80214F0C: lw          $t7, -0x3C20($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C20);
    // 0x80214F10: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80214F14: mflo        $t6
    ctx->r14 = lo;
    // 0x80214F18: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80214F1C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80214F20: beql        $v0, $at, L_8021511C
    if (ctx->r2 == ctx->r1) {
        // 0x80214F24: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8021511C;
    }
    goto skip_0;
    // 0x80214F24: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80214F28: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
    // 0x80214F2C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80214F30: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80214F34: beql        $t9, $zero, L_8021511C
    if (ctx->r25 == 0) {
        // 0x80214F38: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8021511C;
    }
    goto skip_1;
    // 0x80214F38: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
    // 0x80214F3C: lw          $t0, -0x18F0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X18F0);
    // 0x80214F40: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x80214F44: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x80214F48: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80214F4C: lw          $s2, 0x0($t3)
    ctx->r18 = MEM_W(ctx->r11, 0X0);
    // 0x80214F50: beql        $s2, $zero, L_8021511C
    if (ctx->r18 == 0) {
        // 0x80214F54: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8021511C;
    }
    goto skip_2;
    // 0x80214F54: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80214F58: lwc1        $f0, 0xC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80214F5C: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x80214F60: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80214F64: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80214F68: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80214F6C: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80214F70: lw          $t7, -0x3C1C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C1C);
    // 0x80214F74: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80214F78: sll         $t6, $t5, 6
    ctx->r14 = S32(ctx->r13 << 6);
    // 0x80214F7C: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x80214F80: lwc1        $f8, 0x30($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80214F84: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80214F88: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214F8C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80214F90: lwc1        $f10, 0x34($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80214F94: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80214F98: lwc1        $f16, 0x38($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80214F9C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80214FA0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x80214FA4: mul.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x80214FA8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80214FAC: jal         0x802164C8
    // 0x80214FB0: nop

    func_802164C8(rdram, ctx);
        goto after_0;
    // 0x80214FB0: nop

    after_0:
    // 0x80214FB4: beql        $v0, $zero, L_80215118
    if (ctx->r2 == 0) {
        // 0x80214FB8: lhu         $v1, 0x26($s5)
        ctx->r3 = MEM_HU(ctx->r21, 0X26);
            goto L_80215118;
    }
    goto skip_3;
    // 0x80214FB8: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
    skip_3:
    // 0x80214FBC: sw          $s4, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r20;
    // 0x80214FC0: lbu         $t8, 0x11($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X11);
    // 0x80214FC4: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80214FC8: andi        $t9, $t8, 0x6
    ctx->r25 = ctx->r24 & 0X6;
    // 0x80214FCC: beql        $t9, $zero, L_8021500C
    if (ctx->r25 == 0) {
        // 0x80214FD0: lw          $t4, 0x0($s3)
        ctx->r12 = MEM_W(ctx->r19, 0X0);
            goto L_8021500C;
    }
    goto skip_4;
    // 0x80214FD0: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    skip_4:
    // 0x80214FD4: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x80214FD8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80214FDC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80214FE0: mov.s       $f14, $f24
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    ctx->f14.fl = ctx->f24.fl;
    // 0x80214FE4: jal         0x802165D0
    // 0x80214FE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_802165D0(rdram, ctx);
        goto after_1;
    // 0x80214FE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_1:
    // 0x80214FEC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80214FF0: lhu         $t1, 0x18($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0X18);
    // 0x80214FF4: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80214FF8: bnel        $at, $zero, L_80215118
    if (ctx->r1 != 0) {
        // 0x80214FFC: lhu         $v1, 0x26($s5)
        ctx->r3 = MEM_HU(ctx->r21, 0X26);
            goto L_80215118;
    }
    goto skip_5;
    // 0x80214FFC: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
    skip_5:
    // 0x80215000: b           L_80215130
    // 0x80215004: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
        goto L_80215130;
    // 0x80215004: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80215008: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
L_8021500C:
    // 0x8021500C: lw          $t3, -0x3C64($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C64);
    // 0x80215010: lw          $t2, 0x0($s6)
    ctx->r10 = MEM_W(ctx->r22, 0X0);
    // 0x80215014: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80215018: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8021501C: sw          $t2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r10;
    // 0x80215020: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x80215024: lwc1        $f18, 0x30($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80215028: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x8021502C: lw          $t9, -0x3C5C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C5C);
    // 0x80215030: sub.s       $f4, $f22, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f22.fl - ctx->f18.fl;
    // 0x80215034: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80215038: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8021503C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80215040: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x80215044: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80215048: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x8021504C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80215050: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80215054: sub.s       $f8, $f24, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f24.fl - ctx->f6.fl;
    // 0x80215058: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8021505C: lwc1        $f10, 0x38($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X38);
    // 0x80215060: sub.s       $f16, $f26, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f26.fl - ctx->f10.fl;
    // 0x80215064: jal         0x80234D30
    // 0x80215068: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    func_80234D30(rdram, ctx);
        goto after_2;
    // 0x80215068: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    after_2:
    // 0x8021506C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80215070: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80215074: lwc1        $f14, 0x8($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80215078: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021507C: nop

    // 0x80215080: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80215084: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80215088: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021508C: jal         0x8022AA40
    // 0x80215090: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8022AA40(rdram, ctx);
        goto after_3;
    // 0x80215090: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_3:
    // 0x80215094: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x80215098: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8021509C: addiu       $a1, $a1, 0x3004
    ctx->r5 = ADD32(ctx->r5, 0X3004);
    // 0x802150A0: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x802150A4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802150A8: div.s       $f2, $f16, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f20.fl);
    // 0x802150AC: c.lt.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl < ctx->f28.fl;
    // 0x802150B0: nop

    // 0x802150B4: bc1fl       L_802150D8
    if (!c1cs) {
        // 0x802150B8: lw          $t2, 0x0($s3)
        ctx->r10 = MEM_W(ctx->r19, 0X0);
            goto L_802150D8;
    }
    goto skip_6;
    // 0x802150B8: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    skip_6:
    // 0x802150BC: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x802150C0: lw          $t0, 0x0($s7)
    ctx->r8 = MEM_W(ctx->r23, 0X0);
    // 0x802150C4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x802150C8: addu        $t3, $t0, $t4
    ctx->r11 = ADD32(ctx->r8, ctx->r12);
    // 0x802150CC: b           L_802150E8
    // 0x802150D0: swc1        $f2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f2.u32l;
        goto L_802150E8;
    // 0x802150D0: swc1        $f2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f2.u32l;
    // 0x802150D4: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
L_802150D8:
    // 0x802150D8: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x802150DC: sll         $t6, $t2, 2
    ctx->r14 = S32(ctx->r10 << 2);
    // 0x802150E0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x802150E4: swc1        $f28, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f28.u32l;
L_802150E8:
    // 0x802150E8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x802150EC: lhu         $t1, 0x18($s5)
    ctx->r9 = MEM_HU(ctx->r21, 0X18);
    // 0x802150F0: addiu       $a0, $t8, 0x1
    ctx->r4 = ADD32(ctx->r24, 0X1);
    // 0x802150F4: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802150F8: bne         $at, $zero, L_80215114
    if (ctx->r1 != 0) {
        // 0x802150FC: sw          $a0, 0x0($s3)
        MEM_W(0X0, ctx->r19) = ctx->r4;
            goto L_80215114;
    }
    // 0x802150FC: sw          $a0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r4;
    // 0x80215100: jal         0x80231C58
    // 0x80215104: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_4;
    // 0x80215104: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_4:
    // 0x80215108: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x8021510C: addiu       $t4, $t0, -0x1
    ctx->r12 = ADD32(ctx->r8, -0X1);
    // 0x80215110: sw          $t4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r12;
L_80215114:
    // 0x80215114: lhu         $v1, 0x26($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X26);
L_80215118:
    // 0x80215118: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8021511C:
    // 0x8021511C: andi        $t3, $s4, 0xFFFF
    ctx->r11 = ctx->r20 & 0XFFFF;
    // 0x80215120: slt         $at, $t3, $v1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80215124: bne         $at, $zero, L_80214F04
    if (ctx->r1 != 0) {
        // 0x80215128: or          $s4, $t3, $zero
        ctx->r20 = ctx->r11 | 0;
            goto L_80214F04;
    }
    // 0x80215128: or          $s4, $t3, $zero
    ctx->r20 = ctx->r11 | 0;
L_8021512C:
    // 0x8021512C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
L_80215130:
    // 0x80215130: lui         $s7, 0x8026
    ctx->r23 = S32(0X8026 << 16);
    // 0x80215134: addiu       $s7, $s7, -0x3C60
    ctx->r23 = ADD32(ctx->r23, -0X3C60);
    // 0x80215138: beq         $a0, $zero, L_80215170
    if (ctx->r4 == 0) {
        // 0x8021513C: lui         $t2, 0x8026
        ctx->r10 = S32(0X8026 << 16);
            goto L_80215170;
    }
    // 0x8021513C: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x80215140: lw          $t2, -0x3C64($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C64);
    // 0x80215144: lw          $t5, 0x88($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X88);
    // 0x80215148: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8021514C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80215150: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x80215154: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x80215158: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x8021515C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80215160: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80215164: lw          $t8, -0x3C5C($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C5C);
    // 0x80215168: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8021516C: lw          $a0, -0x3C68($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C68);
L_80215170:
    // 0x80215170: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x80215174: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x80215178: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021517C: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x80215180: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x80215184: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x80215188: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8021518C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80215190: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80215194: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80215198: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8021519C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x802151A0: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x802151A4: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x802151A8: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x802151AC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x802151B0: jr          $ra
    // 0x802151B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x802151B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80211650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80211650: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80211654: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80211658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021165C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80211660: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80211664: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80211668: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8021166C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80211670: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x80211674: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80211678: bnel        $v1, $zero, L_80211694
    if (ctx->r3 != 0) {
        // 0x8021167C: lw          $t0, 0x8($v1)
        ctx->r8 = MEM_W(ctx->r3, 0X8);
            goto L_80211694;
    }
    goto skip_0;
    // 0x8021167C: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    skip_0:
    // 0x80211680: jal         0x80231A24
    // 0x80211684: addiu       $a0, $a0, 0x2C7C
    ctx->r4 = ADD32(ctx->r4, 0X2C7C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211684: addiu       $a0, $a0, 0x2C7C
    ctx->r4 = ADD32(ctx->r4, 0X2C7C);
    after_0:
    // 0x80211688: b           L_8021169C
    // 0x8021168C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021169C;
    // 0x8021168C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80211690: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
L_80211694:
    // 0x80211694: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80211698: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8021169C:
    // 0x8021169C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802116A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802116A4: jr          $ra
    // 0x802116A8: nop

    return;
    // 0x802116A8: nop

;}
RECOMP_FUNC void func_8024421C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8024421C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80244220: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80244224: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80244228: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8024422C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80244230: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80244234: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80244238: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8024423C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80244240: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80244244: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80244248: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8024424C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80244250: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80244254: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80244258: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x8024425C: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80244260: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80244264: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x80244268: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
    // 0x8024426C: sh          $zero, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = 0;
    // 0x80244270: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x80244274: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x80244278: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8024427C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80244280: beql        $t8, $zero, L_802446F4
    if (ctx->r24 == 0) {
        // 0x80244284: or          $s3, $fp, $zero
        ctx->r19 = ctx->r30 | 0;
            goto L_802446F4;
    }
    goto skip_0;
    // 0x80244284: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    skip_0:
    // 0x80244288: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_8024428C:
    // 0x8024428C: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x80244290: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x80244294: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80244298: subu        $t7, $t9, $v0
    ctx->r15 = SUB32(ctx->r25, ctx->r2);
    // 0x8024429C: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802442A0: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x802442A4: bne         $at, $zero, L_802446F0
    if (ctx->r1 != 0) {
        // 0x802442A8: sw          $t9, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r25;
            goto L_802446F0;
    }
    // 0x802442A8: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x802442AC: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x802442B0: sltiu       $at, $t9, 0x11
    ctx->r1 = ctx->r25 < 0X11 ? 1 : 0;
    // 0x802442B4: beq         $at, $zero, L_80244668
    if (ctx->r1 == 0) {
        // 0x802442B8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80244668;
    }
    // 0x802442B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802442BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802442C0: addu        $at, $at, $t9
    gpr jr_addend_802442C8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802442C4: lw          $t9, 0x5A00($at)
    ctx->r25 = ADD32(ctx->r1, 0X5A00);
    // 0x802442C8: jr          $t9
    // 0x802442CC: nop

    switch (jr_addend_802442C8 >> 2) {
        case 0: goto L_80244648; break;
        case 1: goto L_80244668; break;
        case 2: goto L_80244668; break;
        case 3: goto L_80244668; break;
        case 4: goto L_80244668; break;
        case 5: goto L_80244668; break;
        case 6: goto L_80244668; break;
        case 7: goto L_80244668; break;
        case 8: goto L_80244668; break;
        case 9: goto L_80244668; break;
        case 10: goto L_80244668; break;
        case 11: goto L_80244410; break;
        case 12: goto L_80244410; break;
        case 13: goto L_802442D0; break;
        case 14: goto L_802445B4; break;
        case 15: goto L_80244608; break;
        case 16: goto L_80244410; break;
        default: switch_error(__func__, 0x802442C8, 0x80255A00);
    }
    // 0x802442CC: nop

L_802442D0:
    // 0x802442D0: lh          $t6, 0xA($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XA);
    // 0x802442D4: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x802442D8: beql        $t6, $zero, L_802442F8
    if (ctx->r14 == 0) {
        // 0x802442DC: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_802442F8;
    }
    goto skip_1;
    // 0x802442DC: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_1:
    // 0x802442E0: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x802442E4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x802442E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802442EC: jalr        $t9
    // 0x802442F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802442F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802442F4: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_802442F8:
    // 0x802442F8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x802442FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80244300: jalr        $t9
    // 0x80244304: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80244304: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x80244308: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8024430C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80244310: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80244314: jalr        $t9
    // 0x80244318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80244318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8024431C: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
    // 0x80244320: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x80244324: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80244328: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x8024432C: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x80244330: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244334: mflo        $a0
    ctx->r4 = lo;
    // 0x80244338: sra         $t7, $a0, 15
    ctx->r15 = S32(SIGNED(ctx->r4) >> 15);
    // 0x8024433C: sh          $t7, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r15;
    // 0x80244340: lbu         $t6, 0x12($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X12);
    // 0x80244344: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80244348: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x8024434C: lbu         $t9, 0x13($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13);
    // 0x80244350: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80244354: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80244358: lh          $t7, 0x1910($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X1910);
    // 0x8024435C: sh          $t7, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r15;
    // 0x80244360: lbu         $t6, 0x13($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13);
    // 0x80244364: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80244368: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8024436C: negu        $t8, $t9
    ctx->r24 = SUB32(0, ctx->r25);
    // 0x80244370: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80244374: lh          $t7, 0x1A0E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X1A0E);
    // 0x80244378: sh          $t7, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r15;
    // 0x8024437C: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x80244380: beql        $t6, $zero, L_80244398
    if (ctx->r14 == 0) {
        // 0x80244384: lh          $v0, 0x18($fp)
        ctx->r2 = MEM_H(ctx->r30, 0X18);
            goto L_80244398;
    }
    goto skip_2;
    // 0x80244384: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    skip_2:
    // 0x80244388: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x8024438C: b           L_802443DC
    // 0x80244390: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
        goto L_802443DC;
    // 0x80244390: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x80244394: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
L_80244398:
    // 0x80244398: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x8024439C: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x802443A0: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x802443A4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x802443A8: lh          $t8, 0x1910($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X1910);
    // 0x802443AC: negu        $t9, $t9
    ctx->r25 = SUB32(0, ctx->r25);
    // 0x802443B0: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802443B4: lui         $t8, 0x8025
    ctx->r24 = S32(0X8025 << 16);
    // 0x802443B8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x802443BC: mflo        $t7
    ctx->r15 = lo;
    // 0x802443C0: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x802443C4: sh          $t6, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r14;
    // 0x802443C8: lh          $t8, 0x1A0E($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X1A0E);
    // 0x802443CC: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802443D0: mflo        $t7
    ctx->r15 = lo;
    // 0x802443D4: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x802443D8: sh          $t6, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r14;
L_802443DC:
    // 0x802443DC: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x802443E0: beql        $t9, $zero, L_802446A8
    if (ctx->r25 == 0) {
        // 0x802443E4: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_802446A8;
    }
    goto skip_3;
    // 0x802443E4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    skip_3:
    // 0x802443E8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x802443EC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802443F0: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x802443F4: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x802443F8: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x802443FC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80244400: jalr        $t9
    // 0x80244404: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80244404: nop

    after_3:
    // 0x80244408: b           L_802446A8
    // 0x8024440C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_802446A8;
    // 0x8024440C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80244410:
    // 0x80244410: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x80244414: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80244418: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8024441C: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80244420: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80244424: jal         0x80243ED4
    // 0x80244428: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_80243ED4(rdram, ctx);
        goto after_4;
    // 0x80244428: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_4:
    // 0x8024442C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80244430: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80244434: lw          $a3, 0x30($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X30);
    // 0x80244438: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8024443C: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80244440: bnel        $at, $zero, L_802444AC
    if (ctx->r1 != 0) {
        // 0x80244444: lh          $t6, 0x1C($fp)
        ctx->r14 = MEM_H(ctx->r30, 0X1C);
            goto L_802444AC;
    }
    goto skip_4;
    // 0x80244444: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
    skip_4:
    // 0x80244448: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    // 0x8024444C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80244450: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x80244454: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80244458: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8024445C: lh          $t7, 0x1910($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X1910);
    // 0x80244460: negu        $t8, $t8
    ctx->r24 = SUB32(0, ctx->r24);
    // 0x80244464: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244468: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8024446C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80244470: mflo        $t6
    ctx->r14 = lo;
    // 0x80244474: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80244478: sh          $t9, 0x28($fp)
    MEM_H(0X28, ctx->r30) = ctx->r25;
    // 0x8024447C: lh          $t7, 0x1A0E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X1A0E);
    // 0x80244480: lh          $t8, 0x28($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X28);
    // 0x80244484: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x80244488: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024448C: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x80244490: mflo        $t6
    ctx->r14 = lo;
    // 0x80244494: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80244498: sh          $t9, 0x2E($fp)
    MEM_H(0X2E, ctx->r30) = ctx->r25;
    // 0x8024449C: lh          $t7, 0x2E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X2E);
    // 0x802444A0: b           L_802444FC
    // 0x802444A4: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
        goto L_802444FC;
    // 0x802444A4: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
    // 0x802444A8: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
L_802444AC:
    // 0x802444AC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802444B0: lh          $a1, 0x26($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X26);
    // 0x802444B4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x802444B8: lhu         $a2, 0x24($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X24);
    // 0x802444BC: jal         0x8024416C
    // 0x802444C0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_8024416C(rdram, ctx);
        goto after_5;
    // 0x802444C0: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x802444C4: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802444C8: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    // 0x802444CC: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    // 0x802444D0: lh          $a1, 0x2C($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X2C);
    // 0x802444D4: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x802444D8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x802444DC: lhu         $a2, 0x2A($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X2A);
    // 0x802444E0: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x802444E4: jal         0x8024416C
    // 0x802444E8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_8024416C(rdram, ctx);
        goto after_6;
    // 0x802444E8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x802444EC: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x802444F0: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x802444F4: nop

    // 0x802444F8: sh          $t9, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r25;
L_802444FC:
    // 0x802444FC: lh          $t8, 0x1C($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X1C);
    // 0x80244500: bnel        $t8, $zero, L_80244510
    if (ctx->r24 != 0) {
        // 0x80244504: lh          $t7, 0x1E($fp)
        ctx->r15 = MEM_H(ctx->r30, 0X1E);
            goto L_80244510;
    }
    goto skip_5;
    // 0x80244504: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    skip_5:
    // 0x80244508: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x8024450C: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
L_80244510:
    // 0x80244510: bnel        $t7, $zero, L_80244520
    if (ctx->r15 != 0) {
        // 0x80244514: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_80244520;
    }
    goto skip_6;
    // 0x80244514: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_6:
    // 0x80244518: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x8024451C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_80244520:
    // 0x80244520: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80244524: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x80244528: bnel        $a0, $at, L_80244540
    if (ctx->r4 != ctx->r1) {
        // 0x8024452C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80244540;
    }
    goto skip_7;
    // 0x8024452C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_7:
    // 0x80244530: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x80244534: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x80244538: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8024453C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_80244540:
    // 0x80244540: bnel        $a0, $at, L_80244570
    if (ctx->r4 != ctx->r1) {
        // 0x80244544: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_80244570;
    }
    goto skip_8;
    // 0x80244544: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    skip_8:
    // 0x80244548: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x8024454C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80244550: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80244554: mflo        $v0
    ctx->r2 = lo;
    // 0x80244558: sra         $t9, $v0, 15
    ctx->r25 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8024455C: sh          $t9, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r25;
    // 0x80244560: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x80244564: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x80244568: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8024456C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_80244570:
    // 0x80244570: bne         $a0, $at, L_802445AC
    if (ctx->r4 != ctx->r1) {
        // 0x80244574: nop
    
            goto L_802445AC;
    }
    // 0x80244574: nop

    // 0x80244578: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8024457C: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80244580: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x80244584: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80244588: lh          $t9, 0x1910($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X1910);
    // 0x8024458C: sh          $t9, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r25;
    // 0x80244590: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x80244594: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x80244598: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x8024459C: negu        $t6, $t7
    ctx->r14 = SUB32(0, ctx->r15);
    // 0x802445A0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x802445A4: lh          $t9, 0x1A0E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X1A0E);
    // 0x802445A8: sh          $t9, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r25;
L_802445AC:
    // 0x802445AC: b           L_802446A4
    // 0x802445B0: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
        goto L_802446A4;
    // 0x802445B0: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
L_802445B4:
    // 0x802445B4: lh          $t8, 0xA($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XA);
    // 0x802445B8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x802445BC: beql        $t8, $zero, L_802445DC
    if (ctx->r24 == 0) {
        // 0x802445C0: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_802445DC;
    }
    goto skip_9;
    // 0x802445C0: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_9:
    // 0x802445C4: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x802445C8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x802445CC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802445D0: jalr        $t9
    // 0x802445D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x802445D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x802445D8: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_802445DC:
    // 0x802445DC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x802445E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802445E4: jalr        $t9
    // 0x802445E8: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x802445E8: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_8:
    // 0x802445EC: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x802445F0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x802445F4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x802445F8: jalr        $t9
    // 0x802445FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x802445FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80244600: b           L_802446A8
    // 0x80244604: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_802446A8;
    // 0x80244604: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80244608:
    // 0x80244608: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8024460C: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80244610: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x80244614: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80244618: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8024461C: jal         0x80243ED4
    // 0x80244620: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_80243ED4(rdram, ctx);
        goto after_10;
    // 0x80244620: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_10:
    // 0x80244624: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80244628: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8024462C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80244630: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80244634: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80244638: jalr        $t9
    // 0x8024463C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8024463C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80244640: b           L_802446A8
    // 0x80244644: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_802446A8;
    // 0x80244644: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80244648:
    // 0x80244648: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8024464C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80244650: lw          $a0, 0x910($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X910);
    // 0x80244654: sw          $zero, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = 0;
    // 0x80244658: jal         0x80237790
    // 0x8024465C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    func_80237790(rdram, ctx);
        goto after_12;
    // 0x8024465C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    after_12:
    // 0x80244660: b           L_802446A8
    // 0x80244664: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_802446A8;
    // 0x80244664: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80244668:
    // 0x80244668: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8024466C: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80244670: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x80244674: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80244678: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8024467C: jal         0x80243ED4
    // 0x80244680: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_80243ED4(rdram, ctx);
        goto after_13;
    // 0x80244680: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_13:
    // 0x80244684: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80244688: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8024468C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    // 0x80244690: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80244694: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80244698: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x8024469C: jalr        $t9
    // 0x802446A0: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x802446A0: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    after_14:
L_802446A4:
    // 0x802446A4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_802446A8:
    // 0x802446A8: lh          $t6, 0x8E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X8E);
    // 0x802446AC: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x802446B0: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x802446B4: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x802446B8: sh          $t9, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r25;
    // 0x802446BC: subu        $t7, $t6, $t8
    ctx->r15 = SUB32(ctx->r14, ctx->r24);
    // 0x802446C0: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x802446C4: lw          $a0, 0x3C($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X3C);
    // 0x802446C8: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x802446CC: bne         $t9, $zero, L_802446D8
    if (ctx->r25 != 0) {
        // 0x802446D0: sw          $t9, 0x3C($fp)
        MEM_W(0X3C, ctx->r30) = ctx->r25;
            goto L_802446D8;
    }
    // 0x802446D0: sw          $t9, 0x3C($fp)
    MEM_W(0X3C, ctx->r30) = ctx->r25;
    // 0x802446D4: sw          $zero, 0x40($fp)
    MEM_W(0X40, ctx->r30) = 0;
L_802446D8:
    // 0x802446D8: jal         0x80237828
    // 0x802446DC: nop

    func_80237828(rdram, ctx);
        goto after_15;
    // 0x802446DC: nop

    after_15:
    // 0x802446E0: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x802446E4: lw          $t7, 0x3C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X3C);
    // 0x802446E8: bnel        $t7, $zero, L_8024428C
    if (ctx->r15 != 0) {
        // 0x802446EC: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_8024428C;
    }
    goto skip_10;
    // 0x802446EC: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_10:
L_802446F0:
    // 0x802446F0: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
L_802446F4:
    // 0x802446F4: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x802446F8: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x802446FC: lw          $s5, 0xB0($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB0);
    // 0x80244700: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80244704: jal         0x80243ED4
    // 0x80244708: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_80243ED4(rdram, ctx);
        goto after_16;
    // 0x80244708: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_16:
    // 0x8024470C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80244710: lw          $t9, 0x30($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X30);
    // 0x80244714: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80244718: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8024471C: beql        $at, $zero, L_8024472C
    if (ctx->r1 == 0) {
        // 0x80244720: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8024472C;
    }
    goto skip_11;
    // 0x80244720: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_11:
    // 0x80244724: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x80244728: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8024472C:
    // 0x8024472C: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x80244730: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80244734: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80244738: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8024473C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80244740: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80244744: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80244748: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8024474C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80244750: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80244754: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80244758: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8024475C: jr          $ra
    // 0x80244760: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x80244760: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80200354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80200354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80200358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8020035C: lhu         $t6, 0x1A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X1A);
    // 0x80200360: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80200364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80200368: blez        $t6, L_80200380
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8020036C: addiu       $a0, $a0, 0x1BC4
        ctx->r4 = ADD32(ctx->r4, 0X1BC4);
            goto L_80200380;
    }
    // 0x8020036C: addiu       $a0, $a0, 0x1BC4
    ctx->r4 = ADD32(ctx->r4, 0X1BC4);
    // 0x80200370: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80200374: addiu       $a1, $a1, 0x1BD8
    ctx->r5 = ADD32(ctx->r5, 0X1BD8);
    // 0x80200378: jal         0x80231C9C
    // 0x8020037C: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x8020037C: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    after_0:
L_80200380:
    // 0x80200380: jal         0x80202288
    // 0x80200384: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    func_80202288(rdram, ctx);
        goto after_1;
    // 0x80200384: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    after_1:
    // 0x80200388: lhu         $t7, 0x1A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1A);
    // 0x8020038C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80200390: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80200394: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80200398: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8020039C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802003A0: jal         0x802057A0
    // 0x802003A4: lwc1        $f12, 0x6DB4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6DB4);
    func_802057A0(rdram, ctx);
        goto after_2;
    // 0x802003A4: lwc1        $f12, 0x6DB4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6DB4);
    after_2:
    // 0x802003A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802003AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802003B0: jr          $ra
    // 0x802003B4: nop

    return;
    // 0x802003B4: nop

;}
RECOMP_FUNC void func_80221B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80221B2C: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80221B30: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80221B34: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80221B38: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80221B3C: jal         0x80228DE0
    // 0x80221B40: addiu       $a0, $a0, 0x43F0
    ctx->r4 = ADD32(ctx->r4, 0X43F0);
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80221B40: addiu       $a0, $a0, 0x43F0
    ctx->r4 = ADD32(ctx->r4, 0X43F0);
    after_0:
    // 0x80221B44: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80221B48: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80221B4C: addiu       $a2, $a2, 0x43B0
    ctx->r6 = ADD32(ctx->r6, 0X43B0);
    // 0x80221B50: addiu       $a1, $a1, 0x43F0
    ctx->r5 = ADD32(ctx->r5, 0X43F0);
    // 0x80221B54: jal         0x802297A8
    // 0x80221B58: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    func_802297A8(rdram, ctx);
        goto after_1;
    // 0x80221B58: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    after_1:
    // 0x80221B5C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80221B60: jal         0x802291F8
    // 0x80221B64: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    func_802291F8(rdram, ctx);
        goto after_2;
    // 0x80221B64: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_2:
    // 0x80221B68: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x80221B6C: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
    // 0x80221B70: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
L_80221B74:
    // 0x80221B74: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80221B78: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80221B7C: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80221B80: sw          $at, -0xC($t9)
    MEM_W(-0XC, ctx->r25) = ctx->r1;
    // 0x80221B84: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80221B88: sw          $at, -0x8($t9)
    MEM_W(-0X8, ctx->r25) = ctx->r1;
    // 0x80221B8C: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80221B90: bne         $t6, $t8, L_80221B74
    if (ctx->r14 != ctx->r24) {
        // 0x80221B94: sw          $at, -0x4($t9)
        MEM_W(-0X4, ctx->r25) = ctx->r1;
            goto L_80221B74;
    }
    // 0x80221B94: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80221B98: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80221B9C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80221BA0: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80221BA4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    // 0x80221BA8: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80221BAC: jal         0x802208B4
    // 0x80221BB0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    func_802208B4(rdram, ctx);
        goto after_3;
    // 0x80221BB0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    after_3:
    // 0x80221BB4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80221BB8: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x80221BBC: jr          $ra
    // 0x80221BC0: nop

    return;
    // 0x80221BC0: nop

;}
RECOMP_FUNC void func_80248B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248B70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80248B74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248B78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80248B7C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80248B80: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80248B84: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80248B88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80248B8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80248B90: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x80248B94: lw          $s0, 0x10($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X10);
    // 0x80248B98: andi        $t7, $s0, 0x3
    ctx->r15 = ctx->r16 & 0X3;
    // 0x80248B9C: beq         $t7, $zero, L_80248BB8
    if (ctx->r15 == 0) {
        // 0x80248BA0: nop
    
            goto L_80248BB8;
    }
    // 0x80248BA0: nop

L_80248BA4:
    // 0x80248BA4: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x80248BA8: lw          $s0, 0x10($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X10);
    // 0x80248BAC: andi        $t9, $s0, 0x3
    ctx->r25 = ctx->r16 & 0X3;
    // 0x80248BB0: bne         $t9, $zero, L_80248BA4
    if (ctx->r25 != 0) {
        // 0x80248BB4: nop
    
            goto L_80248BA4;
    }
    // 0x80248BB4: nop

L_80248BB8:
    // 0x80248BB8: jal         0x802375F0
    // 0x80248BBC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80248BBC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_0:
    // 0x80248BC0: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x80248BC4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x80248BC8: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x80248BCC: lw          $t1, 0x308($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X308);
    // 0x80248BD0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80248BD4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80248BD8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80248BDC: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80248BE0: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80248BE4: lui         $t5, 0xA460
    ctx->r13 = S32(0XA460 << 16);
    // 0x80248BE8: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80248BEC: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80248BF0: beq         $s1, $zero, L_80248C08
    if (ctx->r17 == 0) {
        // 0x80248BF4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80248C08;
    }
    // 0x80248BF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80248BF8: beq         $s1, $at, L_80248C1C
    if (ctx->r17 == ctx->r1) {
        // 0x80248BFC: nop
    
            goto L_80248C1C;
    }
    // 0x80248BFC: nop

    // 0x80248C00: b           L_80248C30
    // 0x80248C04: nop

        goto L_80248C30;
    // 0x80248C04: nop

L_80248C08:
    // 0x80248C08: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80248C0C: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x80248C10: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80248C14: b           L_80248C38
    // 0x80248C18: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
        goto L_80248C38;
    // 0x80248C18: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
L_80248C1C:
    // 0x80248C1C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80248C20: lui         $t1, 0xA460
    ctx->r9 = S32(0XA460 << 16);
    // 0x80248C24: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80248C28: b           L_80248C38
    // 0x80248C2C: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
        goto L_80248C38;
    // 0x80248C2C: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
L_80248C30:
    // 0x80248C30: b           L_80248C3C
    // 0x80248C34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80248C3C;
    // 0x80248C34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248C38:
    // 0x80248C38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80248C3C:
    // 0x80248C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248C40: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80248C44: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80248C48: jr          $ra
    // 0x80248C4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80248C4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AA60: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x8022AA64: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8022AA68: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AA6C: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022AA70: andi        $t6, $v1, 0x1FF
    ctx->r14 = ctx->r3 & 0X1FF;
    // 0x8022AA74: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x8022AA78: beq         $at, $zero, L_8022AAE0
    if (ctx->r1 == 0) {
        // 0x8022AA7C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_8022AAE0;
    }
    // 0x8022AA7C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x8022AA80: slti        $at, $t6, 0xE6
    ctx->r1 = SIGNED(ctx->r14) < 0XE6 ? 1 : 0;
    // 0x8022AA84: bne         $at, $zero, L_8022AAD8
    if (ctx->r1 != 0) {
        // 0x8022AA88: cvt.d.s     $f2, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
            goto L_8022AAD8;
    }
    // 0x8022AA88: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x8022AA8C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8022AA90: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022AA94: addiu       $v1, $v1, 0x3F10
    ctx->r3 = ADD32(ctx->r3, 0X3F10);
    // 0x8022AA98: ldc1        $f6, 0x20($v1)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r3, 0X20);
    // 0x8022AA9C: ldc1        $f10, 0x18($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X18);
    // 0x8022AAA0: ldc1        $f4, 0x10($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, 0X10);
    // 0x8022AAA4: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8022AAA8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8022AAAC: ldc1        $f10, 0x8($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X8);
    // 0x8022AAB0: mul.d       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f12.d);
    // 0x8022AAB4: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x8022AAB8: mul.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f12.d);
    // 0x8022AABC: add.d       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f14.d = ctx->f10.d + ctx->f8.d;
    // 0x8022AAC0: mul.d       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8022AAC4: nop

    // 0x8022AAC8: mul.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f14.d);
    // 0x8022AACC: add.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f18.d + ctx->f2.d;
    // 0x8022AAD0: jr          $ra
    // 0x8022AAD4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
    return;
    // 0x8022AAD4: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_8022AAD8:
    // 0x8022AAD8: jr          $ra
    // 0x8022AADC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    return;
    // 0x8022AADC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
L_8022AAE0:
    // 0x8022AAE0: slti        $at, $v1, 0x136
    ctx->r1 = SIGNED(ctx->r3) < 0X136 ? 1 : 0;
    // 0x8022AAE4: beq         $at, $zero, L_8022ABF8
    if (ctx->r1 == 0) {
        // 0x8022AAE8: lwc1        $f4, 0x0($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
            goto L_8022ABF8;
    }
    // 0x8022AAE8: lwc1        $f4, 0x0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AAEC: lwc1        $f6, 0x0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022AAF0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AAF4: ldc1        $f10, 0x3F38($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X3F38);
    // 0x8022AAF8: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x8022AAFC: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x8022AB00: mul.d       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f10.d);
    // 0x8022AB04: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8022AB08: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AB0C: c.le.d      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.d <= ctx->f0.d;
    // 0x8022AB10: nop

    // 0x8022AB14: bc1fl       L_8022AB44
    if (!c1cs) {
        // 0x8022AB18: mtc1        $at, $f7
        ctx->f_odd[(7 - 1) * 2] = ctx->r1;
            goto L_8022AB44;
    }
    goto skip_0;
    // 0x8022AB18: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x8022AB1C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8022AB20: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8022AB24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8022AB28: nop

    // 0x8022AB2C: add.d       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f0.d + ctx->f16.d;
    // 0x8022AB30: trunc.w.d   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_D(ctx->f18.d);
    // 0x8022AB34: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8022AB38: b           L_8022AB60
    // 0x8022AB3C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
        goto L_8022AB60;
    // 0x8022AB3C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x8022AB40: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
L_8022AB44:
    // 0x8022AB44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8022AB48: nop

    // 0x8022AB4C: sub.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f0.d - ctx->f6.d;
    // 0x8022AB50: trunc.w.d   $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = TRUNC_W_D(ctx->f10.d);
    // 0x8022AB54: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8022AB58: nop

    // 0x8022AB5C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
L_8022AB60:
    // 0x8022AB60: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AB64: ldc1        $f18, 0x3F40($at)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r1, 0X3F40);
    // 0x8022AB68: cvt.d.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.d = CVT_D_W(ctx->f16.u32l);
    // 0x8022AB6C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AB70: ldc1        $f6, 0x3F48($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X3F48);
    // 0x8022AB74: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022AB78: addiu       $v1, $v1, 0x3F10
    ctx->r3 = ADD32(ctx->r3, 0X3F10);
    // 0x8022AB7C: mul.d       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f18.d);
    // 0x8022AB80: ldc1        $f8, 0x20($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, 0X20);
    // 0x8022AB84: ldc1        $f18, 0x18($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X18);
    // 0x8022AB88: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8022AB8C: mul.d       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x8022AB90: sub.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d - ctx->f4.d;
    // 0x8022AB94: sub.d       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = ctx->f2.d - ctx->f10.d;
    // 0x8022AB98: ldc1        $f10, 0x10($v1)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r3, 0X10);
    // 0x8022AB9C: mul.d       $f12, $f2, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8022ABA0: nop

    // 0x8022ABA4: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x8022ABA8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x8022ABAC: ldc1        $f18, 0x8($v1)
    CHECK_FR(ctx, 18);
    ctx->f18.u64 = LD(ctx->r3, 0X8);
    // 0x8022ABB0: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x8022ABB4: add.d       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f6.d + ctx->f10.d;
    // 0x8022ABB8: mul.d       $f16, $f8, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f12.d);
    // 0x8022ABBC: bne         $t9, $zero, L_8022ABDC
    if (ctx->r25 != 0) {
        // 0x8022ABC0: add.d       $f14, $f18, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
            goto L_8022ABDC;
    }
    // 0x8022ABC0: add.d       $f14, $f18, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f14.d = ctx->f18.d + ctx->f16.d;
    // 0x8022ABC4: mul.d       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8022ABC8: nop

    // 0x8022ABCC: mul.d       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f14.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f14.d);
    // 0x8022ABD0: add.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = ctx->f6.d + ctx->f2.d;
    // 0x8022ABD4: jr          $ra
    // 0x8022ABD8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    return;
    // 0x8022ABD8: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
L_8022ABDC:
    // 0x8022ABDC: mul.d       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f2.d, ctx->f12.d);
    // 0x8022ABE0: nop

    // 0x8022ABE4: mul.d       $f18, $f8, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f14.d);
    // 0x8022ABE8: add.d       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f18.d + ctx->f2.d;
    // 0x8022ABEC: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    // 0x8022ABF0: jr          $ra
    // 0x8022ABF4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    return;
    // 0x8022ABF4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8022ABF8:
    // 0x8022ABF8: c.eq.s      $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f4.fl == ctx->f4.fl;
    // 0x8022ABFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AC00: bc1tl       L_8022AC14
    if (c1cs) {
        // 0x8022AC04: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8022AC14;
    }
    goto skip_1;
    // 0x8022AC04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x8022AC08: jr          $ra
    // 0x8022AC0C: lwc1        $f0, 0x3F54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F54);
    return;
    // 0x8022AC0C: lwc1        $f0, 0x3F54($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3F54);
    // 0x8022AC10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8022AC14:
    // 0x8022AC14: nop

    // 0x8022AC18: jr          $ra
    // 0x8022AC1C: nop

    return;
    // 0x8022AC1C: nop

;}
RECOMP_FUNC void func_802184F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802184F0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802184F4: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802184F8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802184FC: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218500: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80218504: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80218508: bc1fl       L_80218544
    if (!c1cs) {
        // 0x8021850C: c.lt.s      $f12, $f10
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
            goto L_80218544;
    }
    goto skip_0;
    // 0x8021850C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    skip_0:
    // 0x80218510: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80218514: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80218518: bc1fl       L_8021852C
    if (!c1cs) {
        // 0x8021851C: c.lt.s      $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
            goto L_8021852C;
    }
    goto skip_1;
    // 0x8021851C: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    skip_1:
    // 0x80218520: jr          $ra
    // 0x80218524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80218524: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218528: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
L_8021852C:
    // 0x8021852C: nop

    // 0x80218530: bc1fl       L_80218578
    if (!c1cs) {
        // 0x80218534: lwc1        $f4, 0xC($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
            goto L_80218578;
    }
    goto skip_2;
    // 0x80218534: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    skip_2:
    // 0x80218538: jr          $ra
    // 0x8021853C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021853C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218540: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
L_80218544:
    // 0x80218544: lwc1        $f16, 0x14($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80218548: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8021854C: bc1fl       L_80218560
    if (!c1cs) {
        // 0x80218550: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_80218560;
    }
    goto skip_3;
    // 0x80218550: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_3:
    // 0x80218554: jr          $ra
    // 0x80218558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80218558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021855C: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
L_80218560:
    // 0x80218560: nop

    // 0x80218564: bc1fl       L_80218578
    if (!c1cs) {
        // 0x80218568: lwc1        $f4, 0xC($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
            goto L_80218578;
    }
    goto skip_4;
    // 0x80218568: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    skip_4:
    // 0x8021856C: jr          $ra
    // 0x80218570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80218570: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80218574: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
L_80218578:
    // 0x80218578: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8021857C: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80218580: c.lt.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl < ctx->f4.fl;
    // 0x80218584: nop

    // 0x80218588: bc1fl       L_802185C4
    if (!c1cs) {
        // 0x8021858C: c.lt.s      $f14, $f10
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
            goto L_802185C4;
    }
    goto skip_5;
    // 0x8021858C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    skip_5:
    // 0x80218590: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80218594: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80218598: bc1fl       L_802185AC
    if (!c1cs) {
        // 0x8021859C: c.lt.s      $f8, $f14
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
            goto L_802185AC;
    }
    goto skip_6;
    // 0x8021859C: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    skip_6:
    // 0x802185A0: jr          $ra
    // 0x802185A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802185A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802185A8: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
L_802185AC:
    // 0x802185AC: nop

    // 0x802185B0: bc1fl       L_802185F8
    if (!c1cs) {
        // 0x802185B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802185F8;
    }
    goto skip_7;
    // 0x802185B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_7:
    // 0x802185B8: jr          $ra
    // 0x802185BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802185BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802185C0: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
L_802185C4:
    // 0x802185C4: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802185C8: lwc1        $f18, 0xC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802185CC: bc1fl       L_802185E0
    if (!c1cs) {
        // 0x802185D0: c.lt.s      $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
            goto L_802185E0;
    }
    goto skip_8;
    // 0x802185D0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    skip_8:
    // 0x802185D4: jr          $ra
    // 0x802185D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802185D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802185DC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
L_802185E0:
    // 0x802185E0: nop

    // 0x802185E4: bc1fl       L_802185F8
    if (!c1cs) {
        // 0x802185E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802185F8;
    }
    goto skip_9;
    // 0x802185E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_9:
    // 0x802185EC: jr          $ra
    // 0x802185F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x802185F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802185F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802185F8:
    // 0x802185F8: jr          $ra
    // 0x802185FC: nop

    return;
    // 0x802185FC: nop

;}
RECOMP_FUNC void func_80240160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240160: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80240164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80240168: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x8024016C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80240170: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80240174: bne         $t6, $at, L_8024022C
    if (ctx->r14 != ctx->r1) {
        // 0x80240178: lw          $a2, 0x18($a0)
        ctx->r6 = MEM_W(ctx->r4, 0X18);
            goto L_8024022C;
    }
    // 0x80240178: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x8024017C: beq         $a2, $zero, L_8024022C
    if (ctx->r6 == 0) {
        // 0x80240180: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_8024022C;
    }
    // 0x80240180: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80240184: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80240188: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8024018C: jal         0x80249660
    // 0x80240190: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_80249660(rdram, ctx);
        goto after_0;
    // 0x80240190: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x80240194: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80240198: beq         $v0, $zero, L_8024022C
    if (ctx->r2 == 0) {
        // 0x8024019C: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_8024022C;
    }
    // 0x8024019C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x802401A0: lw          $t7, 0x84($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X84);
    // 0x802401A4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802401A8: beql        $t7, $zero, L_8024020C
    if (ctx->r15 == 0) {
        // 0x802401AC: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_8024020C;
    }
    goto skip_0;
    // 0x802401AC: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_0:
    // 0x802401B0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802401B4: jal         0x80249228
    // 0x802401B8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_80249228(rdram, ctx);
        goto after_1;
    // 0x802401B8: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x802401BC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x802401C0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802401C4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802401C8: lw          $t0, 0x80($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X80);
    // 0x802401CC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x802401D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x802401D4: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x802401D8: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x802401DC: bnel        $at, $zero, L_8024020C
    if (ctx->r1 != 0) {
        // 0x802401E0: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_8024020C;
    }
    goto skip_1;
    // 0x802401E0: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_1:
    // 0x802401E4: lw          $a1, 0x7C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X7C);
    // 0x802401E8: jal         0x8024920C
    // 0x802401EC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    func_8024920C(rdram, ctx);
        goto after_2;
    // 0x802401EC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x802401F0: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x802401F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802401F8: lw          $v0, 0x84($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X84);
    // 0x802401FC: beq         $v0, $at, L_80240208
    if (ctx->r2 == ctx->r1) {
        // 0x80240200: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_80240208;
    }
    // 0x80240200: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x80240204: sw          $t2, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->r10;
L_80240208:
    // 0x80240208: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
L_8024020C:
    // 0x8024020C: lw          $t3, 0x24($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X24);
    // 0x80240210: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80240214: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x80240218: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8024021C: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80240220: mflo        $a2
    ctx->r6 = lo;
    // 0x80240224: jal         0x8023F37C
    // 0x80240228: nop

    func_8023F37C(rdram, ctx);
        goto after_3;
    // 0x80240228: nop

    after_3:
L_8024022C:
    // 0x8024022C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80240230: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80240234: jr          $ra
    // 0x80240238: nop

    return;
    // 0x80240238: nop

;}
RECOMP_FUNC void func_80219B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80219B84: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80219B88: swc1        $f12, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f12.u32l;
    // 0x80219B8C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x80219B90: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219B94: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219B98: lw          $t6, 0x84($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X84);
    // 0x80219B9C: lw          $t7, 0x88($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X88);
    // 0x80219BA0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80219BA4: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    // 0x80219BA8: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x80219BAC: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x80219BB0: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x80219BB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80219BB8: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x80219BBC: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x80219BC0: sw          $t8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r24;
    // 0x80219BC4: bc1f        L_80219BD8
    if (!c1cs) {
        // 0x80219BC8: sw          $t9, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r25;
            goto L_80219BD8;
    }
    // 0x80219BC8: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x80219BCC: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80219BD0: b           L_80219BE8
    // 0x80219BD4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
        goto L_80219BE8;
    // 0x80219BD4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
L_80219BD8:
    // 0x80219BD8: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219BDC: lwc1        $f10, 0x68($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219BE0: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80219BE4: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_80219BE8:
    // 0x80219BE8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219BEC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219BF0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219BF4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80219BF8: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80219BFC: nop

    // 0x80219C00: bc1fl       L_80219C18
    if (!c1cs) {
        // 0x80219C04: lwc1        $f10, 0x6C($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
            goto L_80219C18;
    }
    goto skip_0;
    // 0x80219C04: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    skip_0:
    // 0x80219C08: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x80219C0C: b           L_80219C20
    // 0x80219C10: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
        goto L_80219C20;
    // 0x80219C10: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x80219C14: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
L_80219C18:
    // 0x80219C18: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80219C1C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
L_80219C20:
    // 0x80219C20: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219C24: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219C28: lw          $v0, 0x80($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X80);
    // 0x80219C2C: lwc1        $f14, 0x7C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219C30: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80219C34: lwc1        $f2, 0x70($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219C38: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80219C3C: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x80219C40: bc1f        L_80219C54
    if (!c1cs) {
        // 0x80219C44: lwc1        $f10, 0x38($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
            goto L_80219C54;
    }
    // 0x80219C44: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80219C48: mov.s       $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = ctx->f6.fl;
    // 0x80219C4C: b           L_80219C54
    // 0x80219C50: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
        goto L_80219C54;
    // 0x80219C50: mov.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = ctx->f4.fl;
L_80219C54:
    // 0x80219C54: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80219C58: c.lt.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl < ctx->f18.fl;
    // 0x80219C5C: nop

    // 0x80219C60: bc1fl       L_80219C78
    if (!c1cs) {
        // 0x80219C64: lwc1        $f12, 0xC($v0)
        ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
            goto L_80219C78;
    }
    goto skip_1;
    // 0x80219C64: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
    skip_1:
    // 0x80219C68: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x80219C6C: b           L_8021A368
    // 0x80219C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A368;
    // 0x80219C70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219C74: lwc1        $f12, 0xC($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0XC);
L_80219C78:
    // 0x80219C78: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80219C7C: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80219C80: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80219C84: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80219C88: bc1fl       L_80219CA0
    if (!c1cs) {
        // 0x80219C8C: lwc1        $f0, 0x4($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219CA0;
    }
    goto skip_2;
    // 0x80219C8C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    skip_2:
    // 0x80219C90: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x80219C94: b           L_8021A368
    // 0x80219C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A368;
    // 0x80219C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219C9C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
L_80219CA0:
    // 0x80219CA0: addiu       $t4, $zero, -0x2
    ctx->r12 = ADD32(0, -0X2);
    // 0x80219CA4: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80219CA8: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80219CAC: nop

    // 0x80219CB0: bc1fl       L_80219CC8
    if (!c1cs) {
        // 0x80219CB4: lwc1        $f16, 0x10($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
            goto L_80219CC8;
    }
    goto skip_3;
    // 0x80219CB4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
    skip_3:
    // 0x80219CB8: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80219CBC: b           L_8021A368
    // 0x80219CC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A368;
    // 0x80219CC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219CC4: lwc1        $f16, 0x10($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X10);
L_80219CC8:
    // 0x80219CC8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219CCC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x80219CD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80219CD4: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80219CD8: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x80219CDC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80219CE0: bc1fl       L_80219CF8
    if (!c1cs) {
        // 0x80219CE4: lwc1        $f16, 0x8($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
            goto L_80219CF8;
    }
    goto skip_4;
    // 0x80219CE4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    skip_4:
    // 0x80219CE8: sh          $a1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r5;
    // 0x80219CEC: b           L_8021A368
    // 0x80219CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A368;
    // 0x80219CF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219CF4: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
L_80219CF8:
    // 0x80219CF8: addiu       $t7, $zero, -0x3
    ctx->r15 = ADD32(0, -0X3);
    // 0x80219CFC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80219D00: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x80219D04: nop

    // 0x80219D08: bc1fl       L_80219D20
    if (!c1cs) {
        // 0x80219D0C: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219D20;
    }
    goto skip_5;
    // 0x80219D0C: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_5:
    // 0x80219D10: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x80219D14: b           L_8021A368
    // 0x80219D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A368;
    // 0x80219D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219D1C: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
L_80219D20:
    // 0x80219D20: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80219D24: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80219D28: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80219D2C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80219D30: bc1fl       L_80219D48
    if (!c1cs) {
        // 0x80219D34: c.le.s      $f8, $f12
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
            goto L_80219D48;
    }
    goto skip_6;
    // 0x80219D34: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    skip_6:
    // 0x80219D38: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x80219D3C: b           L_8021A368
    // 0x80219D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021A368;
    // 0x80219D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219D44: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
L_80219D48:
    // 0x80219D48: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80219D4C: bc1fl       L_80219DC0
    if (!c1cs) {
        // 0x80219D50: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219DC0;
    }
    goto skip_7;
    // 0x80219D50: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_7:
    // 0x80219D54: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x80219D58: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80219D5C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80219D60: bc1fl       L_80219DC0
    if (!c1cs) {
        // 0x80219D64: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219DC0;
    }
    goto skip_8;
    // 0x80219D64: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_8:
    // 0x80219D68: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80219D6C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219D70: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80219D74: bc1fl       L_80219DC0
    if (!c1cs) {
        // 0x80219D78: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219DC0;
    }
    goto skip_9;
    // 0x80219D78: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_9:
    // 0x80219D7C: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x80219D80: nop

    // 0x80219D84: bc1fl       L_80219DC0
    if (!c1cs) {
        // 0x80219D88: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219DC0;
    }
    goto skip_10;
    // 0x80219D88: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_10:
    // 0x80219D8C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x80219D90: nop

    // 0x80219D94: bc1fl       L_80219DC0
    if (!c1cs) {
        // 0x80219D98: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219DC0;
    }
    goto skip_11;
    // 0x80219D98: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_11:
    // 0x80219D9C: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x80219DA0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80219DA4: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80219DA8: bc1fl       L_80219DC0
    if (!c1cs) {
        // 0x80219DAC: c.le.s      $f2, $f16
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
            goto L_80219DC0;
    }
    goto skip_12;
    // 0x80219DAC: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    skip_12:
    // 0x80219DB0: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x80219DB4: b           L_8021A368
    // 0x80219DB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8021A368;
    // 0x80219DB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80219DBC: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
L_80219DC0:
    // 0x80219DC0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80219DC4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219DC8: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219DCC: bc1fl       L_80219E94
    if (!c1cs) {
        // 0x80219DD0: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E94;
    }
    goto skip_13;
    // 0x80219DD0: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_13:
    // 0x80219DD4: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219DD8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80219DDC: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219DE0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219DE4: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80219DE8: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219DEC: bc1fl       L_80219E00
    if (!c1cs) {
        // 0x80219DF0: sub.s       $f10, $f16, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
            goto L_80219E00;
    }
    goto skip_14;
    // 0x80219DF0: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
    skip_14:
    // 0x80219DF4: b           L_80219E04
    // 0x80219DF8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_80219E04;
    // 0x80219DF8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80219DFC: sub.s       $f10, $f16, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f8.fl;
L_80219E00:
    // 0x80219E00: div.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
L_80219E04:
    // 0x80219E04: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x80219E08: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80219E0C: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80219E10: add.s       $f0, $f10, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80219E14: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x80219E18: nop

    // 0x80219E1C: bc1fl       L_80219E94
    if (!c1cs) {
        // 0x80219E20: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E94;
    }
    goto skip_15;
    // 0x80219E20: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_15:
    // 0x80219E24: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x80219E28: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219E2C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219E30: bc1fl       L_80219E94
    if (!c1cs) {
        // 0x80219E34: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E94;
    }
    goto skip_16;
    // 0x80219E34: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_16:
    // 0x80219E38: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80219E3C: lwc1        $f8, 0x14($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80219E40: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80219E44: lwc1        $f4, 0x10($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80219E48: add.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80219E4C: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80219E50: nop

    // 0x80219E54: bc1fl       L_80219E94
    if (!c1cs) {
        // 0x80219E58: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E94;
    }
    goto skip_17;
    // 0x80219E58: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_17:
    // 0x80219E5C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80219E60: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80219E64: addiu       $t4, $zero, -0x3
    ctx->r12 = ADD32(0, -0X3);
    // 0x80219E68: bc1fl       L_80219E94
    if (!c1cs) {
        // 0x80219E6C: lwc1        $f0, 0x14($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
            goto L_80219E94;
    }
    goto skip_18;
    // 0x80219E6C: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    skip_18:
    // 0x80219E70: swc1        $f12, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f12.u32l;
    // 0x80219E74: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80219E78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80219E7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80219E80: bne         $v1, $a1, L_80219E90
    if (ctx->r3 != ctx->r5) {
        // 0x80219E84: sh          $t4, 0x0($t5)
        MEM_H(0X0, ctx->r13) = ctx->r12;
            goto L_80219E90;
    }
    // 0x80219E84: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x80219E88: b           L_8021A368
    // 0x80219E8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A368;
    // 0x80219E8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80219E90:
    // 0x80219E90: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
L_80219E94:
    // 0x80219E94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80219E98: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80219E9C: c.le.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl <= ctx->f14.fl;
    // 0x80219EA0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219EA4: bc1fl       L_80219F8C
    if (!c1cs) {
        // 0x80219EA8: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F8C;
    }
    goto skip_19;
    // 0x80219EA8: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_19:
    // 0x80219EAC: sub.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80219EB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80219EB4: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219EB8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219EBC: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x80219EC0: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80219EC4: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80219EC8: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80219ECC: bc1fl       L_80219EE4
    if (!c1cs) {
        // 0x80219ED0: sub.s       $f8, $f0, $f10
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
            goto L_80219EE4;
    }
    goto skip_20;
    // 0x80219ED0: sub.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
    skip_20:
    // 0x80219ED4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80219ED8: b           L_80219EE8
    // 0x80219EDC: nop

        goto L_80219EE8;
    // 0x80219EDC: nop

    // 0x80219EE0: sub.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f10.fl;
L_80219EE4:
    // 0x80219EE4: div.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
L_80219EE8:
    // 0x80219EE8: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80219EEC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219EF0: add.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80219EF4: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x80219EF8: nop

    // 0x80219EFC: bc1fl       L_80219F8C
    if (!c1cs) {
        // 0x80219F00: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F8C;
    }
    goto skip_21;
    // 0x80219F00: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_21:
    // 0x80219F04: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80219F08: lwc1        $f2, 0x6C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219F0C: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219F10: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x80219F14: nop

    // 0x80219F18: bc1fl       L_80219F8C
    if (!c1cs) {
        // 0x80219F1C: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F8C;
    }
    goto skip_22;
    // 0x80219F1C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_22:
    // 0x80219F20: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80219F24: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80219F28: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x80219F2C: add.s       $f0, $f6, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80219F30: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x80219F34: nop

    // 0x80219F38: bc1fl       L_80219F8C
    if (!c1cs) {
        // 0x80219F3C: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F8C;
    }
    goto skip_23;
    // 0x80219F3C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_23:
    // 0x80219F40: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80219F44: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80219F48: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x80219F4C: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x80219F50: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80219F54: addu        $t6, $a2, $a0
    ctx->r14 = ADD32(ctx->r6, ctx->r4);
    // 0x80219F58: bc1fl       L_80219F8C
    if (!c1cs) {
        // 0x80219F5C: lwc1        $f2, 0x4($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
            goto L_80219F8C;
    }
    goto skip_24;
    // 0x80219F5C: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
    skip_24:
    // 0x80219F60: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80219F64: addu        $t9, $a3, $a0
    ctx->r25 = ADD32(ctx->r7, ctx->r4);
    // 0x80219F68: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80219F6C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x80219F70: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80219F74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80219F78: bne         $v1, $a1, L_80219F88
    if (ctx->r3 != ctx->r5) {
        // 0x80219F7C: sh          $t8, 0x0($t0)
        MEM_H(0X0, ctx->r8) = ctx->r24;
            goto L_80219F88;
    }
    // 0x80219F7C: sh          $t8, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r24;
    // 0x80219F80: b           L_8021A368
    // 0x80219F84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A368;
    // 0x80219F84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80219F88:
    // 0x80219F88: lwc1        $f2, 0x4($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X4);
L_80219F8C:
    // 0x80219F8C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80219F90: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x80219F94: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80219F98: c.le.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl <= ctx->f2.fl;
    // 0x80219F9C: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80219FA0: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219FA4: bc1fl       L_8021A084
    if (!c1cs) {
        // 0x80219FA8: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A084;
    }
    goto skip_25;
    // 0x80219FA8: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_25:
    // 0x80219FAC: sub.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80219FB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80219FB4: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80219FB8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219FBC: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x80219FC0: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80219FC4: lwc1        $f6, 0x6C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80219FC8: sub.s       $f14, $f8, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80219FCC: bc1fl       L_80219FE0
    if (!c1cs) {
        // 0x80219FD0: sub.s       $f10, $f2, $f6
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
            goto L_80219FE0;
    }
    goto skip_26;
    // 0x80219FD0: sub.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
    skip_26:
    // 0x80219FD4: b           L_80219FE4
    // 0x80219FD8: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
        goto L_80219FE4;
    // 0x80219FD8: mov.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = ctx->f16.fl;
    // 0x80219FDC: sub.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f6.fl;
L_80219FE0:
    // 0x80219FE0: div.s       $f12, $f10, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
L_80219FE4:
    // 0x80219FE4: mul.s       $f8, $f12, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x80219FE8: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x80219FEC: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80219FF0: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x80219FF4: nop

    // 0x80219FF8: bc1fl       L_8021A084
    if (!c1cs) {
        // 0x80219FFC: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A084;
    }
    goto skip_27;
    // 0x80219FFC: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_27:
    // 0x8021A000: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A004: lwc1        $f10, 0x7C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021A008: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A00C: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8021A010: nop

    // 0x8021A014: bc1fl       L_8021A084
    if (!c1cs) {
        // 0x8021A018: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A084;
    }
    goto skip_28;
    // 0x8021A018: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_28:
    // 0x8021A01C: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8021A020: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A024: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8021A028: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021A02C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x8021A030: nop

    // 0x8021A034: bc1fl       L_8021A084
    if (!c1cs) {
        // 0x8021A038: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A084;
    }
    goto skip_29;
    // 0x8021A038: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_29:
    // 0x8021A03C: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021A040: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8021A044: addu        $t1, $a2, $a0
    ctx->r9 = ADD32(ctx->r6, ctx->r4);
    // 0x8021A048: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8021A04C: nop

    // 0x8021A050: bc1fl       L_8021A084
    if (!c1cs) {
        // 0x8021A054: lwc1        $f2, 0x10($v0)
        ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
            goto L_8021A084;
    }
    goto skip_30;
    // 0x8021A054: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
    skip_30:
    // 0x8021A058: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8021A05C: addu        $t4, $a3, $a0
    ctx->r12 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A060: addiu       $t3, $zero, -0x2
    ctx->r11 = ADD32(0, -0X2);
    // 0x8021A064: swc1        $f12, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f12.u32l;
    // 0x8021A068: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x8021A06C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A070: bne         $v1, $a1, L_8021A080
    if (ctx->r3 != ctx->r5) {
        // 0x8021A074: sh          $t3, 0x0($t5)
        MEM_H(0X0, ctx->r13) = ctx->r11;
            goto L_8021A080;
    }
    // 0x8021A074: sh          $t3, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r11;
    // 0x8021A078: b           L_8021A368
    // 0x8021A07C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A368;
    // 0x8021A07C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A080:
    // 0x8021A080: lwc1        $f2, 0x10($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X10);
L_8021A084:
    // 0x8021A084: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8021A088: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021A08C: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A090: c.le.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl <= ctx->f6.fl;
    // 0x8021A094: nop

    // 0x8021A098: bc1fl       L_8021A178
    if (!c1cs) {
        // 0x8021A09C: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A178;
    }
    goto skip_31;
    // 0x8021A09C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_31:
    // 0x8021A0A0: sub.s       $f0, $f8, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A0A4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8021A0A8: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8021A0AC: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A0B0: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x8021A0B4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8021A0B8: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A0BC: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A0C0: bc1fl       L_8021A0D8
    if (!c1cs) {
        // 0x8021A0C4: sub.s       $f4, $f2, $f10
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
            goto L_8021A0D8;
    }
    goto skip_32;
    // 0x8021A0C4: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
    skip_32:
    // 0x8021A0C8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A0CC: b           L_8021A0DC
    // 0x8021A0D0: nop

        goto L_8021A0DC;
    // 0x8021A0D0: nop

    // 0x8021A0D4: sub.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl - ctx->f10.fl;
L_8021A0D8:
    // 0x8021A0D8: div.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
L_8021A0DC:
    // 0x8021A0DC: mul.s       $f6, $f12, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8021A0E0: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A0E4: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021A0E8: c.le.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl <= ctx->f0.fl;
    // 0x8021A0EC: nop

    // 0x8021A0F0: bc1fl       L_8021A178
    if (!c1cs) {
        // 0x8021A0F4: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A178;
    }
    goto skip_33;
    // 0x8021A0F4: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_33:
    // 0x8021A0F8: lwc1        $f10, 0xC($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0XC);
    // 0x8021A0FC: lwc1        $f4, 0x7C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021A100: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A104: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x8021A108: nop

    // 0x8021A10C: bc1fl       L_8021A178
    if (!c1cs) {
        // 0x8021A110: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A178;
    }
    goto skip_34;
    // 0x8021A110: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_34:
    // 0x8021A114: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021A118: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A11C: mul.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x8021A120: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8021A124: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x8021A128: nop

    // 0x8021A12C: bc1fl       L_8021A178
    if (!c1cs) {
        // 0x8021A130: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A178;
    }
    goto skip_35;
    // 0x8021A130: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_35:
    // 0x8021A134: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021A138: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8021A13C: addu        $t6, $a2, $a0
    ctx->r14 = ADD32(ctx->r6, ctx->r4);
    // 0x8021A140: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x8021A144: nop

    // 0x8021A148: bc1fl       L_8021A178
    if (!c1cs) {
        // 0x8021A14C: lwc1        $f18, 0x0($v0)
        ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
            goto L_8021A178;
    }
    goto skip_36;
    // 0x8021A14C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    skip_36:
    // 0x8021A150: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8021A154: addu        $t9, $a3, $a0
    ctx->r25 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A158: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A15C: swc1        $f12, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f12.u32l;
    // 0x8021A160: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8021A164: bne         $v1, $a1, L_8021A174
    if (ctx->r3 != ctx->r5) {
        // 0x8021A168: sh          $a1, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r5;
            goto L_8021A174;
    }
    // 0x8021A168: sh          $a1, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r5;
    // 0x8021A16C: b           L_8021A368
    // 0x8021A170: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A368;
    // 0x8021A170: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A174:
    // 0x8021A174: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
L_8021A178:
    // 0x8021A178: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8021A17C: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8021A180: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A184: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x8021A188: nop

    // 0x8021A18C: bc1fl       L_8021A270
    if (!c1cs) {
        // 0x8021A190: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A270;
    }
    goto skip_37;
    // 0x8021A190: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_37:
    // 0x8021A194: sub.s       $f14, $f6, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021A198: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8021A19C: lwc1        $f8, 0x7C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021A1A0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A1A4: c.eq.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl == ctx->f6.fl;
    // 0x8021A1A8: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A1AC: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A1B0: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A1B4: bc1fl       L_8021A1CC
    if (!c1cs) {
        // 0x8021A1B8: sub.s       $f8, $f18, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
            goto L_8021A1CC;
    }
    goto skip_38;
    // 0x8021A1B8: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    skip_38:
    // 0x8021A1BC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A1C0: b           L_8021A1D0
    // 0x8021A1C4: nop

        goto L_8021A1D0;
    // 0x8021A1C4: nop

    // 0x8021A1C8: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
L_8021A1CC:
    // 0x8021A1CC: div.s       $f12, $f8, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f14.fl);
L_8021A1D0:
    // 0x8021A1D0: mul.s       $f10, $f12, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8021A1D4: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A1D8: add.s       $f0, $f10, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8021A1DC: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8021A1E0: nop

    // 0x8021A1E4: bc1fl       L_8021A270
    if (!c1cs) {
        // 0x8021A1E8: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A270;
    }
    goto skip_39;
    // 0x8021A1E8: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_39:
    // 0x8021A1EC: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021A1F0: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021A1F4: lwc1        $f10, 0x6C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A1F8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8021A1FC: nop

    // 0x8021A200: bc1fl       L_8021A270
    if (!c1cs) {
        // 0x8021A204: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A270;
    }
    goto skip_40;
    // 0x8021A204: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_40:
    // 0x8021A208: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021A20C: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021A210: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8021A214: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021A218: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x8021A21C: nop

    // 0x8021A220: bc1fl       L_8021A270
    if (!c1cs) {
        // 0x8021A224: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A270;
    }
    goto skip_41;
    // 0x8021A224: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_41:
    // 0x8021A228: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A22C: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8021A230: addu        $t0, $a2, $a0
    ctx->r8 = ADD32(ctx->r6, ctx->r4);
    // 0x8021A234: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x8021A238: nop

    // 0x8021A23C: bc1fl       L_8021A270
    if (!c1cs) {
        // 0x8021A240: lwc1        $f0, 0xC($v0)
        ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8021A270;
    }
    goto skip_42;
    // 0x8021A240: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    skip_42:
    // 0x8021A244: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8021A248: addu        $t4, $a3, $a0
    ctx->r12 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A24C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8021A250: swc1        $f12, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f12.u32l;
    // 0x8021A254: lw          $t3, 0x0($t4)
    ctx->r11 = MEM_W(ctx->r12, 0X0);
    // 0x8021A258: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A25C: bne         $v1, $a1, L_8021A26C
    if (ctx->r3 != ctx->r5) {
        // 0x8021A260: sh          $t2, 0x0($t3)
        MEM_H(0X0, ctx->r11) = ctx->r10;
            goto L_8021A26C;
    }
    // 0x8021A260: sh          $t2, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r10;
    // 0x8021A264: b           L_8021A368
    // 0x8021A268: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A368;
    // 0x8021A268: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A26C:
    // 0x8021A26C: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
L_8021A270:
    // 0x8021A270: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8021A274: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8021A278: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A27C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x8021A280: nop

    // 0x8021A284: bc1fl       L_8021A368
    if (!c1cs) {
        // 0x8021A288: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A368;
    }
    goto skip_43;
    // 0x8021A288: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_43:
    // 0x8021A28C: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8021A290: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8021A294: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8021A298: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A29C: c.eq.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl == ctx->f10.fl;
    // 0x8021A2A0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8021A2A4: lwc1        $f8, 0x68($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8021A2A8: sub.s       $f2, $f6, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021A2AC: bc1fl       L_8021A2C4
    if (!c1cs) {
        // 0x8021A2B0: sub.s       $f6, $f0, $f8
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
            goto L_8021A2C4;
    }
    goto skip_44;
    // 0x8021A2B0: sub.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
    skip_44:
    // 0x8021A2B4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021A2B8: b           L_8021A2C8
    // 0x8021A2BC: nop

        goto L_8021A2C8;
    // 0x8021A2BC: nop

    // 0x8021A2C0: sub.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f8.fl;
L_8021A2C4:
    // 0x8021A2C4: div.s       $f12, $f6, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f14.fl);
L_8021A2C8:
    // 0x8021A2C8: mul.s       $f4, $f12, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8021A2CC: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8021A2D0: add.s       $f0, $f4, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8021A2D4: c.le.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl <= ctx->f0.fl;
    // 0x8021A2D8: nop

    // 0x8021A2DC: bc1fl       L_8021A368
    if (!c1cs) {
        // 0x8021A2E0: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A368;
    }
    goto skip_45;
    // 0x8021A2E0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_45:
    // 0x8021A2E4: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8021A2E8: lwc1        $f6, 0x78($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8021A2EC: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8021A2F0: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x8021A2F4: nop

    // 0x8021A2F8: bc1fl       L_8021A368
    if (!c1cs) {
        // 0x8021A2FC: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A368;
    }
    goto skip_46;
    // 0x8021A2FC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_46:
    // 0x8021A300: sub.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8021A304: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8021A308: mul.s       $f8, $f12, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8021A30C: add.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x8021A310: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x8021A314: nop

    // 0x8021A318: bc1fl       L_8021A368
    if (!c1cs) {
        // 0x8021A31C: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A368;
    }
    goto skip_47;
    // 0x8021A31C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_47:
    // 0x8021A320: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8021A324: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8021A328: addu        $t5, $a2, $a0
    ctx->r13 = ADD32(ctx->r6, ctx->r4);
    // 0x8021A32C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x8021A330: nop

    // 0x8021A334: bc1fl       L_8021A368
    if (!c1cs) {
        // 0x8021A338: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8021A368;
    }
    goto skip_48;
    // 0x8021A338: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    skip_48:
    // 0x8021A33C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x8021A340: addu        $t9, $a3, $a0
    ctx->r25 = ADD32(ctx->r7, ctx->r4);
    // 0x8021A344: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8021A348: swc1        $f12, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f12.u32l;
    // 0x8021A34C: lw          $t8, 0x0($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X0);
    // 0x8021A350: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8021A354: bne         $v1, $a1, L_8021A364
    if (ctx->r3 != ctx->r5) {
        // 0x8021A358: sh          $t7, 0x0($t8)
        MEM_H(0X0, ctx->r24) = ctx->r15;
            goto L_8021A364;
    }
    // 0x8021A358: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x8021A35C: b           L_8021A368
    // 0x8021A360: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8021A368;
    // 0x8021A360: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8021A364:
    // 0x8021A364: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_8021A368:
    // 0x8021A368: jr          $ra
    // 0x8021A36C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8021A36C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802344F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802344F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802344F8: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802344FC: lhu         $t6, 0xBEC($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBEC);
    // 0x80234500: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80234504: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80234508: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8023450C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80234510: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80234514: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80234518: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023451C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80234520: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80234524: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80234528: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023452C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80234530: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80234534: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80234538: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8023453C: bne         $at, $zero, L_8023455C
    if (ctx->r1 != 0) {
        // 0x80234540: sw          $a3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r7;
            goto L_8023455C;
    }
    // 0x80234540: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80234544: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80234548: addiu       $a0, $a0, 0x52A8
    ctx->r4 = ADD32(ctx->r4, 0X52A8);
    // 0x8023454C: jal         0x80231A24
    // 0x80234550: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80234550: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_0:
    // 0x80234554: b           L_802347D4
    // 0x80234558: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_802347D4;
    // 0x80234558: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8023455C:
    // 0x8023455C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80234560: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80234564: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80234568: lw          $t8, 0x3950($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3950);
    // 0x8023456C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80234570: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80234574: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80234578: lui         $fp, 0x8025
    ctx->r30 = S32(0X8025 << 16);
    // 0x8023457C: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x80234580: addiu       $fp, $fp, -0x18F0
    ctx->r30 = ADD32(ctx->r30, -0X18F0);
    // 0x80234584: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x80234588: addiu       $s7, $zero, 0xFFF
    ctx->r23 = ADD32(0, 0XFFF);
    // 0x8023458C: addiu       $s6, $zero, -0x21
    ctx->r22 = ADD32(0, -0X21);
    // 0x80234590: addiu       $s5, $zero, -0x2
    ctx->r21 = ADD32(0, -0X2);
    // 0x80234594: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80234598: addiu       $s3, $zero, -0x4
    ctx->r19 = ADD32(0, -0X4);
    // 0x8023459C: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
L_802345A0:
    // 0x802345A0: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_802345A4:
    // 0x802345A4: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x802345A8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802345AC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802345B0: sltiu       $at, $a1, 0xC
    ctx->r1 = ctx->r5 < 0XC ? 1 : 0;
    // 0x802345B4: beq         $at, $zero, L_802347BC
    if (ctx->r1 == 0) {
        // 0x802345B8: sll         $t0, $a1, 2
        ctx->r8 = S32(ctx->r5 << 2);
            goto L_802347BC;
    }
    // 0x802345B8: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x802345BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802345C0: addu        $at, $at, $t0
    gpr jr_addend_802345C8 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x802345C4: lw          $t0, 0x5358($at)
    ctx->r8 = ADD32(ctx->r1, 0X5358);
    // 0x802345C8: jr          $t0
    // 0x802345CC: nop

    switch (jr_addend_802345C8 >> 2) {
        case 0: goto L_802347D0; break;
        case 1: goto L_802345D0; break;
        case 2: goto L_8023461C; break;
        case 3: goto L_8023468C; break;
        case 4: goto L_802347BC; break;
        case 5: goto L_802346D8; break;
        case 6: goto L_802347BC; break;
        case 7: goto L_80234644; break;
        case 8: goto L_802346C4; break;
        case 9: goto L_802346A4; break;
        case 10: goto L_8023474C; break;
        case 11: goto L_80234784; break;
        default: switch_error(__func__, 0x802345C8, 0x80255358);
    }
    // 0x802345CC: nop

L_802345D0:
    // 0x802345D0: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x802345D4: and         $s0, $t1, $s3
    ctx->r16 = ctx->r9 & ctx->r19;
    // 0x802345D8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x802345DC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802345E0: addiu       $t4, $s0, 0x3
    ctx->r12 = ADD32(ctx->r16, 0X3);
    // 0x802345E4: sh          $t2, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r10;
    // 0x802345E8: lh          $t3, 0x4($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X4);
    // 0x802345EC: and         $s0, $t4, $s3
    ctx->r16 = ctx->r12 & ctx->r19;
    // 0x802345F0: bgtzl       $t3, L_80234600
    if (SIGNED(ctx->r11) > 0) {
        // 0x802345F4: lw          $t5, 0x0($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X0);
            goto L_80234600;
    }
    goto skip_0;
    // 0x802345F4: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    skip_0:
    // 0x802345F8: sh          $s4, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r20;
    // 0x802345FC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
L_80234600:
    // 0x80234600: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80234604: sh          $t5, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r13;
    // 0x80234608: lh          $t6, 0x6($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X6);
    // 0x8023460C: bgtzl       $t6, L_802345A4
    if (SIGNED(ctx->r14) > 0) {
        // 0x80234610: addiu       $t9, $s0, 0x3
        ctx->r25 = ADD32(ctx->r16, 0X3);
            goto L_802345A4;
    }
    goto skip_1;
    // 0x80234610: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    skip_1:
    // 0x80234614: b           L_802345A0
    // 0x80234618: sh          $s4, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r20;
        goto L_802345A0;
    // 0x80234618: sh          $s4, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r20;
L_8023461C:
    // 0x8023461C: addiu       $t7, $s0, 0x3
    ctx->r15 = ADD32(ctx->r16, 0X3);
    // 0x80234620: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x80234624: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80234628: addiu       $t9, $s0, 0x7
    ctx->r25 = ADD32(ctx->r16, 0X7);
    // 0x8023462C: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x80234630: sh          $t8, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r24;
    // 0x80234634: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80234638: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8023463C: b           L_802345A0
    // 0x80234640: sh          $t0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r8;
        goto L_802345A0;
    // 0x80234640: sh          $t0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r8;
L_80234644:
    // 0x80234644: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x80234648: and         $s0, $t1, $s3
    ctx->r16 = ctx->r9 & ctx->r19;
    // 0x8023464C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80234650: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x80234654: and         $s0, $t3, $s3
    ctx->r16 = ctx->r11 & ctx->r19;
    // 0x80234658: sb          $t2, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r10;
    // 0x8023465C: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80234660: addiu       $t5, $s0, 0x7
    ctx->r13 = ADD32(ctx->r16, 0X7);
    // 0x80234664: and         $s0, $t5, $s3
    ctx->r16 = ctx->r13 & ctx->r19;
    // 0x80234668: sb          $t4, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r12;
    // 0x8023466C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80234670: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x80234674: and         $s0, $t7, $s3
    ctx->r16 = ctx->r15 & ctx->r19;
    // 0x80234678: sb          $t6, 0x10($s1)
    MEM_B(0X10, ctx->r17) = ctx->r14;
    // 0x8023467C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80234680: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80234684: b           L_802345A0
    // 0x80234688: sb          $t8, 0x11($s1)
    MEM_B(0X11, ctx->r17) = ctx->r24;
        goto L_802345A0;
    // 0x80234688: sb          $t8, 0x11($s1)
    MEM_B(0X11, ctx->r17) = ctx->r24;
L_8023468C:
    // 0x8023468C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x80234690: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x80234694: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80234698: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8023469C: b           L_802345A0
    // 0x802346A0: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
        goto L_802345A0;
    // 0x802346A0: sb          $t0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r8;
L_802346A4:
    // 0x802346A4: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x802346A8: and         $s0, $t1, $s3
    ctx->r16 = ctx->r9 & ctx->r19;
    // 0x802346AC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802346B0: lw          $a1, -0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X4);
    // 0x802346B4: jal         0x802341E0
    // 0x802346B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_802341E0(rdram, ctx);
        goto after_1;
    // 0x802346B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x802346BC: b           L_802345A4
    // 0x802346C0: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_802345A4;
    // 0x802346C0: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_802346C4:
    // 0x802346C4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802346C8: jal         0x80231A24
    // 0x802346CC: addiu       $a0, $a0, 0x52CC
    ctx->r4 = ADD32(ctx->r4, 0X52CC);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x802346CC: addiu       $a0, $a0, 0x52CC
    ctx->r4 = ADD32(ctx->r4, 0X52CC);
    after_2:
    // 0x802346D0: b           L_802345A4
    // 0x802346D4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_802345A4;
    // 0x802346D4: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_802346D8:
    // 0x802346D8: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x802346DC: and         $s0, $t2, $s3
    ctx->r16 = ctx->r10 & ctx->r19;
    // 0x802346E0: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x802346E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802346E8: andi        $v0, $t3, 0xFFFF
    ctx->r2 = ctx->r11 & 0XFFFF;
    // 0x802346EC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x802346F0: beq         $s7, $v0, L_802345A0
    if (ctx->r23 == ctx->r2) {
        // 0x802346F4: sh          $t3, 0xC($s1)
        MEM_H(0XC, ctx->r17) = ctx->r11;
            goto L_802345A0;
    }
    // 0x802346F4: sh          $t3, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r11;
    // 0x802346F8: lw          $t4, 0x0($fp)
    ctx->r12 = MEM_W(ctx->r30, 0X0);
    // 0x802346FC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80234700: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80234704: lw          $t5, 0x2C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X2C);
    // 0x80234708: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8023470C: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x80234710: bne         $s2, $zero, L_80234730
    if (ctx->r18 != 0) {
        // 0x80234714: nop
    
            goto L_80234730;
    }
    // 0x80234714: nop

    // 0x80234718: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8023471C: jal         0x80231A24
    // 0x80234720: addiu       $a0, $a0, 0x52FC
    ctx->r4 = ADD32(ctx->r4, 0X52FC);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80234720: addiu       $a0, $a0, 0x52FC
    ctx->r4 = ADD32(ctx->r4, 0X52FC);
    after_3:
    // 0x80234724: addiu       $t8, $zero, 0xFFF
    ctx->r24 = ADD32(0, 0XFFF);
    // 0x80234728: b           L_802345A0
    // 0x8023472C: sh          $t8, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r24;
        goto L_802345A0;
    // 0x8023472C: sh          $t8, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r24;
L_80234730:
    // 0x80234730: jal         0x80233AB8
    // 0x80234734: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80233AB8(rdram, ctx);
        goto after_4;
    // 0x80234734: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x80234738: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8023473C: jal         0x80233BA0
    // 0x80234740: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80233BA0(rdram, ctx);
        goto after_5;
    // 0x80234740: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x80234744: b           L_802345A4
    // 0x80234748: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_802345A4;
    // 0x80234748: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_8023474C:
    // 0x8023474C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    // 0x80234750: and         $s0, $t9, $s3
    ctx->r16 = ctx->r25 & ctx->r19;
    // 0x80234754: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80234758: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8023475C: bnel        $t0, $zero, L_80234778
    if (ctx->r8 != 0) {
        // 0x80234760: lhu         $t3, 0x2C($s1)
        ctx->r11 = MEM_HU(ctx->r17, 0X2C);
            goto L_80234778;
    }
    goto skip_2;
    // 0x80234760: lhu         $t3, 0x2C($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X2C);
    skip_2:
    // 0x80234764: lhu         $t1, 0x2C($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X2C);
    // 0x80234768: and         $t2, $t1, $s6
    ctx->r10 = ctx->r9 & ctx->r22;
    // 0x8023476C: b           L_802345A0
    // 0x80234770: sh          $t2, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r10;
        goto L_802345A0;
    // 0x80234770: sh          $t2, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r10;
    // 0x80234774: lhu         $t3, 0x2C($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X2C);
L_80234778:
    // 0x80234778: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x8023477C: b           L_802345A0
    // 0x80234780: sh          $t4, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r12;
        goto L_802345A0;
    // 0x80234780: sh          $t4, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r12;
L_80234784:
    // 0x80234784: addiu       $t5, $s0, 0x3
    ctx->r13 = ADD32(ctx->r16, 0X3);
    // 0x80234788: and         $s0, $t5, $s3
    ctx->r16 = ctx->r13 & ctx->r19;
    // 0x8023478C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80234790: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80234794: bnel        $t6, $zero, L_802347B0
    if (ctx->r14 != 0) {
        // 0x80234798: lhu         $t9, 0x2C($s1)
        ctx->r25 = MEM_HU(ctx->r17, 0X2C);
            goto L_802347B0;
    }
    goto skip_3;
    // 0x80234798: lhu         $t9, 0x2C($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X2C);
    skip_3:
    // 0x8023479C: lhu         $t7, 0x2C($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X2C);
    // 0x802347A0: and         $t8, $t7, $s5
    ctx->r24 = ctx->r15 & ctx->r21;
    // 0x802347A4: b           L_802345A0
    // 0x802347A8: sh          $t8, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r24;
        goto L_802345A0;
    // 0x802347A8: sh          $t8, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r24;
    // 0x802347AC: lhu         $t9, 0x2C($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0X2C);
L_802347B0:
    // 0x802347B0: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x802347B4: b           L_802345A0
    // 0x802347B8: sh          $t0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r8;
        goto L_802345A0;
    // 0x802347B8: sh          $t0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r8;
L_802347BC:
    // 0x802347BC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802347C0: jal         0x80231A24
    // 0x802347C4: addiu       $a0, $a0, 0x5328
    ctx->r4 = ADD32(ctx->r4, 0X5328);
    func_80231A24(rdram, ctx);
        goto after_6;
    // 0x802347C4: addiu       $a0, $a0, 0x5328
    ctx->r4 = ADD32(ctx->r4, 0X5328);
    after_6:
    // 0x802347C8: b           L_802345A4
    // 0x802347CC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_802345A4;
    // 0x802347CC: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_802347D0:
    // 0x802347D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802347D4:
    // 0x802347D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802347D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802347DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802347E0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802347E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802347E8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802347EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802347F0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802347F4: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802347F8: jr          $ra
    // 0x802347FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x802347FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80237F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237F70: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80237F74: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80237F78: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80237F7C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80237F80: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x80237F84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80237F88: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80237F8C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80237F90: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x80237F94: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80237F98: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80237F9C: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
L_80237FA0:
    // 0x80237FA0: lw          $t9, 0x18($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X18);
    // 0x80237FA4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80237FA8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80237FAC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80237FB0: lw          $t1, 0x58($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X58);
    // 0x80237FB4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80237FB8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80237FBC: sw          $t1, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r9;
    // 0x80237FC0: lbu         $t2, 0x98($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X98);
    // 0x80237FC4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80237FC8: sb          $t2, 0x8A($a3)
    MEM_B(0X8A, ctx->r7) = ctx->r10;
    // 0x80237FCC: lbu         $t3, 0xA6($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XA6);
    // 0x80237FD0: sb          $t3, 0x9A($a3)
    MEM_B(0X9A, ctx->r7) = ctx->r11;
    // 0x80237FD4: lw          $t4, 0xB0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XB0);
    // 0x80237FD8: sw          $t4, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r12;
    // 0x80237FDC: lw          $t5, 0x14($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X14);
    // 0x80237FE0: sw          $t5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r13;
    // 0x80237FE4: lw          $t6, 0x54($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X54);
    // 0x80237FE8: sw          $t6, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r14;
    // 0x80237FEC: lbu         $t7, 0x97($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X97);
    // 0x80237FF0: sb          $t7, 0x8B($a3)
    MEM_B(0X8B, ctx->r7) = ctx->r15;
    // 0x80237FF4: lbu         $t8, 0xA7($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XA7);
    // 0x80237FF8: sb          $t8, 0x9B($a3)
    MEM_B(0X9B, ctx->r7) = ctx->r24;
    // 0x80237FFC: lw          $t9, 0xB4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XB4);
    // 0x80238000: bne         $v0, $a0, L_80237FA0
    if (ctx->r2 != ctx->r4) {
        // 0x80238004: sw          $t9, 0xA8($v1)
        MEM_W(0XA8, ctx->r3) = ctx->r25;
            goto L_80237FA0;
    }
    // 0x80238004: sw          $t9, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r25;
    // 0x80238008: jr          $ra
    // 0x8023800C: nop

    return;
    // 0x8023800C: nop

;}
RECOMP_FUNC void func_8021F1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F1B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F1B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021F1B8: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x8021F1BC: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x8021F1C0: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F1C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F1C8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021F1CC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8021F1D0: jal         0x8022BA58
    // 0x8021F1D4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021F1D4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8021F1D8: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F1DC: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x8021F1E0: addiu       $s1, $s1, 0x1B50
    ctx->r17 = ADD32(ctx->r17, 0X1B50);
    // 0x8021F1E4: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x8021F1E8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8021F1EC: jal         0x8022BA58
    // 0x8021F1F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x8021F1F0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x8021F1F4: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F1F8: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8021F1FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8021F200: sll         $t8, $a2, 4
    ctx->r24 = S32(ctx->r6 << 4);
    // 0x8021F204: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8021F208: jal         0x8022B780
    // 0x8021F20C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_2;
    // 0x8021F20C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8021F210: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F214: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8021F218: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021F21C: sll         $t9, $a2, 4
    ctx->r25 = S32(ctx->r6 << 4);
    // 0x8021F220: jal         0x8022B780
    // 0x8021F224: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8022B780(rdram, ctx);
        goto after_3;
    // 0x8021F224: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_3:
    // 0x8021F228: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8021F22C: lhu         $t0, -0x178C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X178C);
    // 0x8021F230: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8021F234: addiu       $v0, $v0, 0x1B5C
    ctx->r2 = ADD32(ctx->r2, 0X1B5C);
    // 0x8021F238: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8021F23C: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x8021F240: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F244: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8021F248: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8021F24C: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x8021F250: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8021F254: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8021F258: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8021F25C: sw          $t4, 0x1B58($at)
    MEM_W(0X1B58, ctx->r1) = ctx->r12;
    // 0x8021F260: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F264: blez        $a1, L_8021F2B8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021F268: nop
    
            goto L_8021F2B8;
    }
    // 0x8021F268: nop

    // 0x8021F26C: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_8021F270:
    // 0x8021F270: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8021F274: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021F278: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x8021F27C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8021F280: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8021F284: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8021F288: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x8021F28C: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8021F290: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8021F294: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x8021F298: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x8021F29C: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x8021F2A0: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x8021F2A4: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F2A8: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8021F2AC: bnel        $at, $zero, L_8021F270
    if (ctx->r1 != 0) {
        // 0x8021F2B0: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_8021F270;
    }
    goto skip_0;
    // 0x8021F2B0: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x8021F2B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8021F2B8:
    // 0x8021F2B8: blez        $a1, L_8021F308
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021F2BC: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_8021F308;
    }
    // 0x8021F2BC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8021F2C0: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
L_8021F2C4:
    // 0x8021F2C4: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x8021F2C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8021F2CC: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8021F2D0: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8021F2D4: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x8021F2D8: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8021F2DC: sh          $v1, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r3;
    // 0x8021F2E0: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x8021F2E4: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8021F2E8: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x8021F2EC: sb          $v1, 0xD($v0)
    MEM_B(0XD, ctx->r2) = ctx->r3;
    // 0x8021F2F0: sb          $v1, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r3;
    // 0x8021F2F4: sb          $v1, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r3;
    // 0x8021F2F8: lhu         $t9, 0x24($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X24);
    // 0x8021F2FC: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8021F300: bnel        $at, $zero, L_8021F2C4
    if (ctx->r1 != 0) {
        // 0x8021F304: lw          $t7, 0x4($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X4);
            goto L_8021F2C4;
    }
    goto skip_1;
    // 0x8021F304: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    skip_1:
L_8021F308:
    // 0x8021F308: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021F30C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8021F310: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8021F314: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F318: addiu       $v0, $v0, 0x1B68
    ctx->r2 = ADD32(ctx->r2, 0X1B68);
    // 0x8021F31C: sh          $zero, 0x1B5E($at)
    MEM_H(0X1B5E, ctx->r1) = 0;
    // 0x8021F320: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8021F324: lh          $t1, 0x0($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X0);
    // 0x8021F328: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F32C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8021F330: sh          $t1, 0x1B66($at)
    MEM_H(0X1B66, ctx->r1) = ctx->r9;
    // 0x8021F334: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F338: swc1        $f0, 0x1B6C($at)
    MEM_W(0X1B6C, ctx->r1) = ctx->f0.u32l;
    // 0x8021F33C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F340: swc1        $f0, 0x1B70($at)
    MEM_W(0X1B70, ctx->r1) = ctx->f0.u32l;
    // 0x8021F344: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021F348: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021F34C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021F350: sb          $zero, 0x1B78($at)
    MEM_B(0X1B78, ctx->r1) = 0;
    // 0x8021F354: jr          $ra
    // 0x8021F358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8021F358: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802479E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802479E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802479E4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802479E8: addiu       $t6, $t6, 0x5F80
    ctx->r14 = ADD32(ctx->r14, 0X5F80);
    // 0x802479EC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x802479F0: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x802479F4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_802479F8:
    // 0x802479F8: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x802479FC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80247A00: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247A04: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80247A08: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80247A0C: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80247A10: sw          $t7, 0x5F80($at)
    MEM_W(0X5F80, ctx->r1) = ctx->r15;
    // 0x80247A14: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80247A18: slti        $at, $t1, 0x10
    ctx->r1 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80247A1C: bne         $at, $zero, L_802479F8
    if (ctx->r1 != 0) {
        // 0x80247A20: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_802479F8;
    }
    // 0x80247A20: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80247A24: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80247A28: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80247A2C: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x80247A30: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80247A34: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80247A38: sw          $t2, 0x5FBC($at)
    MEM_W(0X5FBC, ctx->r1) = ctx->r10;
    // 0x80247A3C: sb          $t3, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r11;
    // 0x80247A40: sb          $t4, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r12;
    // 0x80247A44: sb          $t5, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r13;
    // 0x80247A48: sb          $a0, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r4;
    // 0x80247A4C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247A50:
    // 0x80247A50: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80247A54: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x80247A58: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80247A5C: addu        $t7, $sp, $t8
    ctx->r15 = ADD32(ctx->r29, ctx->r24);
    // 0x80247A60: sb          $t6, 0xC($t7)
    MEM_B(0XC, ctx->r15) = ctx->r14;
    // 0x80247A64: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80247A68: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80247A6C: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80247A70: bne         $at, $zero, L_80247A50
    if (ctx->r1 != 0) {
        // 0x80247A74: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_80247A50;
    }
    // 0x80247A74: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x80247A78: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80247A7C:
    // 0x80247A7C: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x80247A80: sb          $zero, 0x0($t1)
    MEM_B(0X0, ctx->r9) = 0;
    // 0x80247A84: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80247A88: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80247A8C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80247A90: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x80247A94: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80247A98: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x80247A9C: bne         $at, $zero, L_80247A7C
    if (ctx->r1 != 0) {
        // 0x80247AA0: sw          $t3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r11;
            goto L_80247A7C;
    }
    // 0x80247AA0: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80247AA4: addiu       $t8, $sp, 0x8
    ctx->r24 = ADD32(ctx->r29, 0X8);
    // 0x80247AA8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80247AAC: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80247AB0: addiu       $t2, $zero, 0xFE
    ctx->r10 = ADD32(0, 0XFE);
    // 0x80247AB4: swl         $at, 0x0($t6)
    do_swl(rdram, 0X0, ctx->r14, ctx->r1);
    // 0x80247AB8: swr         $at, 0x3($t6)
    do_swr(rdram, 0X3, ctx->r14, ctx->r1);
    // 0x80247ABC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80247AC0: swl         $t9, 0x4($t6)
    do_swl(rdram, 0X4, ctx->r14, ctx->r25);
    // 0x80247AC4: swr         $t9, 0x7($t6)
    do_swr(rdram, 0X7, ctx->r14, ctx->r25);
    // 0x80247AC8: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80247ACC: swl         $at, 0x8($t6)
    do_swl(rdram, 0X8, ctx->r14, ctx->r1);
    // 0x80247AD0: swr         $at, 0xB($t6)
    do_swr(rdram, 0XB, ctx->r14, ctx->r1);
    // 0x80247AD4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80247AD8: addiu       $t1, $t0, 0xC
    ctx->r9 = ADD32(ctx->r8, 0XC);
    // 0x80247ADC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80247AE0: sb          $t2, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r10;
    // 0x80247AE4: jr          $ra
    // 0x80247AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80247AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022331C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022331C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80223320: addiu       $v1, $v1, 0x44B0
    ctx->r3 = ADD32(ctx->r3, 0X44B0);
    // 0x80223324: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80223328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022332C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223330: slti        $at, $v0, 0x1F
    ctx->r1 = SIGNED(ctx->r2) < 0X1F ? 1 : 0;
    // 0x80223334: bne         $at, $zero, L_80223350
    if (ctx->r1 != 0) {
        // 0x80223338: lui         $t6, 0x8027
        ctx->r14 = S32(0X8027 << 16);
            goto L_80223350;
    }
    // 0x80223338: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8022333C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80223340: jal         0x80231A24
    // 0x80223344: addiu       $a0, $a0, 0x3900
    ctx->r4 = ADD32(ctx->r4, 0X3900);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80223344: addiu       $a0, $a0, 0x3900
    ctx->r4 = ADD32(ctx->r4, 0X3900);
    after_0:
    // 0x80223348: b           L_80223370
    // 0x8022334C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80223370;
    // 0x8022334C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80223350:
    // 0x80223350: lw          $t6, 0x4348($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4348);
    // 0x80223354: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80223358: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8022335C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80223360: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80223364: sw          $t6, 0x4430($at)
    MEM_W(0X4430, ctx->r1) = ctx->r14;
    // 0x80223368: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x8022336C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80223370:
    // 0x80223370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80223374: jr          $ra
    // 0x80223378: nop

    return;
    // 0x80223378: nop

;}
RECOMP_FUNC void func_80205640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205640: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80205644: lw          $t6, -0x4674($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4674);
    // 0x80205648: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8020564C: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x80205650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80205654: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80205658: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x8020565C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205660: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80205664: beq         $t8, $zero, L_80205670
    if (ctx->r24 == 0) {
        // 0x80205668: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80205670;
    }
    // 0x80205668: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8020566C: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
L_80205670:
    // 0x80205670: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    // 0x80205674: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80205678: jal         0x80237F60
    // 0x8020567C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80237F60(rdram, ctx);
        goto after_0;
    // 0x8020567C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80205680: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80205684: beq         $v0, $zero, L_802056A0
    if (ctx->r2 == 0) {
        // 0x80205688: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_802056A0;
    }
    // 0x80205688: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8020568C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80205690: jal         0x802057FC
    // 0x80205694: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_802057FC(rdram, ctx);
        goto after_1;
    // 0x80205694: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x80205698: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8020569C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
L_802056A0:
    // 0x802056A0: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x802056A4: lw          $t9, -0x4674($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4674);
    // 0x802056A8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802056AC: lw          $a0, -0x4670($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4670);
    // 0x802056B0: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x802056B4: jal         0x8022B460
    // 0x802056B8: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    func_8022B460(rdram, ctx);
        goto after_2;
    // 0x802056B8: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    after_2:
    // 0x802056BC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802056C0: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x802056C4: lw          $a1, -0x4670($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4670);
    // 0x802056C8: jal         0x802384CC
    // 0x802056CC: addiu       $a0, $a0, -0x4660
    ctx->r4 = ADD32(ctx->r4, -0X4660);
    func_802384CC(rdram, ctx);
        goto after_3;
    // 0x802056CC: addiu       $a0, $a0, -0x4660
    ctx->r4 = ADD32(ctx->r4, -0X4660);
    after_3:
    // 0x802056D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802056D4: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x802056D8: lw          $a1, -0x4680($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X4680);
    // 0x802056DC: jal         0x80237F20
    // 0x802056E0: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80237F20(rdram, ctx);
        goto after_4;
    // 0x802056E0: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_4:
    // 0x802056E4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802056E8: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x802056EC: addiu       $a1, $a1, -0x4660
    ctx->r5 = ADD32(ctx->r5, -0X4660);
    // 0x802056F0: jal         0x80238A30
    // 0x802056F4: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    func_80238A30(rdram, ctx);
        goto after_5;
    // 0x802056F4: lw          $a0, -0x1A50($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A50);
    after_5:
    // 0x802056F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802056FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80205700: jr          $ra
    // 0x80205704: nop

    return;
    // 0x80205704: nop

;}
RECOMP_FUNC void func_8023DFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023DFA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023DFA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023DFA8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023DFAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023DFB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023DFB4: jal         0x80241760
    // 0x8023DFB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023DFB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023DFBC: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023DFC0: lw          $t7, 0x1774($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1774);
    // 0x8023DFC4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8023DFC8: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x8023DFCC: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x8023DFD0: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x8023DFD4: lw          $t9, 0x1774($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1774);
    // 0x8023DFD8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DFDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023DFE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8023DFE4: sw          $t8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r24;
    // 0x8023DFE8: lw          $t1, 0x1774($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1774);
    // 0x8023DFEC: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023DFF0: jal         0x80241780
    // 0x8023DFF4: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023DFF4: sh          $t0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r8;
    after_1:
    // 0x8023DFF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DFFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023E000: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023E004: jr          $ra
    // 0x8023E008: nop

    return;
    // 0x8023E008: nop

;}
RECOMP_FUNC void func_802175F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802175F4: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x802175F8: lw          $t8, 0x130($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X130);
    // 0x802175FC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80217600: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80217604: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x80217608: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x8021760C: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x80217610: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x80217614: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x80217618: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x8021761C: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x80217620: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x80217624: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x80217628: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x8021762C: sdc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X78, ctx->r29);
    // 0x80217630: sdc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X70, ctx->r29);
    // 0x80217634: sdc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X68, ctx->r29);
    // 0x80217638: sdc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X60, ctx->r29);
    // 0x8021763C: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x80217640: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x80217644: swc1        $f12, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f12.u32l;
    // 0x80217648: swc1        $f14, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f14.u32l;
    // 0x8021764C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80217650: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80217654: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80217658: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8021765C: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80217660: lw          $s7, 0x0($t1)
    ctx->r23 = MEM_W(ctx->r9, 0X0);
    // 0x80217664: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80217668: mtc1        $a2, $f28
    ctx->f28.u32l = ctx->r6;
    // 0x8021766C: lw          $v0, 0x8($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X8);
    // 0x80217670: mtc1        $a3, $f30
    ctx->f30.u32l = ctx->r7;
    // 0x80217674: lbu         $t2, 0x4($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X4);
    // 0x80217678: sh          $t2, 0x116($sp)
    MEM_H(0X116, ctx->r29) = ctx->r10;
    // 0x8021767C: lwc1        $f6, 0x20($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80217680: sw          $v0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r2;
    // 0x80217684: jal         0x80228CE0
    // 0x80217688: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    func_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80217688: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    after_0:
    // 0x8021768C: lh          $v1, 0x116($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X116);
    // 0x80217690: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80217694: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80217698: blez        $v1, L_802178CC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8021769C: lwc1        $f26, 0x12C($sp)
        ctx->f26.u32l = MEM_W(ctx->r29, 0X12C);
            goto L_802178CC;
    }
    // 0x8021769C: lwc1        $f26, 0x12C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x802176A0: lui         $fp, 0x8026
    ctx->r30 = S32(0X8026 << 16);
    // 0x802176A4: addiu       $fp, $fp, -0x3C6C
    ctx->r30 = ADD32(ctx->r30, -0X3C6C);
    // 0x802176A8: lwc1        $f24, 0x128($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X128);
    // 0x802176AC: lwc1        $f20, 0x134($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X134);
    // 0x802176B0: addiu       $s6, $sp, 0xC0
    ctx->r22 = ADD32(ctx->r29, 0XC0);
    // 0x802176B4: lw          $v0, 0x130($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X130);
    // 0x802176B8: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
L_802176BC:
    // 0x802176BC: lw          $t5, 0x1C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X1C);
    // 0x802176C0: sll         $s5, $s3, 3
    ctx->r21 = S32(ctx->r19 << 3);
    // 0x802176C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802176C8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x802176CC: addu        $s5, $s5, $s3
    ctx->r21 = ADD32(ctx->r21, ctx->r19);
    // 0x802176D0: sllv        $t8, $t6, $s3
    ctx->r24 = S32(ctx->r14 << (ctx->r19 & 31));
    // 0x802176D4: sll         $s5, $s5, 2
    ctx->r21 = S32(ctx->r21 << 2);
    // 0x802176D8: and         $t9, $t5, $t8
    ctx->r25 = ctx->r13 & ctx->r24;
    // 0x802176DC: beq         $t9, $zero, L_802176F0
    if (ctx->r25 == 0) {
        // 0x802176E0: addu        $s4, $t4, $s5
        ctx->r20 = ADD32(ctx->r12, ctx->r21);
            goto L_802176F0;
    }
    // 0x802176E0: addu        $s4, $t4, $s5
    ctx->r20 = ADD32(ctx->r12, ctx->r21);
    // 0x802176E4: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x802176E8: bne         $at, $zero, L_80217704
    if (ctx->r1 != 0) {
        // 0x802176EC: nop
    
            goto L_80217704;
    }
    // 0x802176EC: nop

L_802176F0:
    // 0x802176F0: lbu         $t7, 0x7($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X7);
    // 0x802176F4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802176F8: andi        $t0, $t7, 0x1
    ctx->r8 = ctx->r15 & 0X1;
    // 0x802176FC: beq         $t0, $zero, L_8021770C
    if (ctx->r8 == 0) {
        // 0x80217700: nop
    
            goto L_8021770C;
    }
    // 0x80217700: nop

L_80217704:
    // 0x80217704: b           L_8021770C
    // 0x80217708: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8021770C;
    // 0x80217708: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8021770C:
    // 0x8021770C: bne         $s0, $zero, L_80217724
    if (ctx->r16 != 0) {
        // 0x80217710: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80217724;
    }
    // 0x80217710: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80217714: lbu         $t1, 0x7($s4)
    ctx->r9 = MEM_BU(ctx->r20, 0X7);
    // 0x80217718: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x8021771C: bnel        $t2, $zero, L_802178B4
    if (ctx->r10 != 0) {
        // 0x80217720: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_802178B4;
    }
    goto skip_0;
    // 0x80217720: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_80217724:
    // 0x80217724: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80217728: sll         $t4, $s3, 6
    ctx->r12 = S32(ctx->r19 << 6);
    // 0x8021772C: or          $t9, $sp, $zero
    ctx->r25 = ctx->r29 | 0;
    // 0x80217730: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x80217734: addiu       $t8, $t6, 0x3C
    ctx->r24 = ADD32(ctx->r14, 0X3C);
L_80217738:
    // 0x80217738: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8021773C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80217740: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80217744: sw          $at, -0x4($t9)
    MEM_W(-0X4, ctx->r25) = ctx->r1;
    // 0x80217748: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x8021774C: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x80217750: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80217754: bne         $t6, $t8, L_80217738
    if (ctx->r14 != ctx->r24) {
        // 0x80217758: sw          $at, 0x4($t9)
        MEM_W(0X4, ctx->r25) = ctx->r1;
            goto L_80217738;
    }
    // 0x80217758: sw          $at, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r1;
    // 0x8021775C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80217760: addiu       $s1, $v1, -0x1
    ctx->r17 = ADD32(ctx->r3, -0X1);
    // 0x80217764: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x80217768: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x8021776C: jal         0x80228F38
    // 0x80217770: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    func_80228F38(rdram, ctx);
        goto after_1;
    // 0x80217770: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
    // 0x80217774: bne         $s3, $zero, L_802177C4
    if (ctx->r19 != 0) {
        // 0x80217778: lwc1        $f10, 0xF0($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
            goto L_802177C4;
    }
    // 0x80217778: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x8021777C: lwc1        $f8, 0x20($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X20);
    // 0x80217780: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80217784: div.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80217788: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021778C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80217790: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80217794: jal         0x8022A210
    // 0x80217798: nop

    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x80217798: nop

    after_2:
    // 0x8021779C: lwc1        $f10, 0xF0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x802177A0: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x802177A4: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x802177A8: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x802177AC: div.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x802177B0: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x802177B4: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x802177B8: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x802177BC: b           L_802177E8
    // 0x802177C0: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
        goto L_802177E8;
    // 0x802177C0: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
L_802177C4:
    // 0x802177C4: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x802177C8: lwc1        $f18, 0xF4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XF4);
    // 0x802177CC: lwc1        $f6, 0xF8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x802177D0: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x802177D4: nop

    // 0x802177D8: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x802177DC: swc1        $f16, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f16.u32l;
    // 0x802177E0: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    // 0x802177E4: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
L_802177E8:
    // 0x802177E8: jal         0x80228D0C
    // 0x802177EC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80228D0C(rdram, ctx);
        goto after_3;
    // 0x802177EC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x802177F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x802177F4: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x802177F8: beq         $s0, $zero, L_80217848
    if (ctx->r16 == 0) {
        // 0x802177FC: sra         $s2, $t7, 16
        ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
            goto L_80217848;
    }
    // 0x802177FC: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80217800: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x80217804: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80217808: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8021780C: sll         $t3, $s3, 24
    ctx->r11 = S32(ctx->r19 << 24);
    // 0x80217810: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x80217814: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x80217818: jal         0x80228CF0
    // 0x8021781C: sw          $t4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r12;
    func_80228CF0(rdram, ctx);
        goto after_4;
    // 0x8021781C: sw          $t4, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r12;
    after_4:
    // 0x80217820: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x80217824: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x80217828: lwc1        $f12, 0x118($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8021782C: lwc1        $f14, 0x11C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x80217830: swc1        $f24, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f24.u32l;
    // 0x80217834: swc1        $f26, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f26.u32l;
    // 0x80217838: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8021783C: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x80217840: jal         0x80219500
    // 0x80217844: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    func_80219500(rdram, ctx);
        goto after_5;
    // 0x80217844: sw          $s7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r23;
    after_5:
L_80217848:
    // 0x80217848: bne         $s3, $s1, L_80217858
    if (ctx->r19 != ctx->r17) {
        // 0x8021784C: lw          $t8, 0x108($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X108);
            goto L_80217858;
    }
    // 0x8021784C: lw          $t8, 0x108($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X108);
    // 0x80217850: b           L_802178CC
    // 0x80217854: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_802178CC;
    // 0x80217854: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80217858:
    // 0x80217858: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x8021785C: lbu         $t5, 0x6($s4)
    ctx->r13 = MEM_BU(ctx->r20, 0X6);
    // 0x80217860: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80217864: addu        $t9, $t6, $s5
    ctx->r25 = ADD32(ctx->r14, ctx->r21);
    // 0x80217868: lbu         $t7, 0x2A($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X2A);
    // 0x8021786C: subu        $s1, $t5, $t7
    ctx->r17 = SUB32(ctx->r13, ctx->r15);
    // 0x80217870: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80217874: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80217878: bltzl       $s1, L_802178AC
    if (SIGNED(ctx->r17) < 0) {
        // 0x8021787C: lh          $v1, 0x116($sp)
        ctx->r3 = MEM_H(ctx->r29, 0X116);
            goto L_802178AC;
    }
    goto skip_1;
    // 0x8021787C: lh          $v1, 0x116($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X116);
    skip_1:
L_80217880:
    // 0x80217880: jal         0x80228D9C
    // 0x80217884: nop

    func_80228D9C(rdram, ctx);
        goto after_6;
    // 0x80217884: nop

    after_6:
    // 0x80217888: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021788C: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x80217890: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80217894: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80217898: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x8021789C: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x802178A0: beq         $at, $zero, L_80217880
    if (ctx->r1 == 0) {
        // 0x802178A4: sra         $s2, $t2, 16
        ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
            goto L_80217880;
    }
    // 0x802178A4: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802178A8: lh          $v1, 0x116($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X116);
L_802178AC:
    // 0x802178AC: lw          $v0, 0x130($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X130);
    // 0x802178B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_802178B4:
    // 0x802178B4: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x802178B8: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802178BC: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802178C0: bnel        $at, $zero, L_802176BC
    if (ctx->r1 != 0) {
        // 0x802178C4: lw          $t3, 0x108($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X108);
            goto L_802176BC;
    }
    goto skip_2;
    // 0x802178C4: lw          $t3, 0x108($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X108);
    skip_2:
    // 0x802178C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_802178CC:
    // 0x802178CC: blezl       $s2, L_802178F8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x802178D0: lw          $ra, 0xA4($sp)
        ctx->r31 = MEM_W(ctx->r29, 0XA4);
            goto L_802178F8;
    }
    goto skip_3;
    // 0x802178D0: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    skip_3:
L_802178D4:
    // 0x802178D4: jal         0x80228D9C
    // 0x802178D8: nop

    func_80228D9C(rdram, ctx);
        goto after_7;
    // 0x802178D8: nop

    after_7:
    // 0x802178DC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x802178E0: sll         $t5, $s3, 16
    ctx->r13 = S32(ctx->r19 << 16);
    // 0x802178E4: sra         $s3, $t5, 16
    ctx->r19 = S32(SIGNED(ctx->r13) >> 16);
    // 0x802178E8: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x802178EC: bne         $at, $zero, L_802178D4
    if (ctx->r1 != 0) {
        // 0x802178F0: nop
    
            goto L_802178D4;
    }
    // 0x802178F0: nop

    // 0x802178F4: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
L_802178F8:
    // 0x802178F8: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x802178FC: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x80217900: ldc1        $f24, 0x60($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X60);
    // 0x80217904: ldc1        $f26, 0x68($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X68);
    // 0x80217908: ldc1        $f28, 0x70($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X70);
    // 0x8021790C: ldc1        $f30, 0x78($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X78);
    // 0x80217910: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x80217914: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x80217918: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x8021791C: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x80217920: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x80217924: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x80217928: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x8021792C: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x80217930: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x80217934: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    // 0x80217938: jr          $ra
    // 0x8021793C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8021793C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
;}
RECOMP_FUNC void func_8022A590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A590: lwc1        $f0, 0x0($a2)
    ctx->f0.u32l = MEM_W(ctx->r6, 0X0);
    // 0x8022A594: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A598: lwc1        $f2, 0x4($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X4);
    // 0x8022A59C: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A5A0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8022A5A4: lwc1        $f12, 0x8($a2)
    ctx->f12.u32l = MEM_W(ctx->r6, 0X8);
    // 0x8022A5A8: lwc1        $f18, 0x20($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A5AC: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022A5B0: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8022A5B4: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8022A5B8: add.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x8022A5BC: swc1        $f8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f8.u32l;
    // 0x8022A5C0: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A5C4: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A5C8: lwc1        $f8, 0x24($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A5CC: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8022A5D0: nop

    // 0x8022A5D4: mul.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x8022A5D8: add.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8022A5DC: mul.s       $f6, $f8, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8022A5E0: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8022A5E4: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x8022A5E8: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A5EC: lwc1        $f8, 0x18($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A5F0: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A5F4: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8022A5F8: nop

    // 0x8022A5FC: mul.s       $f6, $f2, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8022A600: add.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8022A604: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8022A608: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8022A60C: jr          $ra
    // 0x8022A610: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x8022A610: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_802088E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802088E4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802088E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802088EC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802088F0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802088F4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802088F8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802088FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80208900: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80208904: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80208908: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8020890C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80208910: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80208914: lhu         $v0, 0xC($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC);
    // 0x80208918: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8020891C: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x80208920: blez        $v0, L_80208AD8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80208924: or          $s7, $a2, $zero
        ctx->r23 = ctx->r6 | 0;
            goto L_80208AD8;
    }
    // 0x80208924: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x80208928: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8020892C: andi        $fp, $a2, 0x200
    ctx->r30 = ctx->r6 & 0X200;
    // 0x80208930: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80208934: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
L_80208938:
    // 0x80208938: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x8020893C: addu        $s5, $t6, $s6
    ctx->r21 = ADD32(ctx->r14, ctx->r22);
    // 0x80208940: lw          $s0, 0x0($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X0);
    // 0x80208944: andi        $t7, $s0, 0xFFF
    ctx->r15 = ctx->r16 & 0XFFF;
    // 0x80208948: beq         $fp, $zero, L_80208A00
    if (ctx->r30 == 0) {
        // 0x8020894C: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_80208A00;
    }
    // 0x8020894C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80208950: bne         $t7, $at, L_80208970
    if (ctx->r15 != ctx->r1) {
        // 0x80208954: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80208970;
    }
    // 0x80208954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80208958: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8020895C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208960: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208964: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208968: b           L_80208AC8
    // 0x8020896C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208AC8;
    // 0x8020896C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208970:
    // 0x80208970: jal         0x802331E0
    // 0x80208974: andi        $s2, $s3, 0x1
    ctx->r18 = ctx->r19 & 0X1;
    func_802331E0(rdram, ctx);
        goto after_0;
    // 0x80208974: andi        $s2, $s3, 0x1
    ctx->r18 = ctx->r19 & 0X1;
    after_0:
    // 0x80208978: beq         $s2, $zero, L_802089A4
    if (ctx->r18 == 0) {
        // 0x8020897C: andi        $t8, $s3, 0x2
        ctx->r24 = ctx->r19 & 0X2;
            goto L_802089A4;
    }
    // 0x8020897C: andi        $t8, $s3, 0x2
    ctx->r24 = ctx->r19 & 0X2;
    // 0x80208980: beq         $v0, $s4, L_802089A4
    if (ctx->r2 == ctx->r20) {
        // 0x80208984: nop
    
            goto L_802089A4;
    }
    // 0x80208984: nop

    // 0x80208988: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8020898C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208990: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208994: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208998: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8020899C: b           L_80208AC8
    // 0x802089A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208AC8;
    // 0x802089A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_802089A4:
    // 0x802089A4: beq         $t8, $zero, L_802089D0
    if (ctx->r24 == 0) {
        // 0x802089A8: slt         $at, $s4, $v0
        ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_802089D0;
    }
    // 0x802089A8: slt         $at, $s4, $v0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802089AC: beql        $at, $zero, L_802089D4
    if (ctx->r1 == 0) {
        // 0x802089B0: andi        $t9, $s3, 0x4
        ctx->r25 = ctx->r19 & 0X4;
            goto L_802089D4;
    }
    goto skip_0;
    // 0x802089B0: andi        $t9, $s3, 0x4
    ctx->r25 = ctx->r19 & 0X4;
    skip_0:
    // 0x802089B4: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802089B8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802089BC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089C0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802089C4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089C8: b           L_80208AC8
    // 0x802089CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208AC8;
    // 0x802089CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_802089D0:
    // 0x802089D0: andi        $t9, $s3, 0x4
    ctx->r25 = ctx->r19 & 0X4;
L_802089D4:
    // 0x802089D4: beq         $t9, $zero, L_80208A00
    if (ctx->r25 == 0) {
        // 0x802089D8: slt         $at, $v0, $s4
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_80208A00;
    }
    // 0x802089D8: slt         $at, $v0, $s4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x802089DC: beql        $at, $zero, L_80208A04
    if (ctx->r1 == 0) {
        // 0x802089E0: andi        $t0, $s7, 0x400
        ctx->r8 = ctx->r23 & 0X400;
            goto L_80208A04;
    }
    goto skip_1;
    // 0x802089E0: andi        $t0, $s7, 0x400
    ctx->r8 = ctx->r23 & 0X400;
    skip_1:
    // 0x802089E4: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x802089E8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802089EC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089F0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802089F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802089F8: b           L_80208AC8
    // 0x802089FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208AC8;
    // 0x802089FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208A00:
    // 0x80208A00: andi        $t0, $s7, 0x400
    ctx->r8 = ctx->r23 & 0X400;
L_80208A04:
    // 0x80208A04: beq         $t0, $zero, L_80208A94
    if (ctx->r8 == 0) {
        // 0x80208A08: andi        $t1, $s3, 0x1
        ctx->r9 = ctx->r19 & 0X1;
            goto L_80208A94;
    }
    // 0x80208A08: andi        $t1, $s3, 0x1
    ctx->r9 = ctx->r19 & 0X1;
    // 0x80208A0C: beq         $t1, $zero, L_80208A38
    if (ctx->r9 == 0) {
        // 0x80208A10: andi        $t2, $s3, 0x2
        ctx->r10 = ctx->r19 & 0X2;
            goto L_80208A38;
    }
    // 0x80208A10: andi        $t2, $s3, 0x2
    ctx->r10 = ctx->r19 & 0X2;
    // 0x80208A14: beq         $s0, $s4, L_80208A38
    if (ctx->r16 == ctx->r20) {
        // 0x80208A18: nop
    
            goto L_80208A38;
    }
    // 0x80208A18: nop

    // 0x80208A1C: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80208A20: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208A24: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A28: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208A2C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A30: b           L_80208AC8
    // 0x80208A34: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208AC8;
    // 0x80208A34: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208A38:
    // 0x80208A38: beq         $t2, $zero, L_80208A64
    if (ctx->r10 == 0) {
        // 0x80208A3C: slt         $at, $s4, $s0
        ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80208A64;
    }
    // 0x80208A3C: slt         $at, $s4, $s0
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80208A40: beql        $at, $zero, L_80208A68
    if (ctx->r1 == 0) {
        // 0x80208A44: andi        $t3, $s3, 0x4
        ctx->r11 = ctx->r19 & 0X4;
            goto L_80208A68;
    }
    goto skip_2;
    // 0x80208A44: andi        $t3, $s3, 0x4
    ctx->r11 = ctx->r19 & 0X4;
    skip_2:
    // 0x80208A48: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80208A4C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208A50: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A54: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208A58: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A5C: b           L_80208AC8
    // 0x80208A60: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208AC8;
    // 0x80208A60: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208A64:
    // 0x80208A64: andi        $t3, $s3, 0x4
    ctx->r11 = ctx->r19 & 0X4;
L_80208A68:
    // 0x80208A68: beq         $t3, $zero, L_80208A94
    if (ctx->r11 == 0) {
        // 0x80208A6C: slt         $at, $s0, $s4
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r20) ? 1 : 0;
            goto L_80208A94;
    }
    // 0x80208A6C: slt         $at, $s0, $s4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80208A70: beql        $at, $zero, L_80208A98
    if (ctx->r1 == 0) {
        // 0x80208A74: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_80208A98;
    }
    goto skip_3;
    // 0x80208A74: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    skip_3:
    // 0x80208A78: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80208A7C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208A80: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A84: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208A88: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208A8C: b           L_80208AC8
    // 0x80208A90: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_80208AC8;
    // 0x80208A90: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208A94:
    // 0x80208A94: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
L_80208A98:
    // 0x80208A98: jal         0x80208650
    // 0x80208A9C: lw          $a1, 0xC($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XC);
    func_80208650(rdram, ctx);
        goto after_1;
    // 0x80208A9C: lw          $a1, 0xC($s5)
    ctx->r5 = MEM_W(ctx->r21, 0XC);
    after_1:
    // 0x80208AA0: beql        $v0, $zero, L_80208AB4
    if (ctx->r2 == 0) {
        // 0x80208AA4: lhu         $v0, 0xC($s1)
        ctx->r2 = MEM_HU(ctx->r17, 0XC);
            goto L_80208AB4;
    }
    goto skip_4;
    // 0x80208AA4: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    skip_4:
    // 0x80208AA8: b           L_80208ADC
    // 0x80208AAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80208ADC;
    // 0x80208AAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80208AB0: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
L_80208AB4:
    // 0x80208AB4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80208AB8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208ABC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80208AC0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80208AC4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_80208AC8:
    // 0x80208AC8: addiu       $s6, $s6, 0x2C
    ctx->r22 = ADD32(ctx->r22, 0X2C);
    // 0x80208ACC: slt         $at, $s6, $v1
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80208AD0: bnel        $at, $zero, L_80208938
    if (ctx->r1 != 0) {
        // 0x80208AD4: lw          $t6, 0x8($s1)
        ctx->r14 = MEM_W(ctx->r17, 0X8);
            goto L_80208938;
    }
    goto skip_5;
    // 0x80208AD4: lw          $t6, 0x8($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X8);
    skip_5:
L_80208AD8:
    // 0x80208AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80208ADC:
    // 0x80208ADC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80208AE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80208AE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80208AE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80208AEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80208AF0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80208AF4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80208AF8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80208AFC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80208B00: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80208B04: jr          $ra
    // 0x80208B08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80208B08: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802021EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802021EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802021F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802021F4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802021F8: jal         0x802011D0
    // 0x802021FC: addiu       $a0, $a0, 0x2030
    ctx->r4 = ADD32(ctx->r4, 0X2030);
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x802021FC: addiu       $a0, $a0, 0x2030
    ctx->r4 = ADD32(ctx->r4, 0X2030);
    after_0:
    // 0x80202200: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80202204: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80202208: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8020220C: addiu       $a1, $a1, 0x6DE0
    ctx->r5 = ADD32(ctx->r5, 0X6DE0);
    // 0x80202210: addiu       $v1, $v1, 0x6DD0
    ctx->r3 = ADD32(ctx->r3, 0X6DD0);
    // 0x80202214: addiu       $a0, $a0, 0x6DC0
    ctx->r4 = ADD32(ctx->r4, 0X6DC0);
    // 0x80202218: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8020221C:
    // 0x8020221C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80202220: sb          $v0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r2;
    // 0x80202224: sb          $v0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r2;
    // 0x80202228: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8020222C: sb          $v0, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r2;
    // 0x80202230: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80202234: sb          $v0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r2;
    // 0x80202238: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8020223C: sb          $v0, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = ctx->r2;
    // 0x80202240: bne         $v1, $a1, L_8020221C
    if (ctx->r3 != ctx->r5) {
        // 0x80202244: sb          $v0, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = ctx->r2;
            goto L_8020221C;
    }
    // 0x80202244: sb          $v0, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r2;
    // 0x80202248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8020224C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80202250: sw          $zero, 0x6DE0($at)
    MEM_W(0X6DE0, ctx->r1) = 0;
    // 0x80202254: jr          $ra
    // 0x80202258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80202258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80248C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248C50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80248C54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248C58: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80248C5C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80248C60: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80248C64: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80248C68: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80248C6C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80248C70: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x80248C74: lw          $s0, 0x10($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X10);
    // 0x80248C78: andi        $t7, $s0, 0x3
    ctx->r15 = ctx->r16 & 0X3;
    // 0x80248C7C: beq         $t7, $zero, L_80248C98
    if (ctx->r15 == 0) {
        // 0x80248C80: nop
    
            goto L_80248C98;
    }
    // 0x80248C80: nop

L_80248C84:
    // 0x80248C84: lui         $t8, 0xA460
    ctx->r24 = S32(0XA460 << 16);
    // 0x80248C88: lw          $s0, 0x10($t8)
    ctx->r16 = MEM_W(ctx->r24, 0X10);
    // 0x80248C8C: andi        $t9, $s0, 0x3
    ctx->r25 = ctx->r16 & 0X3;
    // 0x80248C90: bne         $t9, $zero, L_80248C84
    if (ctx->r25 != 0) {
        // 0x80248C94: nop
    
            goto L_80248C84;
    }
    // 0x80248C94: nop

L_80248C98:
    // 0x80248C98: jal         0x802375F0
    // 0x80248C9C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x80248C9C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_0:
    // 0x80248CA0: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x80248CA4: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x80248CA8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80248CAC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80248CB0: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80248CB4: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x80248CB8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80248CBC: lui         $t6, 0xA460
    ctx->r14 = S32(0XA460 << 16);
    // 0x80248CC0: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x80248CC4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x80248CC8: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x80248CCC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80248CD0: beq         $s1, $zero, L_80248CE8
    if (ctx->r17 == 0) {
        // 0x80248CD4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80248CE8;
    }
    // 0x80248CD4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80248CD8: beq         $s1, $at, L_80248CFC
    if (ctx->r17 == ctx->r1) {
        // 0x80248CDC: nop
    
            goto L_80248CFC;
    }
    // 0x80248CDC: nop

    // 0x80248CE0: b           L_80248D10
    // 0x80248CE4: nop

        goto L_80248D10;
    // 0x80248CE4: nop

L_80248CE8:
    // 0x80248CE8: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80248CEC: lui         $t9, 0xA460
    ctx->r25 = S32(0XA460 << 16);
    // 0x80248CF0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80248CF4: b           L_80248D18
    // 0x80248CF8: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
        goto L_80248D18;
    // 0x80248CF8: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
L_80248CFC:
    // 0x80248CFC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80248D00: lui         $t2, 0xA460
    ctx->r10 = S32(0XA460 << 16);
    // 0x80248D04: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80248D08: b           L_80248D18
    // 0x80248D0C: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
        goto L_80248D18;
    // 0x80248D0C: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
L_80248D10:
    // 0x80248D10: b           L_80248D1C
    // 0x80248D14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80248D1C;
    // 0x80248D14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248D18:
    // 0x80248D18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80248D1C:
    // 0x80248D1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248D20: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80248D24: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80248D28: jr          $ra
    // 0x80248D2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80248D2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80249408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249408: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8024940C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80249410: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80249414: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80249418: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8024941C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80249420: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80249424: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80249428: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8024942C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80249430: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80249434: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80249438: bne         $a2, $zero, L_80249458
    if (ctx->r6 != 0) {
        // 0x8024943C: sw          $s2, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r18;
            goto L_80249458;
    }
    // 0x8024943C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80249440: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80249444: sh          $zero, 0xC($a1)
    MEM_H(0XC, ctx->r5) = 0;
    // 0x80249448: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8024944C: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x80249450: b           L_802494FC
    // 0x80249454: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_802494FC;
    // 0x80249454: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80249458:
    // 0x80249458: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x8024945C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80249460: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x80249464: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80249468: lh          $t8, 0x1A($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X1A);
    // 0x8024946C: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x80249470: sh          $t8, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r24;
    // 0x80249474: lw          $t9, 0xC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XC);
    // 0x80249478: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8024947C: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x80249480: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80249484: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80249488: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x8024948C: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
L_80249490:
    // 0x80249490: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x80249494: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80249498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8024949C: jal         0x80249284
    // 0x802494A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80249284(rdram, ctx);
        goto after_0;
    // 0x802494A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x802494A4: lh          $t1, 0x50($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X50);
    // 0x802494A8: bnel        $t1, $s3, L_802494C4
    if (ctx->r9 != ctx->r19) {
        // 0x802494AC: lw          $v0, 0xC($s0)
        ctx->r2 = MEM_W(ctx->r16, 0XC);
            goto L_802494C4;
    }
    goto skip_0;
    // 0x802494AC: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    skip_0:
    // 0x802494B0: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    // 0x802494B4: lh          $s5, 0x1A($s0)
    ctx->r21 = MEM_H(ctx->r16, 0X1A);
    // 0x802494B8: b           L_802494D0
    // 0x802494BC: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
        goto L_802494D0;
    // 0x802494BC: lw          $s6, 0xC($s0)
    ctx->r22 = MEM_W(ctx->r16, 0XC);
    // 0x802494C0: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
L_802494C4:
    // 0x802494C4: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x802494C8: bnel        $at, $zero, L_80249490
    if (ctx->r1 != 0) {
        // 0x802494CC: lw          $s4, 0x8($s0)
        ctx->r20 = MEM_W(ctx->r16, 0X8);
            goto L_80249490;
    }
    goto skip_1;
    // 0x802494CC: lw          $s4, 0x8($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X8);
    skip_1:
L_802494D0:
    // 0x802494D0: sw          $s4, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r20;
    // 0x802494D4: sh          $s5, 0xC($s7)
    MEM_H(0XC, ctx->r23) = ctx->r21;
    // 0x802494D8: sw          $s6, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r22;
    // 0x802494DC: lw          $t2, 0xC($s0)
    ctx->r10 = MEM_W(ctx->r16, 0XC);
    // 0x802494E0: sw          $t2, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r10;
    // 0x802494E4: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x802494E8: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x802494EC: lh          $t4, 0x3E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X3E);
    // 0x802494F0: sh          $t4, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r12;
    // 0x802494F4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x802494F8: sw          $t5, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r13;
L_802494FC:
    // 0x802494FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80249500: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80249504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80249508: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8024950C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80249510: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80249514: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80249518: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8024951C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80249520: jr          $ra
    // 0x80249524: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80249524: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80223B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223B30: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80223B34: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x80223B38: addiu       $t7, $t7, 0x5110
    ctx->r15 = ADD32(ctx->r15, 0X5110);
    // 0x80223B3C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80223B40: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80223B44: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80223B48: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80223B4C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80223B50: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80223B54: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80223B58: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80223B5C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80223B60: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80223B64: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80223B68: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80223B6C: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x80223B70: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80223B74: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80223B78: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80223B7C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80223B80: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80223B84: jal         0x80223C3C
    // 0x80223B88: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    func_80223C3C(rdram, ctx);
        goto after_0;
    // 0x80223B88: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    after_0:
    // 0x80223B8C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80223B90: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80223B94: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80223B98: bgtz        $s2, L_80223BAC
    if (SIGNED(ctx->r18) > 0) {
        // 0x80223B9C: or          $a2, $s5, $zero
        ctx->r6 = ctx->r21 | 0;
            goto L_80223BAC;
    }
    // 0x80223B9C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80223BA0: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x80223BA4: b           L_80223BB4
    // 0x80223BA8: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
        goto L_80223BB4;
    // 0x80223BA8: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
L_80223BAC:
    // 0x80223BAC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80223BB0: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
L_80223BB4:
    // 0x80223BB4: jal         0x8022393C
    // 0x80223BB8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8022393C(rdram, ctx);
        goto after_1;
    // 0x80223BB8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
    // 0x80223BBC: beq         $v0, $zero, L_80223C00
    if (ctx->r2 == 0) {
        // 0x80223BC0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80223C00;
    }
    // 0x80223BC0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80223BC4:
    // 0x80223BC4: bne         $v0, $s6, L_80223BE8
    if (ctx->r2 != ctx->r22) {
        // 0x80223BC8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80223BE8;
    }
    // 0x80223BC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80223BCC: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80223BD0: beq         $v0, $zero, L_80223C00
    if (ctx->r2 == 0) {
        // 0x80223BD4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80223C00;
    }
    // 0x80223BD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80223BD8: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80223BDC: bnel        $at, $zero, L_80223BEC
    if (ctx->r1 != 0) {
        // 0x80223BE0: or          $a1, $s4, $zero
        ctx->r5 = ctx->r20 | 0;
            goto L_80223BEC;
    }
    goto skip_0;
    // 0x80223BE0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    skip_0:
    // 0x80223BE4: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
L_80223BE8:
    // 0x80223BE8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
L_80223BEC:
    // 0x80223BEC: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80223BF0: jal         0x8022393C
    // 0x80223BF4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_8022393C(rdram, ctx);
        goto after_2;
    // 0x80223BF4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
    // 0x80223BF8: bne         $v0, $zero, L_80223BC4
    if (ctx->r2 != 0) {
        // 0x80223BFC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80223BC4;
    }
    // 0x80223BFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80223C00:
    // 0x80223C00: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80223C04: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80223C08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80223C0C: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x80223C10: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80223C14: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80223C18: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80223C1C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80223C20: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80223C24: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80223C28: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80223C2C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80223C30: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80223C34: jr          $ra
    // 0x80223C38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80223C38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022AE1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022AE1C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8022AE20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AE24: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AE28: c.eq.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl == ctx->f2.fl;
    // 0x8022AE2C: nop

    // 0x8022AE30: bc1fl       L_8022AE54
    if (!c1cs) {
        // 0x8022AE34: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_8022AE54;
    }
    goto skip_0;
    // 0x8022AE34: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_0:
    // 0x8022AE38: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8022AE3C: nop

    // 0x8022AE40: bc1fl       L_8022AE54
    if (!c1cs) {
        // 0x8022AE44: c.lt.s      $f2, $f14
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
            goto L_8022AE54;
    }
    goto skip_1;
    // 0x8022AE44: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    skip_1:
    // 0x8022AE48: b           L_8022AF54
    // 0x8022AE4C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_8022AF54;
    // 0x8022AE4C: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x8022AE50: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
L_8022AE54:
    // 0x8022AE54: nop

    // 0x8022AE58: bc1fl       L_8022AE6C
    if (!c1cs) {
        // 0x8022AE5C: neg.s       $f0, $f14
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
            goto L_8022AE6C;
    }
    goto skip_2;
    // 0x8022AE5C: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
    skip_2:
    // 0x8022AE60: b           L_8022AE6C
    // 0x8022AE64: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
        goto L_8022AE6C;
    // 0x8022AE64: mov.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    ctx->f0.fl = ctx->f14.fl;
    // 0x8022AE68: neg.s       $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = -ctx->f14.fl;
L_8022AE6C:
    // 0x8022AE6C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x8022AE70: nop

    // 0x8022AE74: bc1fl       L_8022AE88
    if (!c1cs) {
        // 0x8022AE78: neg.s       $f16, $f12
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
            goto L_8022AE88;
    }
    goto skip_3;
    // 0x8022AE78: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
    skip_3:
    // 0x8022AE7C: b           L_8022AE88
    // 0x8022AE80: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
        goto L_8022AE88;
    // 0x8022AE80: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
    // 0x8022AE84: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
L_8022AE88:
    // 0x8022AE88: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8022AE8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022AE90: bc1fl       L_8022AEAC
    if (!c1cs) {
        // 0x8022AE94: div.s       $f4, $f16, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
            goto L_8022AEAC;
    }
    goto skip_4;
    // 0x8022AE94: div.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    skip_4:
    // 0x8022AE98: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
    // 0x8022AE9C: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x8022AEA0: mov.s       $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = ctx->f18.fl;
    // 0x8022AEA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEA8: div.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
L_8022AEAC:
    // 0x8022AEAC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x8022AEB0: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x8022AEB4: bc1f        L_8022AEC8
    if (!c1cs) {
        // 0x8022AEB8: lwc1        $f18, 0x4($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
            goto L_8022AEC8;
    }
    // 0x8022AEB8: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022AEBC: sub.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8022AEC0: b           L_8022AED4
    // 0x8022AEC4: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
        goto L_8022AED4;
    // 0x8022AEC4: swc1        $f6, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f6.u32l;
L_8022AEC8:
    // 0x8022AEC8: sub.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x8022AECC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8022AED0: swc1        $f10, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f10.u32l;
L_8022AED4:
    // 0x8022AED4: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8022AED8: lwc1        $f6, 0x3F5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3F5C);
    // 0x8022AEDC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AEE0: lwc1        $f10, 0x3F60($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3F60);
    // 0x8022AEE4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8022AEE8: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8022AEEC: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x8022AEF0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8022AEF4: nop

    // 0x8022AEF8: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8022AEFC: bc1f        L_8022AF18
    if (!c1cs) {
        // 0x8022AF00: add.s       $f16, $f8, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
            goto L_8022AF18;
    }
    // 0x8022AF00: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8022AF04: beq         $v0, $zero, L_8022AF38
    if (ctx->r2 == 0) {
        // 0x8022AF08: lui         $at, 0x8025
        ctx->r1 = S32(0X8025 << 16);
            goto L_8022AF38;
    }
    // 0x8022AF08: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AF0C: lwc1        $f4, 0x3F64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F64);
    // 0x8022AF10: b           L_8022AF38
    // 0x8022AF14: sub.s       $f16, $f4, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f16.fl;
        goto L_8022AF38;
    // 0x8022AF14: sub.s       $f16, $f4, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f16.fl;
L_8022AF18:
    // 0x8022AF18: beq         $v0, $zero, L_8022AF30
    if (ctx->r2 == 0) {
        // 0x8022AF1C: lui         $at, 0x8025
        ctx->r1 = S32(0X8025 << 16);
            goto L_8022AF30;
    }
    // 0x8022AF1C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AF20: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022AF24: lwc1        $f6, 0x3F68($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3F68);
    // 0x8022AF28: b           L_8022AF38
    // 0x8022AF2C: add.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f16.fl;
        goto L_8022AF38;
    // 0x8022AF2C: add.s       $f16, $f6, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f16.fl;
L_8022AF30:
    // 0x8022AF30: lwc1        $f8, 0x3F6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3F6C);
    // 0x8022AF34: sub.s       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f16.fl;
L_8022AF38:
    // 0x8022AF38: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8022AF3C: nop

    // 0x8022AF40: bc1fl       L_8022AF54
    if (!c1cs) {
        // 0x8022AF44: neg.s       $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
            goto L_8022AF54;
    }
    goto skip_5;
    // 0x8022AF44: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
    skip_5:
    // 0x8022AF48: b           L_8022AF54
    // 0x8022AF4C: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
        goto L_8022AF54;
    // 0x8022AF4C: mov.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = ctx->f16.fl;
    // 0x8022AF50: neg.s       $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = -ctx->f16.fl;
L_8022AF54:
    // 0x8022AF54: jr          $ra
    // 0x8022AF58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8022AF58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8021F50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021F50C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021F510: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8021F514: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x8021F518: addiu       $s1, $s1, 0x1B60
    ctx->r17 = ADD32(ctx->r17, 0X1B60);
    // 0x8021F51C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8021F520: lh          $t6, 0x1B5E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1B5E);
    // 0x8021F524: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8021F528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8021F52C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8021F530: subu        $t3, $t6, $v0
    ctx->r11 = SUB32(ctx->r14, ctx->r2);
    // 0x8021F534: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x8021F538: sra         $t3, $t7, 16
    ctx->r11 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021F53C: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x8021F540: beq         $at, $zero, L_8021F55C
    if (ctx->r1 == 0) {
        // 0x8021F544: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_8021F55C;
    }
    // 0x8021F544: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x8021F548: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021F54C: jal         0x80231A24
    // 0x8021F550: addiu       $a0, $a0, 0x3764
    ctx->r4 = ADD32(ctx->r4, 0X3764);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021F550: addiu       $a0, $a0, 0x3764
    ctx->r4 = ADD32(ctx->r4, 0X3764);
    after_0:
    // 0x8021F554: b           L_8021F6E8
    // 0x8021F558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8021F6E8;
    // 0x8021F558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021F55C:
    // 0x8021F55C: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8021F560: sra         $t9, $t4, 16
    ctx->r25 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8021F564: blez        $t3, L_8021F6E4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8021F568: or          $t4, $t9, $zero
        ctx->r12 = ctx->r25 | 0;
            goto L_8021F6E4;
    }
    // 0x8021F568: or          $t4, $t9, $zero
    ctx->r12 = ctx->r25 | 0;
    // 0x8021F56C: lui         $ra, 0x8027
    ctx->r31 = S32(0X8027 << 16);
    // 0x8021F570: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8021F574: addiu       $a2, $a2, 0x3B90
    ctx->r6 = ADD32(ctx->r6, 0X3B90);
    // 0x8021F578: addiu       $ra, $ra, 0x1B58
    ctx->r31 = ADD32(ctx->r31, 0X1B58);
    // 0x8021F57C: lui         $s0, 0x8000
    ctx->r16 = S32(0X8000 << 16);
    // 0x8021F580: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x8021F584: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8021F588: lui         $t1, 0xBF00
    ctx->r9 = S32(0XBF00 << 16);
    // 0x8021F58C: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
L_8021F590:
    // 0x8021F590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8021F594: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8021F598: beql        $t4, $t6, L_8021F5B0
    if (ctx->r12 == ctx->r14) {
        // 0x8021F59C: slti        $at, $t3, 0x10
        ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
            goto L_8021F5B0;
    }
    goto skip_0;
    // 0x8021F59C: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    skip_0:
    // 0x8021F5A0: addiu       $t3, $t3, 0x2
    ctx->r11 = ADD32(ctx->r11, 0X2);
    // 0x8021F5A4: sll         $t7, $t3, 16
    ctx->r15 = S32(ctx->r11 << 16);
    // 0x8021F5A8: sra         $t3, $t7, 16
    ctx->r11 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8021F5AC: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
L_8021F5B0:
    // 0x8021F5B0: beq         $at, $zero, L_8021F5C8
    if (ctx->r1 == 0) {
        // 0x8021F5B4: nop
    
            goto L_8021F5C8;
    }
    // 0x8021F5B4: nop

    // 0x8021F5B8: sll         $a3, $t3, 16
    ctx->r7 = S32(ctx->r11 << 16);
    // 0x8021F5BC: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8021F5C0: b           L_8021F5C8
    // 0x8021F5C4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
        goto L_8021F5C8;
    // 0x8021F5C4: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
L_8021F5C8:
    // 0x8021F5C8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021F5CC: addiu       $t7, $a3, -0x1
    ctx->r15 = ADD32(ctx->r7, -0X1);
    // 0x8021F5D0: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8021F5D4: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8021F5D8: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8021F5DC: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8021F5E0: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8021F5E4: sll         $t8, $a3, 4
    ctx->r24 = S32(ctx->r7 << 4);
    // 0x8021F5E8: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8021F5EC: or          $t7, $t6, $t5
    ctx->r15 = ctx->r14 | ctx->r13;
    // 0x8021F5F0: or          $t6, $t7, $t9
    ctx->r14 = ctx->r15 | ctx->r25;
    // 0x8021F5F4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8021F5F8: lw          $t7, 0x0($ra)
    ctx->r15 = MEM_W(ctx->r31, 0X0);
    // 0x8021F5FC: sll         $t8, $t4, 4
    ctx->r24 = S32(ctx->r12 << 4);
    // 0x8021F600: subu        $t3, $t3, $a3
    ctx->r11 = SUB32(ctx->r11, ctx->r7);
    // 0x8021F604: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8021F608: addu        $t6, $t9, $s0
    ctx->r14 = ADD32(ctx->r25, ctx->r16);
    // 0x8021F60C: addiu       $a3, $a3, -0x2
    ctx->r7 = ADD32(ctx->r7, -0X2);
    // 0x8021F610: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x8021F614: sll         $t8, $t3, 16
    ctx->r24 = S32(ctx->r11 << 16);
    // 0x8021F618: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8021F61C: sra         $t3, $t8, 16
    ctx->r11 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F620: addu        $t4, $t4, $a3
    ctx->r12 = ADD32(ctx->r12, ctx->r7);
    // 0x8021F624: sll         $t8, $t4, 16
    ctx->r24 = S32(ctx->r12 << 16);
    // 0x8021F628: sra         $t4, $t8, 16
    ctx->r12 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F62C: blez        $a3, L_8021F6DC
    if (SIGNED(ctx->r7) <= 0) {
        // 0x8021F630: sw          $t6, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r14;
            goto L_8021F6DC;
    }
    // 0x8021F630: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8021F634:
    // 0x8021F634: beq         $t0, $zero, L_8021F680
    if (ctx->r8 == 0) {
        // 0x8021F638: nop
    
            goto L_8021F680;
    }
    // 0x8021F638: nop

    // 0x8021F63C: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021F640: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021F644: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8021F648: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8021F64C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8021F650: mflo        $v0
    ctx->r2 = lo;
    // 0x8021F654: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8021F658: addiu       $t7, $v0, 0x14
    ctx->r15 = ADD32(ctx->r2, 0X14);
    // 0x8021F65C: andi        $t9, $t7, 0xFF
    ctx->r25 = ctx->r15 & 0XFF;
    // 0x8021F660: sll         $t8, $t6, 16
    ctx->r24 = S32(ctx->r14 << 16);
    // 0x8021F664: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x8021F668: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8021F66C: addiu       $t9, $v0, 0xA
    ctx->r25 = ADD32(ctx->r2, 0XA);
    // 0x8021F670: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x8021F674: or          $t6, $t7, $t8
    ctx->r14 = ctx->r15 | ctx->r24;
    // 0x8021F678: b           L_8021F6C0
    // 0x8021F67C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
        goto L_8021F6C0;
    // 0x8021F67C: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_8021F680:
    // 0x8021F680: multu       $a1, $t2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021F684: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8021F688: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8021F68C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8021F690: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8021F694: mflo        $v0
    ctx->r2 = lo;
    // 0x8021F698: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x8021F69C: addiu       $t6, $v0, 0xA
    ctx->r14 = ADD32(ctx->r2, 0XA);
    // 0x8021F6A0: andi        $t9, $t6, 0xFF
    ctx->r25 = ctx->r14 & 0XFF;
    // 0x8021F6A4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8021F6A8: sll         $t7, $t9, 8
    ctx->r15 = S32(ctx->r25 << 8);
    // 0x8021F6AC: or          $t6, $t8, $t7
    ctx->r14 = ctx->r24 | ctx->r15;
    // 0x8021F6B0: addiu       $t9, $v0, 0x14
    ctx->r25 = ADD32(ctx->r2, 0X14);
    // 0x8021F6B4: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x8021F6B8: or          $t7, $t6, $t8
    ctx->r15 = ctx->r14 | ctx->r24;
    // 0x8021F6BC: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
L_8021F6C0:
    // 0x8021F6C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8021F6C4: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8021F6C8: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021F6CC: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8021F6D0: xori        $t9, $t0, 0x1
    ctx->r25 = ctx->r8 ^ 0X1;
    // 0x8021F6D4: bne         $at, $zero, L_8021F634
    if (ctx->r1 != 0) {
        // 0x8021F6D8: andi        $t0, $t9, 0xFF
        ctx->r8 = ctx->r25 & 0XFF;
            goto L_8021F634;
    }
    // 0x8021F6D8: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
L_8021F6DC:
    // 0x8021F6DC: bgtzl       $t3, L_8021F590
    if (SIGNED(ctx->r11) > 0) {
        // 0x8021F6E0: lh          $t6, 0x0($s1)
        ctx->r14 = MEM_H(ctx->r17, 0X0);
            goto L_8021F590;
    }
    goto skip_1;
    // 0x8021F6E0: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    skip_1:
L_8021F6E4:
    // 0x8021F6E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8021F6E8:
    // 0x8021F6E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8021F6EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021F6F0: jr          $ra
    // 0x8021F6F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8021F6F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80205C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205C7C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80205C80: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205C84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80205C88: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205C8C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205C90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80205C94: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80205C98: lw          $t7, -0x4160($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4160);
    // 0x80205C9C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80205CA0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80205CA4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80205CA8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205CAC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80205CB0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80205CB4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80205CB8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80205CBC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80205CC0: addiu       $a1, $a1, 0x29B4
    ctx->r5 = ADD32(ctx->r5, 0X29B4);
    // 0x80205CC4: addiu       $a2, $a2, 0xBEE
    ctx->r6 = ADD32(ctx->r6, 0XBEE);
    // 0x80205CC8: jal         0x80231C58
    // 0x80205CCC: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    func_80231C58(rdram, ctx);
        goto after_0;
    // 0x80205CCC: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80205CD0: bne         $v0, $zero, L_80205D5C
    if (ctx->r2 != 0) {
        // 0x80205CD4: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80205D5C;
    }
    // 0x80205CD4: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80205CD8: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80205CDC: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80205CE0: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80205CE4: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80205CE8: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80205CEC: swc1        $f0, 0x12C($s0)
    MEM_W(0X12C, ctx->r16) = ctx->f0.u32l;
    // 0x80205CF0: swc1        $f14, 0x120($s0)
    MEM_W(0X120, ctx->r16) = ctx->f14.u32l;
    // 0x80205CF4: swc1        $f16, 0x124($s0)
    MEM_W(0X124, ctx->r16) = ctx->f16.u32l;
    // 0x80205CF8: swc1        $f18, 0x128($s0)
    MEM_W(0X128, ctx->r16) = ctx->f18.u32l;
    // 0x80205CFC: swc1        $f2, 0x130($s0)
    MEM_W(0X130, ctx->r16) = ctx->f2.u32l;
    // 0x80205D00: swc1        $f12, 0x134($s0)
    MEM_W(0X134, ctx->r16) = ctx->f12.u32l;
    // 0x80205D04: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x80205D08: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80205D0C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80205D10: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80205D14: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80205D18: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x80205D1C: jal         0x8022A784
    // 0x80205D20: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_8022A784(rdram, ctx);
        goto after_1;
    // 0x80205D20: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x80205D24: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80205D28: lwc1        $f8, 0x2A8C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2A8C);
    // 0x80205D2C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80205D30: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80205D34: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x80205D38: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80205D3C: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x80205D40: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80205D44: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80205D48: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80205D4C: jal         0x8022A784
    // 0x80205D50: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8022A784(rdram, ctx);
        goto after_2;
    // 0x80205D50: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80205D54: jal         0x80207260
    // 0x80205D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80207260(rdram, ctx);
        goto after_3;
    // 0x80205D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80205D5C:
    // 0x80205D5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80205D60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80205D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80205D68: jr          $ra
    // 0x80205D6C: nop

    return;
    // 0x80205D6C: nop

;}
RECOMP_FUNC void func_8022CFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022CFAC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CFB4: sb          $zero, -0x78D6($at)
    MEM_B(-0X78D6, ctx->r1) = 0;
    // 0x8022CFB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CFBC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8022CFC0: sb          $zero, -0x78D1($at)
    MEM_B(-0X78D1, ctx->r1) = 0;
    // 0x8022CFC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CFC8: jal         0x8022D560
    // 0x8022CFCC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_8022D560(rdram, ctx);
        goto after_0;
    // 0x8022CFCC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x8022CFD0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8022CFD4: lbu         $t6, -0x78D7($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X78D7);
    // 0x8022CFD8: addiu       $at, $zero, 0x67
    ctx->r1 = ADD32(0, 0X67);
    // 0x8022CFDC: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8022CFE0: beql        $t6, $at, L_8022D000
    if (ctx->r14 == ctx->r1) {
        // 0x8022CFE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022D000;
    }
    goto skip_0;
    // 0x8022CFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8022CFE8: lbu         $t7, -0x78D4($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X78D4);
    // 0x8022CFEC: bnel        $t7, $zero, L_8022D000
    if (ctx->r15 != 0) {
        // 0x8022CFF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8022D000;
    }
    goto skip_1;
    // 0x8022CFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8022CFF4: jal         0x8022C480
    // 0x8022CFF8: nop

    func_8022C480(rdram, ctx);
        goto after_1;
    // 0x8022CFF8: nop

    after_1:
    // 0x8022CFFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8022D000:
    // 0x8022D000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022D004: jr          $ra
    // 0x8022D008: nop

    return;
    // 0x8022D008: nop

;}
RECOMP_FUNC void func_80248040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8024804C: jal         0x8024A710
    // 0x80248050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8024A710(rdram, ctx);
        goto after_0;
    // 0x80248050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80248054: beq         $v0, $zero, L_80248064
    if (ctx->r2 == 0) {
        // 0x80248058: nop
    
            goto L_80248064;
    }
    // 0x80248058: nop

    // 0x8024805C: b           L_80248080
    // 0x80248060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80248080;
    // 0x80248060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80248064:
    // 0x80248064: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80248068: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x8024806C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80248070: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80248074: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80248078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8024807C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_80248080:
    // 0x80248080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80248084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80248088: jr          $ra
    // 0x8024808C: nop

    return;
    // 0x8024808C: nop

;}
RECOMP_FUNC void func_80248A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80248A7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80248A80: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80248A84: addiu       $t6, $t6, 0x4C10
    ctx->r14 = ADD32(ctx->r14, 0X4C10);
    // 0x80248A88: addiu       $t7, $t6, 0x40
    ctx->r15 = ADD32(ctx->r14, 0X40);
    // 0x80248A8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80248A90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80248A94: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80248A98: lw          $t8, 0x40($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X40);
    // 0x80248A9C: beq         $t8, $zero, L_80248B54
    if (ctx->r24 == 0) {
        // 0x80248AA0: sw          $t8, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r24;
            goto L_80248B54;
    }
    // 0x80248AA0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80248AA4: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80248AA8: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x80248AAC: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80248AB0: beq         $at, $zero, L_80248B54
    if (ctx->r1 == 0) {
        // 0x80248AB4: nop
    
            goto L_80248B54;
    }
    // 0x80248AB4: nop

    // 0x80248AB8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80248ABC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80248AC0: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x80248AC4: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x80248AC8: lw          $t5, 0x10($t1)
    ctx->r13 = MEM_W(ctx->r9, 0X10);
    // 0x80248ACC: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80248AD0: div         $zero, $t4, $t5
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r13)));
    // 0x80248AD4: mfhi        $t7
    ctx->r15 = hi;
    // 0x80248AD8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80248ADC: lw          $t0, 0x14($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X14);
    // 0x80248AE0: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x80248AE4: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x80248AE8: addu        $t2, $t0, $t9
    ctx->r10 = ADD32(ctx->r8, ctx->r25);
    // 0x80248AEC: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x80248AF0: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80248AF4: bne         $t5, $zero, L_80248B00
    if (ctx->r13 != 0) {
        // 0x80248AF8: nop
    
            goto L_80248B00;
    }
    // 0x80248AF8: nop

    // 0x80248AFC: break       7
    do_break(2149878524);
L_80248B00:
    // 0x80248B00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80248B04: bne         $t5, $at, L_80248B18
    if (ctx->r13 != ctx->r1) {
        // 0x80248B08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80248B18;
    }
    // 0x80248B08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80248B0C: bne         $t4, $at, L_80248B18
    if (ctx->r12 != ctx->r1) {
        // 0x80248B10: nop
    
            goto L_80248B18;
    }
    // 0x80248B10: nop

    // 0x80248B14: break       6
    do_break(2149878548);
L_80248B18:
    // 0x80248B18: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80248B1C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80248B20: sw          $t5, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r13;
    // 0x80248B24: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80248B28: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80248B2C: lw          $t1, 0x0($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X0);
    // 0x80248B30: beq         $t1, $zero, L_80248B54
    if (ctx->r9 == 0) {
        // 0x80248B34: nop
    
            goto L_80248B54;
    }
    // 0x80248B34: nop

    // 0x80248B38: jal         0x80241F44
    // 0x80248B3C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80241F44(rdram, ctx);
        goto after_0;
    // 0x80248B3C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80248B40: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80248B44: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80248B48: addiu       $a0, $a0, 0x16D8
    ctx->r4 = ADD32(ctx->r4, 0X16D8);
    // 0x80248B4C: jal         0x80241EFC
    // 0x80248B50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80241EFC(rdram, ctx);
        goto after_1;
    // 0x80248B50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_80248B54:
    // 0x80248B54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80248B58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80248B5C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80248B60: jr          $ra
    // 0x80248B64: nop

    return;
    // 0x80248B64: nop

;}
RECOMP_FUNC void func_80240CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80240CFC: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x80240D00: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80240D04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80240D08: addiu       $t6, $a0, 0x38
    ctx->r14 = ADD32(ctx->r4, 0X38);
    // 0x80240D0C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80240D10: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80240D14: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80240D18: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80240D1C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80240D20: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80240D24: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80240D28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80240D2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80240D30: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80240D34: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x80240D38: addiu       $s5, $a0, 0x48
    ctx->r21 = ADD32(ctx->r4, 0X48);
L_80240D3C:
    // 0x80240D3C: lhu         $t7, 0x38($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X38);
    // 0x80240D40: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x80240D44: beq         $at, $zero, L_802412CC
    if (ctx->r1 == 0) {
        // 0x80240D48: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_802412CC;
    }
    // 0x80240D48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80240D4C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80240D50: addu        $at, $at, $t7
    gpr jr_addend_80240D58 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80240D54: lw          $t7, 0x58C8($at)
    ctx->r15 = ADD32(ctx->r1, 0X58C8);
    // 0x80240D58: jr          $t7
    // 0x80240D5C: nop

    switch (jr_addend_80240D58 >> 2) {
        case 0: goto L_80240D60; break;
        case 1: goto L_802412CC; break;
        case 2: goto L_80241074; break;
        case 3: goto L_802412CC; break;
        case 4: goto L_802412CC; break;
        case 5: goto L_80240E2C; break;
        case 6: goto L_80240E78; break;
        case 7: goto L_80241094; break;
        case 8: goto L_802412CC; break;
        case 9: goto L_80240E0C; break;
        case 10: goto L_802411CC; break;
        case 11: goto L_80241234; break;
        case 12: goto L_80241250; break;
        case 13: goto L_8024126C; break;
        case 14: goto L_802412BC; break;
        case 15: goto L_802410A8; break;
        case 16: goto L_802410CC; break;
        case 17: goto L_8024113C; break;
        case 18: goto L_802412CC; break;
        case 19: goto L_802412CC; break;
        case 20: goto L_802412CC; break;
        case 21: goto L_802412CC; break;
        case 22: goto L_80240EDC; break;
        case 23: goto L_80240FEC; break;
        default: switch_error(__func__, 0x80240D58, 0x802558C8);
    }
    // 0x80240D5C: nop

L_80240D60:
    // 0x80240D60: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80240D64: beql        $a0, $zero, L_802412D0
    if (ctx->r4 == 0) {
        // 0x80240D68: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802412D0;
    }
    goto skip_0;
    // 0x80240D68: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_0:
    // 0x80240D6C: jal         0x80249284
    // 0x80240D70: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    func_80249284(rdram, ctx);
        goto after_0;
    // 0x80240D70: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_0:
    // 0x80240D74: lh          $v0, 0x88($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X88);
    // 0x80240D78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80240D7C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x80240D80: beq         $v0, $at, L_80240DA8
    if (ctx->r2 == ctx->r1) {
        // 0x80240D84: addiu       $a0, $sp, 0x88
        ctx->r4 = ADD32(ctx->r29, 0X88);
            goto L_80240DA8;
    }
    // 0x80240D84: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    // 0x80240D88: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80240D8C: beq         $v0, $at, L_80240DCC
    if (ctx->r2 == ctx->r1) {
        // 0x80240D90: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80240DCC;
    }
    // 0x80240D90: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80240D94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80240D98: beq         $v0, $at, L_80240DE4
    if (ctx->r2 == ctx->r1) {
        // 0x80240D9C: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_80240DE4;
    }
    // 0x80240D9C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80240DA0: b           L_802412D0
    // 0x80240DA4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240DA4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240DA8:
    // 0x80240DA8: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x80240DAC: jal         0x802404DC
    // 0x80240DB0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    func_802404DC(rdram, ctx);
        goto after_1;
    // 0x80240DB0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_1:
    // 0x80240DB4: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x80240DB8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80240DBC: jal         0x80240160
    // 0x80240DC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80240160(rdram, ctx);
        goto after_2;
    // 0x80240DC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x80240DC4: b           L_802412D0
    // 0x80240DC8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240DC8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240DCC:
    // 0x80240DCC: jal         0x8024023C
    // 0x80240DD0: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    func_8024023C(rdram, ctx);
        goto after_3;
    // 0x80240DD0: addiu       $a0, $sp, 0x88
    ctx->r4 = ADD32(ctx->r29, 0X88);
    after_3:
    // 0x80240DD4: jal         0x80240160
    // 0x80240DD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80240160(rdram, ctx);
        goto after_4;
    // 0x80240DD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80240DDC: b           L_802412D0
    // 0x80240DE0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240DE0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240DE4:
    // 0x80240DE4: sw          $t8, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r24;
    // 0x80240DE8: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80240DEC: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80240DF0: sh          $t9, 0x88($sp)
    MEM_H(0X88, ctx->r29) = ctx->r25;
    // 0x80240DF4: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80240DF8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80240DFC: jal         0x8023F37C
    // 0x80240E00: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    func_8023F37C(rdram, ctx);
        goto after_5;
    // 0x80240E00: addiu       $a1, $sp, 0x88
    ctx->r5 = ADD32(ctx->r29, 0X88);
    after_5:
    // 0x80240E04: b           L_802412D0
    // 0x80240E08: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240E08: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240E0C:
    // 0x80240E0C: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80240E10: sh          $t6, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r14;
    // 0x80240E14: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x80240E18: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80240E1C: jal         0x8023F37C
    // 0x80240E20: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    func_8023F37C(rdram, ctx);
        goto after_6;
    // 0x80240E20: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_6:
    // 0x80240E24: b           L_802412D0
    // 0x80240E28: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240E28: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240E2C:
    // 0x80240E2C: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x80240E30: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80240E34: jal         0x8023FB10
    // 0x80240E38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FB10(rdram, ctx);
        goto after_7;
    // 0x80240E38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x80240E3C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80240E40: jal         0x8023FB90
    // 0x80240E44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FB90(rdram, ctx);
        goto after_8;
    // 0x80240E44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x80240E48: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80240E4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80240E50: lbu         $t7, 0x37($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X37);
    // 0x80240E54: beql        $t7, $zero, L_80240E68
    if (ctx->r15 == 0) {
        // 0x80240E58: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80240E68;
    }
    goto skip_1;
    // 0x80240E58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
    // 0x80240E5C: jal         0x80241320
    // 0x80240E60: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80241320(rdram, ctx);
        goto after_9;
    // 0x80240E60: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x80240E64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80240E68:
    // 0x80240E68: jal         0x802400F0
    // 0x80240E6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802400F0(rdram, ctx);
        goto after_10;
    // 0x80240E6C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80240E70: b           L_802412D0
    // 0x80240E74: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240E74: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240E78:
    // 0x80240E78: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x80240E7C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80240E80: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80240E84: lbu         $t8, 0x34($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X34);
    // 0x80240E88: bnel        $t8, $zero, L_80240E98
    if (ctx->r24 != 0) {
        // 0x80240E8C: lbu         $t6, 0x44($s2)
        ctx->r14 = MEM_BU(ctx->r18, 0X44);
            goto L_80240E98;
    }
    goto skip_2;
    // 0x80240E8C: lbu         $t6, 0x44($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X44);
    skip_2:
    // 0x80240E90: sb          $t9, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r25;
    // 0x80240E94: lbu         $t6, 0x44($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X44);
L_80240E98:
    // 0x80240E98: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    // 0x80240E9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80240EA0: sb          $t6, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r14;
    // 0x80240EA4: lw          $t7, 0x1C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X1C);
    // 0x80240EA8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80240EAC: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x80240EB0: jal         0x8023FE94
    // 0x80240EB4: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
    func_8023FE94(rdram, ctx);
        goto after_11;
    // 0x80240EB4: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
    after_11:
    // 0x80240EB8: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80240EBC: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80240EC0: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80240EC4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80240EC8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80240ECC: jal         0x8023F940
    // 0x80240ED0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_8023F940(rdram, ctx);
        goto after_12;
    // 0x80240ED0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_12:
    // 0x80240ED4: b           L_802412D0
    // 0x80240ED8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240ED8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240EDC:
    // 0x80240EDC: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x80240EE0: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x80240EE4: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x80240EE8: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x80240EEC: jalr        $t9
    // 0x80240EF0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80240EF0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_13:
    // 0x80240EF4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80240EF8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80240EFC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80240F00: lwc1        $f4, 0xA8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x80240F04: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80240F08: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80240F0C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80240F10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80240F14: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80240F18: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80240F1C: nop

    // 0x80240F20: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80240F24: beql        $t7, $zero, L_80240F74
    if (ctx->r15 == 0) {
        // 0x80240F28: mfc1        $t7, $f6
        ctx->r15 = (int32_t)ctx->f6.u32l;
            goto L_80240F74;
    }
    goto skip_3;
    // 0x80240F28: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x80240F2C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80240F30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80240F34: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80240F38: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80240F3C: nop

    // 0x80240F40: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80240F44: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80240F48: nop

    // 0x80240F4C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x80240F50: bne         $t7, $zero, L_80240F68
    if (ctx->r15 != 0) {
        // 0x80240F54: nop
    
            goto L_80240F68;
    }
    // 0x80240F54: nop

    // 0x80240F58: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80240F5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80240F60: b           L_80240F80
    // 0x80240F64: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_80240F80;
    // 0x80240F64: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_80240F68:
    // 0x80240F68: b           L_80240F80
    // 0x80240F6C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_80240F80;
    // 0x80240F6C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80240F70: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
L_80240F74:
    // 0x80240F74: nop

    // 0x80240F78: bltz        $t7, L_80240F68
    if (SIGNED(ctx->r15) < 0) {
        // 0x80240F7C: nop
    
            goto L_80240F68;
    }
    // 0x80240F7C: nop

L_80240F80:
    // 0x80240F80: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80240F84: jal         0x8023FE94
    // 0x80240F88: sb          $t7, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r15;
    func_8023FE94(rdram, ctx);
        goto after_14;
    // 0x80240F88: sb          $t7, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r15;
    after_14:
    // 0x80240F8C: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80240F90: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80240F94: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80240F98: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80240F9C: subu        $a0, $t9, $v1
    ctx->r4 = SUB32(ctx->r25, ctx->r3);
    // 0x80240FA0: bltz        $a0, L_80240FB0
    if (SIGNED(ctx->r4) < 0) {
        // 0x80240FA4: or          $a2, $t8, $zero
        ctx->r6 = ctx->r24 | 0;
            goto L_80240FB0;
    }
    // 0x80240FA4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80240FA8: b           L_80240FB4
    // 0x80240FAC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80240FB4;
    // 0x80240FAC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80240FB0:
    // 0x80240FB0: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
L_80240FB4:
    // 0x80240FB4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80240FB8: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80240FBC: jal         0x8023F940
    // 0x80240FC0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_15;
    // 0x80240FC0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_15:
    // 0x80240FC4: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x80240FC8: sh          $t6, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r14;
    // 0x80240FCC: sw          $s1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r17;
    // 0x80240FD0: sw          $s4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r20;
    // 0x80240FD4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80240FD8: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x80240FDC: jal         0x8023F37C
    // 0x80240FE0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8023F37C(rdram, ctx);
        goto after_16;
    // 0x80240FE0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_16:
    // 0x80240FE4: b           L_802412D0
    // 0x80240FE8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80240FE8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80240FEC:
    // 0x80240FEC: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x80240FF0: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x80240FF4: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x80240FF8: lbu         $s0, 0x44($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X44);
    // 0x80240FFC: addiu       $a1, $sp, 0xA8
    ctx->r5 = ADD32(ctx->r29, 0XA8);
    // 0x80241000: jalr        $t9
    // 0x80241004: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x80241004: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_17:
    // 0x80241008: lwc1        $f8, 0xA8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8024100C: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x80241010: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x80241014: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    // 0x80241018: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x8024101C: lw          $t7, 0x60($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X60);
    // 0x80241020: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80241024: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80241028: addu        $t6, $t7, $t8
    ctx->r14 = ADD32(ctx->r15, ctx->r24);
    // 0x8024102C: lwc1        $f10, 0xC($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0XC);
    // 0x80241030: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80241034: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80241038: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8024103C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80241040: jal         0x8023F9E0
    // 0x80241044: nop

    func_8023F9E0(rdram, ctx);
        goto after_18;
    // 0x80241044: nop

    after_18:
    // 0x80241048: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x8024104C: sh          $t9, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r25;
    // 0x80241050: sw          $s1, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r17;
    // 0x80241054: sw          $s4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r20;
    // 0x80241058: sb          $s0, 0xC8($sp)
    MEM_B(0XC8, ctx->r29) = ctx->r16;
    // 0x8024105C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80241060: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x80241064: jal         0x8023F37C
    // 0x80241068: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8023F37C(rdram, ctx);
        goto after_19;
    // 0x80241068: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_19:
    // 0x8024106C: b           L_802412D0
    // 0x80241070: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80241070: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80241074:
    // 0x80241074: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x80241078: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x8024107C: sw          $s2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r18;
    // 0x80241080: jal         0x802404DC
    // 0x80241084: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    func_802404DC(rdram, ctx);
        goto after_20;
    // 0x80241084: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_20:
    // 0x80241088: lw          $s2, 0xD0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XD0);
    // 0x8024108C: b           L_802412CC
    // 0x80241090: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
        goto L_802412CC;
    // 0x80241090: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
L_80241094:
    // 0x80241094: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80241098: jal         0x8024023C
    // 0x8024109C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_8024023C(rdram, ctx);
        goto after_21;
    // 0x8024109C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_21:
    // 0x802410A0: b           L_802412D0
    // 0x802410A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x802410A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802410A8:
    // 0x802410A8: lw          $t7, 0x2C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X2C);
    // 0x802410AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802410B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802410B4: beq         $t7, $at, L_802412CC
    if (ctx->r15 == ctx->r1) {
        // 0x802410B8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_802412CC;
    }
    // 0x802410B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802410BC: jal         0x80240160
    // 0x802410C0: sw          $t8, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r24;
    func_80240160(rdram, ctx);
        goto after_22;
    // 0x802410C0: sw          $t8, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r24;
    after_22:
    // 0x802410C4: b           L_802412D0
    // 0x802410C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x802410C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802410CC:
    // 0x802410CC: lw          $t6, 0x2C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X2C);
    // 0x802410D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802410D4: bnel        $t6, $at, L_802412D0
    if (ctx->r14 != ctx->r1) {
        // 0x802410D8: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802412D0;
    }
    goto skip_4;
    // 0x802410D8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_4:
    // 0x802410DC: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x802410E0: beq         $s1, $zero, L_80241130
    if (ctx->r17 == 0) {
        // 0x802410E4: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80241130;
    }
    // 0x802410E4: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_802410E8:
    // 0x802410E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802410EC: jal         0x8023FB10
    // 0x802410F0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    func_8023FB10(rdram, ctx);
        goto after_23;
    // 0x802410F0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_23:
    // 0x802410F4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x802410F8: jal         0x8023FB90
    // 0x802410FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FB90(rdram, ctx);
        goto after_24;
    // 0x802410FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_24:
    // 0x80241100: lbu         $t9, 0x37($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X37);
    // 0x80241104: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80241108: beql        $t9, $zero, L_8024111C
    if (ctx->r25 == 0) {
        // 0x8024110C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8024111C;
    }
    goto skip_5;
    // 0x8024110C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_5:
    // 0x80241110: jal         0x80241320
    // 0x80241114: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80241320(rdram, ctx);
        goto after_25;
    // 0x80241114: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_25:
    // 0x80241118: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8024111C:
    // 0x8024111C: jal         0x802400F0
    // 0x80241120: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_802400F0(rdram, ctx);
        goto after_26;
    // 0x80241120: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_26:
    // 0x80241124: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80241128: bnel        $s1, $zero, L_802410E8
    if (ctx->r17 != 0) {
        // 0x8024112C: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_802410E8;
    }
    goto skip_6;
    // 0x8024112C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_6:
L_80241130:
    // 0x80241130: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    // 0x80241134: b           L_802412CC
    // 0x80241138: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
        goto L_802412CC;
    // 0x80241138: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_8024113C:
    // 0x8024113C: lw          $t7, 0x2C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X2C);
    // 0x80241140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80241144: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80241148: bnel        $t7, $at, L_802412D0
    if (ctx->r15 != ctx->r1) {
        // 0x8024114C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802412D0;
    }
    goto skip_7;
    // 0x8024114C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_7:
    // 0x80241150: jal         0x8023F260
    // 0x80241154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8023F260(rdram, ctx);
        goto after_27;
    // 0x80241154: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_27:
    // 0x80241158: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8024115C: jal         0x8023F260
    // 0x80241160: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8023F260(rdram, ctx);
        goto after_28;
    // 0x80241160: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_28:
    // 0x80241164: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80241168: beq         $s1, $zero, L_802411A0
    if (ctx->r17 == 0) {
        // 0x8024116C: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_802411A0;
    }
    // 0x8024116C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_80241170:
    // 0x80241170: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80241174: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80241178: jal         0x80240048
    // 0x8024117C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_80240048(rdram, ctx);
        goto after_29;
    // 0x8024117C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_29:
    // 0x80241180: beq         $v0, $zero, L_80241194
    if (ctx->r2 == 0) {
        // 0x80241184: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80241194;
    }
    // 0x80241184: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80241188: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8024118C: jal         0x8023FF1C
    // 0x80241190: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    func_8023FF1C(rdram, ctx);
        goto after_30;
    // 0x80241190: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_30:
L_80241194:
    // 0x80241194: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80241198: bnel        $s1, $zero, L_80241170
    if (ctx->r17 != 0) {
        // 0x8024119C: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80241170;
    }
    goto skip_8;
    // 0x8024119C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_8:
L_802411A0:
    // 0x802411A0: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x802411A4: sw          $t8, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r24;
    // 0x802411A8: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x802411AC: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x802411B0: sh          $t6, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r14;
    // 0x802411B4: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x802411B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x802411BC: jal         0x8023F37C
    // 0x802411C0: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    func_8023F37C(rdram, ctx);
        goto after_31;
    // 0x802411C0: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_31:
    // 0x802411C4: b           L_802412D0
    // 0x802411C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x802411C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802411CC:
    // 0x802411CC: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x802411D0: lh          $t9, 0x3C($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X3C);
    // 0x802411D4: beq         $s1, $zero, L_802412CC
    if (ctx->r17 == 0) {
        // 0x802411D8: sh          $t9, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r25;
            goto L_802412CC;
    }
    // 0x802411D8: sh          $t9, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r25;
    // 0x802411DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_802411E0:
    // 0x802411E0: jal         0x8023FE94
    // 0x802411E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8023FE94(rdram, ctx);
        goto after_32;
    // 0x802411E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_32:
    // 0x802411E8: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x802411EC: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x802411F0: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x802411F4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802411F8: subu        $a0, $t8, $v1
    ctx->r4 = SUB32(ctx->r24, ctx->r3);
    // 0x802411FC: bltz        $a0, L_8024120C
    if (SIGNED(ctx->r4) < 0) {
        // 0x80241200: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_8024120C;
    }
    // 0x80241200: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80241204: b           L_80241210
    // 0x80241208: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_80241210;
    // 0x80241208: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8024120C:
    // 0x8024120C: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
L_80241210:
    // 0x80241210: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80241214: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80241218: jal         0x8023F940
    // 0x8024121C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    func_8023F940(rdram, ctx);
        goto after_33;
    // 0x8024121C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_33:
    // 0x80241220: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80241224: bnel        $s1, $zero, L_802411E0
    if (ctx->r17 != 0) {
        // 0x80241228: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_802411E0;
    }
    goto skip_9;
    // 0x80241228: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_9:
    // 0x8024122C: b           L_802412D0
    // 0x80241230: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x80241230: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80241234:
    // 0x80241234: lw          $t6, 0x3C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X3C);
    // 0x80241238: lw          $t9, 0x40($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X40);
    // 0x8024123C: lw          $t7, 0x44($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X44);
    // 0x80241240: sw          $t6, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->r14;
    // 0x80241244: sw          $t9, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r25;
    // 0x80241248: b           L_802412CC
    // 0x8024124C: sw          $t7, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r15;
        goto L_802412CC;
    // 0x8024124C: sw          $t7, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r15;
L_80241250:
    // 0x80241250: lbu         $s0, 0x3C($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X3C);
    // 0x80241254: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x80241258: lbu         $t8, 0x3D($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3D);
    // 0x8024125C: sll         $t9, $s0, 4
    ctx->r25 = S32(ctx->r16 << 4);
    // 0x80241260: addu        $t7, $t6, $t9
    ctx->r15 = ADD32(ctx->r14, ctx->r25);
    // 0x80241264: b           L_802412CC
    // 0x80241268: sb          $t8, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r24;
        goto L_802412CC;
    // 0x80241268: sb          $t8, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r24;
L_8024126C:
    // 0x8024126C: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x80241270: addiu       $t7, $zero, 0x1E8
    ctx->r15 = ADD32(0, 0X1E8);
    // 0x80241274: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80241278: beq         $a1, $zero, L_8024129C
    if (ctx->r5 == 0) {
        // 0x8024127C: sw          $a1, 0x18($s2)
        MEM_W(0X18, ctx->r18) = ctx->r5;
            goto L_8024129C;
    }
    // 0x8024127C: sw          $a1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r5;
    // 0x80241280: lwc1        $f6, 0x5928($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5928);
    // 0x80241284: lwc1        $f10, 0x14($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80241288: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8024128C: trunc.w.s   $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80241290: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80241294: b           L_802412A0
    // 0x80241298: sw          $t8, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r24;
        goto L_802412A0;
    // 0x80241298: sw          $t8, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r24;
L_8024129C:
    // 0x8024129C: sw          $t7, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r15;
L_802412A0:
    // 0x802412A0: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x802412A4: beql        $a1, $zero, L_802412D0
    if (ctx->r5 == 0) {
        // 0x802412A8: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_802412D0;
    }
    goto skip_10;
    // 0x802412A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_10:
    // 0x802412AC: jal         0x8023FDB4
    // 0x802412B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8023FDB4(rdram, ctx);
        goto after_34;
    // 0x802412B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_34:
    // 0x802412B4: b           L_802412D0
    // 0x802412B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_802412D0;
    // 0x802412B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802412BC:
    // 0x802412BC: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x802412C0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x802412C4: jal         0x8023FDB4
    // 0x802412C8: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    func_8023FDB4(rdram, ctx);
        goto after_35;
    // 0x802412C8: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    after_35:
L_802412CC:
    // 0x802412CC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_802412D0:
    // 0x802412D0: jal         0x8023F4A0
    // 0x802412D4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    func_8023F4A0(rdram, ctx);
        goto after_36;
    // 0x802412D4: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_36:
    // 0x802412D8: beq         $v0, $zero, L_80240D3C
    if (ctx->r2 == 0) {
        // 0x802412DC: sw          $v0, 0x28($s2)
        MEM_W(0X28, ctx->r18) = ctx->r2;
            goto L_80240D3C;
    }
    // 0x802412DC: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x802412E0: lw          $t6, 0x1C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1C);
    // 0x802412E4: addu        $t9, $t6, $v0
    ctx->r25 = ADD32(ctx->r14, ctx->r2);
    // 0x802412E8: sw          $t9, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r25;
    // 0x802412EC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x802412F0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x802412F4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x802412F8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x802412FC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80241300: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80241304: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80241308: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8024130C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80241310: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80241314: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80241318: jr          $ra
    // 0x8024131C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8024131C: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_80213020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80213020: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80213024: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80213028: lwc1        $f6, 0xA8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8021302C: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80213030: lwc1        $f16, 0xAC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80213034: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80213038: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8021303C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80213040: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80213044: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x80213048: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x8021304C: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x80213050: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    // 0x80213054: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80213058: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8021305C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80213060: sw          $a2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r6;
    // 0x80213064: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80213068: swc1        $f10, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f10.u32l;
    // 0x8021306C: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80213070: lwc1        $f6, 0xC8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80213074: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x80213078: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8021307C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80213080: swc1        $f12, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f12.u32l;
    // 0x80213084: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80213088: swc1        $f14, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f14.u32l;
    // 0x8021308C: swc1        $f18, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f18.u32l;
    // 0x80213090: addiu       $a2, $sp, 0x80
    ctx->r6 = ADD32(ctx->r29, 0X80);
    // 0x80213094: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x80213098: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x8021309C: jal         0x80234C78
    // 0x802130A0: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    func_80234C78(rdram, ctx);
        goto after_0;
    // 0x802130A0: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_0:
    // 0x802130A4: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x802130A8: jal         0x80234D30
    // 0x802130AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80234D30(rdram, ctx);
        goto after_1;
    // 0x802130AC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_1:
    // 0x802130B0: bne         $v0, $zero, L_802130C0
    if (ctx->r2 != 0) {
        // 0x802130B4: lwc1        $f10, 0x98($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
            goto L_802130C0;
    }
    // 0x802130B4: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x802130B8: b           L_8021347C
    // 0x802130BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021347C;
    // 0x802130BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802130C0:
    // 0x802130C0: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802130C4: lwc1        $f6, 0x9C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x802130C8: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802130CC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802130D0: lwc1        $f16, 0xB0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x802130D4: lwc1        $f10, 0xA0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x802130D8: sub.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x802130DC: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x802130E0: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802130E4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802130E8: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x802130EC: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802130F0: jal         0x80234BE4
    // 0x802130F4: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    func_80234BE4(rdram, ctx);
        goto after_2;
    // 0x802130F4: swc1        $f18, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x802130F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802130FC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80213100: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80213104: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80213108: nop

    // 0x8021310C: bc1fl       L_80213120
    if (!c1cs) {
        // 0x80213110: neg.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
            goto L_80213120;
    }
    goto skip_0;
    // 0x80213110: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
    skip_0:
    // 0x80213114: b           L_80213120
    // 0x80213118: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80213120;
    // 0x80213118: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8021311C: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80213120:
    // 0x80213120: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x80213124: nop

    // 0x80213128: bc1f        L_80213138
    if (!c1cs) {
        // 0x8021312C: nop
    
            goto L_80213138;
    }
    // 0x8021312C: nop

    // 0x80213130: b           L_8021347C
    // 0x80213134: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021347C;
    // 0x80213134: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80213138:
    // 0x80213138: lwc1        $f8, 0x30F8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X30F8);
    // 0x8021313C: lw          $t6, 0xD0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XD0);
    // 0x80213140: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80213144: nop

    // 0x80213148: bc1f        L_80213178
    if (!c1cs) {
        // 0x8021314C: nop
    
            goto L_80213178;
    }
    // 0x8021314C: nop

    // 0x80213150: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80213154: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x80213158: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x8021315C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80213160: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x80213164: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80213168: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x8021316C: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80213170: b           L_8021347C
    // 0x80213174: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
        goto L_8021347C;
    // 0x80213174: swc1        $f16, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f16.u32l;
L_80213178:
    // 0x80213178: mul.s       $f0, $f14, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8021317C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x80213180: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x80213184: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80213188: jal         0x8022AA40
    // 0x8021318C: sub.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f0.fl;
    func_8022AA40(rdram, ctx);
        goto after_3;
    // 0x8021318C: sub.s       $f12, $f18, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f0.fl;
    after_3:
    // 0x80213190: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x80213194: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80213198: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8021319C: lwc1        $f20, 0x30FC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X30FC);
    // 0x802131A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802131A4: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x802131A8: jal         0x80234C78
    // 0x802131AC: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    func_80234C78(rdram, ctx);
        goto after_4;
    // 0x802131AC: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x802131B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802131B4: jal         0x80234D30
    // 0x802131B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234D30(rdram, ctx);
        goto after_5;
    // 0x802131B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x802131BC: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x802131C0: jal         0x80234BE4
    // 0x802131C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234BE4(rdram, ctx);
        goto after_6;
    // 0x802131C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x802131C8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802131CC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x802131D0: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x802131D4: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x802131D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802131DC: bc1fl       L_802131F8
    if (!c1cs) {
        // 0x802131E0: lwc1        $f0, 0x40($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
            goto L_802131F8;
    }
    goto skip_1;
    // 0x802131E0: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    skip_1:
    // 0x802131E4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802131E8: jal         0x80234C14
    // 0x802131EC: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    func_80234C14(rdram, ctx);
        goto after_7;
    // 0x802131EC: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x802131F0: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802131F4: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
L_802131F8:
    // 0x802131F8: lwc1        $f12, 0xB8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x802131FC: lwc1        $f14, 0xBC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80213200: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x80213204: lwc1        $f8, 0xC0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80213208: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8021320C: lwc1        $f2, 0xB4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80213210: bc1fl       L_80213224
    if (!c1cs) {
        // 0x80213214: lwc1        $f10, 0xC4($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
            goto L_80213224;
    }
    goto skip_2;
    // 0x80213214: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
    skip_2:
    // 0x80213218: b           L_8021347C
    // 0x8021321C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021347C;
    // 0x8021321C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80213220: lwc1        $f10, 0xC4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC4);
L_80213224:
    // 0x80213224: lwc1        $f18, 0xC8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80213228: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x8021322C: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80213230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213234: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x80213238: lwc1        $f10, 0x9C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8021323C: swc1        $f4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f4.u32l;
    // 0x80213240: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80213244: lwc1        $f18, 0xA0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x80213248: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    // 0x8021324C: sub.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80213250: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
    // 0x80213254: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80213258: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x8021325C: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x80213260: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80213264: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80213268: swc1        $f16, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f16.u32l;
    // 0x8021326C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80213270: jal         0x80234C78
    // 0x80213274: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    func_80234C78(rdram, ctx);
        goto after_8;
    // 0x80213274: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80213278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021327C: jal         0x80234D30
    // 0x80213280: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234D30(rdram, ctx);
        goto after_9;
    // 0x80213280: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80213284: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80213288: jal         0x80234BE4
    // 0x8021328C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234BE4(rdram, ctx);
        goto after_10;
    // 0x8021328C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80213290: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80213294: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80213298: bc1fl       L_802132D0
    if (!c1cs) {
        // 0x8021329C: lwc1        $f4, 0x28($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
            goto L_802132D0;
    }
    goto skip_3;
    // 0x8021329C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    skip_3:
    // 0x802132A0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802132A4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x802132A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x802132AC: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x802132B0: nop

    // 0x802132B4: bc1fl       L_802132D0
    if (!c1cs) {
        // 0x802132B8: lwc1        $f4, 0x28($sp)
        ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
            goto L_802132D0;
    }
    goto skip_4;
    // 0x802132B8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    skip_4:
    // 0x802132BC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x802132C0: jal         0x80234C14
    // 0x802132C4: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    func_80234C14(rdram, ctx);
        goto after_11;
    // 0x802132C4: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x802132C8: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802132CC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
L_802132D0:
    // 0x802132D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802132D4: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x802132D8: nop

    // 0x802132DC: bc1fl       L_802132F0
    if (!c1cs) {
        // 0x802132E0: lwc1        $f18, 0xC0($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
            goto L_802132F0;
    }
    goto skip_5;
    // 0x802132E0: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
    skip_5:
    // 0x802132E4: b           L_8021347C
    // 0x802132E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021347C;
    // 0x802132E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802132EC: lwc1        $f18, 0xC0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XC0);
L_802132F0:
    // 0x802132F0: lwc1        $f16, 0xA8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x802132F4: lwc1        $f14, 0xAC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x802132F8: lwc1        $f12, 0xC4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x802132FC: sub.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80213300: lwc1        $f10, 0xC8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80213304: lwc1        $f8, 0xB0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x80213308: sub.s       $f14, $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x8021330C: lwc1        $f6, 0x98($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80213310: lwc1        $f4, 0x9C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80213314: sub.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80213318: lwc1        $f2, 0xA0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8021331C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x80213320: sub.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80213324: swc1        $f14, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f14.u32l;
    // 0x80213328: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x8021332C: sub.s       $f12, $f4, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80213330: swc1        $f18, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f18.u32l;
    // 0x80213334: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80213338: sub.s       $f10, $f2, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x8021333C: swc1        $f12, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f12.u32l;
    // 0x80213340: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80213344: jal         0x80234C78
    // 0x80213348: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    func_80234C78(rdram, ctx);
        goto after_12;
    // 0x80213348: swc1        $f10, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x8021334C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80213350: jal         0x80234D30
    // 0x80213354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234D30(rdram, ctx);
        goto after_13;
    // 0x80213354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x80213358: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x8021335C: jal         0x80234BE4
    // 0x80213360: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80234BE4(rdram, ctx);
        goto after_14;
    // 0x80213360: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x80213364: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80213368: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x8021336C: bc1fl       L_802133A4
    if (!c1cs) {
        // 0x80213370: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_802133A4;
    }
    goto skip_6;
    // 0x80213370: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_6:
    // 0x80213374: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80213378: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8021337C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80213380: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80213384: nop

    // 0x80213388: bc1fl       L_802133A4
    if (!c1cs) {
        // 0x8021338C: lwc1        $f8, 0x28($sp)
        ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
            goto L_802133A4;
    }
    goto skip_7;
    // 0x8021338C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    skip_7:
    // 0x80213390: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80213394: jal         0x80234C14
    // 0x80213398: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    func_80234C14(rdram, ctx);
        goto after_15;
    // 0x80213398: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    after_15:
    // 0x8021339C: lwc1        $f2, 0x38($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802133A0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
L_802133A4:
    // 0x802133A4: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x802133A8: nop

    // 0x802133AC: bc1fl       L_802133C0
    if (!c1cs) {
        // 0x802133B0: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_802133C0;
    }
    goto skip_8;
    // 0x802133B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_8:
    // 0x802133B4: b           L_8021347C
    // 0x802133B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8021347C;
    // 0x802133B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802133BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_802133C0:
    // 0x802133C0: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802133C4: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x802133C8: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x802133CC: nop

    // 0x802133D0: bc1fl       L_8021345C
    if (!c1cs) {
        // 0x802133D4: swc1        $f16, 0x0($t8)
        MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
            goto L_8021345C;
    }
    goto skip_9;
    // 0x802133D4: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
    skip_9:
    // 0x802133D8: mul.s       $f18, $f20, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x802133DC: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802133E0: jal         0x8022AA40
    // 0x802133E4: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_8022AA40(rdram, ctx);
        goto after_16;
    // 0x802133E4: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_16:
    // 0x802133E8: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    // 0x802133EC: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802133F0: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x802133F4: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x802133F8: swc1        $f10, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f10.u32l;
    // 0x802133FC: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80213400: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x80213404: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80213408: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8021340C: lwc1        $f10, 0x90($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80213410: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80213414: mul.s       $f16, $f4, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80213418: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8021341C: mul.s       $f6, $f10, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x80213420: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80213424: mul.s       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80213428: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8021342C: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x80213430: lwc1        $f18, 0x94($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80213434: mul.s       $f10, $f18, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80213438: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8021343C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80213440: swc1        $f16, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f16.u32l;
    // 0x80213444: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80213448: jal         0x80234D30
    // 0x8021344C: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    func_80234D30(rdram, ctx);
        goto after_17;
    // 0x8021344C: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
    after_17:
    // 0x80213450: b           L_80213460
    // 0x80213454: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
        goto L_80213460;
    // 0x80213454: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
    // 0x80213458: swc1        $f16, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f16.u32l;
L_8021345C:
    // 0x8021345C: lw          $v1, 0xCC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XCC);
L_80213460:
    // 0x80213460: lwc1        $f18, 0x8C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80213464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80213468: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x8021346C: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80213470: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80213474: lwc1        $f10, 0x94($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80213478: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_8021347C:
    // 0x8021347C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80213480: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80213484: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80213488: jr          $ra
    // 0x8021348C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8021348C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80229BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80229BE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80229BEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229BF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80229BF4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80229BF8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80229BFC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80229C00: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80229C04: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80229C08: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80229C0C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80229C10: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80229C14: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80229C18: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229C1C: jal         0x80231A24
    // 0x80229C20: addiu       $a0, $a0, 0x3EB8
    ctx->r4 = ADD32(ctx->r4, 0X3EB8);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80229C20: addiu       $a0, $a0, 0x3EB8
    ctx->r4 = ADD32(ctx->r4, 0X3EB8);
    after_0:
    // 0x80229C24: lui         $s7, 0x8025
    ctx->r23 = S32(0X8025 << 16);
    // 0x80229C28: lui         $s6, 0x8025
    ctx->r22 = S32(0X8025 << 16);
    // 0x80229C2C: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x80229C30: addiu       $s2, $s2, 0x3EC4
    ctx->r18 = ADD32(ctx->r18, 0X3EC4);
    // 0x80229C34: addiu       $s6, $s6, 0x3EBC
    ctx->r22 = ADD32(ctx->r22, 0X3EBC);
    // 0x80229C38: addiu       $s7, $s7, 0x3ECC
    ctx->r23 = ADD32(ctx->r23, 0X3ECC);
    // 0x80229C3C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80229C40: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x80229C44: addiu       $fp, $zero, 0x4
    ctx->r30 = ADD32(0, 0X4);
    // 0x80229C48: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_80229C4C:
    // 0x80229C4C: jal         0x80231A24
    // 0x80229C50: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80229C50: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x80229C54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80229C58: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
L_80229C5C:
    // 0x80229C5C: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80229C60: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80229C64: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80229C68: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80229C6C: mfc1        $a2, $f7
    ctx->r6 = (int32_t)ctx->f_odd[(7 - 1) * 2];
    // 0x80229C70: jal         0x80231A24
    // 0x80229C74: nop

    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80229C74: nop

    after_2:
    // 0x80229C78: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80229C7C: bne         $s0, $s3, L_80229C5C
    if (ctx->r16 != ctx->r19) {
        // 0x80229C80: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80229C5C;
    }
    // 0x80229C80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80229C84: jal         0x80231A24
    // 0x80229C88: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80229C88: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_3:
    // 0x80229C8C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80229C90: bne         $s4, $fp, L_80229C4C
    if (ctx->r20 != ctx->r30) {
        // 0x80229C94: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_80229C4C;
    }
    // 0x80229C94: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x80229C98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80229C9C: jal         0x80231A24
    // 0x80229CA0: addiu       $a0, $a0, 0x3ED0
    ctx->r4 = ADD32(ctx->r4, 0X3ED0);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80229CA0: addiu       $a0, $a0, 0x3ED0
    ctx->r4 = ADD32(ctx->r4, 0X3ED0);
    after_4:
    // 0x80229CA4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80229CA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229CAC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229CB0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229CB4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80229CB8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80229CBC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80229CC0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80229CC4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80229CC8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80229CCC: jr          $ra
    // 0x80229CD0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80229CD0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8021C1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021C1F0: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x8021C1F4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8021C1F8: lui         $s0, 0x8026
    ctx->r16 = S32(0X8026 << 16);
    // 0x8021C1FC: addiu       $s0, $s0, -0x3C06
    ctx->r16 = ADD32(ctx->r16, -0X3C06);
    // 0x8021C200: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8021C204: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8021C208: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8021C20C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8021C210: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8021C214: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x8021C218: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x8021C21C: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x8021C220: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8021C224: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8021C228: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8021C22C: sdc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X50, ctx->r29);
    // 0x8021C230: sdc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X48, ctx->r29);
    // 0x8021C234: sdc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X40, ctx->r29);
    // 0x8021C238: sdc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X38, ctx->r29);
    // 0x8021C23C: sdc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X30, ctx->r29);
    // 0x8021C240: beq         $t6, $zero, L_8021C4E4
    if (ctx->r14 == 0) {
        // 0x8021C244: sdc1        $f20, 0x28($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
            goto L_8021C4E4;
    }
    // 0x8021C244: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
    // 0x8021C248: jal         0x802223E0
    // 0x8021C24C: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    func_802223E0(rdram, ctx);
        goto after_0;
    // 0x8021C24C: lhu         $a0, 0x6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6);
    after_0:
    // 0x8021C250: jal         0x80222818
    // 0x8021C254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80222818(rdram, ctx);
        goto after_1;
    // 0x8021C254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8021C258: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x8021C25C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021C260: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021C264: blez        $a1, L_8021C4E4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8021C268: lui         $fp, 0x8026
        ctx->r30 = S32(0X8026 << 16);
            goto L_8021C4E4;
    }
    // 0x8021C268: lui         $fp, 0x8026
    ctx->r30 = S32(0X8026 << 16);
    // 0x8021C26C: lui         $s6, 0x8026
    ctx->r22 = S32(0X8026 << 16);
    // 0x8021C270: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x8021C274: addiu       $s4, $s4, 0x3B90
    ctx->r20 = ADD32(ctx->r20, 0X3B90);
    // 0x8021C278: addiu       $s6, $s6, -0x3C10
    ctx->r22 = ADD32(ctx->r22, -0X3C10);
    // 0x8021C27C: lwc1        $f30, 0x3478($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X3478);
    // 0x8021C280: addiu       $fp, $fp, -0x3C20
    ctx->r30 = ADD32(ctx->r30, -0X3C20);
    // 0x8021C284: addiu       $s7, $zero, 0x24
    ctx->r23 = ADD32(0, 0X24);
    // 0x8021C288: addiu       $s5, $sp, 0xC8
    ctx->r21 = ADD32(ctx->r29, 0XC8);
    // 0x8021C28C: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
L_8021C290:
    // 0x8021C290: lw          $t1, 0x0($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X0);
    // 0x8021C294: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021C298: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x8021C29C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021C2A0: multu       $t9, $s7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021C2A4: mflo        $t0
    ctx->r8 = lo;
    // 0x8021C2A8: addu        $s0, $t0, $t1
    ctx->r16 = ADD32(ctx->r8, ctx->r9);
    // 0x8021C2AC: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8021C2B0: bnel        $v1, $at, L_8021C2C4
    if (ctx->r3 != ctx->r1) {
        // 0x8021C2B4: lbu         $t2, 0x8($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X8);
            goto L_8021C2C4;
    }
    goto skip_0;
    // 0x8021C2B4: lbu         $t2, 0x8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X8);
    skip_0:
    // 0x8021C2B8: b           L_8021C4D4
    // 0x8021C2BC: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
        goto L_8021C4D4;
    // 0x8021C2BC: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x8021C2C0: lbu         $t2, 0x8($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X8);
L_8021C2C4:
    // 0x8021C2C4: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8021C2C8: bnel        $t3, $zero, L_8021C2DC
    if (ctx->r11 != 0) {
        // 0x8021C2CC: lw          $t8, 0x4($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X4);
            goto L_8021C2DC;
    }
    goto skip_1;
    // 0x8021C2CC: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x8021C2D0: b           L_8021C4D4
    // 0x8021C2D4: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
        goto L_8021C4D4;
    // 0x8021C2D4: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x8021C2D8: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
L_8021C2DC:
    // 0x8021C2DC: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x8021C2E0: lw          $t1, -0x3C1C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3C1C);
    // 0x8021C2E4: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021C2E8: lwc1        $f6, 0xB8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0XB8);
    // 0x8021C2EC: lwc1        $f10, 0xBC($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0XBC);
    // 0x8021C2F0: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x8021C2F4: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8021C2F8: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021C2FC: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021C300: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8021C304: sub.s       $f26, $f4, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f26.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8021C308: lwc1        $f4, 0xC0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0XC0);
    // 0x8021C30C: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x8021C310: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8021C314: mul.s       $f6, $f26, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x8021C318: lw          $t4, -0x18F0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X18F0);
    // 0x8021C31C: sub.s       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021C320: mul.s       $f8, $f28, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x8021C324: lw          $t5, 0x1C($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X1C);
    // 0x8021C328: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8021C32C: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8021C330: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8021C334: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x8021C338: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021C33C: jal         0x8022AA40
    // 0x8021C340: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    func_8022AA40(rdram, ctx);
        goto after_2;
    // 0x8021C340: add.s       $f12, $f10, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f18.fl;
    after_2:
    // 0x8021C344: lwc1        $f2, 0xC($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8021C348: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8021C34C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8021C350: add.s       $f24, $f2, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8021C354: c.lt.s      $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f30.fl < ctx->f12.fl;
    // 0x8021C358: nop

    // 0x8021C35C: bc1fl       L_8021C370
    if (!c1cs) {
        // 0x8021C360: mov.s       $f20, $f30
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
            goto L_8021C370;
    }
    goto skip_2;
    // 0x8021C360: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    skip_2:
    // 0x8021C364: b           L_8021C370
    // 0x8021C368: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
        goto L_8021C370;
    // 0x8021C368: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x8021C36C: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
L_8021C370:
    // 0x8021C370: lwc1        $f4, 0x130($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X130);
    // 0x8021C374: lwc1        $f6, 0x120($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X120);
    // 0x8021C378: lwc1        $f8, 0x124($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X124);
    // 0x8021C37C: div.s       $f0, $f20, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f20.fl, ctx->f4.fl);
    // 0x8021C380: lwc1        $f10, 0x12C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X12C);
    // 0x8021C384: lwc1        $f18, 0x128($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X128);
    // 0x8021C388: swc1        $f24, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f24.u32l;
    // 0x8021C38C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8021C390: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8021C394: mul.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021C398: nop

    // 0x8021C39C: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8021C3A0: nop

    // 0x8021C3A4: mul.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8021C3A8: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8021C3AC: mul.s       $f16, $f18, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8021C3B0: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8021C3B4: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x8021C3B8: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8021C3BC: jal         0x8022A784
    // 0x8021C3C0: nop

    func_8022A784(rdram, ctx);
        goto after_3;
    // 0x8021C3C0: nop

    after_3:
    // 0x8021C3C4: jal         0x80221B2C
    // 0x8021C3C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80221B2C(rdram, ctx);
        goto after_4;
    // 0x8021C3C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_4:
    // 0x8021C3CC: add.s       $f6, $f24, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x8021C3D0: lui         $at, 0x4800
    ctx->r1 = S32(0X4800 << 16);
    // 0x8021C3D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8021C3D8: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8021C3DC: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x8021C3E0: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021C3E4: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8021C3E8: sw          $t2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r10;
    // 0x8021C3EC: ori         $t3, $t3, 0xE
    ctx->r11 = ctx->r11 | 0XE;
    // 0x8021C3F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021C3F4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8021C3F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8021C3FC: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8021C400: mfc1        $t5, $f10
    ctx->r13 = (int32_t)ctx->f10.u32l;
    // 0x8021C404: nop

    // 0x8021C408: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8021C40C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8021C410: sw          $t7, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r15;
    // 0x8021C414: lwc1        $f0, 0x13C($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X13C);
    // 0x8021C418: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x8021C41C: nop

    // 0x8021C420: bc1f        L_8021C43C
    if (!c1cs) {
        // 0x8021C424: nop
    
            goto L_8021C43C;
    }
    // 0x8021C424: nop

    // 0x8021C428: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8021C42C: jal         0x8021C52C
    // 0x8021C430: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8021C52C(rdram, ctx);
        goto after_5;
    // 0x8021C430: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8021C434: b           L_8021C454
    // 0x8021C438: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
        goto L_8021C454;
    // 0x8021C438: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
L_8021C43C:
    // 0x8021C43C: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8021C440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021C444: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x8021C448: jal         0x8021C52C
    // 0x8021C44C: nop

    func_8021C52C(rdram, ctx);
        goto after_6;
    // 0x8021C44C: nop

    after_6:
    // 0x8021C450: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
L_8021C454:
    // 0x8021C454: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8021C458: bne         $v0, $at, L_8021C46C
    if (ctx->r2 != ctx->r1) {
        // 0x8021C45C: lui         $a1, 0x8026
        ctx->r5 = S32(0X8026 << 16);
            goto L_8021C46C;
    }
    // 0x8021C45C: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x8021C460: lhu         $a1, -0x3C06($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X3C06);
    // 0x8021C464: b           L_8021C4D4
    // 0x8021C468: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
        goto L_8021C4D4;
    // 0x8021C468: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
L_8021C46C:
    // 0x8021C46C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x8021C470: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x8021C474: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8021C478: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8021C47C: lbu         $t1, 0x5($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X5);
    // 0x8021C480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021C484: beq         $t1, $zero, L_8021C4A4
    if (ctx->r9 == 0) {
        // 0x8021C488: nop
    
            goto L_8021C4A4;
    }
    // 0x8021C488: nop

    // 0x8021C48C: mfc1        $a3, $f26
    ctx->r7 = (int32_t)ctx->f26.u32l;
    // 0x8021C490: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021C494: jal         0x8021C9C0
    // 0x8021C498: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    func_8021C9C0(rdram, ctx);
        goto after_7;
    // 0x8021C498: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    after_7:
    // 0x8021C49C: b           L_8021C4B0
    // 0x8021C4A0: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
        goto L_8021C4B0;
    // 0x8021C4A0: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
L_8021C4A4:
    // 0x8021C4A4: jal         0x8021C5AC
    // 0x8021C4A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8021C5AC(rdram, ctx);
        goto after_8;
    // 0x8021C4A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x8021C4AC: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
L_8021C4B0:
    // 0x8021C4B0: lui         $t3, 0xBD00
    ctx->r11 = S32(0XBD00 << 16);
    // 0x8021C4B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8021C4B8: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8021C4BC: sw          $t2, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r10;
    // 0x8021C4C0: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x8021C4C4: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
    // 0x8021C4C8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8021C4CC: lhu         $a1, -0x3C06($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X3C06);
    // 0x8021C4D0: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
L_8021C4D4:
    // 0x8021C4D4: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x8021C4D8: slt         $at, $s3, $a0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021C4DC: bnel        $at, $zero, L_8021C290
    if (ctx->r1 != 0) {
        // 0x8021C4E0: lw          $t7, 0x0($s6)
        ctx->r15 = MEM_W(ctx->r22, 0X0);
            goto L_8021C290;
    }
    goto skip_3;
    // 0x8021C4E0: lw          $t7, 0x0($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X0);
    skip_3:
L_8021C4E4:
    // 0x8021C4E4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8021C4E8: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8021C4EC: ldc1        $f22, 0x30($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X30);
    // 0x8021C4F0: ldc1        $f24, 0x38($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X38);
    // 0x8021C4F4: ldc1        $f26, 0x40($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X40);
    // 0x8021C4F8: ldc1        $f28, 0x48($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X48);
    // 0x8021C4FC: ldc1        $f30, 0x50($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X50);
    // 0x8021C500: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8021C504: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8021C508: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8021C50C: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8021C510: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x8021C514: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8021C518: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x8021C51C: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x8021C520: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x8021C524: jr          $ra
    // 0x8021C528: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x8021C528: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_80204E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80204E0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80204E10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80204E14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80204E18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80204E1C: jal         0x8020523C
    // 0x80204E20: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_8020523C(rdram, ctx);
        goto after_0;
    // 0x80204E20: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80204E24: jal         0x802375F0
    // 0x80204E28: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_802375F0(rdram, ctx);
        goto after_1;
    // 0x80204E28: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x80204E2C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x80204E30: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80204E34: beq         $v1, $zero, L_80204E50
    if (ctx->r3 == 0) {
        // 0x80204E38: nop
    
            goto L_80204E50;
    }
    // 0x80204E38: nop

    // 0x80204E3C: lh          $a1, 0x4($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X4);
    // 0x80204E40: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80204E44: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80204E48: jal         0x80237670
    // 0x80204E4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80237670(rdram, ctx);
        goto after_2;
    // 0x80204E4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
L_80204E50:
    // 0x80204E50: jal         0x80237720
    // 0x80204E54: nop

    func_80237720(rdram, ctx);
        goto after_3;
    // 0x80204E54: nop

    after_3:
    // 0x80204E58: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80204E5C: lw          $t7, -0x4738($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X4738);
    // 0x80204E60: srl         $t8, $v0, 2
    ctx->r24 = S32(U32(ctx->r2) >> 2);
    // 0x80204E64: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80204E68: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x80204E6C: addiu       $t0, $t9, 0x74
    ctx->r8 = ADD32(ctx->r25, 0X74);
    // 0x80204E70: andi        $t1, $t0, 0xFFF0
    ctx->r9 = ctx->r8 & 0XFFF0;
    // 0x80204E74: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
    // 0x80204E78: lw          $v1, -0x473C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X473C);
    // 0x80204E7C: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80204E80: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80204E84: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204E88: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80204E8C: beq         $at, $zero, L_80204E9C
    if (ctx->r1 == 0) {
        // 0x80204E90: nop
    
            goto L_80204E9C;
    }
    // 0x80204E90: nop

    // 0x80204E94: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x80204E98: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
L_80204E9C:
    // 0x80204E9C: lw          $t2, -0x1A5C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1A5C);
    // 0x80204EA0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80204EA4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80204EA8: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80204EAC: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80204EB0: jal         0x80237878
    // 0x80204EB4: lw          $a0, 0x7628($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7628);
    func_80237878(rdram, ctx);
        goto after_4;
    // 0x80204EB4: lw          $a0, 0x7628($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7628);
    after_4:
    // 0x80204EB8: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80204EBC: lhu         $t4, 0xBF8($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XBF8);
    // 0x80204EC0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80204EC4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80204EC8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80204ECC: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80204ED0: beq         $at, $zero, L_80204EF0
    if (ctx->r1 == 0) {
        // 0x80204ED4: addiu       $a0, $a0, 0x28B4
        ctx->r4 = ADD32(ctx->r4, 0X28B4);
            goto L_80204EF0;
    }
    // 0x80204ED4: addiu       $a0, $a0, 0x28B4
    ctx->r4 = ADD32(ctx->r4, 0X28B4);
    // 0x80204ED8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80204EDC: addiu       $a1, $a1, 0x28CC
    ctx->r5 = ADD32(ctx->r5, 0X28CC);
    // 0x80204EE0: addiu       $a2, $zero, 0x1AE
    ctx->r6 = ADD32(0, 0X1AE);
    // 0x80204EE4: jal         0x80231C9C
    // 0x80204EE8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80231C9C(rdram, ctx);
        goto after_5;
    // 0x80204EE8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_5:
    // 0x80204EEC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
L_80204EF0:
    // 0x80204EF0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80204EF4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80204EF8: addiu       $v0, $v0, -0x5190
    ctx->r2 = ADD32(ctx->r2, -0X5190);
    // 0x80204EFC: bne         $t6, $zero, L_80204F0C
    if (ctx->r14 != 0) {
        // 0x80204F00: lui         $v1, 0x8025
        ctx->r3 = S32(0X8025 << 16);
            goto L_80204F0C;
    }
    // 0x80204F00: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80204F04: b           L_80204FFC
    // 0x80204F08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80204FFC;
    // 0x80204F08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80204F0C:
    // 0x80204F0C: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80204F10: addiu       $t7, $t7, 0x7828
    ctx->r15 = ADD32(ctx->r15, 0X7828);
    // 0x80204F14: addiu       $t8, $s0, 0x60
    ctx->r24 = ADD32(ctx->r16, 0X60);
    // 0x80204F18: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80204F1C: addiu       $v1, $v1, -0x1A5C
    ctx->r3 = ADD32(ctx->r3, -0X1A5C);
    // 0x80204F20: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80204F24: sw          $t7, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r15;
    // 0x80204F28: sw          $t8, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r24;
    // 0x80204F2C: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    // 0x80204F30: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80204F34: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x80204F38: addiu       $a2, $a2, 0x7628
    ctx->r6 = ADD32(ctx->r6, 0X7628);
    // 0x80204F3C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80204F40: addu        $t2, $a2, $t1
    ctx->r10 = ADD32(ctx->r6, ctx->r9);
    // 0x80204F44: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80204F48: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80204F4C: addiu       $t2, $t2, -0x50C0
    ctx->r10 = ADD32(ctx->r10, -0X50C0);
    // 0x80204F50: sw          $t3, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r11;
    // 0x80204F54: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80204F58: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80204F5C: subu        $t3, $t2, $v0
    ctx->r11 = SUB32(ctx->r10, ctx->r2);
    // 0x80204F60: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80204F64: addu        $t6, $a2, $t5
    ctx->r14 = ADD32(ctx->r6, ctx->r13);
    // 0x80204F68: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80204F6C: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x80204F70: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x80204F74: subu        $t8, $a3, $t7
    ctx->r24 = SUB32(ctx->r7, ctx->r15);
    // 0x80204F78: sra         $t9, $t8, 3
    ctx->r25 = S32(SIGNED(ctx->r24) >> 3);
    // 0x80204F7C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80204F80: addiu       $t4, $t4, -0x2880
    ctx->r12 = ADD32(ctx->r12, -0X2880);
    // 0x80204F84: addiu       $t5, $t5, 0x6AB0
    ctx->r13 = ADD32(ctx->r13, 0X6AB0);
    // 0x80204F88: addiu       $t6, $zero, 0x800
    ctx->r14 = ADD32(0, 0X800);
    // 0x80204F8C: sw          $t0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r8;
    // 0x80204F90: sw          $t1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r9;
    // 0x80204F94: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80204F98: sw          $t3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r11;
    // 0x80204F9C: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x80204FA0: sw          $t4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r12;
    // 0x80204FA4: sw          $t5, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r13;
    // 0x80204FA8: sw          $t6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r14;
    // 0x80204FAC: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80204FB0: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x80204FB4: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80204FB8: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x80204FBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80204FC0: jal         0x8022D560
    // 0x80204FC4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_8022D560(rdram, ctx);
        goto after_6;
    // 0x80204FC4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_6:
    // 0x80204FC8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80204FCC: jal         0x8022CA28
    // 0x80204FD0: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    func_8022CA28(rdram, ctx);
        goto after_7;
    // 0x80204FD0: addiu       $a0, $a0, 0x1218
    ctx->r4 = ADD32(ctx->r4, 0X1218);
    after_7:
    // 0x80204FD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80204FD8: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x80204FDC: jal         0x80236B80
    // 0x80204FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80236B80(rdram, ctx);
        goto after_8;
    // 0x80204FE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80204FE4: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x80204FE8: lw          $t7, -0x1A5C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1A5C);
    // 0x80204FEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80204FF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80204FF4: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x80204FF8: sw          $t8, -0x1A5C($at)
    MEM_W(-0X1A5C, ctx->r1) = ctx->r24;
L_80204FFC:
    // 0x80204FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80205000: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80205004: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80205008: jr          $ra
    // 0x8020500C: nop

    return;
    // 0x8020500C: nop

;}
RECOMP_FUNC void func_8021E1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E1BC: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021E1C0: lw          $t7, -0x3A00($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3A00);
    // 0x8021E1C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8021E1C8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8021E1CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021E1D0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8021E1D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021E1D8: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x8021E1DC: jal         0x80222E50
    // 0x8021E1E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80222E50(rdram, ctx);
        goto after_0;
    // 0x8021E1E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8021E1E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E1E8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8021E1EC: addiu       $a0, $a1, 0x8
    ctx->r4 = ADD32(ctx->r5, 0X8);
    // 0x8021E1F0: lwc1        $f6, 0xC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8021E1F4: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E1F8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8021E1FC: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8021E200: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x8021E204: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E208: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8021E20C: nop

    // 0x8021E210: bc1tl       L_8021E3C4
    if (c1cs) {
        // 0x8021E214: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021E3C4;
    }
    goto skip_0;
    // 0x8021E214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8021E218: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8021E21C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8021E220: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8021E224: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8021E228: bc1fl       L_8021E3C4
    if (!c1cs) {
        // 0x8021E22C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021E3C4;
    }
    goto skip_1;
    // 0x8021E22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021E230: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8021E234: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
L_8021E238:
    // 0x8021E238: beql        $v1, $zero, L_8021E25C
    if (ctx->r3 == 0) {
        // 0x8021E23C: lbu         $t8, 0x9($a0)
        ctx->r24 = MEM_BU(ctx->r4, 0X9);
            goto L_8021E25C;
    }
    goto skip_2;
    // 0x8021E23C: lbu         $t8, 0x9($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X9);
    skip_2:
    // 0x8021E240: beql        $v1, $a2, L_8021E2F8
    if (ctx->r3 == ctx->r6) {
        // 0x8021E244: lbu         $t6, 0x9($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X9);
            goto L_8021E2F8;
    }
    goto skip_3;
    // 0x8021E244: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
    skip_3:
    // 0x8021E248: beql        $v1, $a3, L_8021E348
    if (ctx->r3 == ctx->r7) {
        // 0x8021E24C: lbu         $t1, 0x9($a0)
        ctx->r9 = MEM_BU(ctx->r4, 0X9);
            goto L_8021E348;
    }
    goto skip_4;
    // 0x8021E24C: lbu         $t1, 0x9($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X9);
    skip_4:
    // 0x8021E250: b           L_8021E398
    // 0x8021E254: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
        goto L_8021E398;
    // 0x8021E254: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021E258: lbu         $t8, 0x9($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X9);
L_8021E25C:
    // 0x8021E25C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021E260: bnel        $t8, $zero, L_8021E2AC
    if (ctx->r24 != 0) {
        // 0x8021E264: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_8021E2AC;
    }
    goto skip_5;
    // 0x8021E264: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_5:
    // 0x8021E268: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x8021E26C: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8021E270: div         $zero, $t9, $t1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r9)));
    // 0x8021E274: mfhi        $t2
    ctx->r10 = hi;
    // 0x8021E278: sb          $t2, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r10;
    // 0x8021E27C: bne         $t1, $zero, L_8021E288
    if (ctx->r9 != 0) {
        // 0x8021E280: nop
    
            goto L_8021E288;
    }
    // 0x8021E280: nop

    // 0x8021E284: break       7
    do_break(2149704324);
L_8021E288:
    // 0x8021E288: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021E28C: bne         $t1, $at, L_8021E2A0
    if (ctx->r9 != ctx->r1) {
        // 0x8021E290: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8021E2A0;
    }
    // 0x8021E290: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021E294: bne         $t9, $at, L_8021E2A0
    if (ctx->r25 != ctx->r1) {
        // 0x8021E298: nop
    
            goto L_8021E2A0;
    }
    // 0x8021E298: nop

    // 0x8021E29C: break       6
    do_break(2149704348);
L_8021E2A0:
    // 0x8021E2A0: b           L_8021E2E8
    // 0x8021E2A4: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
        goto L_8021E2E8;
    // 0x8021E2A4: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8021E2A8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_8021E2AC:
    // 0x8021E2AC: addu        $t3, $v1, $v0
    ctx->r11 = ADD32(ctx->r3, ctx->r2);
    // 0x8021E2B0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8021E2B4: div         $zero, $t4, $v0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r2)));
    // 0x8021E2B8: mfhi        $t5
    ctx->r13 = hi;
    // 0x8021E2BC: sb          $t5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r13;
    // 0x8021E2C0: bne         $v0, $zero, L_8021E2CC
    if (ctx->r2 != 0) {
        // 0x8021E2C4: nop
    
            goto L_8021E2CC;
    }
    // 0x8021E2C4: nop

    // 0x8021E2C8: break       7
    do_break(2149704392);
L_8021E2CC:
    // 0x8021E2CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021E2D0: bne         $v0, $at, L_8021E2E4
    if (ctx->r2 != ctx->r1) {
        // 0x8021E2D4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8021E2E4;
    }
    // 0x8021E2D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021E2D8: bne         $t4, $at, L_8021E2E4
    if (ctx->r12 != ctx->r1) {
        // 0x8021E2DC: nop
    
            goto L_8021E2E4;
    }
    // 0x8021E2DC: nop

    // 0x8021E2E0: break       6
    do_break(2149704416);
L_8021E2E4:
    // 0x8021E2E4: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
L_8021E2E8:
    // 0x8021E2E8: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E2EC: b           L_8021E398
    // 0x8021E2F0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
        goto L_8021E398;
    // 0x8021E2F0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021E2F4: lbu         $t6, 0x9($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X9);
L_8021E2F8:
    // 0x8021E2F8: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x8021E2FC: bne         $t6, $zero, L_8021E320
    if (ctx->r14 != 0) {
        // 0x8021E300: nop
    
            goto L_8021E320;
    }
    // 0x8021E300: nop

    // 0x8021E304: sb          $t7, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r15;
    // 0x8021E308: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8021E30C: andi        $v0, $t7, 0xFF
    ctx->r2 = ctx->r15 & 0XFF;
    // 0x8021E310: bnel        $t8, $v0, L_8021E33C
    if (ctx->r24 != ctx->r2) {
        // 0x8021E314: lwc1        $f2, 0x4($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
            goto L_8021E33C;
    }
    goto skip_6;
    // 0x8021E314: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    skip_6:
    // 0x8021E318: b           L_8021E3C0
    // 0x8021E31C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_8021E3C0;
    // 0x8021E31C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8021E320:
    // 0x8021E320: bne         $v0, $zero, L_8021E330
    if (ctx->r2 != 0) {
        // 0x8021E324: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_8021E330;
    }
    // 0x8021E324: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x8021E328: b           L_8021E3C0
    // 0x8021E32C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_8021E3C0;
    // 0x8021E32C: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8021E330:
    // 0x8021E330: sb          $t9, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r25;
    // 0x8021E334: andi        $v0, $t9, 0xFF
    ctx->r2 = ctx->r25 & 0XFF;
    // 0x8021E338: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
L_8021E33C:
    // 0x8021E33C: b           L_8021E398
    // 0x8021E340: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
        goto L_8021E398;
    // 0x8021E340: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021E344: lbu         $t1, 0x9($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X9);
L_8021E348:
    // 0x8021E348: bnel        $t1, $zero, L_8021E37C
    if (ctx->r9 != 0) {
        // 0x8021E34C: addiu       $t5, $v0, -0x1
        ctx->r13 = ADD32(ctx->r2, -0X1);
            goto L_8021E37C;
    }
    goto skip_7;
    // 0x8021E34C: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
    skip_7:
    // 0x8021E350: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x8021E354: sb          $t2, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r10;
    // 0x8021E358: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8021E35C: andi        $v0, $t2, 0xFF
    ctx->r2 = ctx->r10 & 0XFF;
    // 0x8021E360: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x8021E364: bnel        $t3, $t4, L_8021E394
    if (ctx->r11 != ctx->r12) {
        // 0x8021E368: lwc1        $f2, 0x4($a1)
        ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
            goto L_8021E394;
    }
    goto skip_8;
    // 0x8021E368: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    skip_8:
    // 0x8021E36C: sb          $t0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r8;
    // 0x8021E370: b           L_8021E390
    // 0x8021E374: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
        goto L_8021E390;
    // 0x8021E374: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8021E378: addiu       $t5, $v0, -0x1
    ctx->r13 = ADD32(ctx->r2, -0X1);
L_8021E37C:
    // 0x8021E37C: andi        $v0, $t5, 0xFF
    ctx->r2 = ctx->r13 & 0XFF;
    // 0x8021E380: bne         $v0, $zero, L_8021E390
    if (ctx->r2 != 0) {
        // 0x8021E384: sb          $t5, 0x2($a1)
        MEM_B(0X2, ctx->r5) = ctx->r13;
            goto L_8021E390;
    }
    // 0x8021E384: sb          $t5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r13;
    // 0x8021E388: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8021E38C: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
L_8021E390:
    // 0x8021E390: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
L_8021E394:
    // 0x8021E394: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
L_8021E398:
    // 0x8021E398: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8021E39C: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8021E3A0: lwc1        $f16, 0x4($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8021E3A4: add.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f16.fl;
    // 0x8021E3A8: swc1        $f18, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f18.u32l;
    // 0x8021E3AC: lwc1        $f2, 0x4($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X4);
    // 0x8021E3B0: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x8021E3B4: nop

    // 0x8021E3B8: bc1tl       L_8021E238
    if (c1cs) {
        // 0x8021E3BC: lbu         $v1, 0x8($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X8);
            goto L_8021E238;
    }
    goto skip_9;
    // 0x8021E3BC: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    skip_9:
L_8021E3C0:
    // 0x8021E3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021E3C4:
    // 0x8021E3C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021E3C8: jr          $ra
    // 0x8021E3CC: nop

    return;
    // 0x8021E3CC: nop

;}
RECOMP_FUNC void func_80231790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80231790: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80231794: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231798: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023179C: addiu       $a1, $sp, 0x68
    ctx->r5 = ADD32(ctx->r29, 0X68);
    // 0x802317A0: jal         0x802371E0
    // 0x802317A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802371E0(rdram, ctx);
        goto after_0;
    // 0x802317A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x802317A8: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x802317AC: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x802317B0: addiu       $t8, $sp, 0x50
    ctx->r24 = ADD32(ctx->r29, 0X50);
    // 0x802317B4: addiu       $t9, $sp, 0x68
    ctx->r25 = ADD32(ctx->r29, 0X68);
    // 0x802317B8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x802317BC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802317C0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802317C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802317C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x802317CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x802317D0: jal         0x8023E920
    // 0x802317D4: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_8023E920(rdram, ctx);
        goto after_1;
    // 0x802317D4: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_1:
    // 0x802317D8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x802317DC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x802317E0: jal         0x802374B0
    // 0x802317E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_2;
    // 0x802317E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802317E8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802317EC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802317F0: addiu       $a1, $a1, 0xC48
    ctx->r5 = ADD32(ctx->r5, 0XC48);
    // 0x802317F4: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    // 0x802317F8: jal         0x802371E0
    // 0x802317FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802371E0(rdram, ctx);
        goto after_3;
    // 0x802317FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80231800: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80231804: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x80231808: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8023180C: addiu       $a1, $a1, 0xC58
    ctx->r5 = ADD32(ctx->r5, 0XC58);
    // 0x80231810: jal         0x8023DF30
    // 0x80231814: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8023DF30(rdram, ctx);
        goto after_4;
    // 0x80231814: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x80231818: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023181C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80231820: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80231824: addiu       $a2, $a2, 0xCC8
    ctx->r6 = ADD32(ctx->r6, 0XCC8);
    // 0x80231828: addiu       $a1, $a1, 0xD04
    ctx->r5 = ADD32(ctx->r5, 0XD04);
    // 0x8023182C: jal         0x8023EA00
    // 0x80231830: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    func_8023EA00(rdram, ctx);
        goto after_5;
    // 0x80231830: addiu       $a0, $a0, 0xC58
    ctx->r4 = ADD32(ctx->r4, 0XC58);
    after_5:
    // 0x80231834: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80231838: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8023183C: lbu         $v0, 0xD04($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD04);
    // 0x80231840: jr          $ra
    // 0x80231844: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80231844: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8022573C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022573C: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80225740: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80225744: addiu       $s3, $sp, 0xF8
    ctx->r19 = ADD32(ctx->r29, 0XF8);
    // 0x80225748: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022574C: sw          $a0, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r4;
    // 0x80225750: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80225754: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80225758: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8022575C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80225760: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80225764: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80225768: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022576C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80225770: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80225774: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x80225778: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022577C: jal         0x80225424
    // 0x80225780: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_0;
    // 0x80225780: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80225784: addiu       $a0, $sp, 0x92
    ctx->r4 = ADD32(ctx->r29, 0X92);
    // 0x80225788: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022578C: jal         0x80225424
    // 0x80225790: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_1;
    // 0x80225790: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80225794: addiu       $a0, $sp, 0x93
    ctx->r4 = ADD32(ctx->r29, 0X93);
    // 0x80225798: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022579C: jal         0x80225424
    // 0x802257A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_2;
    // 0x802257A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802257A4: addiu       $a0, $sp, 0x90
    ctx->r4 = ADD32(ctx->r29, 0X90);
    // 0x802257A8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802257AC: jal         0x80225424
    // 0x802257B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_3;
    // 0x802257B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x802257B4: lhu         $a0, 0x8C($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X8C);
    // 0x802257B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802257BC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x802257C0: jal         0x8022B948
    // 0x802257C4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_4;
    // 0x802257C4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_4:
    // 0x802257C8: lhu         $a2, 0x8C($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X8C);
    // 0x802257CC: sw          $v0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r2;
    // 0x802257D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x802257D4: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x802257D8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802257DC: jal         0x8022B460
    // 0x802257E0: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    func_8022B460(rdram, ctx);
        goto after_5;
    // 0x802257E0: lw          $a1, 0xF8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XF8);
    after_5:
    // 0x802257E4: lhu         $t9, 0x8C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X8C);
    // 0x802257E8: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x802257EC: lbu         $a0, 0x92($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X92);
    // 0x802257F0: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x802257F4: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802257F8: sll         $t2, $a0, 2
    ctx->r10 = S32(ctx->r4 << 2);
    // 0x802257FC: sw          $t1, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r9;
    // 0x80225800: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80225804: jal         0x8022B948
    // 0x80225808: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_6;
    // 0x80225808: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x8022580C: lbu         $a0, 0x92($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X92);
    // 0x80225810: sw          $v0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r2;
    // 0x80225814: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225818: sll         $t3, $a0, 3
    ctx->r11 = S32(ctx->r4 << 3);
    // 0x8022581C: jal         0x8022B948
    // 0x80225820: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_8022B948(rdram, ctx);
        goto after_7;
    // 0x80225820: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_7:
    // 0x80225824: lbu         $t4, 0x92($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X92);
    // 0x80225828: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x8022582C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80225830: blez        $t4, L_80225E18
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80225834: lui         $s7, 0xBF00
        ctx->r23 = S32(0XBF00 << 16);
            goto L_80225E18;
    }
    // 0x80225834: lui         $s7, 0xBF00
    ctx->r23 = S32(0XBF00 << 16);
    // 0x80225838: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x8022583C: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x80225840: sw          $v0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r2;
    // 0x80225844: lwc1        $f20, 0x3D38($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X3D38);
    // 0x80225848: addiu       $fp, $sp, 0x91
    ctx->r30 = ADD32(ctx->r29, 0X91);
    // 0x8022584C: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x80225850: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x80225854: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_80225858:
    // 0x80225858: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x8022585C: lw          $a3, 0xEC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XEC);
    // 0x80225860: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225864: sll         $t5, $v1, 3
    ctx->r13 = S32(ctx->r3 << 3);
    // 0x80225868: addu        $s0, $t5, $a3
    ctx->r16 = ADD32(ctx->r13, ctx->r7);
    // 0x8022586C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x80225870: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80225874: jal         0x80225424
    // 0x80225878: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    func_80225424(rdram, ctx);
        goto after_8;
    // 0x80225878: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
    after_8:
    // 0x8022587C: addiu       $a0, $s0, 0x5
    ctx->r4 = ADD32(ctx->r16, 0X5);
    // 0x80225880: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225884: jal         0x80225424
    // 0x80225888: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_9;
    // 0x80225888: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8022588C: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x80225890: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80225894: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80225898: addiu       $a2, $a2, 0xBE8
    ctx->r6 = ADD32(ctx->r6, 0XBE8);
    // 0x8022589C: addiu       $a1, $a1, 0x3BC0
    ctx->r5 = ADD32(ctx->r5, 0X3BC0);
    // 0x802258A0: jal         0x80231C58
    // 0x802258A4: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    func_80231C58(rdram, ctx);
        goto after_10;
    // 0x802258A4: lbu         $a0, 0x4($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X4);
    after_10:
    // 0x802258A8: lw          $t7, 0x70($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X70);
    // 0x802258AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802258B0: lbu         $a0, 0x4($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X4);
    // 0x802258B4: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x802258B8: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x802258BC: jal         0x8022B948
    // 0x802258C0: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    func_8022B948(rdram, ctx);
        goto after_11;
    // 0x802258C0: sll         $a0, $t9, 2
    ctx->r4 = S32(ctx->r25 << 2);
    after_11:
    // 0x802258C4: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x802258C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x802258CC: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x802258D0: lbu         $t0, 0x4($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X4);
    // 0x802258D4: addiu       $t1, $v0, 0x5
    ctx->r9 = ADD32(ctx->r2, 0X5);
    // 0x802258D8: addiu       $t2, $v0, 0x6
    ctx->r10 = ADD32(ctx->r2, 0X6);
    // 0x802258DC: blez        $t0, L_80225DD0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802258E0: addiu       $t3, $v0, 0x7
        ctx->r11 = ADD32(ctx->r2, 0X7);
            goto L_80225DD0;
    }
    // 0x802258E0: addiu       $t3, $v0, 0x7
    ctx->r11 = ADD32(ctx->r2, 0X7);
    // 0x802258E4: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802258E8: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x802258EC: sw          $t1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r9;
    // 0x802258F0: sw          $t2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r10;
    // 0x802258F4: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x802258F8: sw          $v1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r3;
    // 0x802258FC: sw          $v1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r3;
    // 0x80225900: sw          $a0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r4;
    // 0x80225904: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
L_80225908:
    // 0x80225908: sb          $zero, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = 0;
    // 0x8022590C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225910: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80225914: jal         0x80225424
    // 0x80225918: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    func_80225424(rdram, ctx);
        goto after_12;
    // 0x80225918: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    after_12:
    // 0x8022591C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80225920: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225924: jal         0x80225424
    // 0x80225928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_13;
    // 0x80225928: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x8022592C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80225930: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225934: jal         0x80225424
    // 0x80225938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_14;
    // 0x80225938: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x8022593C: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80225940: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225944: jal         0x80225424
    // 0x80225948: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_15;
    // 0x80225948: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x8022594C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80225950: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225954: jal         0x80225424
    // 0x80225958: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    func_80225424(rdram, ctx);
        goto after_16;
    // 0x80225958: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    after_16:
    // 0x8022595C: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80225960: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80225964: lbu         $a0, 0x4($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X4);
    // 0x80225968: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8022596C: jal         0x8022B948
    // 0x80225970: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_17;
    // 0x80225970: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_17:
    // 0x80225974: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x80225978: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    // 0x8022597C: lbu         $t7, 0x4($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X4);
    // 0x80225980: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80225984: lw          $s5, 0xD8($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XD8);
    // 0x80225988: blezl       $t7, L_80225D5C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8022598C: lbu         $t0, 0x8F($sp)
        ctx->r8 = MEM_BU(ctx->r29, 0X8F);
            goto L_80225D5C;
    }
    goto skip_0;
    // 0x8022598C: lbu         $t0, 0x8F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X8F);
    skip_0:
    // 0x80225990: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
L_80225994:
    // 0x80225994: lw          $t0, 0xD8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XD8);
    // 0x80225998: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8022599C: sll         $t8, $t9, 4
    ctx->r24 = S32(ctx->r25 << 4);
    // 0x802259A0: addu        $s1, $t8, $t0
    ctx->r17 = ADD32(ctx->r24, ctx->r8);
    // 0x802259A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802259A8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x802259AC: jal         0x80225424
    // 0x802259B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_80225424(rdram, ctx);
        goto after_18;
    // 0x802259B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_18:
    // 0x802259B4: addiu       $a0, $s1, 0x4
    ctx->r4 = ADD32(ctx->r17, 0X4);
    // 0x802259B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802259BC: jal         0x80225424
    // 0x802259C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_19;
    // 0x802259C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_19:
    // 0x802259C4: addiu       $a0, $s1, 0x6
    ctx->r4 = ADD32(ctx->r17, 0X6);
    // 0x802259C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802259CC: jal         0x80225424
    // 0x802259D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_20;
    // 0x802259D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_20:
    // 0x802259D4: addiu       $a0, $sp, 0xD0
    ctx->r4 = ADD32(ctx->r29, 0XD0);
    // 0x802259D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802259DC: jal         0x80225424
    // 0x802259E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_21;
    // 0x802259E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_21:
    // 0x802259E4: addiu       $a0, $sp, 0xCC
    ctx->r4 = ADD32(ctx->r29, 0XCC);
    // 0x802259E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802259EC: jal         0x80225424
    // 0x802259F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_22;
    // 0x802259F0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_22:
    // 0x802259F4: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x802259F8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802259FC: jal         0x80225424
    // 0x80225A00: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_23;
    // 0x80225A00: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_23:
    // 0x80225A04: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x80225A08: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80225A0C: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x80225A10: sll         $t2, $t1, 13
    ctx->r10 = S32(ctx->r9 << 13);
    // 0x80225A14: bgezl       $t2, L_80225BD0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80225A18: sh          $t6, 0x8($s5)
        MEM_H(0X8, ctx->r21) = ctx->r14;
            goto L_80225BD0;
    }
    goto skip_1;
    // 0x80225A18: sh          $t6, 0x8($s5)
    MEM_H(0X8, ctx->r21) = ctx->r14;
    skip_1:
    // 0x80225A1C: lw          $a1, 0x5A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5A2C);
    // 0x80225A20: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80225A24: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80225A28: blez        $a1, L_80225A74
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80225A2C: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_80225A74;
    }
    // 0x80225A2C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80225A30: lw          $v0, 0x5A28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5A28);
L_80225A34:
    // 0x80225A34: lw          $t3, 0xD0($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XD0);
    // 0x80225A38: lw          $t4, 0x2C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X2C);
    // 0x80225A3C: lw          $t5, 0xCC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XCC);
    // 0x80225A40: bnel        $t3, $t4, L_80225A68
    if (ctx->r11 != ctx->r12) {
        // 0x80225A44: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80225A68;
    }
    goto skip_2;
    // 0x80225A44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x80225A48: lw          $t6, 0x28($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X28);
    // 0x80225A4C: lw          $t7, 0xC8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC8);
    // 0x80225A50: bnel        $t5, $t6, L_80225A68
    if (ctx->r13 != ctx->r14) {
        // 0x80225A54: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80225A68;
    }
    goto skip_3;
    // 0x80225A54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
    // 0x80225A58: lw          $t9, 0x24($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X24);
    // 0x80225A5C: beq         $t7, $t9, L_80225A74
    if (ctx->r15 == ctx->r25) {
        // 0x80225A60: nop
    
            goto L_80225A74;
    }
    // 0x80225A60: nop

    // 0x80225A64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80225A68:
    // 0x80225A68: slt         $at, $s0, $a1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80225A6C: bne         $at, $zero, L_80225A34
    if (ctx->r1 != 0) {
        // 0x80225A70: addiu       $v0, $v0, 0x30
        ctx->r2 = ADD32(ctx->r2, 0X30);
            goto L_80225A34;
    }
    // 0x80225A70: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80225A74:
    // 0x80225A74: bne         $s0, $a1, L_80225BC0
    if (ctx->r16 != ctx->r5) {
        // 0x80225A78: subu        $t8, $t8, $a1
        ctx->r24 = SUB32(ctx->r24, ctx->r5);
            goto L_80225BC0;
    }
    // 0x80225A78: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x80225A7C: lw          $t1, 0xD0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XD0);
    // 0x80225A80: lw          $t0, 0x5A28($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5A28);
    // 0x80225A84: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80225A88: sra         $t4, $t1, 24
    ctx->r12 = S32(SIGNED(ctx->r9) >> 24);
    // 0x80225A8C: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80225A90: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80225A94: sra         $t6, $t1, 16
    ctx->r14 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80225A98: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80225A9C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225AA0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80225AA4: addu        $v0, $t8, $t0
    ctx->r2 = ADD32(ctx->r24, ctx->r8);
    // 0x80225AA8: sw          $t1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r9;
    // 0x80225AAC: sra         $t9, $t1, 8
    ctx->r25 = S32(SIGNED(ctx->r9) >> 8);
    // 0x80225AB0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225AB4: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80225AB8: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225ABC: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225AC0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80225AC4: sw          $a0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r4;
    // 0x80225AC8: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80225ACC: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x80225AD0: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80225AD4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225AD8: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225ADC: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80225AE0: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80225AE4: sw          $t3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r11;
    // 0x80225AE8: swc1        $f8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f8.u32l;
    // 0x80225AEC: andi        $t3, $t2, 0xFF
    ctx->r11 = ctx->r10 & 0XFF;
    // 0x80225AF0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225AF4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225AF8: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80225AFC: sra         $t4, $a0, 8
    ctx->r12 = S32(SIGNED(ctx->r4) >> 8);
    // 0x80225B00: lw          $a3, 0x24($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X24);
    // 0x80225B04: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x80225B08: andi        $t5, $t4, 0xFF
    ctx->r13 = ctx->r12 & 0XFF;
    // 0x80225B0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225B10: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225B14: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80225B18: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80225B1C: swc1        $f8, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f8.u32l;
    // 0x80225B20: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80225B24: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225B28: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80225B2C: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80225B30: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80225B34: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225B38: sra         $t0, $a3, 8
    ctx->r8 = S32(SIGNED(ctx->r7) >> 8);
    // 0x80225B3C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225B40: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x80225B44: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80225B48: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x80225B4C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80225B50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225B54: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225B58: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80225B5C: addiu       $v1, $v1, 0x5A2C
    ctx->r3 = ADD32(ctx->r3, 0X5A2C);
    // 0x80225B60: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80225B64: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80225B68: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225B6C: addiu       $a2, $a2, 0xC04
    ctx->r6 = ADD32(ctx->r6, 0XC04);
    // 0x80225B70: swc1        $f18, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f18.u32l;
    // 0x80225B74: addiu       $a1, $a1, 0x3BCC
    ctx->r5 = ADD32(ctx->r5, 0X3BCC);
    // 0x80225B78: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80225B7C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x80225B80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80225B84: mul.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80225B88: nop

    // 0x80225B8C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80225B90: swc1        $f18, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f18.u32l;
    // 0x80225B94: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x80225B98: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x80225B9C: addiu       $a0, $t2, 0x1
    ctx->r4 = ADD32(ctx->r10, 0X1);
    // 0x80225BA0: jal         0x80231C58
    // 0x80225BA4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    func_80231C58(rdram, ctx);
        goto after_24;
    // 0x80225BA4: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    after_24:
    // 0x80225BA8: beq         $v0, $zero, L_80225BC0
    if (ctx->r2 == 0) {
        // 0x80225BAC: lui         $t4, 0x8027
        ctx->r12 = S32(0X8027 << 16);
            goto L_80225BC0;
    }
    // 0x80225BAC: lui         $t4, 0x8027
    ctx->r12 = S32(0X8027 << 16);
    // 0x80225BB0: lw          $t4, 0x5A2C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5A2C);
    // 0x80225BB4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80225BB8: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80225BBC: sw          $t5, 0x5A2C($at)
    MEM_W(0X5A2C, ctx->r1) = ctx->r13;
L_80225BC0:
    // 0x80225BC0: sh          $s0, 0x8($s5)
    MEM_H(0X8, ctx->r21) = ctx->r16;
    // 0x80225BC4: b           L_80225BD0
    // 0x80225BC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80225BD0;
    // 0x80225BC8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80225BCC: sh          $t6, 0x8($s5)
    MEM_H(0X8, ctx->r21) = ctx->r14;
L_80225BD0:
    // 0x80225BD0: addiu       $a0, $sp, 0x8A
    ctx->r4 = ADD32(ctx->r29, 0X8A);
    // 0x80225BD4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225BD8: jal         0x80225424
    // 0x80225BDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_25;
    // 0x80225BDC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_25:
    // 0x80225BE0: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x80225BE4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80225BE8: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80225BEC: bgezl       $t9, L_80225BFC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80225BF0: lhu         $a0, 0x8A($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X8A);
            goto L_80225BFC;
    }
    goto skip_4;
    // 0x80225BF0: lhu         $a0, 0x8A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X8A);
    skip_4:
    // 0x80225BF4: sb          $t8, 0x8F($sp)
    MEM_B(0X8F, ctx->r29) = ctx->r24;
    // 0x80225BF8: lhu         $a0, 0x8A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X8A);
L_80225BFC:
    // 0x80225BFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80225C00: sll         $t0, $a0, 3
    ctx->r8 = S32(ctx->r4 << 3);
    // 0x80225C04: jal         0x8022B948
    // 0x80225C08: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    func_8022B948(rdram, ctx);
        goto after_26;
    // 0x80225C08: addiu       $a0, $t0, 0x8
    ctx->r4 = ADD32(ctx->r8, 0X8);
    after_26:
    // 0x80225C0C: addu        $t1, $v0, $s4
    ctx->r9 = ADD32(ctx->r2, ctx->r20);
    // 0x80225C10: sw          $t1, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r9;
    // 0x80225C14: lhu         $t2, 0x8A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X8A);
    // 0x80225C18: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80225C1C: blez        $t2, L_80225D20
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80225C20: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80225D20;
    }
    // 0x80225C20: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
L_80225C24:
    // 0x80225C24: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225C28: jal         0x80225424
    // 0x80225C2C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225424(rdram, ctx);
        goto after_27;
    // 0x80225C2C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_27:
    // 0x80225C30: lhu         $t3, 0x88($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X88);
    // 0x80225C34: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x80225C38: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80225C3C: andi        $t4, $t3, 0x4000
    ctx->r12 = ctx->r11 & 0X4000;
    // 0x80225C40: beq         $t4, $zero, L_80225CA4
    if (ctx->r12 == 0) {
        // 0x80225C44: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80225CA4;
    }
    // 0x80225C44: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225C48: addu        $v1, $t5, $s1
    ctx->r3 = ADD32(ctx->r13, ctx->r17);
    // 0x80225C4C: sw          $s7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r23;
    // 0x80225C50: lhu         $v0, 0x88($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X88);
    // 0x80225C54: andi        $t6, $v0, 0xF00
    ctx->r14 = ctx->r2 & 0XF00;
    // 0x80225C58: sra         $t7, $t6, 8
    ctx->r15 = S32(SIGNED(ctx->r14) >> 8);
    // 0x80225C5C: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225C60: andi        $t1, $v0, 0xF0
    ctx->r9 = ctx->r2 & 0XF0;
    // 0x80225C64: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80225C68: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x80225C6C: mflo        $t9
    ctx->r25 = lo;
    // 0x80225C70: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225C74: sll         $t0, $t8, 16
    ctx->r8 = S32(ctx->r24 << 16);
    // 0x80225C78: multu       $t2, $s2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225C7C: mflo        $t3
    ctx->r11 = lo;
    // 0x80225C80: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x80225C84: sll         $t5, $t4, 8
    ctx->r13 = S32(ctx->r12 << 8);
    // 0x80225C88: multu       $t7, $s2
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80225C8C: or          $t6, $t0, $t5
    ctx->r14 = ctx->r8 | ctx->r13;
    // 0x80225C90: mflo        $t9
    ctx->r25 = lo;
    // 0x80225C94: andi        $t8, $t9, 0xFF
    ctx->r24 = ctx->r25 & 0XFF;
    // 0x80225C98: or          $t1, $t6, $t8
    ctx->r9 = ctx->r14 | ctx->r24;
    // 0x80225C9C: b           L_80225D0C
    // 0x80225CA0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
        goto L_80225D0C;
    // 0x80225CA0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
L_80225CA4:
    // 0x80225CA4: jal         0x80225424
    // 0x80225CA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225424(rdram, ctx);
        goto after_28;
    // 0x80225CA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_28:
    // 0x80225CAC: lbu         $v0, 0x91($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X91);
    // 0x80225CB0: lhu         $t2, 0x88($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X88);
    // 0x80225CB4: lw          $t0, 0xF4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XF4);
    // 0x80225CB8: andi        $a0, $v0, 0xF0
    ctx->r4 = ctx->r2 & 0XF0;
    // 0x80225CBC: sra         $t7, $a0, 4
    ctx->r15 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80225CC0: andi        $t3, $t2, 0x3FFF
    ctx->r11 = ctx->r10 & 0X3FFF;
    // 0x80225CC4: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80225CC8: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80225CCC: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x80225CD0: or          $t8, $t9, $t6
    ctx->r24 = ctx->r25 | ctx->r14;
    // 0x80225CD4: addu        $a1, $t4, $t0
    ctx->r5 = ADD32(ctx->r12, ctx->r8);
    // 0x80225CD8: sll         $t4, $t7, 4
    ctx->r12 = S32(ctx->r15 << 4);
    // 0x80225CDC: andi        $t1, $t8, 0xFF
    ctx->r9 = ctx->r24 & 0XFF;
    // 0x80225CE0: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x80225CE4: addu        $v1, $t5, $s1
    ctx->r3 = ADD32(ctx->r13, ctx->r17);
    // 0x80225CE8: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x80225CEC: addiu       $t0, $t4, 0x10
    ctx->r8 = ADD32(ctx->r12, 0X10);
    // 0x80225CF0: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x80225CF4: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x80225CF8: andi        $t5, $t0, 0xFFFF
    ctx->r13 = ctx->r8 & 0XFFFF;
    // 0x80225CFC: or          $t7, $t3, $t5
    ctx->r15 = ctx->r11 | ctx->r13;
    // 0x80225D00: addu        $t9, $a1, $s4
    ctx->r25 = ADD32(ctx->r5, ctx->r20);
    // 0x80225D04: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80225D08: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80225D0C:
    // 0x80225D0C: lhu         $t6, 0x8A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X8A);
    // 0x80225D10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80225D14: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80225D18: bnel        $at, $zero, L_80225C24
    if (ctx->r1 != 0) {
        // 0x80225D1C: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80225C24;
    }
    goto skip_5;
    // 0x80225D1C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    skip_5:
L_80225D20:
    // 0x80225D20: lw          $v0, 0x98($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X98);
    // 0x80225D24: sll         $t8, $s0, 3
    ctx->r24 = S32(ctx->r16 << 3);
    // 0x80225D28: addu        $v1, $t8, $s1
    ctx->r3 = ADD32(ctx->r24, ctx->r17);
    // 0x80225D2C: lui         $t1, 0xB800
    ctx->r9 = S32(0XB800 << 16);
    // 0x80225D30: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80225D34: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80225D38: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80225D3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D40: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x80225D44: lbu         $t4, 0x4($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X4);
    // 0x80225D48: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    // 0x80225D4C: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80225D50: bnel        $at, $zero, L_80225994
    if (ctx->r1 != 0) {
        // 0x80225D54: lw          $t9, 0x98($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X98);
            goto L_80225994;
    }
    goto skip_6;
    // 0x80225D54: lw          $t9, 0x98($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X98);
    skip_6:
    // 0x80225D58: lbu         $t0, 0x8F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X8F);
L_80225D5C:
    // 0x80225D5C: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x80225D60: lw          $v0, 0x9C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X9C);
    // 0x80225D64: sb          $t0, 0x20($t3)
    MEM_B(0X20, ctx->r11) = ctx->r8;
    // 0x80225D68: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80225D6C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x80225D70: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80225D74: addiu       $t7, $t5, 0x24
    ctx->r15 = ADD32(ctx->r13, 0X24);
    // 0x80225D78: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x80225D7C: lw          $t2, 0x60($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X60);
    // 0x80225D80: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x80225D84: addiu       $t6, $t9, 0x24
    ctx->r14 = ADD32(ctx->r25, 0X24);
    // 0x80225D88: lw          $t9, 0x70($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X70);
    // 0x80225D8C: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x80225D90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D94: addiu       $t3, $t0, 0x24
    ctx->r11 = ADD32(ctx->r8, 0X24);
    // 0x80225D98: addiu       $t7, $t5, 0x24
    ctx->r15 = ADD32(ctx->r13, 0X24);
    // 0x80225D9C: addiu       $t4, $t2, 0x24
    ctx->r12 = ADD32(ctx->r10, 0X24);
    // 0x80225DA0: addiu       $t1, $t8, 0x24
    ctx->r9 = ADD32(ctx->r24, 0X24);
    // 0x80225DA4: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
    // 0x80225DA8: sw          $t4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r12;
    // 0x80225DAC: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x80225DB0: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80225DB4: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80225DB8: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x80225DBC: lbu         $t6, 0x4($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X4);
    // 0x80225DC0: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80225DC4: bnel        $at, $zero, L_80225908
    if (ctx->r1 != 0) {
        // 0x80225DC8: lw          $a0, 0x6C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X6C);
            goto L_80225908;
    }
    goto skip_7;
    // 0x80225DC8: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    skip_7:
    // 0x80225DCC: lw          $v1, 0xE8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE8);
L_80225DD0:
    // 0x80225DD0: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x80225DD4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225DD8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80225DDC: sw          $v1, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r3;
    // 0x80225DE0: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x80225DE4: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x80225DE8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80225DEC: jal         0x80225424
    // 0x80225DF0: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    func_80225424(rdram, ctx);
        goto after_29;
    // 0x80225DF0: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    after_29:
    // 0x80225DF4: lw          $t0, 0xA0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA0);
    // 0x80225DF8: lw          $t5, 0x70($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X70);
    // 0x80225DFC: lbu         $t9, 0x92($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X92);
    // 0x80225E00: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x80225E04: addiu       $t7, $t5, 0x8
    ctx->r15 = ADD32(ctx->r13, 0X8);
    // 0x80225E08: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80225E0C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x80225E10: bne         $at, $zero, L_80225858
    if (ctx->r1 != 0) {
        // 0x80225E14: sw          $t3, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r11;
            goto L_80225858;
    }
    // 0x80225E14: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_80225E18:
    // 0x80225E18: lbu         $a0, 0x93($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X93);
    // 0x80225E1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80225E20: sll         $t6, $a0, 6
    ctx->r14 = S32(ctx->r4 << 6);
    // 0x80225E24: jal         0x8022B948
    // 0x80225E28: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022B948(rdram, ctx);
        goto after_30;
    // 0x80225E28: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_30:
    // 0x80225E2C: lbu         $a2, 0x93($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X93);
    // 0x80225E30: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80225E34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80225E38: sll         $t8, $a2, 6
    ctx->r24 = S32(ctx->r6 << 6);
    // 0x80225E3C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80225E40: jal         0x80225424
    // 0x80225E44: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80225424(rdram, ctx);
        goto after_31;
    // 0x80225E44: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_31:
    // 0x80225E48: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x80225E4C: jal         0x8022B948
    // 0x80225E50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8022B948(rdram, ctx);
        goto after_32;
    // 0x80225E50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_32:
    // 0x80225E54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80225E58: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x80225E5C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225E60: jal         0x80225424
    // 0x80225E64: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_33;
    // 0x80225E64: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_33:
    // 0x80225E68: addiu       $a0, $s0, 0x20
    ctx->r4 = ADD32(ctx->r16, 0X20);
    // 0x80225E6C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225E70: jal         0x80225424
    // 0x80225E74: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_34;
    // 0x80225E74: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_34:
    // 0x80225E78: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80225E7C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80225E80: jal         0x80225424
    // 0x80225E84: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225424(rdram, ctx);
        goto after_35;
    // 0x80225E84: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_35:
    // 0x80225E88: lw          $t1, 0xF4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XF4);
    // 0x80225E8C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80225E90: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80225E94: lhu         $t2, 0x8C($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X8C);
    // 0x80225E98: sh          $t2, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r10;
    // 0x80225E9C: lw          $t4, 0xEC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XEC);
    // 0x80225EA0: sw          $t4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r12;
    // 0x80225EA4: lw          $t0, 0xE4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XE4);
    // 0x80225EA8: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x80225EAC: lbu         $t5, 0x92($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X92);
    // 0x80225EB0: sw          $s1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r17;
    // 0x80225EB4: sb          $t5, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r13;
    // 0x80225EB8: lbu         $t7, 0x93($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X93);
    // 0x80225EBC: sb          $t7, 0x18($s0)
    MEM_B(0X18, ctx->r16) = ctx->r15;
    // 0x80225EC0: lbu         $t3, 0x90($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X90);
    // 0x80225EC4: sb          $t3, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r11;
    // 0x80225EC8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80225ECC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80225ED0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80225ED4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80225ED8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80225EDC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80225EE0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80225EE4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80225EE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80225EEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80225EF0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80225EF4: jr          $ra
    // 0x80225EF8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x80225EF8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_80241424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80241424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80241428: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024142C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80241430: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80241434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80241438: lbu         $t6, 0x34($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X34);
    // 0x8024143C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80241440: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80241444: blez        $t6, L_8024147C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80241448: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8024147C;
    }
    // 0x80241448: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8024144C: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
L_80241450:
    // 0x80241450: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80241454: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80241458: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x8024145C: jal         0x8023FD34
    // 0x80241460: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    func_8023FD34(rdram, ctx);
        goto after_0;
    // 0x80241460: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_0:
    // 0x80241464: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x80241468: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8024146C: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x80241470: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80241474: bnel        $at, $zero, L_80241450
    if (ctx->r1 != 0) {
        // 0x80241478: lw          $t7, 0x60($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X60);
            goto L_80241450;
    }
    goto skip_0;
    // 0x80241478: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    skip_0:
L_8024147C:
    // 0x8024147C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80241480: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80241484: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80241488: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024148C: jr          $ra
    // 0x80241490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80241490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80249284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80249284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024928C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80249290: jal         0x80249238
    // 0x80249294: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    func_80249238(rdram, ctx);
        goto after_0;
    // 0x80249294: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    after_0:
    // 0x80249298: lw          $t6, 0xC($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC);
    // 0x8024929C: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x802492A0: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x802492A4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x802492A8: sw          $t7, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r15;
    // 0x802492AC: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x802492B0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x802492B4: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x802492B8: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x802492BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x802492C0: bne         $a0, $at, L_80249380
    if (ctx->r4 != ctx->r1) {
        // 0x802492C4: andi        $a1, $a0, 0xFF
        ctx->r5 = ctx->r4 & 0XFF;
            goto L_80249380;
    }
    // 0x802492C4: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x802492C8: lbu         $v0, 0x0($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X0);
    // 0x802492CC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802492D0: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x802492D4: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x802492D8: bne         $v0, $at, L_80249348
    if (ctx->r2 != ctx->r1) {
        // 0x802492DC: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_80249348;
    }
    // 0x802492DC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x802492E0: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x802492E4: sh          $t6, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r14;
    // 0x802492E8: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x802492EC: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x802492F0: sb          $t0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r8;
    // 0x802492F4: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x802492F8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802492FC: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80249300: sw          $t7, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r15;
    // 0x80249304: sb          $v0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r2;
    // 0x80249308: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x8024930C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80249310: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80249314: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80249318: sb          $a0, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r4;
    // 0x8024931C: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80249320: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x80249324: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x80249328: sw          $t9, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r25;
    // 0x8024932C: sb          $a1, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r5;
    // 0x80249330: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80249334: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80249338: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8024933C: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x80249340: b           L_80249378
    // 0x80249344: sb          $a0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r4;
        goto L_80249378;
    // 0x80249344: sb          $a0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r4;
L_80249348:
    // 0x80249348: addiu       $at, $zero, 0x2F
    ctx->r1 = ADD32(0, 0X2F);
    // 0x8024934C: bne         $v0, $at, L_80249378
    if (ctx->r2 != ctx->r1) {
        // 0x80249350: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_80249378;
    }
    // 0x80249350: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80249354: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
    // 0x80249358: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x8024935C: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x80249360: sb          $t0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r8;
    // 0x80249364: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80249368: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8024936C: addiu       $t8, $v1, 0x1
    ctx->r24 = ADD32(ctx->r3, 0X1);
    // 0x80249370: sw          $t8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r24;
    // 0x80249374: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
L_80249378:
    // 0x80249378: b           L_802493F8
    // 0x8024937C: sh          $zero, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = 0;
        goto L_802493F8;
    // 0x8024937C: sh          $zero, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = 0;
L_80249380:
    // 0x80249380: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80249384: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x80249388: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
    // 0x8024938C: beq         $t6, $zero, L_802493B4
    if (ctx->r14 == 0) {
        // 0x80249390: sw          $t1, 0x4($a3)
        MEM_W(0X4, ctx->r7) = ctx->r9;
            goto L_802493B4;
    }
    // 0x80249390: sw          $t1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r9;
    // 0x80249394: sb          $a1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r5;
    // 0x80249398: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x8024939C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x802493A0: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x802493A4: sw          $t7, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r15;
    // 0x802493A8: sb          $a0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r4;
    // 0x802493AC: b           L_802493C0
    // 0x802493B0: sh          $a1, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r5;
        goto L_802493C0;
    // 0x802493B0: sh          $a1, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = ctx->r5;
L_802493B4:
    // 0x802493B4: lh          $t8, 0x1A($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X1A);
    // 0x802493B8: sb          $a0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r4;
    // 0x802493BC: sb          $t8, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r24;
L_802493C0:
    // 0x802493C0: lbu         $v0, 0x8($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X8);
    // 0x802493C4: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x802493C8: andi        $t9, $v0, 0xF0
    ctx->r25 = ctx->r2 & 0XF0;
    // 0x802493CC: beq         $t9, $at, L_802493F4
    if (ctx->r25 == ctx->r1) {
        // 0x802493D0: addiu       $at, $zero, 0xD0
        ctx->r1 = ADD32(0, 0XD0);
            goto L_802493F4;
    }
    // 0x802493D0: addiu       $at, $zero, 0xD0
    ctx->r1 = ADD32(0, 0XD0);
    // 0x802493D4: beql        $t9, $at, L_802493F8
    if (ctx->r25 == ctx->r1) {
        // 0x802493D8: sb          $zero, 0xA($a3)
        MEM_B(0XA, ctx->r7) = 0;
            goto L_802493F8;
    }
    goto skip_0;
    // 0x802493D8: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
    skip_0:
    // 0x802493DC: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x802493E0: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x802493E4: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x802493E8: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    // 0x802493EC: b           L_802493F8
    // 0x802493F0: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
        goto L_802493F8;
    // 0x802493F0: sb          $a0, 0xA($a3)
    MEM_B(0XA, ctx->r7) = ctx->r4;
L_802493F4:
    // 0x802493F4: sb          $zero, 0xA($a3)
    MEM_B(0XA, ctx->r7) = 0;
L_802493F8:
    // 0x802493F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802493FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80249400: jr          $ra
    // 0x80249404: nop

    return;
    // 0x80249404: nop

;}
RECOMP_FUNC void func_80233224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233224: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023322C: lui         $s0, 0x8028
    ctx->r16 = S32(0X8028 << 16);
    // 0x80233230: addiu       $s0, $s0, 0xBC0
    ctx->r16 = ADD32(ctx->r16, 0XBC0);
    // 0x80233234: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    // 0x80233238: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023323C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80233240: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80233244: jal         0x8022BA58
    // 0x80233248: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x80233248: sll         $a0, $t6, 2
    ctx->r4 = S32(ctx->r14 << 2);
    after_0:
    // 0x8023324C: lhu         $a2, 0x34($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X34);
    // 0x80233250: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80233254: addiu       $a3, $a3, 0x3940
    ctx->r7 = ADD32(ctx->r7, 0X3940);
    // 0x80233258: sll         $t7, $a2, 3
    ctx->r15 = S32(ctx->r6 << 3);
    // 0x8023325C: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x80233260: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80233264: sll         $a2, $t7, 2
    ctx->r6 = S32(ctx->r15 << 2);
    // 0x80233268: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8023326C: jal         0x8022B780
    // 0x80233270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_1;
    // 0x80233270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80233274: lhu         $t8, 0x34($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X34);
    // 0x80233278: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8023327C: addiu       $a3, $a3, 0x3940
    ctx->r7 = ADD32(ctx->r7, 0X3940);
    // 0x80233280: blez        $t8, L_802332DC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80233284: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_802332DC;
    }
    // 0x80233284: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80233288: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8023328C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80233290: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
L_80233294:
    // 0x80233294: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233298: addu        $v0, $a0, $t9
    ctx->r2 = ADD32(ctx->r4, ctx->r25);
    // 0x8023329C: sb          $zero, 0x1A($v0)
    MEM_B(0X1A, ctx->r2) = 0;
    // 0x802332A0: sb          $zero, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = 0;
    // 0x802332A4: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x802332A8: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x802332AC: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x802332B0: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x802332B4: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x802332B8: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x802332BC: sb          $zero, 0x18($v0)
    MEM_B(0X18, ctx->r2) = 0;
    // 0x802332C0: sb          $zero, 0x19($v0)
    MEM_B(0X19, ctx->r2) = 0;
    // 0x802332C4: lhu         $t0, 0x34($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X34);
    // 0x802332C8: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    // 0x802332CC: slt         $at, $v1, $t0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x802332D0: bnel        $at, $zero, L_80233294
    if (ctx->r1 != 0) {
        // 0x802332D4: lw          $t9, 0x0($a3)
        ctx->r25 = MEM_W(ctx->r7, 0X0);
            goto L_80233294;
    }
    goto skip_0;
    // 0x802332D4: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x802332D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802332DC:
    // 0x802332DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x802332E0: addiu       $a1, $a1, 0x3944
    ctx->r5 = ADD32(ctx->r5, 0X3944);
    // 0x802332E4: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x802332E8: bne         $t1, $zero, L_80233314
    if (ctx->r9 != 0) {
        // 0x802332EC: nop
    
            goto L_80233314;
    }
    // 0x802332EC: nop

    // 0x802332F0: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x802332F4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x802332F8: sll         $t2, $a0, 1
    ctx->r10 = S32(ctx->r4 << 1);
    // 0x802332FC: jal         0x8022BA58
    // 0x80233300: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_8022BA58(rdram, ctx);
        goto after_2;
    // 0x80233300: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_2:
    // 0x80233304: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80233308: addiu       $a1, $a1, 0x3944
    ctx->r5 = ADD32(ctx->r5, 0X3944);
    // 0x8023330C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80233310: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
L_80233314:
    // 0x80233314: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80233318: lw          $t3, 0x394C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X394C);
    // 0x8023331C: bnel        $t3, $zero, L_8023334C
    if (ctx->r11 != 0) {
        // 0x80233320: lhu         $t6, 0x16($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X16);
            goto L_8023334C;
    }
    goto skip_1;
    // 0x80233320: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
    skip_1:
    // 0x80233324: lhu         $t4, 0x16($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X16);
    // 0x80233328: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8023332C: jal         0x8022BA58
    // 0x80233330: sll         $a0, $t4, 3
    ctx->r4 = S32(ctx->r12 << 3);
    func_8022BA58(rdram, ctx);
        goto after_3;
    // 0x80233330: sll         $a0, $t4, 3
    ctx->r4 = S32(ctx->r12 << 3);
    after_3:
    // 0x80233334: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80233338: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023333C: sw          $v0, 0x394C($at)
    MEM_W(0X394C, ctx->r1) = ctx->r2;
    // 0x80233340: addiu       $a1, $a1, 0x3944
    ctx->r5 = ADD32(ctx->r5, 0X3944);
    // 0x80233344: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80233348: lhu         $t6, 0x16($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X16);
L_8023334C:
    // 0x8023334C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80233350: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80233354: blez        $t6, L_80233380
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80233358: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80233380;
    }
    // 0x80233358: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8023335C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
L_80233360:
    // 0x80233360: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233364: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80233368: sh          $a0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r4;
    // 0x8023336C: lhu         $t9, 0x16($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X16);
    // 0x80233370: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80233374: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80233378: bnel        $at, $zero, L_80233360
    if (ctx->r1 != 0) {
        // 0x8023337C: lw          $t7, 0x0($a1)
        ctx->r15 = MEM_W(ctx->r5, 0X0);
            goto L_80233360;
    }
    goto skip_2;
    // 0x8023337C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    skip_2:
L_80233380:
    // 0x80233380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233384: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80233388: sw          $zero, 0x3948($at)
    MEM_W(0X3948, ctx->r1) = 0;
    // 0x8023338C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80233390: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233394: sb          $t0, 0x3954($at)
    MEM_B(0X3954, ctx->r1) = ctx->r8;
    // 0x80233398: jr          $ra
    // 0x8023339C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023339C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
