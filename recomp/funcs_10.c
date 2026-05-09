#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8022A210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022A210: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8022A214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A218: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8022A21C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8022A220: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8022A224: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8022A228: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022A22C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8022A230: swc1        $f6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f6.u32l;
    // 0x8022A234: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8022A238: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x8022A23C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8022A240: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8022A244: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x8022A248: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    // 0x8022A24C: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x8022A250: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8022A254: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x8022A258: lwc1        $f8, 0x10($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X10);
    // 0x8022A25C: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8022A260: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x8022A264: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x8022A268: mul.s       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8022A26C: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    // 0x8022A270: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x8022A274: lwc1        $f18, 0x6C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8022A278: mul.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f14.fl);
    // 0x8022A27C: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x8022A280: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x8022A284: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8022A288: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x8022A28C: lwc1        $f16, 0x20($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X20);
    // 0x8022A290: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x8022A294: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x8022A298: lwc1        $f6, 0x24($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X24);
    // 0x8022A29C: mul.s       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x8022A2A0: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x8022A2A4: lwc1        $f10, 0x28($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8022A2A8: mul.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8022A2AC: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x8022A2B0: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8022A2B4: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8022A2B8: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x8022A2BC: lwc1        $f8, 0x30($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X30);
    // 0x8022A2C0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x8022A2C4: lwc1        $f10, 0x34($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X34);
    // 0x8022A2C8: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x8022A2CC: lwc1        $f16, 0x38($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X38);
    // 0x8022A2D0: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x8022A2D4: lwc1        $f4, 0x3C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X3C);
    // 0x8022A2D8: jal         0x80228DE0
    // 0x8022A2DC: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x8022A2DC: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x8022A2E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A2E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8022A2E8: jr          $ra
    // 0x8022A2EC: nop

    return;
    // 0x8022A2EC: nop

;}
RECOMP_FUNC void func_8021BE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BE28: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8021BE2C: lw          $t6, -0x4160($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4160);
    // 0x8021BE30: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8021BE34: sw          $s5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r21;
    // 0x8021BE38: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x8021BE3C: subu        $s5, $a0, $t6
    ctx->r21 = SUB32(ctx->r4, ctx->r14);
    // 0x8021BE40: div         $zero, $s5, $at
    lo = S32(S64(S32(ctx->r21)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r21)) % S64(S32(ctx->r1)));
    // 0x8021BE44: sw          $s6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r22;
    // 0x8021BE48: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x8021BE4C: mflo        $s5
    ctx->r21 = lo;
    // 0x8021BE50: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8021BE54: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x8021BE58: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x8021BE5C: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x8021BE60: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x8021BE64: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8021BE68: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8021BE6C: sdc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X60, ctx->r29);
    // 0x8021BE70: sdc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X58, ctx->r29);
    // 0x8021BE74: sdc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X50, ctx->r29);
    // 0x8021BE78: sdc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X48, ctx->r29);
    // 0x8021BE7C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x8021BE80: bne         $a1, $zero, L_8021BE90
    if (ctx->r5 != 0) {
        // 0x8021BE84: sdc1        $f20, 0x38($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
            goto L_8021BE90;
    }
    // 0x8021BE84: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x8021BE88: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x8021BE8C: sh          $zero, -0x3C08($at)
    MEM_H(-0X3C08, ctx->r1) = 0;
L_8021BE90:
    // 0x8021BE90: lwc1        $f4, 0xB8($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0XB8);
    // 0x8021BE94: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021BE98: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021BE9C: swc1        $f4, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f4.u32l;
    // 0x8021BEA0: lwc1        $f6, 0xBC($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0XBC);
    // 0x8021BEA4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8021BEA8: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    // 0x8021BEAC: lwc1        $f8, 0xC0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0XC0);
    // 0x8021BEB0: blez        $v0, L_8021C1B0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021BEB4: swc1        $f8, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
            goto L_8021C1B0;
    }
    // 0x8021BEB4: swc1        $f8, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f8.u32l;
L_8021BEB8:
    // 0x8021BEB8: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8021BEBC: lw          $t8, -0x3C20($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C20);
    // 0x8021BEC0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8021BEC4: addu        $s2, $s3, $t8
    ctx->r18 = ADD32(ctx->r19, ctx->r24);
    // 0x8021BEC8: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8021BECC: bne         $v1, $at, L_8021BEE4
    if (ctx->r3 != ctx->r1) {
        // 0x8021BED0: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8021BEE4;
    }
    // 0x8021BED0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8021BED4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BED8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BEDC: b           L_8021C1A0
    // 0x8021BEE0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021BEE0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BEE4:
    // 0x8021BEE4: lbu         $a0, 0x8($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X8);
    // 0x8021BEE8: andi        $t9, $a0, 0x2
    ctx->r25 = ctx->r4 & 0X2;
    // 0x8021BEEC: bne         $t9, $zero, L_8021BF04
    if (ctx->r25 != 0) {
        // 0x8021BEF0: andi        $t1, $a0, 0x4
        ctx->r9 = ctx->r4 & 0X4;
            goto L_8021BF04;
    }
    // 0x8021BEF0: andi        $t1, $a0, 0x4
    ctx->r9 = ctx->r4 & 0X4;
    // 0x8021BEF4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BEF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BEFC: b           L_8021C1A0
    // 0x8021BF00: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021BF00: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BF04:
    // 0x8021BF04: beq         $t1, $zero, L_8021BF1C
    if (ctx->r9 == 0) {
        // 0x8021BF08: lui         $t2, 0x8025
        ctx->r10 = S32(0X8025 << 16);
            goto L_8021BF1C;
    }
    // 0x8021BF08: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x8021BF0C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BF10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BF14: b           L_8021C1A0
    // 0x8021BF18: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021BF18: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BF1C:
    // 0x8021BF1C: lw          $t2, -0x18F0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X18F0);
    // 0x8021BF20: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x8021BF24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021BF28: lw          $t3, 0x1C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X1C);
    // 0x8021BF2C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8021BF30: addiu       $a2, $sp, 0xC7
    ctx->r6 = ADD32(ctx->r29, 0XC7);
    // 0x8021BF34: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8021BF38: lw          $s1, 0x0($t5)
    ctx->r17 = MEM_W(ctx->r13, 0X0);
    // 0x8021BF3C: bne         $s1, $zero, L_8021BF6C
    if (ctx->r17 != 0) {
        // 0x8021BF40: nop
    
            goto L_8021BF6C;
    }
    // 0x8021BF40: nop

    // 0x8021BF44: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021BF48: addiu       $a0, $a0, 0x3438
    ctx->r4 = ADD32(ctx->r4, 0X3438);
    // 0x8021BF4C: jal         0x80231A24
    // 0x8021BF50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021BF50: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8021BF54: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021BF58: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021BF5C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BF60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BF64: b           L_8021C1A0
    // 0x8021BF68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021BF68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021BF6C:
    // 0x8021BF6C: jal         0x8021178C
    // 0x8021BF70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8021178C(rdram, ctx);
        goto after_1;
    // 0x8021BF70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8021BF74: lbu         $t6, 0xC7($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XC7);
    // 0x8021BF78: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021BF7C: beql        $t6, $s6, L_8021BF9C
    if (ctx->r14 == ctx->r22) {
        // 0x8021BF80: lw          $t8, 0x4($s2)
        ctx->r24 = MEM_W(ctx->r18, 0X4);
            goto L_8021BF9C;
    }
    goto skip_0;
    // 0x8021BF80: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    skip_0:
    // 0x8021BF84: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021BF88: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021BF8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021BF90: b           L_8021C1A0
    // 0x8021BF94: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021BF94: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8021BF98: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
L_8021BF9C:
    // 0x8021BF9C: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x8021BFA0: lw          $t2, -0x3C1C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C1C);
    // 0x8021BFA4: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8021BFA8: lwc1        $f10, 0xA8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XA8);
    // 0x8021BFAC: lwc1        $f16, 0xA4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XA4);
    // 0x8021BFB0: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x8021BFB4: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x8021BFB8: lwc1        $f0, 0x30($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021BFBC: lwc1        $f30, 0x34($v0)
    ctx->f30.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021BFC0: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8021BFC4: sub.s       $f22, $f0, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8021BFC8: lwc1        $f4, 0xA0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8021BFCC: mov.s       $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    ctx->f28.fl = ctx->f0.fl;
    // 0x8021BFD0: sub.s       $f24, $f30, $f16
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f24.fl = ctx->f30.fl - ctx->f16.fl;
    // 0x8021BFD4: mul.s       $f6, $f22, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8021BFD8: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8021BFDC: mul.s       $f8, $f24, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8021BFE0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8021BFE4: mul.s       $f16, $f20, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x8021BFE8: jal         0x8022AA40
    // 0x8021BFEC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_8022AA40(rdram, ctx);
        goto after_2;
    // 0x8021BFEC: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_2:
    // 0x8021BFF0: lwc1        $f2, 0xC($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XC);
    // 0x8021BFF4: lwc1        $f18, 0x134($s4)
    ctx->f18.u32l = MEM_W(ctx->r20, 0X134);
    // 0x8021BFF8: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x8021BFFC: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8021C000: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8021C004: nop

    // 0x8021C008: bc1f        L_8021C18C
    if (!c1cs) {
        // 0x8021C00C: nop
    
            goto L_8021C18C;
    }
    // 0x8021C00C: nop

    // 0x8021C010: lbu         $t3, 0x8($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X8);
    // 0x8021C014: addiu       $a0, $s4, 0x218
    ctx->r4 = ADD32(ctx->r20, 0X218);
    // 0x8021C018: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x8021C01C: bnel        $t4, $zero, L_8021C058
    if (ctx->r12 != 0) {
        // 0x8021C020: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_8021C058;
    }
    goto skip_1;
    // 0x8021C020: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_1:
    // 0x8021C024: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x8021C028: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x8021C02C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8021C030: jal         0x8020802C
    // 0x8021C034: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_8020802C(rdram, ctx);
        goto after_3;
    // 0x8021C034: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_3:
    // 0x8021C038: bne         $v0, $zero, L_8021C054
    if (ctx->r2 != 0) {
        // 0x8021C03C: lui         $v0, 0x8028
        ctx->r2 = S32(0X8028 << 16);
            goto L_8021C054;
    }
    // 0x8021C03C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021C040: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021C044: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021C048: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021C04C: b           L_8021C1A0
    // 0x8021C050: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021C050: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C054:
    // 0x8021C054: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_8021C058:
    // 0x8021C058: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8021C05C: lwc1        $f0, 0x13C($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X13C);
    // 0x8021C060: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8021C064: nop

    // 0x8021C068: bc1f        L_8021C088
    if (!c1cs) {
        // 0x8021C06C: nop
    
            goto L_8021C088;
    }
    // 0x8021C06C: nop

    // 0x8021C070: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8021C074: jal         0x8021C52C
    // 0x8021C078: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8021C52C(rdram, ctx);
        goto after_4;
    // 0x8021C078: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8021C07C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021C080: b           L_8021C0A4
    // 0x8021C084: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
        goto L_8021C0A4;
    // 0x8021C084: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8021C088:
    // 0x8021C088: mul.s       $f8, $f0, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x8021C08C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8021C090: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8021C094: jal         0x8021C52C
    // 0x8021C098: nop

    func_8021C52C(rdram, ctx);
        goto after_5;
    // 0x8021C098: nop

    after_5:
    // 0x8021C09C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8021C0A0: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_8021C0A4:
    // 0x8021C0A4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8021C0A8: bne         $v1, $at, L_8021C0C4
    if (ctx->r3 != ctx->r1) {
        // 0x8021C0AC: lui         $v0, 0x8028
        ctx->r2 = S32(0X8028 << 16);
            goto L_8021C0C4;
    }
    // 0x8021C0AC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021C0B0: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021C0B4: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021C0B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021C0BC: b           L_8021C1A0
    // 0x8021C0C0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021C0C0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C0C4:
    // 0x8021C0C4: beq         $s6, $zero, L_8021C0F0
    if (ctx->r22 == 0) {
        // 0x8021C0C8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8021C0F0;
    }
    // 0x8021C0C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8021C0CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8021C0D0: jal         0x8021C5AC
    // 0x8021C0D4: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    func_8021C5AC(rdram, ctx);
        goto after_6;
    // 0x8021C0D4: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    after_6:
    // 0x8021C0D8: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021C0DC: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021C0E0: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021C0E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021C0E8: b           L_8021C1A0
    // 0x8021C0EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8021C1A0;
    // 0x8021C0EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C0F0:
    // 0x8021C0F0: lw          $t5, 0x8($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X8);
    // 0x8021C0F4: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x8021C0F8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8021C0FC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8021C100: lbu         $t8, 0x5($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X5);
    // 0x8021C104: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x8021C108: beql        $t8, $zero, L_8021C160
    if (ctx->r24 == 0) {
        // 0x8021C10C: lbu         $t2, 0x11($s1)
        ctx->r10 = MEM_BU(ctx->r17, 0X11);
            goto L_8021C160;
    }
    goto skip_2;
    // 0x8021C10C: lbu         $t2, 0x11($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X11);
    skip_2:
    // 0x8021C110: lbu         $t9, 0x11($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X11);
    // 0x8021C114: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8021C118: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8021C11C: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x8021C120: beq         $t1, $zero, L_8021C130
    if (ctx->r9 == 0) {
        // 0x8021C124: or          $a3, $s5, $zero
        ctx->r7 = ctx->r21 | 0;
            goto L_8021C130;
    }
    // 0x8021C124: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x8021C128: b           L_8021C134
    // 0x8021C12C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_8021C134;
    // 0x8021C12C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8021C130:
    // 0x8021C130: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
L_8021C134:
    // 0x8021C134: cvt.d.s     $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f10.d = CVT_D_S(ctx->f22.fl);
    // 0x8021C138: cvt.d.s     $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f16.d = CVT_D_S(ctx->f24.fl);
    // 0x8021C13C: sdc1        $f10, 0x20($sp)
    CHECK_FR(ctx, 10);
    SD(ctx->f10.u64, 0X20, ctx->r29);
    // 0x8021C140: sdc1        $f16, 0x28($sp)
    CHECK_FR(ctx, 16);
    SD(ctx->f16.u64, 0X28, ctx->r29);
    // 0x8021C144: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x8021C148: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x8021C14C: jal         0x8020672C
    // 0x8021C150: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_8020672C(rdram, ctx);
        goto after_7;
    // 0x8021C150: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_7:
    // 0x8021C154: b           L_8021C18C
    // 0x8021C158: nop

        goto L_8021C18C;
    // 0x8021C158: nop

    // 0x8021C15C: lbu         $t2, 0x11($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0X11);
L_8021C160:
    // 0x8021C160: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x8021C164: addiu       $a0, $zero, -0x2
    ctx->r4 = ADD32(0, -0X2);
    // 0x8021C168: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8021C16C: beq         $t3, $zero, L_8021C17C
    if (ctx->r11 == 0) {
        // 0x8021C170: nop
    
            goto L_8021C17C;
    }
    // 0x8021C170: nop

    // 0x8021C174: b           L_8021C17C
    // 0x8021C178: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_8021C17C;
    // 0x8021C178: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8021C17C:
    // 0x8021C17C: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x8021C180: swc1        $f30, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f30.u32l;
    // 0x8021C184: jal         0x8020672C
    // 0x8021C188: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    func_8020672C(rdram, ctx);
        goto after_8;
    // 0x8021C188: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    after_8:
L_8021C18C:
    // 0x8021C18C: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x8021C190: lhu         $v0, 0xBE6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XBE6);
    // 0x8021C194: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8021C198: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021C19C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8021C1A0:
    // 0x8021C1A0: addiu       $s3, $s3, 0x24
    ctx->r19 = ADD32(ctx->r19, 0X24);
    // 0x8021C1A4: slt         $at, $s3, $v1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8021C1A8: bne         $at, $zero, L_8021BEB8
    if (ctx->r1 != 0) {
        // 0x8021C1AC: nop
    
            goto L_8021BEB8;
    }
    // 0x8021C1AC: nop

L_8021C1B0:
    // 0x8021C1B0: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x8021C1B4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x8021C1B8: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x8021C1BC: ldc1        $f24, 0x48($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X48);
    // 0x8021C1C0: ldc1        $f26, 0x50($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X50);
    // 0x8021C1C4: ldc1        $f28, 0x58($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X58);
    // 0x8021C1C8: ldc1        $f30, 0x60($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X60);
    // 0x8021C1CC: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8021C1D0: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8021C1D4: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x8021C1D8: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8021C1DC: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x8021C1E0: lw          $s5, 0x7C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X7C);
    // 0x8021C1E4: lw          $s6, 0x80($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X80);
    // 0x8021C1E8: jr          $ra
    // 0x8021C1EC: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x8021C1EC: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_80228950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228950: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80228954: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80228958: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8022895C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80228960: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80228964: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80228968: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022896C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228970: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228974: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80228978: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8022897C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80228980: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80228984: bltz        $a0, L_802289A8
    if (SIGNED(ctx->r4) < 0) {
        // 0x80228988: sw          $a3, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r7;
            goto L_802289A8;
    }
    // 0x80228988: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8022898C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80228990: lhu         $t6, 0xBFE($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBFE);
    // 0x80228994: sll         $t7, $a1, 5
    ctx->r15 = S32(ctx->r5 << 5);
    // 0x80228998: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8022899C: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802289A0: beq         $at, $zero, L_802289C0
    if (ctx->r1 == 0) {
        // 0x802289A4: addiu       $s0, $sp, 0x4C
        ctx->r16 = ADD32(ctx->r29, 0X4C);
            goto L_802289C0;
    }
    // 0x802289A4: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
L_802289A8:
    // 0x802289A8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802289AC: addiu       $a0, $a0, 0x3D90
    ctx->r4 = ADD32(ctx->r4, 0X3D90);
    // 0x802289B0: jal         0x80231A24
    // 0x802289B4: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x802289B4: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_0:
    // 0x802289B8: b           L_80228CB8
    // 0x802289BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80228CB8;
    // 0x802289BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_802289C0:
    // 0x802289C0: lw          $t8, 0x5A44($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5A44);
    // 0x802289C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802289C8: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x802289CC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x802289D0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x802289D4: addiu       $s3, $s3, 0x5A30
    ctx->r19 = ADD32(ctx->r19, 0X5A30);
    // 0x802289D8: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x802289DC: addiu       $s4, $zero, -0x4
    ctx->r20 = ADD32(0, -0X4);
    // 0x802289E0: addiu       $s2, $zero, -0x8
    ctx->r18 = ADD32(0, -0X8);
    // 0x802289E4: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
L_802289E8:
    // 0x802289E8: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_802289EC:
    // 0x802289EC: and         $s0, $t9, $s4
    ctx->r16 = ctx->r25 & ctx->r20;
    // 0x802289F0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x802289F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802289F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802289FC: beq         $a1, $zero, L_80228CB4
    if (ctx->r5 == 0) {
        // 0x80228A00: addiu       $t0, $s0, 0x3
        ctx->r8 = ADD32(ctx->r16, 0X3);
            goto L_80228CB4;
    }
    // 0x80228A00: addiu       $t0, $s0, 0x3
    ctx->r8 = ADD32(ctx->r16, 0X3);
    // 0x80228A04: beq         $a1, $at, L_80228A28
    if (ctx->r5 == ctx->r1) {
        // 0x80228A08: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80228A28;
    }
    // 0x80228A08: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80228A0C: beq         $a1, $at, L_80228A68
    if (ctx->r5 == ctx->r1) {
        // 0x80228A10: andi        $t6, $s0, 0x1
        ctx->r14 = ctx->r16 & 0X1;
            goto L_80228A68;
    }
    // 0x80228A10: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x80228A14: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80228A18: beq         $a1, $at, L_80228B50
    if (ctx->r5 == ctx->r1) {
        // 0x80228A1C: andi        $t5, $s0, 0x1
        ctx->r13 = ctx->r16 & 0X1;
            goto L_80228B50;
    }
    // 0x80228A1C: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x80228A20: b           L_80228CA4
    // 0x80228A24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
        goto L_80228CA4;
    // 0x80228A24: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
L_80228A28:
    // 0x80228A28: and         $s0, $t0, $s4
    ctx->r16 = ctx->r8 & ctx->r20;
    // 0x80228A2C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80228A30: lbu         $t1, 0x0($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X0);
    // 0x80228A34: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80228A38: beql        $v0, $t1, L_802289EC
    if (ctx->r2 == ctx->r9) {
        // 0x80228A3C: addiu       $t9, $s0, 0x3
        ctx->r25 = ADD32(ctx->r16, 0X3);
            goto L_802289EC;
    }
    goto skip_0;
    // 0x80228A3C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
    skip_0:
    // 0x80228A40: beq         $v0, $zero, L_80228A58
    if (ctx->r2 == 0) {
        // 0x80228A44: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80228A58;
    }
    // 0x80228A44: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80228A48: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x80228A4C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80228A50: b           L_802289E8
    // 0x80228A54: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
        goto L_802289E8;
    // 0x80228A54: sw          $t3, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r11;
L_80228A58:
    // 0x80228A58: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x80228A5C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x80228A60: b           L_802289E8
    // 0x80228A64: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
        goto L_802289E8;
    // 0x80228A64: sw          $t5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r13;
L_80228A68:
    // 0x80228A68: beq         $t6, $zero, L_80228A7C
    if (ctx->r14 == 0) {
        // 0x80228A6C: addiu       $a0, $s1, 0x10
        ctx->r4 = ADD32(ctx->r17, 0X10);
            goto L_80228A7C;
    }
    // 0x80228A6C: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x80228A70: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228A74: b           L_80228AA4
    // 0x80228A78: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228AA4;
    // 0x80228A78: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228A7C:
    // 0x80228A7C: andi        $t7, $s0, 0x2
    ctx->r15 = ctx->r16 & 0X2;
    // 0x80228A80: beq         $t7, $zero, L_80228A94
    if (ctx->r15 == 0) {
        // 0x80228A84: addiu       $t8, $s0, 0x7
        ctx->r24 = ADD32(ctx->r16, 0X7);
            goto L_80228A94;
    }
    // 0x80228A84: addiu       $t8, $s0, 0x7
    ctx->r24 = ADD32(ctx->r16, 0X7);
    // 0x80228A88: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228A8C: b           L_80228AA0
    // 0x80228A90: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228AA0;
    // 0x80228A90: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228A94:
    // 0x80228A94: and         $s0, $t8, $s2
    ctx->r16 = ctx->r24 & ctx->r18;
    // 0x80228A98: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228A9C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228AA0:
    // 0x80228AA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228AA4:
    // 0x80228AA4: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x80228AA8: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x80228AAC: andi        $t0, $s0, 0x2
    ctx->r8 = ctx->r16 & 0X2;
    // 0x80228AB0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80228AB4: beq         $t9, $zero, L_80228AC8
    if (ctx->r25 == 0) {
        // 0x80228AB8: swc1        $f6, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
            goto L_80228AC8;
    }
    // 0x80228AB8: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x80228ABC: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228AC0: b           L_80228AEC
    // 0x80228AC4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228AEC;
    // 0x80228AC4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228AC8:
    // 0x80228AC8: beq         $t0, $zero, L_80228ADC
    if (ctx->r8 == 0) {
        // 0x80228ACC: addiu       $t1, $s0, 0x7
        ctx->r9 = ADD32(ctx->r16, 0X7);
            goto L_80228ADC;
    }
    // 0x80228ACC: addiu       $t1, $s0, 0x7
    ctx->r9 = ADD32(ctx->r16, 0X7);
    // 0x80228AD0: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228AD4: b           L_80228AE8
    // 0x80228AD8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228AE8;
    // 0x80228AD8: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228ADC:
    // 0x80228ADC: and         $s0, $t1, $s2
    ctx->r16 = ctx->r9 & ctx->r18;
    // 0x80228AE0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228AE4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228AE8:
    // 0x80228AE8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228AEC:
    // 0x80228AEC: ldc1        $f8, -0x8($v0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r2, -0X8);
    // 0x80228AF0: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x80228AF4: andi        $t3, $s0, 0x2
    ctx->r11 = ctx->r16 & 0X2;
    // 0x80228AF8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80228AFC: beq         $t2, $zero, L_80228B10
    if (ctx->r10 == 0) {
        // 0x80228B00: swc1        $f10, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
            goto L_80228B10;
    }
    // 0x80228B00: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
    // 0x80228B04: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228B08: b           L_80228B34
    // 0x80228B0C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228B34;
    // 0x80228B0C: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228B10:
    // 0x80228B10: beq         $t3, $zero, L_80228B24
    if (ctx->r11 == 0) {
        // 0x80228B14: addiu       $t4, $s0, 0x7
        ctx->r12 = ADD32(ctx->r16, 0X7);
            goto L_80228B24;
    }
    // 0x80228B14: addiu       $t4, $s0, 0x7
    ctx->r12 = ADD32(ctx->r16, 0X7);
    // 0x80228B18: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228B1C: b           L_80228B30
    // 0x80228B20: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228B30;
    // 0x80228B20: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228B24:
    // 0x80228B24: and         $s0, $t4, $s2
    ctx->r16 = ctx->r12 & ctx->r18;
    // 0x80228B28: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228B2C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228B30:
    // 0x80228B30: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228B34:
    // 0x80228B34: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x80228B38: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80228B3C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80228B40: jal         0x80234D30
    // 0x80228B44: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    func_80234D30(rdram, ctx);
        goto after_1;
    // 0x80228B44: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    after_1:
    // 0x80228B48: b           L_802289EC
    // 0x80228B4C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_802289EC;
    // 0x80228B4C: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_80228B50:
    // 0x80228B50: beq         $t5, $zero, L_80228B64
    if (ctx->r13 == 0) {
        // 0x80228B54: andi        $t6, $s0, 0x2
        ctx->r14 = ctx->r16 & 0X2;
            goto L_80228B64;
    }
    // 0x80228B54: andi        $t6, $s0, 0x2
    ctx->r14 = ctx->r16 & 0X2;
    // 0x80228B58: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228B5C: b           L_80228B88
    // 0x80228B60: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228B88;
    // 0x80228B60: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228B64:
    // 0x80228B64: beq         $t6, $zero, L_80228B78
    if (ctx->r14 == 0) {
        // 0x80228B68: addiu       $t7, $s0, 0x7
        ctx->r15 = ADD32(ctx->r16, 0X7);
            goto L_80228B78;
    }
    // 0x80228B68: addiu       $t7, $s0, 0x7
    ctx->r15 = ADD32(ctx->r16, 0X7);
    // 0x80228B6C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228B70: b           L_80228B84
    // 0x80228B74: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228B84;
    // 0x80228B74: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228B78:
    // 0x80228B78: and         $s0, $t7, $s2
    ctx->r16 = ctx->r15 & ctx->r18;
    // 0x80228B7C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228B80: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228B84:
    // 0x80228B84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228B88:
    // 0x80228B88: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x80228B8C: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x80228B90: andi        $t9, $s0, 0x2
    ctx->r25 = ctx->r16 & 0X2;
    // 0x80228B94: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80228B98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80228B9C: beq         $t8, $zero, L_80228BB0
    if (ctx->r24 == 0) {
        // 0x80228BA0: swc1        $f6, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
            goto L_80228BB0;
    }
    // 0x80228BA0: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x80228BA4: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228BA8: b           L_80228BD4
    // 0x80228BAC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228BD4;
    // 0x80228BAC: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228BB0:
    // 0x80228BB0: beq         $t9, $zero, L_80228BC4
    if (ctx->r25 == 0) {
        // 0x80228BB4: addiu       $t0, $s0, 0x7
        ctx->r8 = ADD32(ctx->r16, 0X7);
            goto L_80228BC4;
    }
    // 0x80228BB4: addiu       $t0, $s0, 0x7
    ctx->r8 = ADD32(ctx->r16, 0X7);
    // 0x80228BB8: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228BBC: b           L_80228BD0
    // 0x80228BC0: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228BD0;
    // 0x80228BC0: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228BC4:
    // 0x80228BC4: and         $s0, $t0, $s2
    ctx->r16 = ctx->r8 & ctx->r18;
    // 0x80228BC8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228BCC: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228BD0:
    // 0x80228BD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228BD4:
    // 0x80228BD4: ldc1        $f8, -0x8($v0)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r2, -0X8);
    // 0x80228BD8: andi        $t1, $s0, 0x1
    ctx->r9 = ctx->r16 & 0X1;
    // 0x80228BDC: andi        $t2, $s0, 0x2
    ctx->r10 = ctx->r16 & 0X2;
    // 0x80228BE0: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80228BE4: beq         $t1, $zero, L_80228BF8
    if (ctx->r9 == 0) {
        // 0x80228BE8: swc1        $f10, 0x8($s1)
        MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
            goto L_80228BF8;
    }
    // 0x80228BE8: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x80228BEC: addiu       $s0, $s0, 0x7
    ctx->r16 = ADD32(ctx->r16, 0X7);
    // 0x80228BF0: b           L_80228C1C
    // 0x80228BF4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
        goto L_80228C1C;
    // 0x80228BF4: addiu       $v0, $s0, -0x16
    ctx->r2 = ADD32(ctx->r16, -0X16);
L_80228BF8:
    // 0x80228BF8: beq         $t2, $zero, L_80228C0C
    if (ctx->r10 == 0) {
        // 0x80228BFC: addiu       $t3, $s0, 0x7
        ctx->r11 = ADD32(ctx->r16, 0X7);
            goto L_80228C0C;
    }
    // 0x80228BFC: addiu       $t3, $s0, 0x7
    ctx->r11 = ADD32(ctx->r16, 0X7);
    // 0x80228C00: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80228C04: b           L_80228C18
    // 0x80228C08: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
        goto L_80228C18;
    // 0x80228C08: addiu       $v1, $s0, -0x28
    ctx->r3 = ADD32(ctx->r16, -0X28);
L_80228C0C:
    // 0x80228C0C: and         $s0, $t3, $s2
    ctx->r16 = ctx->r11 & ctx->r18;
    // 0x80228C10: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80228C14: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_80228C18:
    // 0x80228C18: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80228C1C:
    // 0x80228C1C: lwc1        $f0, 0x4($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80228C20: ldc1        $f16, -0x8($v0)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r2, -0X8);
    // 0x80228C24: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80228C28: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80228C2C: bc1t        L_80228C8C
    if (c1cs) {
        // 0x80228C30: swc1        $f18, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
            goto L_80228C8C;
    }
    // 0x80228C30: swc1        $f18, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f18.u32l;
    // 0x80228C34: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80228C38: nop

    // 0x80228C3C: bc1t        L_80228C8C
    if (c1cs) {
        // 0x80228C40: nop
    
            goto L_80228C8C;
    }
    // 0x80228C40: nop

    // 0x80228C44: lwc1        $f0, 0x8($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80228C48: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80228C4C: nop

    // 0x80228C50: bc1t        L_80228C8C
    if (c1cs) {
        // 0x80228C54: nop
    
            goto L_80228C8C;
    }
    // 0x80228C54: nop

    // 0x80228C58: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80228C5C: nop

    // 0x80228C60: bc1t        L_80228C8C
    if (c1cs) {
        // 0x80228C64: nop
    
            goto L_80228C8C;
    }
    // 0x80228C64: nop

    // 0x80228C68: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x80228C6C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80228C70: nop

    // 0x80228C74: bc1t        L_80228C8C
    if (c1cs) {
        // 0x80228C78: nop
    
            goto L_80228C8C;
    }
    // 0x80228C78: nop

    // 0x80228C7C: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x80228C80: nop

    // 0x80228C84: bc1f        L_80228C94
    if (!c1cs) {
        // 0x80228C88: nop
    
            goto L_80228C94;
    }
    // 0x80228C88: nop

L_80228C8C:
    // 0x80228C8C: jal         0x80231A24
    // 0x80228C90: addiu       $a0, $a0, 0x3DB4
    ctx->r4 = ADD32(ctx->r4, 0X3DB4);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80228C90: addiu       $a0, $a0, 0x3DB4
    ctx->r4 = ADD32(ctx->r4, 0X3DB4);
    after_2:
L_80228C94:
    // 0x80228C94: jal         0x80228894
    // 0x80228C98: nop

    func_80228894(rdram, ctx);
        goto after_3;
    // 0x80228C98: nop

    after_3:
    // 0x80228C9C: b           L_802289EC
    // 0x80228CA0: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_802289EC;
    // 0x80228CA0: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_80228CA4:
    // 0x80228CA4: jal         0x80231A24
    // 0x80228CA8: addiu       $a0, $a0, 0x3DD8
    ctx->r4 = ADD32(ctx->r4, 0X3DD8);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x80228CA8: addiu       $a0, $a0, 0x3DD8
    ctx->r4 = ADD32(ctx->r4, 0X3DD8);
    after_4:
    // 0x80228CAC: b           L_802289EC
    // 0x80228CB0: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
        goto L_802289EC;
    // 0x80228CB0: addiu       $t9, $s0, 0x3
    ctx->r25 = ADD32(ctx->r16, 0X3);
L_80228CB4:
    // 0x80228CB4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80228CB8:
    // 0x80228CB8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80228CBC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80228CC0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228CC4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80228CC8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80228CCC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80228CD0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80228CD4: jr          $ra
    // 0x80228CD8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80228CD8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8021FFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021FFB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021FFB8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8021FFBC: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x8021FFC0: addiu       $s5, $s5, 0xBC0
    ctx->r21 = ADD32(ctx->r21, 0XBC0);
    // 0x8021FFC4: lhu         $a0, 0x20($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X20);
    // 0x8021FFC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021FFCC: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8021FFD0: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x8021FFD4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8021FFD8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8021FFDC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8021FFE0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8021FFE4: jal         0x8022BA58
    // 0x8021FFE8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022BA58(rdram, ctx);
        goto after_0;
    // 0x8021FFE8: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8021FFEC: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8021FFF0: sw          $v0, 0x4390($at)
    MEM_W(0X4390, ctx->r1) = ctx->r2;
    // 0x8021FFF4: lhu         $a0, 0x20($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X20);
    // 0x8021FFF8: sll         $t7, $a0, 3
    ctx->r15 = S32(ctx->r4 << 3);
    // 0x8021FFFC: jal         0x8022BA58
    // 0x80220000: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8022BA58(rdram, ctx);
        goto after_1;
    // 0x80220000: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_1:
    // 0x80220004: lhu         $a2, 0x20($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X20);
    // 0x80220008: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022000C: addiu       $v1, $v1, 0x4390
    ctx->r3 = ADD32(ctx->r3, 0X4390);
    // 0x80220010: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x80220014: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80220018: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8022001C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80220020: jal         0x8022B780
    // 0x80220024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_2;
    // 0x80220024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80220028: lhu         $a2, 0x20($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X20);
    // 0x8022002C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80220030: lw          $a0, 0x4394($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4394);
    // 0x80220034: sll         $t9, $a2, 3
    ctx->r25 = S32(ctx->r6 << 3);
    // 0x80220038: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8022003C: jal         0x8022B780
    // 0x80220040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_3;
    // 0x80220040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80220044: lhu         $s0, 0x2E($s5)
    ctx->r16 = MEM_HU(ctx->r21, 0X2E);
    // 0x80220048: addiu       $s0, $s0, 0x21
    ctx->r16 = ADD32(ctx->r16, 0X21);
    // 0x8022004C: sll         $s1, $s0, 5
    ctx->r17 = S32(ctx->r16 << 5);
    // 0x80220050: jal         0x8022BA58
    // 0x80220054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8022BA58(rdram, ctx);
        goto after_4;
    // 0x80220054: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80220058: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8022005C: addiu       $v1, $v1, 0x4398
    ctx->r3 = ADD32(ctx->r3, 0X4398);
    // 0x80220060: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80220064: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80220068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8022006C: jal         0x8022B780
    // 0x80220070: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8022B780(rdram, ctx);
        goto after_5;
    // 0x80220070: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x80220074: lhu         $a0, 0x22($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X22);
    // 0x80220078: sll         $t4, $a0, 6
    ctx->r12 = S32(ctx->r4 << 6);
    // 0x8022007C: jal         0x8022BA58
    // 0x80220080: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8022BA58(rdram, ctx);
        goto after_6;
    // 0x80220080: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_6:
    // 0x80220084: lhu         $a0, 0x22($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X22);
    // 0x80220088: lui         $s0, 0x8027
    ctx->r16 = S32(0X8027 << 16);
    // 0x8022008C: addiu       $s0, $s0, 0x43A8
    ctx->r16 = ADD32(ctx->r16, 0X43A8);
    // 0x80220090: sll         $t5, $a0, 6
    ctx->r13 = S32(ctx->r4 << 6);
    // 0x80220094: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80220098: jal         0x8022BA58
    // 0x8022009C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_8022BA58(rdram, ctx);
        goto after_7;
    // 0x8022009C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_7:
    // 0x802200A0: lhu         $a0, 0x22($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X22);
    // 0x802200A4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x802200A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x802200AC: jal         0x8022BA58
    // 0x802200B0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8022BA58(rdram, ctx);
        goto after_8;
    // 0x802200B0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_8:
    // 0x802200B4: lhu         $a2, 0x22($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X22);
    // 0x802200B8: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x802200BC: addiu       $s1, $s1, 0x44B8
    ctx->r17 = ADD32(ctx->r17, 0X44B8);
    // 0x802200C0: sll         $t7, $a2, 6
    ctx->r15 = S32(ctx->r6 << 6);
    // 0x802200C4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x802200C8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802200CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802200D0: jal         0x8022B780
    // 0x802200D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_9;
    // 0x802200D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x802200D8: lhu         $a2, 0x22($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X22);
    // 0x802200DC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x802200E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802200E4: sll         $t8, $a2, 6
    ctx->r24 = S32(ctx->r6 << 6);
    // 0x802200E8: jal         0x8022B780
    // 0x802200EC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_8022B780(rdram, ctx);
        goto after_10;
    // 0x802200EC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_10:
    // 0x802200F0: lhu         $a2, 0x22($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X22);
    // 0x802200F4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x802200F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802200FC: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x80220100: jal         0x8022B780
    // 0x80220104: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    func_8022B780(rdram, ctx);
        goto after_11;
    // 0x80220104: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_11:
    // 0x80220108: lhu         $a0, 0x28($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X28);
    // 0x8022010C: sll         $t4, $a0, 6
    ctx->r12 = S32(ctx->r4 << 6);
    // 0x80220110: jal         0x8022BA58
    // 0x80220114: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8022BA58(rdram, ctx);
        goto after_12;
    // 0x80220114: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_12:
    // 0x80220118: lhu         $a2, 0x28($s5)
    ctx->r6 = MEM_HU(ctx->r21, 0X28);
    // 0x8022011C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80220120: addiu       $v1, $v1, 0x5E60
    ctx->r3 = ADD32(ctx->r3, 0X5E60);
    // 0x80220124: sll         $t5, $a2, 6
    ctx->r13 = S32(ctx->r6 << 6);
    // 0x80220128: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8022012C: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80220130: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80220134: jal         0x8022B780
    // 0x80220138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8022B780(rdram, ctx);
        goto after_13;
    // 0x80220138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8022013C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80220140: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80220144: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80220148: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8022014C: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x80220150: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80220154: addiu       $t1, $t1, 0x4380
    ctx->r9 = ADD32(ctx->r9, 0X4380);
    // 0x80220158: addiu       $t0, $t0, 0x3BB8
    ctx->r8 = ADD32(ctx->r8, 0X3BB8);
    // 0x8022015C: addiu       $a3, $a3, 0x3BB0
    ctx->r7 = ADD32(ctx->r7, 0X3BB0);
    // 0x80220160: addiu       $a2, $a2, 0x3BA8
    ctx->r6 = ADD32(ctx->r6, 0X3BA8);
    // 0x80220164: addiu       $a1, $a1, 0x3BA0
    ctx->r5 = ADD32(ctx->r5, 0X3BA0);
    // 0x80220168: addiu       $a0, $a0, 0x3B98
    ctx->r4 = ADD32(ctx->r4, 0X3B98);
    // 0x8022016C: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x80220170: ori         $t5, $t5, 0xA800
    ctx->r13 = ctx->r13 | 0XA800;
    // 0x80220174: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x80220178: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x8022017C: lui         $t2, 0x8025
    ctx->r10 = S32(0X8025 << 16);
    // 0x80220180: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80220184: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80220188: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8022018C: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80220190: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80220194: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80220198: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x8022019C: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x802201A0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x802201A4: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x802201A8: sw          $t5, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r13;
    // 0x802201AC: sw          $t6, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r14;
    // 0x802201B0: ori         $t7, $t7, 0xA800
    ctx->r15 = ctx->r15 | 0XA800;
    // 0x802201B4: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802201B8: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
    // 0x802201BC: addiu       $t2, $t2, -0x178C
    ctx->r10 = ADD32(ctx->r10, -0X178C);
    // 0x802201C0: sw          $t7, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r15;
    // 0x802201C4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802201C8: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x802201CC: sh          $zero, 0x0($t2)
    MEM_H(0X0, ctx->r10) = 0;
    // 0x802201D0: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x802201D4: lw          $t8, 0x4390($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4390);
    // 0x802201D8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802201DC: addu        $t9, $t1, $v1
    ctx->r25 = ADD32(ctx->r9, ctx->r3);
    // 0x802201E0: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x802201E4: sw          $t8, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = ctx->r24;
    // 0x802201E8: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x802201EC: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x802201F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x802201F4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802201F8: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x802201FC: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80220200: addiu       $t6, $t6, 0x44C0
    ctx->r14 = ADD32(ctx->r14, 0X44C0);
    // 0x80220204: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80220208: sw          $t4, -0x17A8($at)
    MEM_W(-0X17A8, ctx->r1) = ctx->r12;
    // 0x8022020C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220210: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80220214: sw          $t7, 0x44BC($at)
    MEM_W(0X44BC, ctx->r1) = ctx->r15;
    // 0x80220218: lhu         $t4, 0x2E($s5)
    ctx->r12 = MEM_HU(ctx->r21, 0X2E);
    // 0x8022021C: lui         $s1, 0x8027
    ctx->r17 = S32(0X8027 << 16);
    // 0x80220220: lui         $s2, 0x8027
    ctx->r18 = S32(0X8027 << 16);
    // 0x80220224: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x80220228: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x8022022C: addiu       $s4, $s4, 0x43A2
    ctx->r20 = ADD32(ctx->r20, 0X43A2);
    // 0x80220230: addiu       $s3, $s3, 0x43A0
    ctx->r19 = ADD32(ctx->r19, 0X43A0);
    // 0x80220234: addiu       $s2, $s2, 0x439E
    ctx->r18 = ADD32(ctx->r18, 0X439E);
    // 0x80220238: addiu       $s1, $s1, 0x439C
    ctx->r17 = ADD32(ctx->r17, 0X439C);
    // 0x8022023C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80220240: addiu       $t8, $zero, 0x13E
    ctx->r24 = ADD32(0, 0X13E);
    // 0x80220244: addiu       $t9, $zero, 0xEE
    ctx->r25 = ADD32(0, 0XEE);
    // 0x80220248: sh          $t8, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r24;
    // 0x8022024C: sh          $t3, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r11;
    // 0x80220250: sh          $t9, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r25;
    // 0x80220254: sh          $t3, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r11;
    // 0x80220258: blez        $t4, L_80220290
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8022025C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80220290;
    }
    // 0x8022025C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80220260: lh          $t5, 0x0($s4)
    ctx->r13 = MEM_H(ctx->r20, 0X0);
L_80220264:
    // 0x80220264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80220268: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x8022026C: lh          $a2, 0x0($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X0);
    // 0x80220270: lh          $a3, 0x0($s3)
    ctx->r7 = MEM_H(ctx->r19, 0X0);
    // 0x80220274: jal         0x80222AA8
    // 0x80220278: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80222AA8(rdram, ctx);
        goto after_14;
    // 0x80220278: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_14:
    // 0x8022027C: lhu         $t6, 0x2E($s5)
    ctx->r14 = MEM_HU(ctx->r21, 0X2E);
    // 0x80220280: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80220284: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80220288: bnel        $at, $zero, L_80220264
    if (ctx->r1 != 0) {
        // 0x8022028C: lh          $t5, 0x0($s4)
        ctx->r13 = MEM_H(ctx->r20, 0X0);
            goto L_80220264;
    }
    goto skip_0;
    // 0x8022028C: lh          $t5, 0x0($s4)
    ctx->r13 = MEM_H(ctx->r20, 0X0);
    skip_0:
L_80220290:
    // 0x80220290: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80220294: jal         0x8022970C
    // 0x80220298: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, 0X43B0);
    func_8022970C(rdram, ctx);
        goto after_15;
    // 0x80220298: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, 0X43B0);
    after_15:
    // 0x8022029C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802202A0: jal         0x8022970C
    // 0x802202A4: addiu       $a0, $a0, 0x43F0
    ctx->r4 = ADD32(ctx->r4, 0X43F0);
    func_8022970C(rdram, ctx);
        goto after_16;
    // 0x802202A4: addiu       $a0, $a0, 0x43F0
    ctx->r4 = ADD32(ctx->r4, 0X43F0);
    after_16:
    // 0x802202A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802202AC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802202B0: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802202B4: addiu       $v0, $v0, -0x17C0
    ctx->r2 = ADD32(ctx->r2, -0X17C0);
    // 0x802202B8: sb          $zero, 0x44B0($at)
    MEM_B(0X44B0, ctx->r1) = 0;
    // 0x802202BC: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x802202C0: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802202C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802202C8: jal         0x80223600
    // 0x802202CC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    func_80223600(rdram, ctx);
        goto after_17;
    // 0x802202CC: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    after_17:
    // 0x802202D0: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802202D4: addiu       $v0, $v0, 0x1B80
    ctx->r2 = ADD32(ctx->r2, 0X1B80);
    // 0x802202D8: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x802202DC: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x802202E0: beq         $t7, $zero, L_80220300
    if (ctx->r15 == 0) {
        // 0x802202E4: sw          $zero, 0x44B4($at)
        MEM_W(0X44B4, ctx->r1) = 0;
            goto L_80220300;
    }
    // 0x802202E4: sw          $zero, 0x44B4($at)
    MEM_W(0X44B4, ctx->r1) = 0;
    // 0x802202E8: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x802202EC: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x802202F0: addiu       $t8, $t8, 0x1B88
    ctx->r24 = ADD32(ctx->r24, 0X1B88);
    // 0x802202F4: addiu       $v1, $v1, 0x3B88
    ctx->r3 = ADD32(ctx->r3, 0X3B88);
    // 0x802202F8: b           L_8022030C
    // 0x802202FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_8022030C;
    // 0x802202FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_80220300:
    // 0x80220300: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80220304: addiu       $v1, $v1, 0x3B88
    ctx->r3 = ADD32(ctx->r3, 0X3B88);
    // 0x80220308: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8022030C:
    // 0x8022030C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80220310: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80220314: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80220318: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8022031C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80220320: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80220324: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80220328: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8022032C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80220330: addiu       $t4, $t9, 0x2000
    ctx->r12 = ADD32(ctx->r25, 0X2000);
    // 0x80220334: sw          $t4, 0x3B8C($at)
    MEM_W(0X3B8C, ctx->r1) = ctx->r12;
    // 0x80220338: jr          $ra
    // 0x8022033C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8022033C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802057FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802057FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80205800: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80205804: lui         $s0, 0x8025
    ctx->r16 = S32(0X8025 << 16);
    // 0x80205808: addiu       $s0, $s0, -0x1A50
    ctx->r16 = ADD32(ctx->r16, -0X1A50);
    // 0x8020580C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80205810: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80205814: jal         0x80238B50
    // 0x80205818: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80238B50(rdram, ctx);
        goto after_0;
    // 0x80205818: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_0:
    // 0x8020581C: jal         0x80207210
    // 0x80205820: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    func_80207210(rdram, ctx);
        goto after_1;
    // 0x80205820: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_1:
    // 0x80205824: jal         0x80237F60
    // 0x80205828: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80237F60(rdram, ctx);
        goto after_2;
    // 0x80205828: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x8020582C: beq         $v0, $zero, L_80205878
    if (ctx->r2 == 0) {
        // 0x80205830: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_80205878;
    }
    // 0x80205830: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80205834: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80205838: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8020583C: nop

L_80205840:
    // 0x80205840: jal         0x80207130
    // 0x80205844: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    func_80207130(rdram, ctx);
        goto after_3;
    // 0x80205844: addiu       $a0, $zero, 0x6A
    ctx->r4 = ADD32(0, 0X6A);
    after_3:
    // 0x80205848: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x8020584C: nop

    // 0x80205850: bc1f        L_80205868
    if (!c1cs) {
        // 0x80205854: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80205868;
    }
    // 0x80205854: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80205858: jal         0x80231A24
    // 0x8020585C: addiu       $a0, $a0, 0x2960
    ctx->r4 = ADD32(ctx->r4, 0X2960);
    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x8020585C: addiu       $a0, $a0, 0x2960
    ctx->r4 = ADD32(ctx->r4, 0X2960);
    after_4:
    // 0x80205860: b           L_8020587C
    // 0x80205864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8020587C;
    // 0x80205864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80205868:
    // 0x80205868: jal         0x80237F60
    // 0x8020586C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80237F60(rdram, ctx);
        goto after_5;
    // 0x8020586C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_5:
    // 0x80205870: bne         $v0, $zero, L_80205840
    if (ctx->r2 != 0) {
        // 0x80205874: nop
    
            goto L_80205840;
    }
    // 0x80205874: nop

L_80205878:
    // 0x80205878: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8020587C:
    // 0x8020587C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80205880: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80205884: jr          $ra
    // 0x80205888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80205888: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8021E73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021E73C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021E740: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021E744: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8021E748: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8021E74C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021E750: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x8021E754: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021E758: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021E75C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021E760: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021E764: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021E768: jal         0x8022FF90
    // 0x8021E76C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8022FF90(rdram, ctx);
        goto after_0;
    // 0x8021E76C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8021E770: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8021E774: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8021E778: blez        $v0, L_8021E7F4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021E77C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8021E7F4;
    }
    // 0x8021E77C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8021E780: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
    // 0x8021E784: lui         $s5, 0x8025
    ctx->r21 = S32(0X8025 << 16);
    // 0x8021E788: addiu       $s5, $s5, -0x1878
    ctx->r21 = ADD32(ctx->r21, -0X1878);
    // 0x8021E78C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_8021E790:
    // 0x8021E790: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x8021E794: bne         $a1, $zero, L_8021E7A4
    if (ctx->r5 != 0) {
        // 0x8021E798: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_8021E7A4;
    }
    // 0x8021E798: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8021E79C: b           L_8021E814
    // 0x8021E7A0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8021E814;
    // 0x8021E7A0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8021E7A4:
    // 0x8021E7A4: beql        $s4, $v0, L_8021E7E8
    if (ctx->r20 == ctx->r2) {
        // 0x8021E7A8: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8021E7E8;
    }
    goto skip_0;
    // 0x8021E7A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8021E7AC: jal         0x8022FF40
    // 0x8021E7B0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    func_8022FF40(rdram, ctx);
        goto after_1;
    // 0x8021E7B0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    after_1:
    // 0x8021E7B4: beql        $v0, $zero, L_8021E7E0
    if (ctx->r2 == 0) {
        // 0x8021E7B8: lw          $t2, 0x0($s5)
        ctx->r10 = MEM_W(ctx->r21, 0X0);
            goto L_8021E7E0;
    }
    goto skip_1;
    // 0x8021E7B8: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x8021E7BC: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x8021E7C0: lw          $t6, 0xC($s3)
    ctx->r14 = MEM_W(ctx->r19, 0XC);
    // 0x8021E7C4: subu        $t8, $v0, $t7
    ctx->r24 = SUB32(ctx->r2, ctx->r15);
    // 0x8021E7C8: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8021E7CC: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x8021E7D0: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8021E7D4: b           L_8021E7E4
    // 0x8021E7D8: addu        $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
        goto L_8021E7E4;
    // 0x8021E7D8: addu        $s0, $s0, $t1
    ctx->r16 = ADD32(ctx->r16, ctx->r9);
    // 0x8021E7DC: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
L_8021E7E0:
    // 0x8021E7E0: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
L_8021E7E4:
    // 0x8021E7E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8021E7E8:
    // 0x8021E7E8: slt         $at, $s1, $s6
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8021E7EC: bne         $at, $zero, L_8021E790
    if (ctx->r1 != 0) {
        // 0x8021E7F0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8021E790;
    }
    // 0x8021E7F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8021E7F4:
    // 0x8021E7F4: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8021E7F8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8021E7FC: lwc1        $f8, -0x1884($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1884);
    // 0x8021E800: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8021E804: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8021E808: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8021E80C: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8021E810: nop

L_8021E814:
    // 0x8021E814: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8021E818: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021E81C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021E820: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021E824: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021E828: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021E82C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021E830: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021E834: jr          $ra
    // 0x8021E838: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8021E838: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802448B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802448B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802448B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802448BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802448C0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x802448C4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x802448C8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802448CC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x802448D0: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x802448D4: jalr        $t9
    // 0x802448D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x802448D8: nop

    after_0:
    // 0x802448DC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x802448E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802448E4: lui         $t2, 0x440
    ctx->r10 = S32(0X440 << 16);
    // 0x802448E8: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x802448EC: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x802448F0: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x802448F4: ori         $t2, $t2, 0x580
    ctx->r10 = ctx->r10 | 0X580;
    // 0x802448F8: lui         $t1, 0xD00
    ctx->r9 = S32(0XD00 << 16);
    // 0x802448FC: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x80244900: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x80244904: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80244908: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8024490C: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x80244910: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x80244914: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x80244918: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8024491C: sw          $t5, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r13;
    // 0x80244920: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80244924: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80244928: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8024492C: sw          $t7, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r15;
    // 0x80244930: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80244934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80244938: jr          $ra
    // 0x8024493C: nop

    return;
    // 0x8024493C: nop

;}
RECOMP_FUNC void func_80242330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242338: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8024233C: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80242340: addiu       $a2, $a2, 0x4880
    ctx->r6 = ADD32(ctx->r6, 0X4880);
    // 0x80242344: addiu       $a1, $a1, 0x48B4
    ctx->r5 = ADD32(ctx->r5, 0X48B4);
    // 0x80242348: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8024234C: jal         0x80249920
    // 0x80242350: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_80249920(rdram, ctx);
        goto after_0;
    // 0x80242350: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80242354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80242358: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8024235C: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80242360: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80242364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024236C: jr          $ra
    // 0x80242370: nop

    return;
    // 0x80242370: nop

;}
RECOMP_FUNC void func_8023F5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F5F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F5F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F5F8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023F5FC: lw          $a3, 0x14($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X14);
    // 0x8023F600: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8023F604: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8023F608: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8023F60C: beq         $a3, $zero, L_8023F644
    if (ctx->r7 == 0) {
        // 0x8023F610: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8023F644;
    }
    // 0x8023F610: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8023F614: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F618: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023F61C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8023F620: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023F624: jal         0x80237120
    // 0x8023F628: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_80237120(rdram, ctx);
        goto after_0;
    // 0x8023F628: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x8023F62C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8023F630: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F634: jal         0x80237150
    // 0x8023F638: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    func_80237150(rdram, ctx);
        goto after_1;
    // 0x8023F638: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_1:
    // 0x8023F63C: b           L_8023F6C4
    // 0x8023F640: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8023F6C4;
    // 0x8023F640: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8023F644:
    // 0x8023F644: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x8023F648: beq         $a3, $zero, L_8023F67C
    if (ctx->r7 == 0) {
        // 0x8023F64C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8023F67C;
    }
    // 0x8023F64C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8023F650: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F654: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8023F658: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8023F65C: jal         0x80237120
    // 0x8023F660: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80237120(rdram, ctx);
        goto after_2;
    // 0x8023F660: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8023F664: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8023F668: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8023F66C: jal         0x80237150
    // 0x8023F670: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    func_80237150(rdram, ctx);
        goto after_3;
    // 0x8023F670: addiu       $a1, $t0, 0xC
    ctx->r5 = ADD32(ctx->r8, 0XC);
    after_3:
    // 0x8023F674: b           L_8023F6C4
    // 0x8023F678: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
        goto L_8023F6C4;
    // 0x8023F678: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_8023F67C:
    // 0x8023F67C: lw          $a3, 0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, 0XC);
    // 0x8023F680: beql        $a3, $zero, L_8023F6C8
    if (ctx->r7 == 0) {
        // 0x8023F684: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F6C8;
    }
    goto skip_0;
    // 0x8023F684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F688: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
L_8023F68C:
    // 0x8023F68C: lh          $t9, 0x16($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X16);
    // 0x8023F690: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8023F694: bnel        $at, $zero, L_8023F6BC
    if (ctx->r1 != 0) {
        // 0x8023F698: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8023F6BC;
    }
    goto skip_1;
    // 0x8023F698: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_1:
    // 0x8023F69C: lw          $t1, 0xD8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0XD8);
    // 0x8023F6A0: bnel        $t1, $zero, L_8023F6BC
    if (ctx->r9 != 0) {
        // 0x8023F6A4: lw          $a3, 0x0($a3)
        ctx->r7 = MEM_W(ctx->r7, 0X0);
            goto L_8023F6BC;
    }
    goto skip_2;
    // 0x8023F6A4: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    skip_2:
    // 0x8023F6A8: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8023F6AC: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x8023F6B0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023F6B4: lh          $a2, 0x16($t2)
    ctx->r6 = MEM_H(ctx->r10, 0X16);
    // 0x8023F6B8: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
L_8023F6BC:
    // 0x8023F6BC: bnel        $a3, $zero, L_8023F68C
    if (ctx->r7 != 0) {
        // 0x8023F6C0: lw          $t8, 0x8($a3)
        ctx->r24 = MEM_W(ctx->r7, 0X8);
            goto L_8023F68C;
    }
    goto skip_3;
    // 0x8023F6C0: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    skip_3:
L_8023F6C4:
    // 0x8023F6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F6C8:
    // 0x8023F6C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023F6CC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8023F6D0: jr          $ra
    // 0x8023F6D4: nop

    return;
    // 0x8023F6D4: nop

;}
RECOMP_FUNC void func_80242CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80242CC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80242CC4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80242CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80242CCC: beq         $a1, $at, L_80242E24
    if (ctx->r5 == ctx->r1) {
        // 0x80242CD0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80242E24;
    }
    // 0x80242CD0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80242CD4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80242CD8: bnel        $a1, $at, L_80242E88
    if (ctx->r5 != ctx->r1) {
        // 0x80242CDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E88;
    }
    goto skip_0;
    // 0x80242CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80242CE0: sw          $a2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r6;
    // 0x80242CE4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80242CE8: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x80242CEC: lui         $t7, 0x8024
    ctx->r15 = S32(0X8024 << 16);
    // 0x80242CF0: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x80242CF4: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x80242CF8: beql        $v0, $zero, L_80242D18
    if (ctx->r2 == 0) {
        // 0x80242CFC: lw          $v0, 0x28($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X28);
            goto L_80242D18;
    }
    goto skip_1;
    // 0x80242CFC: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    skip_1:
    // 0x80242D00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80242D04: beq         $v0, $a0, L_80242DD8
    if (ctx->r2 == ctx->r4) {
        // 0x80242D08: lui         $t0, 0x8024
        ctx->r8 = S32(0X8024 << 16);
            goto L_80242DD8;
    }
    // 0x80242D08: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80242D0C: b           L_80242E88
    // 0x80242D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80242E88;
    // 0x80242D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242D14: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
L_80242D18:
    // 0x80242D18: addiu       $t7, $t7, 0x336C
    ctx->r15 = ADD32(ctx->r15, 0X336C);
    // 0x80242D1C: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80242D20: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80242D24: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80242D28: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x80242D2C: mflo        $t9
    ctx->r25 = lo;
    // 0x80242D30: bne         $a1, $zero, L_80242D3C
    if (ctx->r5 != 0) {
        // 0x80242D34: nop
    
            goto L_80242D3C;
    }
    // 0x80242D34: nop

    // 0x80242D38: break       7
    do_break(2149854520);
L_80242D3C:
    // 0x80242D3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80242D40: bne         $a1, $at, L_80242D54
    if (ctx->r5 != ctx->r1) {
        // 0x80242D44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80242D54;
    }
    // 0x80242D44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80242D48: bne         $t8, $at, L_80242D54
    if (ctx->r24 != ctx->r1) {
        // 0x80242D4C: nop
    
            goto L_80242D54;
    }
    // 0x80242D4C: nop

    // 0x80242D50: break       6
    do_break(2149854544);
L_80242D54:
    // 0x80242D54: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242D58: mflo        $t0
    ctx->r8 = lo;
    // 0x80242D5C: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80242D60: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80242D64: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x80242D68: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80242D6C: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x80242D70: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80242D74: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242D78: mflo        $t4
    ctx->r12 = lo;
    // 0x80242D7C: sw          $t4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r12;
    // 0x80242D80: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242D84: beql        $v1, $zero, L_80242DCC
    if (ctx->r3 == 0) {
        // 0x80242D88: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_80242DCC;
    }
    goto skip_2;
    // 0x80242D88: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_2:
    // 0x80242D8C: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80242D90: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x80242D94: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80242D98: sw          $t5, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r13;
    // 0x80242D9C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80242DA0: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80242DA4: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x80242DA8: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80242DAC: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80242DB0: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
    // 0x80242DB4: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x80242DB8: jal         0x80249170
    // 0x80242DBC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80249170(rdram, ctx);
        goto after_0;
    // 0x80242DBC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x80242DC0: b           L_80242E88
    // 0x80242DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80242E88;
    // 0x80242DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80242DC8: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_80242DCC:
    // 0x80242DCC: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x80242DD0: b           L_80242E84
    // 0x80242DD4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_80242E84;
    // 0x80242DD4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_80242DD8:
    // 0x80242DD8: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80242DDC: addiu       $t0, $t0, 0x2E94
    ctx->r8 = ADD32(ctx->r8, 0X2E94);
    // 0x80242DE0: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    // 0x80242DE4: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242DE8: beql        $v1, $zero, L_80242E18
    if (ctx->r3 == 0) {
        // 0x80242DEC: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_80242E18;
    }
    goto skip_3;
    // 0x80242DEC: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_3:
    // 0x80242DF0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80242DF4: sw          $t1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r9;
    // 0x80242DF8: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x80242DFC: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80242E00: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x80242E04: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x80242E08: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80242E0C: b           L_80242E84
    // 0x80242E10: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
        goto L_80242E84;
    // 0x80242E10: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
    // 0x80242E14: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_80242E18:
    // 0x80242E18: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x80242E1C: b           L_80242E84
    // 0x80242E20: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_80242E84;
    // 0x80242E20: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_80242E24:
    // 0x80242E24: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80242E28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80242E2C: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x80242E30: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x80242E34: beq         $v0, $zero, L_80242E84
    if (ctx->r2 == 0) {
        // 0x80242E38: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_80242E84;
    }
    // 0x80242E38: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x80242E3C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80242E40: sw          $t6, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r14;
    // 0x80242E44: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80242E48: bne         $v1, $zero, L_80242E68
    if (ctx->r3 != 0) {
        // 0x80242E4C: nop
    
            goto L_80242E68;
    }
    // 0x80242E4C: nop

    // 0x80242E50: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242E54: beql        $v1, $zero, L_80242E88
    if (ctx->r3 == 0) {
        // 0x80242E58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E88;
    }
    goto skip_4;
    // 0x80242E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x80242E5C: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x80242E60: b           L_80242E84
    // 0x80242E64: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
        goto L_80242E84;
    // 0x80242E64: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
L_80242E68:
    // 0x80242E68: bnel        $a0, $v1, L_80242E88
    if (ctx->r4 != ctx->r3) {
        // 0x80242E6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E88;
    }
    goto skip_5;
    // 0x80242E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x80242E70: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80242E74: beql        $v1, $zero, L_80242E88
    if (ctx->r3 == 0) {
        // 0x80242E78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80242E88;
    }
    goto skip_6;
    // 0x80242E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x80242E7C: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x80242E80: sw          $t8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r24;
L_80242E84:
    // 0x80242E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80242E88:
    // 0x80242E88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80242E8C: jr          $ra
    // 0x80242E90: nop

    return;
    // 0x80242E90: nop

;}
RECOMP_FUNC void func_8023A524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023A524: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023A528: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023A52C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023A530: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8023A534: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023A538: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023A53C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023A540: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8023A544: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023A548: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8023A54C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8023A550: jal         0x802456A0
    // 0x8023A554: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x8023A554: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    after_0:
    // 0x8023A558: beq         $v0, $zero, L_8023A568
    if (ctx->r2 == 0) {
        // 0x8023A55C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8023A568;
    }
    // 0x8023A55C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023A560: b           L_8023A5A8
    // 0x8023A564: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_8023A5A8;
    // 0x8023A564: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8023A568:
    // 0x8023A568: sll         $s1, $s3, 3
    ctx->r17 = S32(ctx->r19 << 3);
    // 0x8023A56C: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
L_8023A570:
    // 0x8023A570: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x8023A574: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x8023A578: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023A57C: andi        $a2, $s1, 0xFFFF
    ctx->r6 = ctx->r17 & 0XFFFF;
    // 0x8023A580: jal         0x80246660
    // 0x8023A584: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    func_80246660(rdram, ctx);
        goto after_1;
    // 0x8023A584: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_1:
    // 0x8023A588: bne         $v0, $zero, L_8023A598
    if (ctx->r2 != 0) {
        // 0x8023A58C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8023A598;
    }
    // 0x8023A58C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023A590: bne         $s0, $s3, L_8023A570
    if (ctx->r16 != ctx->r19) {
        // 0x8023A594: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8023A570;
    }
    // 0x8023A594: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8023A598:
    // 0x8023A598: sb          $zero, 0x65($s2)
    MEM_B(0X65, ctx->r18) = 0;
    // 0x8023A59C: jal         0x802456A0
    // 0x8023A5A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_802456A0(rdram, ctx);
        goto after_2;
    // 0x8023A5A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8023A5A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8023A5A8:
    // 0x8023A5A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023A5AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023A5B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023A5B4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A5B8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8023A5BC: jr          $ra
    // 0x8023A5C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8023A5C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80234BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234BE4: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80234BE8: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234BEC: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80234BF0: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234BF4: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80234BF8: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80234BFC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80234C00: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234C04: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80234C08: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80234C0C: jr          $ra
    // 0x80234C10: add.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f16.fl;
    return;
    // 0x80234C10: add.s       $f0, $f4, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f4.fl + ctx->f16.fl;
;}
RECOMP_FUNC void func_80234D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80234D30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234D38: lwc1        $f14, 0x0($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80234D3C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80234D40: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80234D44: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80234D48: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80234D4C: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x80234D50: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80234D54: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80234D58: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80234D5C: mul.s       $f10, $f18, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x80234D60: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80234D64: jal         0x8022AA40
    // 0x80234D68: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8022AA40(rdram, ctx);
        goto after_0;
    // 0x80234D68: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x80234D6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80234D70: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80234D74: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80234D78: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80234D7C: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80234D80: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80234D84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80234D88: bc1fl       L_80234D9C
    if (!c1cs) {
        // 0x80234D8C: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_80234D9C;
    }
    goto skip_0;
    // 0x80234D8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_0:
    // 0x80234D90: b           L_80234DC4
    // 0x80234D94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80234DC4;
    // 0x80234D94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80234D98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_80234D9C:
    // 0x80234D9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234DA0: div.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80234DA4: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80234DA8: nop

    // 0x80234DAC: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80234DB0: nop

    // 0x80234DB4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x80234DB8: swc1        $f8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f8.u32l;
    // 0x80234DBC: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x80234DC0: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
L_80234DC4:
    // 0x80234DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234DC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80234DCC: jr          $ra
    // 0x80234DD0: nop

    return;
    // 0x80234DD0: nop

;}
RECOMP_FUNC void func_802331E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802331E0: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x802331E4: bne         $a0, $at, L_802331F4
    if (ctx->r4 != ctx->r1) {
        // 0x802331E8: lui         $t6, 0x8025
        ctx->r14 = S32(0X8025 << 16);
            goto L_802331F4;
    }
    // 0x802331E8: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x802331EC: jr          $ra
    // 0x802331F0: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
    return;
    // 0x802331F0: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
L_802331F4:
    // 0x802331F4: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x802331F8: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x802331FC: addiu       $v0, $zero, 0xFFF
    ctx->r2 = ADD32(0, 0XFFF);
    // 0x80233200: lw          $t7, 0x2C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X2C);
    // 0x80233204: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80233208: lw          $v1, 0x0($t9)
    ctx->r3 = MEM_W(ctx->r25, 0X0);
    // 0x8023320C: beq         $v1, $zero, L_8023321C
    if (ctx->r3 == 0) {
        // 0x80233210: nop
    
            goto L_8023321C;
    }
    // 0x80233210: nop

    // 0x80233214: jr          $ra
    // 0x80233218: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
    return;
    // 0x80233218: lhu         $v0, 0x20($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X20);
L_8023321C:
    // 0x8023321C: jr          $ra
    // 0x80233220: nop

    return;
    // 0x80233220: nop

;}
RECOMP_FUNC void func_80216BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80216BD8: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x80216BDC: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x80216BE0: lw          $t6, -0x18F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X18F0);
    // 0x80216BE4: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80216BE8: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80216BEC: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80216BF0: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80216BF4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80216BF8: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80216BFC: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80216C00: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80216C04: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80216C08: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80216C0C: sdc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X58, ctx->r29);
    // 0x80216C10: sdc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X50, ctx->r29);
    // 0x80216C14: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
    // 0x80216C18: swc1        $f14, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f14.u32l;
    // 0x80216C1C: sw          $a2, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r6;
    // 0x80216C20: sw          $a3, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r7;
    // 0x80216C24: lhu         $t9, 0x0($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X0);
    // 0x80216C28: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x80216C2C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80216C30: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80216C34: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x80216C38: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80216C3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80216C40: lw          $s7, 0x8($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X8);
    // 0x80216C44: lwc1        $f6, 0x20($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80216C48: lbu         $fp, 0x4($s7)
    ctx->r30 = MEM_BU(ctx->r23, 0X4);
    // 0x80216C4C: sw          $v0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r2;
    // 0x80216C50: jal         0x80228CE0
    // 0x80216C54: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    func_80228CE0(rdram, ctx);
        goto after_0;
    // 0x80216C54: div.s       $f22, $f4, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    after_0:
    // 0x80216C58: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80216C5C: blez        $fp, L_80216E98
    if (SIGNED(ctx->r30) <= 0) {
        // 0x80216C60: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80216E98;
    }
    // 0x80216C60: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216C64: lwc1        $f20, 0x108($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80216C68: addiu       $s6, $sp, 0x9C
    ctx->r22 = ADD32(ctx->r29, 0X9C);
    // 0x80216C6C: lw          $v0, 0x104($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X104);
    // 0x80216C70: lw          $t3, 0x1C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X1C);
L_80216C74:
    // 0x80216C74: sll         $s5, $s3, 3
    ctx->r21 = S32(ctx->r19 << 3);
    // 0x80216C78: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80216C7C: lw          $t2, 0x0($s7)
    ctx->r10 = MEM_W(ctx->r23, 0X0);
    // 0x80216C80: addu        $s5, $s5, $s3
    ctx->r21 = ADD32(ctx->r21, ctx->r19);
    // 0x80216C84: sllv        $t5, $t4, $s3
    ctx->r13 = S32(ctx->r12 << (ctx->r19 & 31));
    // 0x80216C88: sll         $s5, $s5, 2
    ctx->r21 = S32(ctx->r21 << 2);
    // 0x80216C8C: and         $t6, $t3, $t5
    ctx->r14 = ctx->r11 & ctx->r13;
    // 0x80216C90: beq         $t6, $zero, L_80216CA4
    if (ctx->r14 == 0) {
        // 0x80216C94: addu        $s4, $t2, $s5
        ctx->r20 = ADD32(ctx->r10, ctx->r21);
            goto L_80216CA4;
    }
    // 0x80216C94: addu        $s4, $t2, $s5
    ctx->r20 = ADD32(ctx->r10, ctx->r21);
    // 0x80216C98: slti        $at, $s3, 0x20
    ctx->r1 = SIGNED(ctx->r19) < 0X20 ? 1 : 0;
    // 0x80216C9C: bne         $at, $zero, L_80216CB8
    if (ctx->r1 != 0) {
        // 0x80216CA0: nop
    
            goto L_80216CB8;
    }
    // 0x80216CA0: nop

L_80216CA4:
    // 0x80216CA4: lbu         $t8, 0x7($s4)
    ctx->r24 = MEM_BU(ctx->r20, 0X7);
    // 0x80216CA8: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80216CAC: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80216CB0: beq         $t9, $zero, L_80216CC0
    if (ctx->r25 == 0) {
        // 0x80216CB4: nop
    
            goto L_80216CC0;
    }
    // 0x80216CB4: nop

L_80216CB8:
    // 0x80216CB8: b           L_80216CC0
    // 0x80216CBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80216CC0;
    // 0x80216CBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80216CC0:
    // 0x80216CC0: bne         $s0, $zero, L_80216CD8
    if (ctx->r16 != 0) {
        // 0x80216CC4: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80216CD8;
    }
    // 0x80216CC4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216CC8: lbu         $t7, 0x7($s4)
    ctx->r15 = MEM_BU(ctx->r20, 0X7);
    // 0x80216CCC: andi        $t0, $t7, 0x2
    ctx->r8 = ctx->r15 & 0X2;
    // 0x80216CD0: bnel        $t0, $zero, L_80216E80
    if (ctx->r8 != 0) {
        // 0x80216CD4: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80216E80;
    }
    goto skip_0;
    // 0x80216CD4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
L_80216CD8:
    // 0x80216CD8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x80216CDC: sll         $t2, $s3, 6
    ctx->r10 = S32(ctx->r19 << 6);
    // 0x80216CE0: or          $t6, $sp, $zero
    ctx->r14 = ctx->r29 | 0;
    // 0x80216CE4: addu        $t4, $t1, $t2
    ctx->r12 = ADD32(ctx->r9, ctx->r10);
    // 0x80216CE8: addiu       $t5, $t4, 0x3C
    ctx->r13 = ADD32(ctx->r12, 0X3C);
L_80216CEC:
    // 0x80216CEC: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x80216CF0: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x80216CF4: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80216CF8: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80216CFC: lw          $at, -0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X8);
    // 0x80216D00: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80216D04: lw          $at, -0x4($t4)
    ctx->r1 = MEM_W(ctx->r12, -0X4);
    // 0x80216D08: bne         $t4, $t5, L_80216CEC
    if (ctx->r12 != ctx->r13) {
        // 0x80216D0C: sw          $at, 0x4($t6)
        MEM_W(0X4, ctx->r14) = ctx->r1;
            goto L_80216CEC;
    }
    // 0x80216D0C: sw          $at, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r1;
    // 0x80216D10: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x80216D14: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80216D18: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x80216D1C: jal         0x80228F38
    // 0x80216D20: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    func_80228F38(rdram, ctx);
        goto after_1;
    // 0x80216D20: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_1:
    // 0x80216D24: bne         $s3, $zero, L_80216D78
    if (ctx->r19 != 0) {
        // 0x80216D28: lwc1        $f10, 0xCC($sp)
        ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
            goto L_80216D78;
    }
    // 0x80216D28: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80216D2C: lw          $t8, 0xE0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XE0);
    // 0x80216D30: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80216D34: lwc1        $f8, 0x20($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X20);
    // 0x80216D38: div.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80216D3C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80216D40: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80216D44: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80216D48: jal         0x8022A210
    // 0x80216D4C: nop

    func_8022A210(rdram, ctx);
        goto after_2;
    // 0x80216D4C: nop

    after_2:
    // 0x80216D50: lwc1        $f10, 0xCC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80216D54: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80216D58: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80216D5C: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80216D60: div.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80216D64: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x80216D68: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80216D6C: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x80216D70: b           L_80216D9C
    // 0x80216D74: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
        goto L_80216D9C;
    // 0x80216D74: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
L_80216D78:
    // 0x80216D78: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80216D7C: lwc1        $f18, 0xD0($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80216D80: lwc1        $f6, 0xD4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x80216D84: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80216D88: nop

    // 0x80216D8C: mul.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80216D90: swc1        $f16, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f16.u32l;
    // 0x80216D94: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x80216D98: swc1        $f8, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f8.u32l;
L_80216D9C:
    // 0x80216D9C: jal         0x80228D0C
    // 0x80216DA0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_80228D0C(rdram, ctx);
        goto after_3;
    // 0x80216DA0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_3:
    // 0x80216DA4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80216DA8: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x80216DAC: beq         $s0, $zero, L_80216E04
    if (ctx->r16 == 0) {
        // 0x80216DB0: sra         $s2, $t9, 16
        ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80216E04;
    }
    // 0x80216DB0: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80216DB4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80216DB8: addiu       $v0, $v0, -0x3C6C
    ctx->r2 = ADD32(ctx->r2, -0X3C6C);
    // 0x80216DBC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80216DC0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80216DC4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80216DC8: sll         $t2, $s3, 24
    ctx->r10 = S32(ctx->r19 << 24);
    // 0x80216DCC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80216DD0: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x80216DD4: jal         0x80228CF0
    // 0x80216DD8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    func_80228CF0(rdram, ctx);
        goto after_4;
    // 0x80216DD8: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_4:
    // 0x80216DDC: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80216DE0: lwc1        $f14, 0xFC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x80216DE4: lw          $a2, 0x100($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X100);
    // 0x80216DE8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80216DEC: jal         0x80216534
    // 0x80216DF0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    func_80216534(rdram, ctx);
        goto after_5;
    // 0x80216DF0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_5:
    // 0x80216DF4: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80216DF8: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80216DFC: b           L_80216E08
    // 0x80216E00: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
        goto L_80216E08;
    // 0x80216E00: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_80216E04:
    // 0x80216E04: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80216E08:
    // 0x80216E08: bltz        $v1, L_80216E18
    if (SIGNED(ctx->r3) < 0) {
        // 0x80216E0C: addiu       $t4, $s3, 0x1
        ctx->r12 = ADD32(ctx->r19, 0X1);
            goto L_80216E18;
    }
    // 0x80216E0C: addiu       $t4, $s3, 0x1
    ctx->r12 = ADD32(ctx->r19, 0X1);
    // 0x80216E10: b           L_80216EC4
    // 0x80216E14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80216EC4;
    // 0x80216E14: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80216E18:
    // 0x80216E18: bnel        $t4, $fp, L_80216E2C
    if (ctx->r12 != ctx->r30) {
        // 0x80216E1C: lw          $t8, 0x0($s7)
        ctx->r24 = MEM_W(ctx->r23, 0X0);
            goto L_80216E2C;
    }
    goto skip_1;
    // 0x80216E1C: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
    skip_1:
    // 0x80216E20: b           L_80216E98
    // 0x80216E24: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80216E98;
    // 0x80216E24: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80216E28: lw          $t8, 0x0($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X0);
L_80216E2C:
    // 0x80216E2C: lbu         $t6, 0x6($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X6);
    // 0x80216E30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80216E34: addu        $t9, $t8, $s5
    ctx->r25 = ADD32(ctx->r24, ctx->r21);
    // 0x80216E38: lbu         $t7, 0x2A($t9)
    ctx->r15 = MEM_BU(ctx->r25, 0X2A);
    // 0x80216E3C: subu        $s1, $t6, $t7
    ctx->r17 = SUB32(ctx->r14, ctx->r15);
    // 0x80216E40: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80216E44: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80216E48: bltzl       $s1, L_80216E7C
    if (SIGNED(ctx->r17) < 0) {
        // 0x80216E4C: lw          $v0, 0x104($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X104);
            goto L_80216E7C;
    }
    goto skip_2;
    // 0x80216E4C: lw          $v0, 0x104($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X104);
    skip_2:
L_80216E50:
    // 0x80216E50: jal         0x80228D9C
    // 0x80216E54: nop

    func_80228D9C(rdram, ctx);
        goto after_6;
    // 0x80216E54: nop

    after_6:
    // 0x80216E58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80216E5C: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80216E60: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80216E64: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80216E68: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x80216E6C: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80216E70: beq         $at, $zero, L_80216E50
    if (ctx->r1 == 0) {
        // 0x80216E74: sra         $s2, $t2, 16
        ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
            goto L_80216E50;
    }
    // 0x80216E74: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80216E78: lw          $v0, 0x104($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X104);
L_80216E7C:
    // 0x80216E7C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_80216E80:
    // 0x80216E80: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80216E84: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80216E88: slt         $at, $s3, $fp
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x80216E8C: bnel        $at, $zero, L_80216C74
    if (ctx->r1 != 0) {
        // 0x80216E90: lw          $t3, 0x1C($v0)
        ctx->r11 = MEM_W(ctx->r2, 0X1C);
            goto L_80216C74;
    }
    goto skip_3;
    // 0x80216E90: lw          $t3, 0x1C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X1C);
    skip_3:
    // 0x80216E94: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80216E98:
    // 0x80216E98: blezl       $s2, L_80216EC4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80216E9C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80216EC4;
    }
    goto skip_4;
    // 0x80216E9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_4:
L_80216EA0:
    // 0x80216EA0: jal         0x80228D9C
    // 0x80216EA4: nop

    func_80228D9C(rdram, ctx);
        goto after_7;
    // 0x80216EA4: nop

    after_7:
    // 0x80216EA8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80216EAC: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80216EB0: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80216EB4: slt         $at, $s3, $s2
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80216EB8: bne         $at, $zero, L_80216EA0
    if (ctx->r1 != 0) {
        // 0x80216EBC: nop
    
            goto L_80216EA0;
    }
    // 0x80216EBC: nop

    // 0x80216EC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80216EC4:
    // 0x80216EC4: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80216EC8: ldc1        $f20, 0x50($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X50);
    // 0x80216ECC: ldc1        $f22, 0x58($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X58);
    // 0x80216ED0: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80216ED4: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80216ED8: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80216EDC: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80216EE0: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80216EE4: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80216EE8: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80216EEC: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x80216EF0: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80216EF4: jr          $ra
    // 0x80216EF8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x80216EF8: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_8023EF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EF2C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8023EF30: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8023EF34: addiu       $t6, $t6, 0x5E70
    ctx->r14 = ADD32(ctx->r14, 0X5E70);
    // 0x8023EF38: sw          $t6, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r14;
    // 0x8023EF3C: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023EF40:
    // 0x8023EF40: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8023EF44: lw          $t9, 0x0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X0);
    // 0x8023EF48: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023EF4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8023EF50: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8023EF54: sw          $zero, 0x5E70($at)
    MEM_W(0X5E70, ctx->r1) = 0;
    // 0x8023EF58: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8023EF5C: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8023EF60: bne         $at, $zero, L_8023EF40
    if (ctx->r1 != 0) {
        // 0x8023EF64: sw          $t0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r8;
            goto L_8023EF40;
    }
    // 0x8023EF64: sw          $t0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r8;
    // 0x8023EF68: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8023EF6C: lbu         $t9, 0x5EB1($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X5EB1);
    // 0x8023EF70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8023EF74: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023EF78: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8023EF7C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8023EF80: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8023EF84: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8023EF88: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8023EF8C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8023EF90: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8023EF94: sw          $t1, 0x5EAC($at)
    MEM_W(0X5EAC, ctx->r1) = ctx->r9;
    // 0x8023EF98: sb          $t2, 0x4($sp)
    MEM_B(0X4, ctx->r29) = ctx->r10;
    // 0x8023EF9C: sb          $t3, 0x5($sp)
    MEM_B(0X5, ctx->r29) = ctx->r11;
    // 0x8023EFA0: sb          $t4, 0x6($sp)
    MEM_B(0X6, ctx->r29) = ctx->r12;
    // 0x8023EFA4: sb          $t5, 0x7($sp)
    MEM_B(0X7, ctx->r29) = ctx->r13;
    // 0x8023EFA8: sh          $t6, 0x8($sp)
    MEM_H(0X8, ctx->r29) = ctx->r14;
    // 0x8023EFAC: sb          $t7, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r15;
    // 0x8023EFB0: sb          $t8, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r24;
    // 0x8023EFB4: blez        $t9, L_8023F004
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8023EFB8: sw          $zero, 0x0($sp)
        MEM_W(0X0, ctx->r29) = 0;
            goto L_8023F004;
    }
    // 0x8023EFB8: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8023EFBC:
    // 0x8023EFBC: addiu       $t1, $sp, 0x4
    ctx->r9 = ADD32(ctx->r29, 0X4);
    // 0x8023EFC0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8023EFC4: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8023EFC8: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8023EFCC: swl         $at, 0x0($t0)
    do_swl(rdram, 0X0, ctx->r8, ctx->r1);
    // 0x8023EFD0: swr         $at, 0x3($t0)
    do_swr(rdram, 0X3, ctx->r8, ctx->r1);
    // 0x8023EFD4: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x8023EFD8: swl         $t3, 0x4($t0)
    do_swl(rdram, 0X4, ctx->r8, ctx->r11);
    // 0x8023EFDC: swr         $t3, 0x7($t0)
    do_swr(rdram, 0X7, ctx->r8, ctx->r11);
    // 0x8023EFE0: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8023EFE4: lbu         $t8, 0x5EB1($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5EB1);
    // 0x8023EFE8: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8023EFEC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8023EFF0: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8023EFF4: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x8023EFF8: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8023EFFC: bne         $at, $zero, L_8023EFBC
    if (ctx->r1 != 0) {
        // 0x8023F000: sw          $t5, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r13;
            goto L_8023EFBC;
    }
    // 0x8023F000: sw          $t5, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r13;
L_8023F004:
    // 0x8023F004: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8023F008: addiu       $t9, $zero, 0xFE
    ctx->r25 = ADD32(0, 0XFE);
    // 0x8023F00C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8023F010: jr          $ra
    // 0x8023F014: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    return;
    // 0x8023F014: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
;}
RECOMP_FUNC void func_8021BA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BA1C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8021BA20: lhu         $t6, 0xBE6($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBE6);
    // 0x8021BA24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8021BA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BA2C: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021BA30: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021BA34: beq         $at, $zero, L_8021BA54
    if (ctx->r1 == 0) {
        // 0x8021BA38: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8021BA54;
    }
    // 0x8021BA38: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8021BA3C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021BA40: addiu       $a0, $a0, 0x33D8
    ctx->r4 = ADD32(ctx->r4, 0X33D8);
    // 0x8021BA44: jal         0x80231A24
    // 0x8021BA48: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021BA48: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021BA4C: b           L_8021BA84
    // 0x8021BA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BA84;
    // 0x8021BA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BA54:
    // 0x8021BA54: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021BA58: lw          $t7, -0x3C20($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C20);
    // 0x8021BA5C: sll         $t8, $a2, 3
    ctx->r24 = S32(ctx->r6 << 3);
    // 0x8021BA60: addu        $t8, $t8, $a2
    ctx->r24 = ADD32(ctx->r24, ctx->r6);
    // 0x8021BA64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8021BA68: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8021BA6C: lbu         $t0, 0x8($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X8);
    // 0x8021BA70: nor         $t1, $a3, $zero
    ctx->r9 = ~(ctx->r7 | 0);
    // 0x8021BA74: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021BA78: jal         0x8021B838
    // 0x8021BA7C: and         $a1, $t0, $t1
    ctx->r5 = ctx->r8 & ctx->r9;
    func_8021B838(rdram, ctx);
        goto after_1;
    // 0x8021BA7C: and         $a1, $t0, $t1
    ctx->r5 = ctx->r8 & ctx->r9;
    after_1:
    // 0x8021BA80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BA84:
    // 0x8021BA84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8021BA88: jr          $ra
    // 0x8021BA8C: nop

    return;
    // 0x8021BA8C: nop

;}
RECOMP_FUNC void func_802086CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802086CC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802086D0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802086D4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x802086D8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x802086DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802086E0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802086E4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802086E8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802086EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802086F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802086F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802086F8: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x802086FC: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80208700: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
    // 0x80208704: lbu         $v0, 0x10($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X10);
    // 0x80208708: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x8020870C: or          $fp, $a2, $zero
    ctx->r30 = ctx->r6 | 0;
    // 0x80208710: blez        $v0, L_802088B0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80208714: lw          $s5, 0x78($sp)
        ctx->r21 = MEM_W(ctx->r29, 0X78);
            goto L_802088B0;
    }
    // 0x80208714: lw          $s5, 0x78($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X78);
L_80208718:
    // 0x80208718: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8020871C: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80208720: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x80208724: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80208728: sw          $zero, 0x60($sp)
    MEM_W(0X60, ctx->r29) = 0;
    // 0x8020872C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80208730: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x80208734: lbu         $v1, 0x4($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X4);
    // 0x80208738: blezl       $v1, L_802088A0
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8020873C: lw          $t0, 0x64($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X64);
            goto L_802088A0;
    }
    goto skip_0;
    // 0x8020873C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    skip_0:
    // 0x80208740: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_80208744:
    // 0x80208744: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x80208748: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8020874C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80208750: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80208754: andi        $s7, $fp, 0x200
    ctx->r23 = ctx->r30 & 0X200;
    // 0x80208758: addu        $s1, $t3, $t4
    ctx->r17 = ADD32(ctx->r11, ctx->r12);
    // 0x8020875C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80208760: blezl       $v0, L_80208878
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80208764: lw          $t5, 0x60($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X60);
            goto L_80208878;
    }
    goto skip_1;
    // 0x80208764: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    skip_1:
    // 0x80208768: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
L_8020876C:
    // 0x8020876C: sll         $t6, $s6, 4
    ctx->r14 = S32(ctx->r22 << 4);
    // 0x80208770: addiu       $at, $zero, 0xFFF
    ctx->r1 = ADD32(0, 0XFFF);
    // 0x80208774: addu        $s3, $t5, $t6
    ctx->r19 = ADD32(ctx->r13, ctx->r14);
    // 0x80208778: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x8020877C: andi        $t7, $s0, 0xFFF
    ctx->r15 = ctx->r16 & 0XFFF;
    // 0x80208780: beq         $s7, $zero, L_802087E4
    if (ctx->r23 == 0) {
        // 0x80208784: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_802087E4;
    }
    // 0x80208784: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80208788: beq         $t7, $at, L_8020885C
    if (ctx->r15 == ctx->r1) {
        // 0x8020878C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8020885C;
    }
    // 0x8020878C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80208790: jal         0x802331E0
    // 0x80208794: andi        $s2, $s4, 0x1
    ctx->r18 = ctx->r20 & 0X1;
    func_802331E0(rdram, ctx);
        goto after_0;
    // 0x80208794: andi        $s2, $s4, 0x1
    ctx->r18 = ctx->r20 & 0X1;
    after_0:
    // 0x80208798: beq         $s2, $zero, L_802087B0
    if (ctx->r18 == 0) {
        // 0x8020879C: andi        $t9, $s4, 0x2
        ctx->r25 = ctx->r20 & 0X2;
            goto L_802087B0;
    }
    // 0x8020879C: andi        $t9, $s4, 0x2
    ctx->r25 = ctx->r20 & 0X2;
    // 0x802087A0: beq         $v0, $s5, L_802087B0
    if (ctx->r2 == ctx->r21) {
        // 0x802087A4: nop
    
            goto L_802087B0;
    }
    // 0x802087A4: nop

    // 0x802087A8: b           L_8020885C
    // 0x802087AC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020885C;
    // 0x802087AC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_802087B0:
    // 0x802087B0: beq         $t9, $zero, L_802087C8
    if (ctx->r25 == 0) {
        // 0x802087B4: slt         $at, $s5, $v0
        ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_802087C8;
    }
    // 0x802087B4: slt         $at, $s5, $v0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802087B8: beql        $at, $zero, L_802087CC
    if (ctx->r1 == 0) {
        // 0x802087BC: andi        $t8, $s4, 0x4
        ctx->r24 = ctx->r20 & 0X4;
            goto L_802087CC;
    }
    goto skip_2;
    // 0x802087BC: andi        $t8, $s4, 0x4
    ctx->r24 = ctx->r20 & 0X4;
    skip_2:
    // 0x802087C0: b           L_8020885C
    // 0x802087C4: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020885C;
    // 0x802087C4: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_802087C8:
    // 0x802087C8: andi        $t8, $s4, 0x4
    ctx->r24 = ctx->r20 & 0X4;
L_802087CC:
    // 0x802087CC: beq         $t8, $zero, L_802087E4
    if (ctx->r24 == 0) {
        // 0x802087D0: slt         $at, $v0, $s5
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_802087E4;
    }
    // 0x802087D0: slt         $at, $v0, $s5
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x802087D4: beql        $at, $zero, L_802087E8
    if (ctx->r1 == 0) {
        // 0x802087D8: andi        $t0, $fp, 0x400
        ctx->r8 = ctx->r30 & 0X400;
            goto L_802087E8;
    }
    goto skip_3;
    // 0x802087D8: andi        $t0, $fp, 0x400
    ctx->r8 = ctx->r30 & 0X400;
    skip_3:
    // 0x802087DC: b           L_8020885C
    // 0x802087E0: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020885C;
    // 0x802087E0: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_802087E4:
    // 0x802087E4: andi        $t0, $fp, 0x400
    ctx->r8 = ctx->r30 & 0X400;
L_802087E8:
    // 0x802087E8: beq         $t0, $zero, L_8020883C
    if (ctx->r8 == 0) {
        // 0x802087EC: andi        $t1, $s4, 0x1
        ctx->r9 = ctx->r20 & 0X1;
            goto L_8020883C;
    }
    // 0x802087EC: andi        $t1, $s4, 0x1
    ctx->r9 = ctx->r20 & 0X1;
    // 0x802087F0: beq         $t1, $zero, L_80208808
    if (ctx->r9 == 0) {
        // 0x802087F4: andi        $t2, $s4, 0x2
        ctx->r10 = ctx->r20 & 0X2;
            goto L_80208808;
    }
    // 0x802087F4: andi        $t2, $s4, 0x2
    ctx->r10 = ctx->r20 & 0X2;
    // 0x802087F8: beq         $s0, $s5, L_80208808
    if (ctx->r16 == ctx->r21) {
        // 0x802087FC: nop
    
            goto L_80208808;
    }
    // 0x802087FC: nop

    // 0x80208800: b           L_8020885C
    // 0x80208804: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020885C;
    // 0x80208804: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_80208808:
    // 0x80208808: beq         $t2, $zero, L_80208820
    if (ctx->r10 == 0) {
        // 0x8020880C: slt         $at, $s5, $s0
        ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80208820;
    }
    // 0x8020880C: slt         $at, $s5, $s0
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80208810: beql        $at, $zero, L_80208824
    if (ctx->r1 == 0) {
        // 0x80208814: andi        $t3, $s4, 0x4
        ctx->r11 = ctx->r20 & 0X4;
            goto L_80208824;
    }
    goto skip_4;
    // 0x80208814: andi        $t3, $s4, 0x4
    ctx->r11 = ctx->r20 & 0X4;
    skip_4:
    // 0x80208818: b           L_8020885C
    // 0x8020881C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020885C;
    // 0x8020881C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_80208820:
    // 0x80208820: andi        $t3, $s4, 0x4
    ctx->r11 = ctx->r20 & 0X4;
L_80208824:
    // 0x80208824: beq         $t3, $zero, L_8020883C
    if (ctx->r11 == 0) {
        // 0x80208828: slt         $at, $s0, $s5
        ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
            goto L_8020883C;
    }
    // 0x80208828: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8020882C: beql        $at, $zero, L_80208840
    if (ctx->r1 == 0) {
        // 0x80208830: lw          $a0, 0x6C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X6C);
            goto L_80208840;
    }
    goto skip_5;
    // 0x80208830: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    skip_5:
    // 0x80208834: b           L_8020885C
    // 0x80208838: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
        goto L_8020885C;
    // 0x80208838: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_8020883C:
    // 0x8020883C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
L_80208840:
    // 0x80208840: jal         0x80208650
    // 0x80208844: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    func_80208650(rdram, ctx);
        goto after_1;
    // 0x80208844: lw          $a1, 0xC($s3)
    ctx->r5 = MEM_W(ctx->r19, 0XC);
    after_1:
    // 0x80208848: beql        $v0, $zero, L_8020885C
    if (ctx->r2 == 0) {
        // 0x8020884C: lbu         $v0, 0x4($s1)
        ctx->r2 = MEM_BU(ctx->r17, 0X4);
            goto L_8020885C;
    }
    goto skip_6;
    // 0x8020884C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    skip_6:
    // 0x80208850: b           L_802088B4
    // 0x80208854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802088B4;
    // 0x80208854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80208858: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
L_8020885C:
    // 0x8020885C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80208860: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80208864: bnel        $at, $zero, L_8020876C
    if (ctx->r1 != 0) {
        // 0x80208868: lw          $t5, 0x0($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X0);
            goto L_8020876C;
    }
    goto skip_7;
    // 0x80208868: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    skip_7:
    // 0x8020886C: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80208870: lbu         $v1, 0x4($t4)
    ctx->r3 = MEM_BU(ctx->r12, 0X4);
    // 0x80208874: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
L_80208878:
    // 0x80208878: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8020887C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80208880: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80208884: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80208888: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8020888C: bne         $at, $zero, L_80208744
    if (ctx->r1 != 0) {
        // 0x80208890: sw          $t6, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r14;
            goto L_80208744;
    }
    // 0x80208890: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x80208894: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x80208898: lbu         $v0, 0x10($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X10);
    // 0x8020889C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
L_802088A0:
    // 0x802088A0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x802088A4: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802088A8: bne         $at, $zero, L_80208718
    if (ctx->r1 != 0) {
        // 0x802088AC: sw          $t1, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r9;
            goto L_80208718;
    }
    // 0x802088AC: sw          $t1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r9;
L_802088B0:
    // 0x802088B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802088B4:
    // 0x802088B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802088B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802088BC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802088C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802088C4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802088C8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802088CC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802088D0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802088D4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x802088D8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x802088DC: jr          $ra
    // 0x802088E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x802088E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8021A468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021A468: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8021A46C: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8021A470: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x8021A474: nop

    // 0x8021A478: bc1fl       L_8021A48C
    if (!c1cs) {
        // 0x8021A47C: lwc1        $f6, 0xC($a3)
        ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
            goto L_8021A48C;
    }
    goto skip_0;
    // 0x8021A47C: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
    skip_0:
    // 0x8021A480: jr          $ra
    // 0x8021A484: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A484: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A488: lwc1        $f6, 0xC($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0XC);
L_8021A48C:
    // 0x8021A48C: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8021A490: nop

    // 0x8021A494: bc1fl       L_8021A4A8
    if (!c1cs) {
        // 0x8021A498: lwc1        $f8, 0x4($a3)
        ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
            goto L_8021A4A8;
    }
    goto skip_1;
    // 0x8021A498: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
    skip_1:
    // 0x8021A49C: jr          $ra
    // 0x8021A4A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A4A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A4A4: lwc1        $f8, 0x4($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X4);
L_8021A4A8:
    // 0x8021A4A8: c.lt.s      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.fl < ctx->f8.fl;
    // 0x8021A4AC: nop

    // 0x8021A4B0: bc1fl       L_8021A4C4
    if (!c1cs) {
        // 0x8021A4B4: lwc1        $f10, 0x10($a3)
        ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
            goto L_8021A4C4;
    }
    goto skip_2;
    // 0x8021A4B4: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
    skip_2:
    // 0x8021A4B8: jr          $ra
    // 0x8021A4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A4C0: lwc1        $f10, 0x10($a3)
    ctx->f10.u32l = MEM_W(ctx->r7, 0X10);
L_8021A4C4:
    // 0x8021A4C4: lwc1        $f16, 0x8($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8021A4C8: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8021A4CC: nop

    // 0x8021A4D0: bc1fl       L_8021A4E4
    if (!c1cs) {
        // 0x8021A4D4: lwc1        $f18, 0x8($a3)
        ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
            goto L_8021A4E4;
    }
    goto skip_3;
    // 0x8021A4D4: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
    skip_3:
    // 0x8021A4D8: jr          $ra
    // 0x8021A4DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A4DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A4E0: lwc1        $f18, 0x8($a3)
    ctx->f18.u32l = MEM_W(ctx->r7, 0X8);
L_8021A4E4:
    // 0x8021A4E4: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8021A4E8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8021A4EC: nop

    // 0x8021A4F0: bc1fl       L_8021A504
    if (!c1cs) {
        // 0x8021A4F4: lwc1        $f4, 0x14($a3)
        ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
            goto L_8021A504;
    }
    goto skip_4;
    // 0x8021A4F4: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    skip_4:
    // 0x8021A4F8: jr          $ra
    // 0x8021A4FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A4FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021A500: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
L_8021A504:
    // 0x8021A504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8021A508: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8021A50C: nop

    // 0x8021A510: bc1f        L_8021A520
    if (!c1cs) {
        // 0x8021A514: nop
    
            goto L_8021A520;
    }
    // 0x8021A514: nop

    // 0x8021A518: jr          $ra
    // 0x8021A51C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8021A51C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8021A520:
    // 0x8021A520: jr          $ra
    // 0x8021A524: nop

    return;
    // 0x8021A524: nop

;}
RECOMP_FUNC void func_8021BAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021BAE0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8021BAE4: lhu         $t6, 0xBE6($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0XBE6);
    // 0x8021BAE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8021BAEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021BAF0: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8021BAF4: bne         $at, $zero, L_8021BB14
    if (ctx->r1 != 0) {
        // 0x8021BAF8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8021BB14;
    }
    // 0x8021BAF8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8021BAFC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021BB00: addiu       $a0, $a0, 0x33F4
    ctx->r4 = ADD32(ctx->r4, 0X33F4);
    // 0x8021BB04: jal         0x80231A24
    // 0x8021BB08: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021BB08: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8021BB0C: b           L_8021BB78
    // 0x8021BB10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BB78;
    // 0x8021BB10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BB14:
    // 0x8021BB14: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x8021BB18: lw          $t7, -0x3C20($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C20);
    // 0x8021BB1C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x8021BB20: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8021BB24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8021BB28: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8021BB2C: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x8021BB30: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8021BB34: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x8021BB38: bne         $t9, $zero, L_8021BB58
    if (ctx->r25 != 0) {
        // 0x8021BB3C: nop
    
            goto L_8021BB58;
    }
    // 0x8021BB3C: nop

    // 0x8021BB40: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021BB44: addiu       $a0, $a0, 0x3410
    ctx->r4 = ADD32(ctx->r4, 0X3410);
    // 0x8021BB48: jal         0x80231A24
    // 0x8021BB4C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021BB4C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x8021BB50: b           L_8021BB78
    // 0x8021BB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021BB78;
    // 0x8021BB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BB58:
    // 0x8021BB58: jal         0x8021ACB0
    // 0x8021BB5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8021ACB0(rdram, ctx);
        goto after_2;
    // 0x8021BB5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8021BB60: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x8021BB64: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8021BB68: lw          $t0, -0x3C20($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C20);
    // 0x8021BB6C: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8021BB70: sb          $zero, 0x9($t1)
    MEM_B(0X9, ctx->r9) = 0;
    // 0x8021BB74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021BB78:
    // 0x8021BB78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8021BB7C: jr          $ra
    // 0x8021BB80: nop

    return;
    // 0x8021BB80: nop

;}
RECOMP_FUNC void func_802375F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802375F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802375F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802375F8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x802375FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80237600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237604: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x80237608: bne         $at, $zero, L_80237628
    if (ctx->r1 != 0) {
        // 0x8023760C: lui         $at, 0xA000
        ctx->r1 = S32(0XA000 << 16);
            goto L_80237628;
    }
    // 0x8023760C: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x80237610: sltu        $at, $t6, $at
    ctx->r1 = ctx->r14 < ctx->r1 ? 1 : 0;
    // 0x80237614: beq         $at, $zero, L_80237628
    if (ctx->r1 == 0) {
        // 0x80237618: lui         $at, 0x1FFF
        ctx->r1 = S32(0X1FFF << 16);
            goto L_80237628;
    }
    // 0x80237618: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x8023761C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80237620: b           L_8023765C
    // 0x80237624: and         $v0, $t6, $at
    ctx->r2 = ctx->r14 & ctx->r1;
        goto L_8023765C;
    // 0x80237624: and         $v0, $t6, $at
    ctx->r2 = ctx->r14 & ctx->r1;
L_80237628:
    // 0x80237628: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023762C: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x80237630: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x80237634: bne         $at, $zero, L_80237654
    if (ctx->r1 != 0) {
        // 0x80237638: lui         $at, 0xC000
        ctx->r1 = S32(0XC000 << 16);
            goto L_80237654;
    }
    // 0x80237638: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8023763C: sltu        $at, $t7, $at
    ctx->r1 = ctx->r15 < ctx->r1 ? 1 : 0;
    // 0x80237640: beq         $at, $zero, L_80237654
    if (ctx->r1 == 0) {
        // 0x80237644: lui         $at, 0x1FFF
        ctx->r1 = S32(0X1FFF << 16);
            goto L_80237654;
    }
    // 0x80237644: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80237648: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8023764C: b           L_8023765C
    // 0x80237650: and         $v0, $t7, $at
    ctx->r2 = ctx->r15 & ctx->r1;
        goto L_8023765C;
    // 0x80237650: and         $v0, $t7, $at
    ctx->r2 = ctx->r15 & ctx->r1;
L_80237654:
    // 0x80237654: jal         0x80242240
    // 0x80237658: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80242240(rdram, ctx);
        goto after_0;
    // 0x80237658: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_0:
L_8023765C:
    // 0x8023765C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80237664: jr          $ra
    // 0x80237668: nop

    return;
    // 0x80237668: nop

;}
RECOMP_FUNC void func_80222228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80222228: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8022222C: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x80222230: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222234: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80222238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022223C: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x80222240: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80222244: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80222248: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8022224C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80222250: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80222254: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222258: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8022225C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222260: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80222264: ori         $t9, $t9, 0x1402
    ctx->r25 = ctx->r25 | 0X1402;
    // 0x80222268: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x8022226C: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x80222270: lui         $t5, 0x30
    ctx->r13 = S32(0X30 << 16);
    // 0x80222274: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80222278: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8022227C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222280: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x80222284: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x80222288: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8022228C: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x80222290: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80222294: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80222298: lw          $a0, -0x17A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X17A8);
    // 0x8022229C: jal         0x802375F0
    // 0x802222A0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_802375F0(rdram, ctx);
        goto after_0;
    // 0x802222A0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802222A4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x802222A8: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x802222AC: addiu       $a3, $a3, 0x3B90
    ctx->r7 = ADD32(ctx->r7, 0X3B90);
    // 0x802222B0: sw          $v0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r2;
    // 0x802222B4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x802222B8: lui         $t4, 0xF700
    ctx->r12 = S32(0XF700 << 16);
    // 0x802222BC: lui         $at, 0xF600
    ctx->r1 = S32(0XF600 << 16);
    // 0x802222C0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x802222C4: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x802222C8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802222CC: lbu         $t7, 0x2F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X2F);
    // 0x802222D0: lbu         $t9, 0x2B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2B);
    // 0x802222D4: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x802222D8: lbu         $t7, 0x33($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X33);
    // 0x802222DC: sll         $t5, $t9, 8
    ctx->r13 = S32(ctx->r25 << 8);
    // 0x802222E0: andi        $t9, $t8, 0x7C0
    ctx->r25 = ctx->r24 & 0X7C0;
    // 0x802222E4: andi        $t6, $t5, 0xF800
    ctx->r14 = ctx->r13 & 0XF800;
    // 0x802222E8: or          $t5, $t6, $t9
    ctx->r13 = ctx->r14 | ctx->r25;
    // 0x802222EC: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x802222F0: andi        $t6, $t8, 0x3E
    ctx->r14 = ctx->r24 & 0X3E;
    // 0x802222F4: or          $a1, $t5, $t6
    ctx->r5 = ctx->r13 | ctx->r14;
    // 0x802222F8: ori         $t9, $a1, 0x1
    ctx->r25 = ctx->r5 | 0X1;
    // 0x802222FC: sll         $t7, $t9, 16
    ctx->r15 = S32(ctx->r25 << 16);
    // 0x80222300: or          $t8, $t7, $t9
    ctx->r24 = ctx->r15 | ctx->r25;
    // 0x80222304: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x80222308: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8022230C: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80222310: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x80222314: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x80222318: lh          $t6, 0x439E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X439E);
    // 0x8022231C: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80222320: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80222324: lh          $t6, 0x43A0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X43A0);
    // 0x80222328: andi        $t7, $t9, 0x3FF
    ctx->r15 = ctx->r25 & 0X3FF;
    // 0x8022232C: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x80222330: addiu       $t9, $zero, 0xEF
    ctx->r25 = ADD32(0, 0XEF);
    // 0x80222334: or          $t5, $t8, $at
    ctx->r13 = ctx->r24 | ctx->r1;
    // 0x80222338: subu        $t7, $t9, $t6
    ctx->r15 = SUB32(ctx->r25, ctx->r14);
    // 0x8022233C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80222340: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80222344: or          $t6, $t5, $t9
    ctx->r14 = ctx->r13 | ctx->r25;
    // 0x80222348: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8022234C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80222350: lh          $t7, 0x439C($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X439C);
    // 0x80222354: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80222358: lh          $t9, 0x43A2($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X43A2);
    // 0x8022235C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80222360: addiu       $t6, $zero, 0xF0
    ctx->r14 = ADD32(0, 0XF0);
    // 0x80222364: sll         $t5, $t8, 14
    ctx->r13 = S32(ctx->r24 << 14);
    // 0x80222368: subu        $t7, $t6, $t9
    ctx->r15 = SUB32(ctx->r14, ctx->r25);
    // 0x8022236C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x80222370: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x80222374: or          $t9, $t5, $t6
    ctx->r25 = ctx->r13 | ctx->r14;
    // 0x80222378: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x8022237C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80222380: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80222384: lui         $t6, 0xBA00
    ctx->r14 = S32(0XBA00 << 16);
    // 0x80222388: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8022238C: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80222390: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80222394: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80222398: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8022239C: ori         $t6, $t6, 0x1402
    ctx->r14 = ctx->r14 | 0X1402;
    // 0x802223A0: lui         $t9, 0x10
    ctx->r25 = S32(0X10 << 16);
    // 0x802223A4: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x802223A8: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x802223AC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x802223B0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802223B4: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x802223B8: lui         $t8, 0x1
    ctx->r24 = S32(0X1 << 16);
    // 0x802223BC: ori         $t8, $t8, 0x1
    ctx->r24 = ctx->r24 | 0X1;
    // 0x802223C0: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x802223C4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x802223C8: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x802223CC: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802223D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802223D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802223D8: jr          $ra
    // 0x802223DC: nop

    return;
    // 0x802223DC: nop

;}
RECOMP_FUNC void func_80233D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80233D58: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80233D5C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80233D60: addiu       $v1, $v1, 0x3950
    ctx->r3 = ADD32(ctx->r3, 0X3950);
    // 0x80233D64: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80233D68: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80233D6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80233D70: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80233D74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233D78: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80233D7C: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80233D80: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80233D84: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80233D88: jr          $ra
    // 0x80233D8C: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
    return;
    // 0x80233D8C: sb          $zero, 0x1($t9)
    MEM_B(0X1, ctx->r25) = 0;
;}
RECOMP_FUNC void func_802320B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802320B4: addiu       $sp, $sp, -0x190
    ctx->r29 = ADD32(ctx->r29, -0X190);
    // 0x802320B8: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802320BC: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x802320C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802320C4: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x802320C8: sw          $fp, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r30;
    // 0x802320CC: sw          $s7, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r23;
    // 0x802320D0: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x802320D4: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x802320D8: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x802320DC: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x802320E0: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x802320E4: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x802320E8: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x802320EC: sdc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X68, ctx->r29);
    // 0x802320F0: sdc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X60, ctx->r29);
    // 0x802320F4: sdc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X58, ctx->r29);
    // 0x802320F8: sdc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X50, ctx->r29);
    // 0x802320FC: sdc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X48, ctx->r29);
    // 0x80232100: sdc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X40, ctx->r29);
    // 0x80232104: sw          $a1, 0x194($sp)
    MEM_W(0X194, ctx->r29) = ctx->r5;
    // 0x80232108: sw          $zero, 0x3930($at)
    MEM_W(0X3930, ctx->r1) = 0;
    // 0x8023210C: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80232110: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80232114: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x80232118: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8023211C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80232120: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x80232124: addiu       $a1, $fp, 0x2AC
    ctx->r5 = ADD32(ctx->r30, 0X2AC);
    // 0x80232128: beql        $v0, $zero, L_8023268C
    if (ctx->r2 == 0) {
        // 0x8023212C: lw          $ra, 0x94($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X94);
            goto L_8023268C;
    }
    goto skip_0;
    // 0x8023212C: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    skip_0:
    // 0x80232130: jal         0x80208128
    // 0x80232134: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    func_80208128(rdram, ctx);
        goto after_0;
    // 0x80232134: sw          $v0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r2;
    after_0:
    // 0x80232138: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8023213C: or          $v1, $fp, $zero
    ctx->r3 = ctx->r30 | 0;
    // 0x80232140: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x80232144: lwc1        $f4, 0x1C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x80232148: addiu       $s4, $sp, 0xE8
    ctx->r20 = ADD32(ctx->r29, 0XE8);
    // 0x8023214C: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
    // 0x80232150: swc1        $f4, 0x168($sp)
    MEM_W(0X168, ctx->r29) = ctx->f4.u32l;
    // 0x80232154: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x80232158: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x8023215C: addiu       $s1, $sp, 0xE0
    ctx->r17 = ADD32(ctx->r29, 0XE0);
    // 0x80232160: swc1        $f6, 0x164($sp)
    MEM_W(0X164, ctx->r29) = ctx->f6.u32l;
    // 0x80232164: lwc1        $f8, 0x2AC($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X2AC);
    // 0x80232168: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8023216C: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80232170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232174: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80232178: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8023217C: lwc1        $f10, 0x2B8($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X2B8);
    // 0x80232180: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80232184: sub.s       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80232188: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8023218C: div.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80232190: lwc1        $f6, 0x2B0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X2B0);
    // 0x80232194: sub.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80232198: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8023219C: lwc1        $f8, 0x164($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X164);
    // 0x802321A0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x802321A4: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802321A8: trunc.w.s   $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x802321AC: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x802321B0: nop

    // 0x802321B4: sw          $t4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r12;
    // 0x802321B8: lwc1        $f4, 0x2BC($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X2BC);
    // 0x802321BC: lw          $t7, 0x170($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X170);
    // 0x802321C0: sub.s       $f10, $f4, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x802321C4: div.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x802321C8: trunc.w.s   $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802321CC: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x802321D0: bgez        $a2, L_802321DC
    if (SIGNED(ctx->r6) >= 0) {
        // 0x802321D4: sw          $t6, 0x16C($sp)
        MEM_W(0X16C, ctx->r29) = ctx->r14;
            goto L_802321DC;
    }
    // 0x802321D4: sw          $t6, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r14;
    // 0x802321D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802321DC:
    // 0x802321DC: lbu         $v0, 0x18($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X18);
    // 0x802321E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802321E4: slt         $at, $v0, $a3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x802321E8: beq         $at, $zero, L_802321F4
    if (ctx->r1 == 0) {
        // 0x802321EC: nop
    
            goto L_802321F4;
    }
    // 0x802321EC: nop

    // 0x802321F0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_802321F4:
    // 0x802321F4: bgez        $t7, L_80232200
    if (SIGNED(ctx->r15) >= 0) {
        // 0x802321F8: addiu       $t0, $a3, 0x1
        ctx->r8 = ADD32(ctx->r7, 0X1);
            goto L_80232200;
    }
    // 0x802321F8: addiu       $t0, $a3, 0x1
    ctx->r8 = ADD32(ctx->r7, 0X1);
    // 0x802321FC: sw          $zero, 0x170($sp)
    MEM_W(0X170, ctx->r29) = 0;
L_80232200:
    // 0x80232200: lbu         $v0, 0x19($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X19);
    // 0x80232204: lw          $t8, 0x16C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X16C);
    // 0x80232208: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023220C: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80232210: beql        $at, $zero, L_80232220
    if (ctx->r1 == 0) {
        // 0x80232214: lbu         $v0, 0x2A8($fp)
        ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
            goto L_80232220;
    }
    goto skip_1;
    // 0x80232214: lbu         $v0, 0x2A8($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
    skip_1:
    // 0x80232218: sw          $v0, 0x16C($sp)
    MEM_W(0X16C, ctx->r29) = ctx->r2;
    // 0x8023221C: lbu         $v0, 0x2A8($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
L_80232220:
    // 0x80232220: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80232224: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80232228: blezl       $v0, L_80232308
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023222C: slt         $at, $a3, $a2
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80232308;
    }
    goto skip_2;
    // 0x8023222C: slt         $at, $a3, $a2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    skip_2:
    // 0x80232230: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80232234: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80232238: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8023223C: lwc1        $f20, 0x517C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X517C);
L_80232240:
    // 0x80232240: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80232244: slt         $at, $s7, $t9
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80232248: lwc1        $f2, 0x260($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X260);
    // 0x8023224C: beq         $at, $zero, L_80232260
    if (ctx->r1 == 0) {
        // 0x80232250: lwc1        $f14, 0x264($v1)
        ctx->f14.u32l = MEM_W(ctx->r3, 0X264);
            goto L_80232260;
    }
    // 0x80232250: lwc1        $f14, 0x264($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X264);
    // 0x80232254: lwc1        $f0, 0x26C($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X26C);
    // 0x80232258: b           L_80232268
    // 0x8023225C: lwc1        $f16, 0x270($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X270);
        goto L_80232268;
    // 0x8023225C: lwc1        $f16, 0x270($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X270);
L_80232260:
    // 0x80232260: lwc1        $f0, 0x260($fp)
    ctx->f0.u32l = MEM_W(ctx->r30, 0X260);
    // 0x80232264: lwc1        $f16, 0x264($fp)
    ctx->f16.u32l = MEM_W(ctx->r30, 0X264);
L_80232268:
    // 0x80232268: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8023226C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80232270: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x80232274: bc1fl       L_802322B0
    if (!c1cs) {
        // 0x80232278: sub.s       $f12, $f0, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
            goto L_802322B0;
    }
    goto skip_3;
    // 0x80232278: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    skip_3:
    // 0x8023227C: sub.s       $f10, $f16, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x80232280: swc1        $f20, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f20.u32l;
    // 0x80232284: swc1        $f18, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f18.u32l;
    // 0x80232288: swc1        $f2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f2.u32l;
    // 0x8023228C: c.lt.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl < ctx->f10.fl;
    // 0x80232290: nop

    // 0x80232294: bc1f        L_802322A4
    if (!c1cs) {
        // 0x80232298: nop
    
            goto L_802322A4;
    }
    // 0x80232298: nop

    // 0x8023229C: b           L_802322E8
    // 0x802322A0: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
        goto L_802322E8;
    // 0x802322A0: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
L_802322A4:
    // 0x802322A4: b           L_802322E8
    // 0x802322A8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
        goto L_802322E8;
    // 0x802322A8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x802322AC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_802322B0:
    // 0x802322B0: sub.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x802322B4: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x802322B8: div.s       $f0, $f8, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802322BC: bc1fl       L_802322D0
    if (!c1cs) {
        // 0x802322C0: sb          $zero, 0x0($s1)
        MEM_B(0X0, ctx->r17) = 0;
            goto L_802322D0;
    }
    goto skip_4;
    // 0x802322C0: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    skip_4:
    // 0x802322C4: b           L_802322D0
    // 0x802322C8: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
        goto L_802322D0;
    // 0x802322C8: sb          $a1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r5;
    // 0x802322CC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_802322D0:
    // 0x802322D0: div.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    // 0x802322D4: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
    // 0x802322D8: mul.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x802322DC: sub.s       $f10, $f14, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x802322E0: swc1        $f6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f6.u32l;
    // 0x802322E4: swc1        $f10, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->f10.u32l;
L_802322E8:
    // 0x802322E8: lbu         $v0, 0x2A8($fp)
    ctx->r2 = MEM_BU(ctx->r30, 0X2A8);
    // 0x802322EC: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x802322F0: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x802322F4: slt         $at, $s7, $v0
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802322F8: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x802322FC: bne         $at, $zero, L_80232240
    if (ctx->r1 != 0) {
        // 0x80232300: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80232240;
    }
    // 0x80232300: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80232304: slt         $at, $a3, $a2
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
L_80232308:
    // 0x80232308: bne         $at, $zero, L_80232688
    if (ctx->r1 != 0) {
        // 0x8023230C: sw          $a2, 0x188($sp)
        MEM_W(0X188, ctx->r29) = ctx->r6;
            goto L_80232688;
    }
    // 0x8023230C: sw          $a2, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r6;
    // 0x80232310: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
L_80232314:
    // 0x80232314: lw          $t1, 0x170($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X170);
    // 0x80232318: lw          $t2, 0x16C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X16C);
    // 0x8023231C: sw          $t1, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r9;
    // 0x80232320: slt         $at, $t2, $t1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80232324: bne         $at, $zero, L_80232674
    if (ctx->r1 != 0) {
        // 0x80232328: addiu       $t3, $t2, 0x1
        ctx->r11 = ADD32(ctx->r10, 0X1);
            goto L_80232674;
    }
    // 0x80232328: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8023232C: sw          $t3, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r11;
L_80232330:
    // 0x80232330: lbu         $t4, 0x18($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X18);
    // 0x80232334: lw          $t5, 0x184($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X184);
    // 0x80232338: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
    // 0x8023233C: multu       $t4, $t5
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232340: mflo        $t6
    ctx->r14 = lo;
    // 0x80232344: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80232348: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8023234C: sw          $t8, 0x17C($sp)
    MEM_W(0X17C, ctx->r29) = ctx->r24;
    // 0x80232350: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80232354: lw          $t0, 0x28($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X28);
    // 0x80232358: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8023235C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80232360: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80232364: addu        $s2, $t0, $t9
    ctx->r18 = ADD32(ctx->r8, ctx->r25);
    // 0x80232368: beql        $s2, $zero, L_80232664
    if (ctx->r18 == 0) {
        // 0x8023236C: lw          $t7, 0x184($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X184);
            goto L_80232664;
    }
    goto skip_5;
    // 0x8023236C: lw          $t7, 0x184($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X184);
    skip_5:
    // 0x80232370: lw          $s0, 0x40($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X40);
    // 0x80232374: bnel        $s0, $zero, L_80232388
    if (ctx->r16 != 0) {
        // 0x80232378: lwc1        $f8, 0x18($s0)
        ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
            goto L_80232388;
    }
    goto skip_6;
    // 0x80232378: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    skip_6:
    // 0x8023237C: b           L_80232660
    // 0x80232380: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
        goto L_80232660;
    // 0x80232380: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80232384: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
L_80232388:
    // 0x80232388: addiu       $s1, $fp, 0x188
    ctx->r17 = ADD32(ctx->r30, 0X188);
    // 0x8023238C: addiu       $s3, $fp, 0x218
    ctx->r19 = ADD32(ctx->r30, 0X218);
    // 0x80232390: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    // 0x80232394: lwc1        $f6, 0x1C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80232398: addiu       $a1, $sp, 0x14C
    ctx->r5 = ADD32(ctx->r29, 0X14C);
    // 0x8023239C: addiu       $a2, $sp, 0x148
    ctx->r6 = ADD32(ctx->r29, 0X148);
    // 0x802323A0: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x802323A4: lbu         $v0, 0x48($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X48);
    // 0x802323A8: beq         $v0, $zero, L_802323BC
    if (ctx->r2 == 0) {
        // 0x802323AC: negu        $a0, $v0
        ctx->r4 = SUB32(0, ctx->r2);
            goto L_802323BC;
    }
    // 0x802323AC: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x802323B0: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x802323B4: jal         0x80218C74
    // 0x802323B8: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    func_80218C74(rdram, ctx);
        goto after_1;
    // 0x802323B8: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    after_1:
L_802323BC:
    // 0x802323BC: lwc1        $f4, 0x30($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X30);
    // 0x802323C0: lwc1        $f10, 0x14C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x802323C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802323C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x802323CC: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x802323D0: lwc1        $f4, 0x148($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X148);
    // 0x802323D4: swc1        $f8, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f8.u32l;
    // 0x802323D8: lwc1        $f6, 0x34($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X34);
    // 0x802323DC: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x802323E0: lwc1        $f4, 0x14C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14C);
    // 0x802323E4: swc1        $f10, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f10.u32l;
    // 0x802323E8: lwc1        $f6, 0x20($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X20);
    // 0x802323EC: lwc1        $f8, 0x38($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X38);
    // 0x802323F0: lwc1        $f10, 0x108($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X108);
    // 0x802323F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802323F8: add.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x802323FC: lwc1        $f6, 0x10C($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X10C);
    // 0x80232400: lwc1        $f8, 0x148($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X148);
    // 0x80232404: sub.s       $f20, $f4, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x80232408: lwc1        $f10, 0x110($fp)
    ctx->f10.u32l = MEM_W(ctx->r30, 0X110);
    // 0x8023240C: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x80232410: sub.s       $f22, $f8, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80232414: lwc1        $f6, 0x24($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80232418: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8023241C: sub.s       $f24, $f0, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x80232420: jal         0x802080BC
    // 0x80232424: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_802080BC(rdram, ctx);
        goto after_2;
    // 0x80232424: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80232428: bne         $v0, $zero, L_80232438
    if (ctx->r2 != 0) {
        // 0x8023242C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80232438;
    }
    // 0x8023242C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80232430: b           L_80232660
    // 0x80232434: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
        goto L_80232660;
    // 0x80232434: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
L_80232438:
    // 0x80232438: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8023243C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80232440: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x80232444: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80232448: jal         0x8020802C
    // 0x8023244C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_8020802C(rdram, ctx);
        goto after_3;
    // 0x8023244C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80232450: bne         $v0, $zero, L_80232460
    if (ctx->r2 != 0) {
        // 0x80232454: lui         $at, 0x3F00
        ctx->r1 = S32(0X3F00 << 16);
            goto L_80232460;
    }
    // 0x80232454: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80232458: b           L_80232660
    // 0x8023245C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
        goto L_80232660;
    // 0x8023245C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
L_80232460:
    // 0x80232460: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80232464: lwc1        $f4, 0x168($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X168);
    // 0x80232468: lwc1        $f8, 0x164($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X164);
    // 0x8023246C: lwc1        $f0, 0x30($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X30);
    // 0x80232470: mul.s       $f12, $f16, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80232474: lwc1        $f2, 0x34($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X34);
    // 0x80232478: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    // 0x8023247C: mul.s       $f14, $f16, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80232480: sh          $t3, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r11;
    // 0x80232484: lbu         $t4, 0x2A8($fp)
    ctx->r12 = MEM_BU(ctx->r30, 0X2A8);
    // 0x80232488: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8023248C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80232490: sub.s       $f24, $f0, $f12
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f24.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80232494: add.s       $f26, $f0, $f12
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80232498: add.s       $f28, $f2, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f28.fl = ctx->f2.fl + ctx->f14.fl;
    // 0x8023249C: blez        $t4, L_802325A8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x802324A0: sub.s       $f30, $f2, $f14
        CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f30.fl = ctx->f2.fl - ctx->f14.fl;
            goto L_802325A8;
    }
    // 0x802324A0: sub.s       $f30, $f2, $f14
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f30.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x802324A4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x802324A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802324AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802324B0: addiu       $s3, $sp, 0x110
    ctx->r19 = ADD32(ctx->r29, 0X110);
    // 0x802324B4: addiu       $s4, $sp, 0xE8
    ctx->r20 = ADD32(ctx->r29, 0XE8);
    // 0x802324B8: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
    // 0x802324BC: addiu       $s1, $sp, 0xE0
    ctx->r17 = ADD32(ctx->r29, 0XE0);
    // 0x802324C0: div.s       $f20, $f6, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802324C4: div.s       $f22, $f10, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
L_802324C8:
    // 0x802324C8: swc1        $f26, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f26.u32l;
    // 0x802324CC: swc1        $f28, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f28.u32l;
    // 0x802324D0: swc1        $f30, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f30.u32l;
    // 0x802324D4: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x802324D8: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x802324DC: addiu       $a0, $sp, 0xCE
    ctx->r4 = ADD32(ctx->r29, 0XCE);
    // 0x802324E0: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x802324E4: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x802324E8: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x802324EC: addiu       $a2, $sp, 0xDE
    ctx->r6 = ADD32(ctx->r29, 0XDE);
    // 0x802324F0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x802324F4: lwc1        $f10, 0x0($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X0);
    // 0x802324F8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x802324FC: lbu         $t5, 0x0($s1)
    ctx->r13 = MEM_BU(ctx->r17, 0X0);
    // 0x80232500: swc1        $f22, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f22.u32l;
    // 0x80232504: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x80232508: jal         0x8023288C
    // 0x8023250C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    func_8023288C(rdram, ctx);
        goto after_4;
    // 0x8023250C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    after_4:
    // 0x80232510: lh          $t6, 0xCE($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XCE);
    // 0x80232514: lh          $a2, 0xCC($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XCC);
    // 0x80232518: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8023251C: bltz        $t6, L_8023257C
    if (SIGNED(ctx->r14) < 0) {
        // 0x80232520: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8023257C;
    }
    // 0x80232520: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80232524: jal         0x802326D0
    // 0x80232528: lbu         $a0, 0x48($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X48);
    func_802326D0(rdram, ctx);
        goto after_5;
    // 0x80232528: lbu         $a0, 0x48($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X48);
    after_5:
    // 0x8023252C: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    // 0x80232530: lbu         $a0, 0x48($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X48);
    // 0x80232534: lh          $a1, 0xCE($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XCE);
    // 0x80232538: lh          $a2, 0xCC($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XCC);
    // 0x8023253C: jal         0x802326D0
    // 0x80232540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_802326D0(rdram, ctx);
        goto after_6;
    // 0x80232540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80232544: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x80232548: and         $t7, $s0, $v0
    ctx->r15 = ctx->r16 & ctx->r2;
    // 0x8023254C: or          $s6, $s6, $t7
    ctx->r22 = ctx->r22 | ctx->r15;
    // 0x80232550: andi        $t8, $s6, 0xFFFF
    ctx->r24 = ctx->r22 & 0XFFFF;
    // 0x80232554: or          $s6, $t8, $zero
    ctx->r22 = ctx->r24 | 0;
    // 0x80232558: beq         $t0, $zero, L_80232570
    if (ctx->r8 == 0) {
        // 0x8023255C: or          $v1, $s0, $zero
        ctx->r3 = ctx->r16 | 0;
            goto L_80232570;
    }
    // 0x8023255C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80232560: lhu         $t9, 0xDE($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0XDE);
    // 0x80232564: and         $t1, $t9, $v0
    ctx->r9 = ctx->r25 & ctx->r2;
    // 0x80232568: b           L_8023257C
    // 0x8023256C: sh          $t1, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r9;
        goto L_8023257C;
    // 0x8023256C: sh          $t1, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r9;
L_80232570:
    // 0x80232570: lhu         $t2, 0xDE($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XDE);
    // 0x80232574: and         $t3, $t2, $v1
    ctx->r11 = ctx->r10 & ctx->r3;
    // 0x80232578: sh          $t3, 0xDE($sp)
    MEM_H(0XDE, ctx->r29) = ctx->r11;
L_8023257C:
    // 0x8023257C: lhu         $t4, 0xDE($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0XDE);
    // 0x80232580: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80232584: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80232588: beql        $t4, $zero, L_802325AC
    if (ctx->r12 == 0) {
        // 0x8023258C: lhu         $t6, 0xDE($sp)
        ctx->r14 = MEM_HU(ctx->r29, 0XDE);
            goto L_802325AC;
    }
    goto skip_7;
    // 0x8023258C: lhu         $t6, 0xDE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XDE);
    skip_7:
    // 0x80232590: lbu         $t5, 0x2A8($fp)
    ctx->r13 = MEM_BU(ctx->r30, 0X2A8);
    // 0x80232594: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80232598: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8023259C: slt         $at, $s7, $t5
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x802325A0: bne         $at, $zero, L_802324C8
    if (ctx->r1 != 0) {
        // 0x802325A4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802324C8;
    }
    // 0x802325A4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_802325A8:
    // 0x802325A8: lhu         $t6, 0xDE($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0XDE);
L_802325AC:
    // 0x802325AC: nor         $t7, $s6, $zero
    ctx->r15 = ~(ctx->r22 | 0);
    // 0x802325B0: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x802325B4: and         $v0, $t6, $t7
    ctx->r2 = ctx->r14 & ctx->r15;
    // 0x802325B8: beq         $t6, $zero, L_8023265C
    if (ctx->r14 == 0) {
        // 0x802325BC: andi        $t8, $v0, 0xFFFF
        ctx->r24 = ctx->r2 & 0XFFFF;
            goto L_8023265C;
    }
    // 0x802325BC: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x802325C0: lw          $t0, 0x3930($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3930);
    // 0x802325C4: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x802325C8: addiu       $t1, $t1, 0x3530
    ctx->r9 = ADD32(ctx->r9, 0X3530);
    // 0x802325CC: sll         $t9, $t0, 4
    ctx->r25 = S32(ctx->r8 << 4);
    // 0x802325D0: addu        $s0, $t9, $t1
    ctx->r16 = ADD32(ctx->r25, ctx->r9);
    // 0x802325D4: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x802325D8: lhu         $t2, 0xDE($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0XDE);
    // 0x802325DC: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x802325E0: sh          $t2, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r10;
    // 0x802325E4: lw          $t3, 0x17C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X17C);
    // 0x802325E8: sb          $t3, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r11;
    // 0x802325EC: lwc1        $f6, 0x38($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X38);
    // 0x802325F0: lwc1        $f8, 0x110($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X110);
    // 0x802325F4: lwc1        $f10, 0x30($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X30);
    // 0x802325F8: lwc1        $f4, 0x108($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X108);
    // 0x802325FC: sub.s       $f0, $f8, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80232600: lwc1        $f6, 0x34($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X34);
    // 0x80232604: lwc1        $f8, 0x10C($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X10C);
    // 0x80232608: sub.s       $f2, $f4, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f4.fl - ctx->f10.fl;
    // 0x8023260C: sub.s       $f14, $f8, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80232610: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80232614: nop

    // 0x80232618: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x8023261C: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80232620: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80232624: jal         0x8022AA40
    // 0x80232628: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8022AA40(rdram, ctx);
        goto after_7;
    // 0x80232628: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_7:
    // 0x8023262C: swc1        $f0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f0.u32l;
    // 0x80232630: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80232634: lw          $t4, 0x3930($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3930);
    // 0x80232638: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023263C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80232640: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80232644: sw          $t5, 0x3930($at)
    MEM_W(0X3930, ctx->r1) = ctx->r13;
    // 0x80232648: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x8023264C: bne         $at, $zero, L_8023265C
    if (ctx->r1 != 0) {
        // 0x80232650: addiu       $a0, $a0, 0x5160
        ctx->r4 = ADD32(ctx->r4, 0X5160);
            goto L_8023265C;
    }
    // 0x80232650: addiu       $a0, $a0, 0x5160
    ctx->r4 = ADD32(ctx->r4, 0X5160);
    // 0x80232654: jal         0x80231A24
    // 0x80232658: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80231A24(rdram, ctx);
        goto after_8;
    // 0x80232658: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_8:
L_8023265C:
    // 0x8023265C: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
L_80232660:
    // 0x80232660: lw          $t7, 0x184($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X184);
L_80232664:
    // 0x80232664: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x80232668: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8023266C: bne         $t6, $t8, L_80232330
    if (ctx->r14 != ctx->r24) {
        // 0x80232670: sw          $t8, 0x184($sp)
        MEM_W(0X184, ctx->r29) = ctx->r24;
            goto L_80232330;
    }
    // 0x80232670: sw          $t8, 0x184($sp)
    MEM_W(0X184, ctx->r29) = ctx->r24;
L_80232674:
    // 0x80232674: lw          $t0, 0x188($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X188);
    // 0x80232678: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8023267C: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80232680: bne         $t1, $t9, L_80232314
    if (ctx->r9 != ctx->r25) {
        // 0x80232684: sw          $t9, 0x188($sp)
        MEM_W(0X188, ctx->r29) = ctx->r25;
            goto L_80232314;
    }
    // 0x80232684: sw          $t9, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r25;
L_80232688:
    // 0x80232688: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
L_8023268C:
    // 0x8023268C: ldc1        $f20, 0x40($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X40);
    // 0x80232690: ldc1        $f22, 0x48($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X48);
    // 0x80232694: ldc1        $f24, 0x50($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X50);
    // 0x80232698: ldc1        $f26, 0x58($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X58);
    // 0x8023269C: ldc1        $f28, 0x60($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X60);
    // 0x802326A0: ldc1        $f30, 0x68($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X68);
    // 0x802326A4: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x802326A8: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x802326AC: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x802326B0: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x802326B4: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x802326B8: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x802326BC: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x802326C0: lw          $s7, 0x8C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X8C);
    // 0x802326C4: lw          $fp, 0x90($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X90);
    // 0x802326C8: jr          $ra
    // 0x802326CC: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
    return;
    // 0x802326CC: addiu       $sp, $sp, 0x190
    ctx->r29 = ADD32(ctx->r29, 0X190);
;}
RECOMP_FUNC void func_80237F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237F60: jr          $ra
    // 0x80237F64: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    return;
    // 0x80237F64: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
;}
RECOMP_FUNC void func_80244AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80244AC0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80244AC4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80244AC8: blez        $a1, L_80244B34
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80244ACC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80244B34;
    }
    // 0x80244ACC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80244AD0: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x80244AD4: beq         $a3, $zero, L_80244B00
    if (ctx->r7 == 0) {
        // 0x80244AD8: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80244B00;
    }
    // 0x80244AD8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_80244ADC:
    // 0x80244ADC: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80244AE0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80244AE4: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x80244AE8: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80244AEC: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x80244AF0: bne         $a0, $a2, L_80244ADC
    if (ctx->r4 != ctx->r6) {
        // 0x80244AF4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80244ADC;
    }
    // 0x80244AF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244AF8: beq         $a2, $a1, L_80244B34
    if (ctx->r6 == ctx->r5) {
        // 0x80244AFC: nop
    
            goto L_80244B34;
    }
    // 0x80244AFC: nop

L_80244B00:
    // 0x80244B00: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x80244B04: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80244B08: lbu         $t2, 0x2($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X2);
    // 0x80244B0C: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80244B10: lbu         $t4, 0x3($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X3);
    // 0x80244B14: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80244B18: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80244B1C: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80244B20: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x80244B24: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80244B28: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x80244B2C: bne         $a2, $a1, L_80244B00
    if (ctx->r6 != ctx->r5) {
        // 0x80244B30: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80244B00;
    }
    // 0x80244B30: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80244B34:
    // 0x80244B34: jr          $ra
    // 0x80244B38: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    return;
    // 0x80244B38: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
;}
RECOMP_FUNC void func_8022337C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022337C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80223380: addiu       $a1, $a1, 0x44B0
    ctx->r5 = ADD32(ctx->r5, 0X44B0);
    // 0x80223384: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80223388: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022338C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80223390: bne         $v1, $zero, L_802233AC
    if (ctx->r3 != 0) {
        // 0x80223394: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_802233AC;
    }
    // 0x80223394: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x80223398: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022339C: jal         0x80231A24
    // 0x802233A0: addiu       $a0, $a0, 0x391C
    ctx->r4 = ADD32(ctx->r4, 0X391C);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x802233A0: addiu       $a0, $a0, 0x391C
    ctx->r4 = ADD32(ctx->r4, 0X391C);
    after_0:
    // 0x802233A4: b           L_802233E0
    // 0x802233A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802233E0;
    // 0x802233A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802233AC:
    // 0x802233AC: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x802233B0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802233B4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x802233B8: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
    // 0x802233BC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x802233C0: lw          $v0, 0x4430($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4430);
    // 0x802233C4: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x802233C8: sh          $t9, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r25;
    // 0x802233CC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x802233D0: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x802233D4: jal         0x80220C44
    // 0x802233D8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80220C44(rdram, ctx);
        goto after_1;
    // 0x802233D8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x802233DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802233E0:
    // 0x802233E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802233E4: jr          $ra
    // 0x802233E8: nop

    return;
    // 0x802233E8: nop

;}
RECOMP_FUNC void func_80205FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80205FA0: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80205FA4: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205FA8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205FAC: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205FB0: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x80205FB4: lw          $t8, -0x4160($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4160);
    // 0x80205FB8: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80205FBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80205FC0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80205FC4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80205FC8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80205FCC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80205FD0: sw          $a0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r4;
    // 0x80205FD4: addu        $s0, $t7, $t8
    ctx->r16 = ADD32(ctx->r15, ctx->r24);
    // 0x80205FD8: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80205FDC: beql        $t9, $zero, L_8020663C
    if (ctx->r25 == 0) {
        // 0x80205FE0: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8020663C;
    }
    goto skip_0;
    // 0x80205FE0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80205FE4: jal         0x802073D8
    // 0x80205FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_802073D8(rdram, ctx);
        goto after_0;
    // 0x80205FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80205FEC: lw          $v0, 0x2D0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2D0);
    // 0x80205FF0: beql        $v0, $zero, L_80206004
    if (ctx->r2 == 0) {
        // 0x80205FF4: addiu       $a0, $s0, 0x8
        ctx->r4 = ADD32(ctx->r16, 0X8);
            goto L_80206004;
    }
    goto skip_1;
    // 0x80205FF4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    skip_1:
    // 0x80205FF8: jalr        $v0
    // 0x80205FFC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80205FFC: nop

    after_1:
    // 0x80206000: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
L_80206004:
    // 0x80206004: jal         0x80221B2C
    // 0x80206008: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80221B2C(rdram, ctx);
        goto after_2;
    // 0x80206008: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_2:
    // 0x8020600C: jal         0x8022149C
    // 0x80206010: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    func_8022149C(rdram, ctx);
        goto after_3;
    // 0x80206010: addiu       $a0, $s0, 0xC8
    ctx->r4 = ADD32(ctx->r16, 0XC8);
    after_3:
    // 0x80206014: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80206018: addiu       $v1, $v1, 0x3B90
    ctx->r3 = ADD32(ctx->r3, 0X3B90);
    // 0x8020601C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206020: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x80206024: ori         $t5, $t5, 0xE
    ctx->r13 = ctx->r13 | 0XE;
    // 0x80206028: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x8020602C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80206030: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80206034: lwc1        $f6, 0x130($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X130);
    // 0x80206038: lwc1        $f4, 0x134($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X134);
    // 0x8020603C: lui         $at, 0x4800
    ctx->r1 = S32(0X4800 << 16);
    // 0x80206040: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80206044: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80206048: div.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f8.fl);
    // 0x8020604C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80206050: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80206054: nop

    // 0x80206058: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8020605C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80206060: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80206064: jal         0x80222B90
    // 0x80206068: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    func_80222B90(rdram, ctx);
        goto after_4;
    // 0x80206068: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_4:
    // 0x8020606C: lbu         $t4, 0x0($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X0);
    // 0x80206070: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80206074: addiu       $v1, $v1, 0x3B90
    ctx->r3 = ADD32(ctx->r3, 0X3B90);
    // 0x80206078: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x8020607C: bnel        $t5, $zero, L_80206098
    if (ctx->r13 != 0) {
        // 0x80206080: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80206098;
    }
    goto skip_2;
    // 0x80206080: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x80206084: jal         0x802223E0
    // 0x80206088: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    func_802223E0(rdram, ctx);
        goto after_5;
    // 0x80206088: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_5:
    // 0x8020608C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80206090: addiu       $v1, $v1, 0x3B90
    ctx->r3 = ADD32(ctx->r3, 0X3B90);
    // 0x80206094: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80206098:
    // 0x80206098: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8020609C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x802060A0: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802060A4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802060A8: ori         $t7, $t7, 0x404
    ctx->r15 = ctx->r15 | 0X404;
    // 0x802060AC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802060B0: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x802060B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802060B8: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x802060BC: ori         $t9, $t9, 0xC04
    ctx->r25 = ctx->r25 | 0XC04;
    // 0x802060C0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802060C4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802060C8: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x802060CC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x802060D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802060D4: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x802060D8: ori         $t3, $zero, 0xFFFF
    ctx->r11 = 0 | 0XFFFF;
    // 0x802060DC: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802060E0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802060E4: ori         $t5, $t5, 0x1404
    ctx->r13 = ctx->r13 | 0X1404;
    // 0x802060E8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x802060EC: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x802060F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802060F4: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x802060F8: ori         $t7, $t7, 0x1C04
    ctx->r15 = ctx->r15 | 0X1C04;
    // 0x802060FC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80206100: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206104: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x80206108: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8020610C: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    // 0x80206110: jal         0x8021D9E0
    // 0x80206114: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    func_8021D9E0(rdram, ctx);
        goto after_6;
    // 0x80206114: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_6:
    // 0x80206118: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8020611C: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x80206120: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x80206124: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80206128: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8020612C: bne         $t9, $zero, L_802061AC
    if (ctx->r25 != 0) {
        // 0x80206130: addiu       $v1, $v1, 0x3B90
        ctx->r3 = ADD32(ctx->r3, 0X3B90);
            goto L_802061AC;
    }
    // 0x80206130: addiu       $v1, $v1, 0x3B90
    ctx->r3 = ADD32(ctx->r3, 0X3B90);
    // 0x80206134: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206138: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x8020613C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80206140: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x80206144: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80206148: ori         $t5, $t5, 0x404
    ctx->r13 = ctx->r13 | 0X404;
    // 0x8020614C: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x80206150: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80206154: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206158: lui         $t7, 0xBC00
    ctx->r15 = S32(0XBC00 << 16);
    // 0x8020615C: ori         $t7, $t7, 0xC04
    ctx->r15 = ctx->r15 | 0XC04;
    // 0x80206160: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80206164: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206168: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8020616C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80206170: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206174: lui         $t9, 0xBC00
    ctx->r25 = S32(0XBC00 << 16);
    // 0x80206178: ori         $t1, $zero, 0xFFFE
    ctx->r9 = 0 | 0XFFFE;
    // 0x8020617C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80206180: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80206184: ori         $t9, $t9, 0x1404
    ctx->r25 = ctx->r25 | 0X1404;
    // 0x80206188: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8020618C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80206190: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206194: lui         $t5, 0xBC00
    ctx->r13 = S32(0XBC00 << 16);
    // 0x80206198: ori         $t5, $t5, 0x1C04
    ctx->r13 = ctx->r13 | 0X1C04;
    // 0x8020619C: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802061A0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802061A4: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x802061A8: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
L_802061AC:
    // 0x802061AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802061B0: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x802061B4: lui         $t0, 0xB700
    ctx->r8 = S32(0XB700 << 16);
    // 0x802061B8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x802061BC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x802061C0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x802061C4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x802061C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802061CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x802061D0: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x802061D4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x802061D8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x802061DC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x802061E0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x802061E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802061E8: lui         $t8, 0xFFFE
    ctx->r24 = S32(0XFFFE << 16);
    // 0x802061EC: lui         $t7, 0xFCFF
    ctx->r15 = S32(0XFCFF << 16);
    // 0x802061F0: addiu       $t4, $v0, 0x8
    ctx->r12 = ADD32(ctx->r2, 0X8);
    // 0x802061F4: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x802061F8: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x802061FC: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80206200: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206204: ori         $t7, $t7, 0xFFFF
    ctx->r15 = ctx->r15 | 0XFFFF;
    // 0x80206208: ori         $t8, $t8, 0x7838
    ctx->r24 = ctx->r24 | 0X7838;
    // 0x8020620C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80206210: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206214: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80206218: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8020621C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80206220: lwc1        $f8, -0x1790($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1790);
    // 0x80206224: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80206228: nop

    // 0x8020622C: bc1fl       L_80206260
    if (!c1cs) {
        // 0x80206230: lw          $v0, 0x0($v1)
        ctx->r2 = MEM_W(ctx->r3, 0X0);
            goto L_80206260;
    }
    goto skip_3;
    // 0x80206230: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80206234: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80206238: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8020623C: lui         $t5, 0xC811
    ctx->r13 = S32(0XC811 << 16);
    // 0x80206240: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80206244: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80206248: ori         $t5, $t5, 0x2078
    ctx->r13 = ctx->r13 | 0X2078;
    // 0x8020624C: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x80206250: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80206254: b           L_80206280
    // 0x80206258: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
        goto L_80206280;
    // 0x80206258: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8020625C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_80206260:
    // 0x80206260: lui         $t7, 0xB900
    ctx->r15 = S32(0XB900 << 16);
    // 0x80206264: lui         $t8, 0xC19
    ctx->r24 = S32(0XC19 << 16);
    // 0x80206268: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8020626C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80206270: ori         $t8, $t8, 0x2078
    ctx->r24 = ctx->r24 | 0X2078;
    // 0x80206274: ori         $t7, $t7, 0x31D
    ctx->r15 = ctx->r15 | 0X31D;
    // 0x80206278: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8020627C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_80206280:
    // 0x80206280: lbu         $t9, 0x0($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X0);
    // 0x80206284: andi        $t4, $t9, 0x2
    ctx->r12 = ctx->r25 & 0X2;
    // 0x80206288: beq         $t4, $zero, L_802062E8
    if (ctx->r12 == 0) {
        // 0x8020628C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802062E8;
    }
    // 0x8020628C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206290: jal         0x802320B4
    // 0x80206294: lbu         $a1, 0x5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X5);
    func_802320B4(rdram, ctx);
        goto after_7;
    // 0x80206294: lbu         $a1, 0x5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X5);
    after_7:
    // 0x80206298: lui         $t5, 0x8025
    ctx->r13 = S32(0X8025 << 16);
    // 0x8020629C: lw          $t5, -0x18F0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X18F0);
    // 0x802062A0: lhu         $t7, 0x4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X4);
    // 0x802062A4: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x802062A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802062AC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x802062B0: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x802062B4: beq         $t4, $zero, L_802062EC
    if (ctx->r12 == 0) {
        // 0x802062B8: sw          $t4, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r12;
            goto L_802062EC;
    }
    // 0x802062B8: sw          $t4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r12;
    // 0x802062BC: lbu         $t7, 0x18($t4)
    ctx->r15 = MEM_BU(ctx->r12, 0X18);
    // 0x802062C0: lbu         $t6, 0x19($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X19);
    // 0x802062C4: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802062C8: addiu       $a0, $a0, -0x4148
    ctx->r4 = ADD32(ctx->r4, -0X4148);
    // 0x802062CC: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802062D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802062D4: mflo        $a2
    ctx->r6 = lo;
    // 0x802062D8: jal         0x8022B780
    // 0x802062DC: nop

    func_8022B780(rdram, ctx);
        goto after_8;
    // 0x802062DC: nop

    after_8:
    // 0x802062E0: b           L_802062EC
    // 0x802062E4: nop

        goto L_802062EC;
    // 0x802062E4: nop

L_802062E8:
    // 0x802062E8: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
L_802062EC:
    // 0x802062EC: jal         0x8022E044
    // 0x802062F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022E044(rdram, ctx);
        goto after_9;
    // 0x802062F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x802062F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802062F8: jal         0x8021BE28
    // 0x802062FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8021BE28(rdram, ctx);
        goto after_10;
    // 0x802062FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80206300: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80206304: lwc1        $f12, 0x2A90($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X2A90);
    // 0x80206308: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8020630C: lwc1        $f0, -0x1790($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1790);
    // 0x80206310: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80206314: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80206318: nop

    // 0x8020631C: bc1fl       L_80206330
    if (!c1cs) {
        // 0x80206320: sub.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
            goto L_80206330;
    }
    goto skip_4;
    // 0x80206320: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    skip_4:
    // 0x80206324: b           L_80206334
    // 0x80206328: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
        goto L_80206334;
    // 0x80206328: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x8020632C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
L_80206330:
    // 0x80206330: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80206334:
    // 0x80206334: lwc1        $f4, 0x2A94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2A94);
    // 0x80206338: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8020633C: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x80206340: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80206344: nop

    // 0x80206348: bc1f        L_80206358
    if (!c1cs) {
        // 0x8020634C: nop
    
            goto L_80206358;
    }
    // 0x8020634C: nop

    // 0x80206350: b           L_80206358
    // 0x80206354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80206358;
    // 0x80206354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80206358:
    // 0x80206358: beql        $v0, $zero, L_8020658C
    if (ctx->r2 == 0) {
        // 0x8020635C: lw          $t8, 0xA0($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA0);
            goto L_8020658C;
    }
    goto skip_5;
    // 0x8020635C: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    skip_5:
    // 0x80206360: beq         $t8, $zero, L_80206588
    if (ctx->r24 == 0) {
        // 0x80206364: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_80206588;
    }
    // 0x80206364: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80206368: lwc1        $f6, 0x128($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X128);
    // 0x8020636C: lwc1        $f16, 0x120($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X120);
    // 0x80206370: lwc1        $f18, 0x124($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X124);
    // 0x80206374: swc1        $f6, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f6.u32l;
    // 0x80206378: lwc1        $f10, 0x12C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X12C);
    // 0x8020637C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80206380: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80206384: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x80206388: lwc1        $f12, 0x130($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X130);
    // 0x8020638C: lwc1        $f0, 0x134($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X134);
    // 0x80206390: lwc1        $f6, 0x2A98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2A98);
    // 0x80206394: mul.s       $f4, $f12, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f8.fl);
    // 0x80206398: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8020639C: lwc1        $f10, 0x24($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X24);
    // 0x802063A0: mul.s       $f14, $f0, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x802063A4: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x802063A8: div.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x802063AC: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x802063B0: nop

    // 0x802063B4: bc1f        L_802063C0
    if (!c1cs) {
        // 0x802063B8: lui         $at, 0x8025
        ctx->r1 = S32(0X8025 << 16);
            goto L_802063C0;
    }
    // 0x802063B8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802063BC: lwc1        $f14, 0x2A9C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X2A9C);
L_802063C0:
    // 0x802063C0: lw          $t9, -0x4160($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4160);
    // 0x802063C4: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x802063C8: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x802063CC: subu        $a0, $s0, $t9
    ctx->r4 = SUB32(ctx->r16, ctx->r25);
    // 0x802063D0: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x802063D4: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x802063D8: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x802063DC: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802063E0: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802063E4: mul.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x802063E8: mflo        $a0
    ctx->r4 = lo;
    // 0x802063EC: swc1        $f12, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f12.u32l;
    // 0x802063F0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802063F4: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x802063F8: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x802063FC: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    // 0x80206400: mul.s       $f6, $f12, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80206404: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80206408: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8020640C: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x80206410: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80206414: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x80206418: jal         0x80205C7C
    // 0x8020641C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80205C7C(rdram, ctx);
        goto after_11;
    // 0x8020641C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x80206420: jal         0x80221B2C
    // 0x80206424: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80221B2C(rdram, ctx);
        goto after_12;
    // 0x80206424: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x80206428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020642C: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x80206430: jal         0x80231EE0
    // 0x80206434: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    func_80231EE0(rdram, ctx);
        goto after_13;
    // 0x80206434: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    after_13:
    // 0x80206438: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8020643C: jal         0x80220534
    // 0x80206440: nop

    func_80220534(rdram, ctx);
        goto after_14;
    // 0x80206440: nop

    after_14:
    // 0x80206444: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80206448: lw          $t5, -0x415C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X415C);
    // 0x8020644C: jal         0x80206BE4
    // 0x80206450: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    func_80206BE4(rdram, ctx);
        goto after_15;
    // 0x80206450: sw          $t5, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r13;
    after_15:
    // 0x80206454: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    // 0x80206458: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8020645C: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x80206460: lwc1        $f4, 0x24($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80206464: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x80206468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020646C: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80206470: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80206474: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80206478: jal         0x80206D04
    // 0x8020647C: nop

    func_80206D04(rdram, ctx);
        goto after_16;
    // 0x8020647C: nop

    after_16:
    // 0x80206480: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x80206484: lwc1        $f10, 0x98($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80206488: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x8020648C: lwc1        $f8, 0x24($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80206490: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x80206494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206498: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x8020649C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802064A0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x802064A4: jal         0x80206D04
    // 0x802064A8: nop

    func_80206D04(rdram, ctx);
        goto after_17;
    // 0x802064A8: nop

    after_17:
    // 0x802064AC: jal         0x802206A0
    // 0x802064B0: nop

    func_802206A0(rdram, ctx);
        goto after_18;
    // 0x802064B0: nop

    after_18:
    // 0x802064B4: jal         0x802223E0
    // 0x802064B8: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    func_802223E0(rdram, ctx);
        goto after_19;
    // 0x802064B8: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_19:
    // 0x802064BC: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x802064C0: lw          $t8, -0x4160($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4160);
    // 0x802064C4: addiu       $at, $zero, 0x2D8
    ctx->r1 = ADD32(0, 0X2D8);
    // 0x802064C8: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x802064CC: subu        $a0, $s0, $t8
    ctx->r4 = SUB32(ctx->r16, ctx->r24);
    // 0x802064D0: div         $zero, $a0, $at
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r1)));
    // 0x802064D4: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x802064D8: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x802064DC: mflo        $a0
    ctx->r4 = lo;
    // 0x802064E0: lw          $a1, 0x94($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X94);
    // 0x802064E4: lw          $a2, 0x90($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X90);
    // 0x802064E8: lw          $a3, 0x8C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X8C);
    // 0x802064EC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x802064F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x802064F4: jal         0x80205C7C
    // 0x802064F8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_80205C7C(rdram, ctx);
        goto after_20;
    // 0x802064F8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_20:
    // 0x802064FC: jal         0x80221B2C
    // 0x80206500: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_80221B2C(rdram, ctx);
        goto after_21;
    // 0x80206500: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_21:
    // 0x80206504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206508: lw          $a1, 0xA0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA0);
    // 0x8020650C: jal         0x80232004
    // 0x80206510: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    func_80232004(rdram, ctx);
        goto after_22;
    // 0x80206510: lw          $a2, 0x98($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X98);
    after_22:
    // 0x80206514: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80206518: lw          $t5, -0x415C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X415C);
    // 0x8020651C: lw          $t4, 0x78($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X78);
    // 0x80206520: beql        $t4, $t5, L_80206534
    if (ctx->r12 == ctx->r13) {
        // 0x80206524: lw          $t7, 0xA0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XA0);
            goto L_80206534;
    }
    goto skip_6;
    // 0x80206524: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
    skip_6:
    // 0x80206528: jal         0x80206BE4
    // 0x8020652C: nop

    func_80206BE4(rdram, ctx);
        goto after_23;
    // 0x8020652C: nop

    after_23:
    // 0x80206530: lw          $t7, 0xA0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA0);
L_80206534:
    // 0x80206534: lwc1        $f4, 0x98($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80206538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8020653C: lwc1        $f6, 0x24($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X24);
    // 0x80206540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80206544: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80206548: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8020654C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80206550: jal         0x80206D04
    // 0x80206554: nop

    func_80206D04(rdram, ctx);
        goto after_24;
    // 0x80206554: nop

    after_24:
    // 0x80206558: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8020655C: lwc1        $f8, 0x98($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80206560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206564: lwc1        $f4, 0x24($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80206568: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8020656C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80206570: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80206574: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80206578: jal         0x80206D04
    // 0x8020657C: nop

    func_80206D04(rdram, ctx);
        goto after_25;
    // 0x8020657C: nop

    after_25:
    // 0x80206580: b           L_802065DC
    // 0x80206584: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
        goto L_802065DC;
    // 0x80206584: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
L_80206588:
    // 0x80206588: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
L_8020658C:
    // 0x8020658C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80206590: beq         $t8, $zero, L_802065A0
    if (ctx->r24 == 0) {
        // 0x80206594: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_802065A0;
    }
    // 0x80206594: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80206598: jal         0x80231EE0
    // 0x8020659C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_80231EE0(rdram, ctx);
        goto after_26;
    // 0x8020659C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_26:
L_802065A0:
    // 0x802065A0: jal         0x80206BE4
    // 0x802065A4: nop

    func_80206BE4(rdram, ctx);
        goto after_27;
    // 0x802065A4: nop

    after_27:
    // 0x802065A8: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x802065AC: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x802065B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802065B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802065B8: jal         0x80206D04
    // 0x802065BC: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    func_80206D04(rdram, ctx);
        goto after_28;
    // 0x802065BC: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_28:
    // 0x802065C0: lui         $a3, 0x5368
    ctx->r7 = S32(0X5368 << 16);
    // 0x802065C4: ori         $a3, $a3, 0xD4A5
    ctx->r7 = ctx->r7 | 0XD4A5;
    // 0x802065C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802065CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802065D0: jal         0x80206D04
    // 0x802065D4: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    func_80206D04(rdram, ctx);
        goto after_29;
    // 0x802065D4: lui         $a2, 0xBF80
    ctx->r6 = S32(0XBF80 << 16);
    after_29:
    // 0x802065D8: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
L_802065DC:
    // 0x802065DC: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x802065E0: beql        $t9, $zero, L_802065F4
    if (ctx->r25 == 0) {
        // 0x802065E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802065F4;
    }
    goto skip_7;
    // 0x802065E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_7:
    // 0x802065E8: jal         0x8021D44C
    // 0x802065EC: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    func_8021D44C(rdram, ctx);
        goto after_30;
    // 0x802065EC: lhu         $a1, 0x2($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X2);
    after_30:
    // 0x802065F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802065F4:
    // 0x802065F4: jal         0x8021BE28
    // 0x802065F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8021BE28(rdram, ctx);
        goto after_31;
    // 0x802065F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x802065FC: jal         0x8023403C
    // 0x80206600: nop

    func_8023403C(rdram, ctx);
        goto after_32;
    // 0x80206600: nop

    after_32:
    // 0x80206604: jal         0x8021C1F0
    // 0x80206608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8021C1F0(rdram, ctx);
        goto after_33;
    // 0x80206608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x8020660C: jal         0x802206A0
    // 0x80206610: nop

    func_802206A0(rdram, ctx);
        goto after_34;
    // 0x80206610: nop

    after_34:
    // 0x80206614: lw          $v0, 0x2D4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2D4);
    // 0x80206618: beq         $v0, $zero, L_80206628
    if (ctx->r2 == 0) {
        // 0x8020661C: nop
    
            goto L_80206628;
    }
    // 0x8020661C: nop

    // 0x80206620: jalr        $v0
    // 0x80206624: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_35;
    // 0x80206624: nop

    after_35:
L_80206628:
    // 0x80206628: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x8020662C: sw          $zero, -0x415C($at)
    MEM_W(-0X415C, ctx->r1) = 0;
    // 0x80206630: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80206634: sw          $zero, -0x4158($at)
    MEM_W(-0X4158, ctx->r1) = 0;
    // 0x80206638: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8020663C:
    // 0x8020663C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80206640: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x80206644: jr          $ra
    // 0x80206648: nop

    return;
    // 0x80206648: nop

;}
RECOMP_FUNC void func_802001AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802001AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802001B0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802001B4: lhu         $t6, 0x22($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X22);
    // 0x802001B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802001BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802001C0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802001C4: blez        $t6, L_802001E4
    if (SIGNED(ctx->r14) <= 0) {
        // 0x802001C8: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_802001E4;
    }
    // 0x802001C8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x802001CC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802001D0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802001D4: addiu       $a1, $a1, 0x1BA0
    ctx->r5 = ADD32(ctx->r5, 0X1BA0);
    // 0x802001D8: addiu       $a0, $a0, 0x1B8C
    ctx->r4 = ADD32(ctx->r4, 0X1B8C);
    // 0x802001DC: jal         0x80231C9C
    // 0x802001E0: addiu       $a2, $zero, 0x52
    ctx->r6 = ADD32(0, 0X52);
    func_80231C9C(rdram, ctx);
        goto after_0;
    // 0x802001E0: addiu       $a2, $zero, 0x52
    ctx->r6 = ADD32(0, 0X52);
    after_0:
L_802001E4:
    // 0x802001E4: lhu         $t7, 0x22($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X22);
    // 0x802001E8: lui         $t9, 0x8025
    ctx->r25 = S32(0X8025 << 16);
    // 0x802001EC: addiu       $t9, $t9, 0x6D70
    ctx->r25 = ADD32(ctx->r25, 0X6D70);
    // 0x802001F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802001F4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802001F8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x802001FC: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x80200200: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x80200204: addiu       $t0, $zero, -0x4
    ctx->r8 = ADD32(0, -0X4);
    // 0x80200208: addiu       $a3, $zero, -0x8
    ctx->r7 = ADD32(0, -0X8);
L_8020020C:
    // 0x8020020C: addiu       $t1, $v0, 0x3
    ctx->r9 = ADD32(ctx->r2, 0X3);
    // 0x80200210: and         $v0, $t1, $t0
    ctx->r2 = ctx->r9 & ctx->r8;
    // 0x80200214: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x80200218: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8020021C: sltiu       $at, $a1, 0x9
    ctx->r1 = ctx->r5 < 0X9 ? 1 : 0;
    // 0x80200220: beq         $at, $zero, L_80200338
    if (ctx->r1 == 0) {
        // 0x80200224: sll         $t2, $a1, 2
        ctx->r10 = S32(ctx->r5 << 2);
            goto L_80200338;
    }
    // 0x80200224: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x80200228: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8020022C: addu        $at, $at, $t2
    gpr jr_addend_80200234 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80200230: lw          $t2, 0x1BE0($at)
    ctx->r10 = ADD32(ctx->r1, 0X1BE0);
    // 0x80200234: jr          $t2
    // 0x80200238: nop

    switch (jr_addend_80200234 >> 2) {
        case 0: goto L_80200344; break;
        case 1: goto L_8020023C; break;
        case 2: goto L_80200288; break;
        case 3: goto L_80200338; break;
        case 4: goto L_802002D4; break;
        case 5: goto L_80200338; break;
        case 6: goto L_80200338; break;
        case 7: goto L_80200338; break;
        case 8: goto L_80200320; break;
        default: switch_error(__func__, 0x80200234, 0x80251BE0);
    }
    // 0x80200238: nop

L_8020023C:
    // 0x8020023C: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x80200240: beq         $t3, $zero, L_80200254
    if (ctx->r11 == 0) {
        // 0x80200244: andi        $t4, $v0, 0x2
        ctx->r12 = ctx->r2 & 0X2;
            goto L_80200254;
    }
    // 0x80200244: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x80200248: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8020024C: b           L_80200278
    // 0x80200250: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80200278;
    // 0x80200250: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_80200254:
    // 0x80200254: beq         $t4, $zero, L_80200268
    if (ctx->r12 == 0) {
        // 0x80200258: addiu       $t5, $v0, 0x7
        ctx->r13 = ADD32(ctx->r2, 0X7);
            goto L_80200268;
    }
    // 0x80200258: addiu       $t5, $v0, 0x7
    ctx->r13 = ADD32(ctx->r2, 0X7);
    // 0x8020025C: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80200260: b           L_80200274
    // 0x80200264: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_80200274;
    // 0x80200264: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80200268:
    // 0x80200268: and         $v0, $t5, $a3
    ctx->r2 = ctx->r13 & ctx->r7;
    // 0x8020026C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80200270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_80200274:
    // 0x80200274: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80200278:
    // 0x80200278: ldc1        $f4, -0x8($v1)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r3, -0X8);
    // 0x8020027C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80200280: b           L_8020020C
    // 0x80200284: swc1        $f6, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f6.u32l;
        goto L_8020020C;
    // 0x80200284: swc1        $f6, 0x40($a2)
    MEM_W(0X40, ctx->r6) = ctx->f6.u32l;
L_80200288:
    // 0x80200288: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8020028C: beq         $t6, $zero, L_802002A0
    if (ctx->r14 == 0) {
        // 0x80200290: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_802002A0;
    }
    // 0x80200290: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80200294: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80200298: b           L_802002C4
    // 0x8020029C: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_802002C4;
    // 0x8020029C: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_802002A0:
    // 0x802002A0: beq         $t7, $zero, L_802002B4
    if (ctx->r15 == 0) {
        // 0x802002A4: addiu       $t8, $v0, 0x7
        ctx->r24 = ADD32(ctx->r2, 0X7);
            goto L_802002B4;
    }
    // 0x802002A4: addiu       $t8, $v0, 0x7
    ctx->r24 = ADD32(ctx->r2, 0X7);
    // 0x802002A8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x802002AC: b           L_802002C0
    // 0x802002B0: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_802002C0;
    // 0x802002B0: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_802002B4:
    // 0x802002B4: and         $v0, $t8, $a3
    ctx->r2 = ctx->r24 & ctx->r7;
    // 0x802002B8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802002BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_802002C0:
    // 0x802002C0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_802002C4:
    // 0x802002C4: ldc1        $f8, -0x8($v1)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r3, -0X8);
    // 0x802002C8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x802002CC: b           L_8020020C
    // 0x802002D0: swc1        $f10, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->f10.u32l;
        goto L_8020020C;
    // 0x802002D0: swc1        $f10, 0x44($a2)
    MEM_W(0X44, ctx->r6) = ctx->f10.u32l;
L_802002D4:
    // 0x802002D4: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x802002D8: beq         $t9, $zero, L_802002EC
    if (ctx->r25 == 0) {
        // 0x802002DC: andi        $t1, $v0, 0x2
        ctx->r9 = ctx->r2 & 0X2;
            goto L_802002EC;
    }
    // 0x802002DC: andi        $t1, $v0, 0x2
    ctx->r9 = ctx->r2 & 0X2;
    // 0x802002E0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x802002E4: b           L_80200310
    // 0x802002E8: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
        goto L_80200310;
    // 0x802002E8: addiu       $v1, $v0, -0x16
    ctx->r3 = ADD32(ctx->r2, -0X16);
L_802002EC:
    // 0x802002EC: beq         $t1, $zero, L_80200300
    if (ctx->r9 == 0) {
        // 0x802002F0: addiu       $t2, $v0, 0x7
        ctx->r10 = ADD32(ctx->r2, 0X7);
            goto L_80200300;
    }
    // 0x802002F0: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
    // 0x802002F4: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x802002F8: b           L_8020030C
    // 0x802002FC: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
        goto L_8020030C;
    // 0x802002FC: addiu       $a0, $v0, -0x28
    ctx->r4 = ADD32(ctx->r2, -0X28);
L_80200300:
    // 0x80200300: and         $v0, $t2, $a3
    ctx->r2 = ctx->r10 & ctx->r7;
    // 0x80200304: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80200308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8020030C:
    // 0x8020030C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80200310:
    // 0x80200310: ldc1        $f16, -0x8($v1)
    CHECK_FR(ctx, 16);
    ctx->f16.u64 = LD(ctx->r3, -0X8);
    // 0x80200314: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80200318: b           L_8020020C
    // 0x8020031C: swc1        $f18, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f18.u32l;
        goto L_8020020C;
    // 0x8020031C: swc1        $f18, 0x48($a2)
    MEM_W(0X48, ctx->r6) = ctx->f18.u32l;
L_80200320:
    // 0x80200320: addiu       $t3, $v0, 0x3
    ctx->r11 = ADD32(ctx->r2, 0X3);
    // 0x80200324: and         $v0, $t3, $t0
    ctx->r2 = ctx->r11 & ctx->r8;
    // 0x80200328: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8020032C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80200330: b           L_8020020C
    // 0x80200334: sw          $t4, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r12;
        goto L_8020020C;
    // 0x80200334: sw          $t4, 0x4C($a2)
    MEM_W(0X4C, ctx->r6) = ctx->r12;
L_80200338:
    // 0x80200338: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8020033C: jal         0x80231A24
    // 0x80200340: addiu       $a0, $a0, 0x1BA8
    ctx->r4 = ADD32(ctx->r4, 0X1BA8);
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80200340: addiu       $a0, $a0, 0x1BA8
    ctx->r4 = ADD32(ctx->r4, 0X1BA8);
    after_1:
L_80200344:
    // 0x80200344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80200348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8020034C: jr          $ra
    // 0x80200350: nop

    return;
    // 0x80200350: nop

;}
RECOMP_FUNC void func_8023EA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023EA00: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8023EA04: lui         $t6, 0x8025
    ctx->r14 = S32(0X8025 << 16);
    // 0x8023EA08: lw          $t6, 0x16C0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X16C0);
    // 0x8023EA0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023EA10: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x8023EA14: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x8023EA18: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x8023EA1C: beq         $t6, $zero, L_8023EA2C
    if (ctx->r14 == 0) {
        // 0x8023EA20: sw          $zero, 0x78($sp)
        MEM_W(0X78, ctx->r29) = 0;
            goto L_8023EA2C;
    }
    // 0x8023EA20: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x8023EA24: b           L_8023EBE8
    // 0x8023EA28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8023EBE8;
    // 0x8023EA28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8023EA2C:
    // 0x8023EA2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8023EA30: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023EA34: jal         0x802490E0
    // 0x8023EA38: sw          $t7, 0x16C0($at)
    MEM_W(0X16C0, ctx->r1) = ctx->r15;
    func_802490E0(rdram, ctx);
        goto after_0;
    // 0x8023EA38: sw          $t7, 0x16C0($at)
    MEM_W(0X16C0, ctx->r1) = ctx->r15;
    after_0:
    // 0x8023EA3C: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x8023EA40: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023EA44: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8023EA48: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x8023EA4C: sw          $v1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r3;
    // 0x8023EA50: lw          $a3, 0x1684($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X1684);
    // 0x8023EA54: lw          $a2, 0x1680($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1680);
    // 0x8023EA58: ori         $a1, $a1, 0xA120
    ctx->r5 = ctx->r5 | 0XA120;
    // 0x8023EA5C: jal         0x8023D228
    // 0x8023EA60: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    func_8023D228(rdram, ctx);
        goto after_1;
    // 0x8023EA60: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    after_1:
    // 0x8023EA64: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023EA68: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023EA6C: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023EA70: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023EA74: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8023EA78: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8023EA7C: jal         0x8023D128
    // 0x8023EA80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8023D128(rdram, ctx);
        goto after_2;
    // 0x8023EA80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8023EA84: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x8023EA88: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x8023EA8C: sltu        $at, $v0, $t8
    ctx->r1 = ctx->r2 < ctx->r24 ? 1 : 0;
    // 0x8023EA90: bne         $at, $zero, L_8023EB58
    if (ctx->r1 != 0) {
        // 0x8023EA94: sltu        $at, $t8, $v0
        ctx->r1 = ctx->r24 < ctx->r2 ? 1 : 0;
            goto L_8023EB58;
    }
    // 0x8023EA94: sltu        $at, $t8, $v0
    ctx->r1 = ctx->r24 < ctx->r2 ? 1 : 0;
    // 0x8023EA98: bne         $at, $zero, L_8023EAA8
    if (ctx->r1 != 0) {
        // 0x8023EA9C: sltu        $at, $t9, $v1
        ctx->r1 = ctx->r25 < ctx->r3 ? 1 : 0;
            goto L_8023EAA8;
    }
    // 0x8023EA9C: sltu        $at, $t9, $v1
    ctx->r1 = ctx->r25 < ctx->r3 ? 1 : 0;
    // 0x8023EAA0: beq         $at, $zero, L_8023EB58
    if (ctx->r1 == 0) {
        // 0x8023EAA4: nop
    
            goto L_8023EB58;
    }
    // 0x8023EAA4: nop

L_8023EAA8:
    // 0x8023EAA8: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8023EAAC: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EAB0: jal         0x802371E0
    // 0x8023EAB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_3;
    // 0x8023EAB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8023EAB8: lui         $a1, 0x7
    ctx->r5 = S32(0X7 << 16);
    // 0x8023EABC: lui         $a2, 0x8025
    ctx->r6 = S32(0X8025 << 16);
    // 0x8023EAC0: lui         $a3, 0x8025
    ctx->r7 = S32(0X8025 << 16);
    // 0x8023EAC4: lw          $a3, 0x1684($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X1684);
    // 0x8023EAC8: lw          $a2, 0x1680($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X1680);
    // 0x8023EACC: ori         $a1, $a1, 0xA120
    ctx->r5 = ctx->r5 | 0XA120;
    // 0x8023EAD0: jal         0x8023D228
    // 0x8023EAD4: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    func_8023D228(rdram, ctx);
        goto after_4;
    // 0x8023EAD4: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    after_4:
    // 0x8023EAD8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023EADC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023EAE0: lui         $a3, 0xF
    ctx->r7 = S32(0XF << 16);
    // 0x8023EAE4: ori         $a3, $a3, 0x4240
    ctx->r7 = ctx->r7 | 0X4240;
    // 0x8023EAE8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8023EAEC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8023EAF0: jal         0x8023D128
    // 0x8023EAF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8023D128(rdram, ctx);
        goto after_5;
    // 0x8023EAF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_5:
    // 0x8023EAF8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8023EAFC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x8023EB00: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8023EB04: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8023EB08: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x8023EB0C: lw          $t3, 0x74($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X74);
    // 0x8023EB10: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x8023EB14: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x8023EB18: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x8023EB1C: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x8023EB20: subu        $a2, $t0, $t2
    ctx->r6 = SUB32(ctx->r8, ctx->r10);
    // 0x8023EB24: sltu        $at, $t1, $t3
    ctx->r1 = ctx->r9 < ctx->r11 ? 1 : 0;
    // 0x8023EB28: subu        $a2, $a2, $at
    ctx->r6 = SUB32(ctx->r6, ctx->r1);
    // 0x8023EB2C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8023EB30: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8023EB34: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8023EB38: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8023EB3C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8023EB40: jal         0x8023E920
    // 0x8023EB44: subu        $a3, $t1, $t3
    ctx->r7 = SUB32(ctx->r9, ctx->r11);
    func_8023E920(rdram, ctx);
        goto after_6;
    // 0x8023EB44: subu        $a3, $t1, $t3
    ctx->r7 = SUB32(ctx->r9, ctx->r11);
    after_6:
    // 0x8023EB48: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8023EB4C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EB50: jal         0x802374B0
    // 0x8023EB54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_7;
    // 0x8023EB54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
L_8023EB58:
    // 0x8023EB58: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8023EB5C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023EB60: sb          $t8, 0x5EB1($at)
    MEM_B(0X5EB1, ctx->r1) = ctx->r24;
    // 0x8023EB64: jal         0x8023ECC8
    // 0x8023EB68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8023ECC8(rdram, ctx);
        goto after_8;
    // 0x8023EB68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8023EB6C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023EB70: addiu       $a1, $a1, 0x5E70
    ctx->r5 = ADD32(ctx->r5, 0X5E70);
    // 0x8023EB74: jal         0x802465B0
    // 0x8023EB78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802465B0(rdram, ctx);
        goto after_9;
    // 0x8023EB78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x8023EB7C: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8023EB80: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023EB84: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EB88: jal         0x802374B0
    // 0x8023EB8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_10;
    // 0x8023EB8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x8023EB90: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023EB94: addiu       $a1, $a1, 0x5E70
    ctx->r5 = ADD32(ctx->r5, 0X5E70);
    // 0x8023EB98: jal         0x802465B0
    // 0x8023EB9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802465B0(rdram, ctx);
        goto after_11;
    // 0x8023EB9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x8023EBA0: sw          $v0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r2;
    // 0x8023EBA4: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8023EBA8: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8023EBAC: jal         0x802374B0
    // 0x8023EBB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802374B0(rdram, ctx);
        goto after_12;
    // 0x8023EBB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x8023EBB4: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x8023EBB8: jal         0x8023EBF8
    // 0x8023EBBC: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    func_8023EBF8(rdram, ctx);
        goto after_13;
    // 0x8023EBBC: lw          $a1, 0x88($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X88);
    after_13:
    // 0x8023EBC0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8023EBC4: jal         0x80245A80
    // 0x8023EBC8: sb          $zero, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = 0;
    func_80245A80(rdram, ctx);
        goto after_14;
    // 0x8023EBC8: sb          $zero, 0x5EB0($at)
    MEM_B(0X5EB0, ctx->r1) = 0;
    after_14:
    // 0x8023EBCC: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8023EBD0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8023EBD4: addiu       $a1, $a1, 0x5EF0
    ctx->r5 = ADD32(ctx->r5, 0X5EF0);
    // 0x8023EBD8: addiu       $a0, $a0, 0x5ED8
    ctx->r4 = ADD32(ctx->r4, 0X5ED8);
    // 0x8023EBDC: jal         0x802371E0
    // 0x8023EBE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802371E0(rdram, ctx);
        goto after_15;
    // 0x8023EBE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x8023EBE4: lw          $v0, 0x78($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X78);
L_8023EBE8:
    // 0x8023EBE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023EBEC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x8023EBF0: jr          $ra
    // 0x8023EBF4: nop

    return;
    // 0x8023EBF4: nop

;}
RECOMP_FUNC void func_8023F820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023F820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023F824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023F828: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8023F82C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8023F830: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8023F834: beql        $t6, $zero, L_8023F8A0
    if (ctx->r14 == 0) {
        // 0x8023F838: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8023F8A0;
    }
    goto skip_0;
    // 0x8023F838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8023F83C: jal         0x80237840
    // 0x8023F840: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80237840(rdram, ctx);
        goto after_0;
    // 0x8023F840: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8023F844: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8023F848: beq         $v0, $zero, L_8023F89C
    if (ctx->r2 == 0) {
        // 0x8023F84C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8023F89C;
    }
    // 0x8023F84C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8023F850: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8023F854: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8023F858: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x8023F85C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8023F860: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8023F864: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8023F868: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8023F86C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8023F870: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8023F874: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8023F878: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023F87C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8023F880: lh          $t4, 0x1A($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X1A);
    // 0x8023F884: sh          $t4, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r12;
    // 0x8023F888: lw          $t5, 0x8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8);
    // 0x8023F88C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x8023F890: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8023F894: jalr        $t9
    // 0x8023F898: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8023F898: nop

    after_1:
L_8023F89C:
    // 0x8023F89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8023F8A0:
    // 0x8023F8A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023F8A4: jr          $ra
    // 0x8023F8A8: nop

    return;
    // 0x8023F8A8: nop

;}
RECOMP_FUNC void func_80235240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80235240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235248: jal         0x8023FC40
    // 0x8023524C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8023FC40(rdram, ctx);
        goto after_0;
    // 0x8023524C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80235250: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x80235254: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80235258: beq         $s0, $zero, L_802352A4
    if (ctx->r16 == 0) {
        // 0x8023525C: nop
    
            goto L_802352A4;
    }
    // 0x8023525C: nop

L_80235260:
    // 0x80235260: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x80235264: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80235268: bne         $s3, $t6, L_8023529C
    if (ctx->r19 != ctx->r14) {
        // 0x8023526C: nop
    
            goto L_8023529C;
    }
    // 0x8023526C: nop

    // 0x80235270: beq         $s1, $zero, L_80235288
    if (ctx->r17 == 0) {
        // 0x80235274: nop
    
            goto L_80235288;
    }
    // 0x80235274: nop

    // 0x80235278: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x8023527C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x80235280: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80235284: sw          $t9, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r25;
L_80235288:
    // 0x80235288: jal         0x80237120
    // 0x8023528C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237120(rdram, ctx);
        goto after_1;
    // 0x8023528C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80235290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80235294: jal         0x80237150
    // 0x80235298: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80237150(rdram, ctx);
        goto after_2;
    // 0x80235298: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_8023529C:
    // 0x8023529C: bne         $s1, $zero, L_80235260
    if (ctx->r17 != 0) {
        // 0x802352A0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80235260;
    }
    // 0x802352A0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_802352A4:
    // 0x802352A4: jal         0x8023FC40
    // 0x802352A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8023FC40(rdram, ctx);
        goto after_3;
    // 0x802352A8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_3:
    // 0x802352AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802352B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802352B4: jr          $ra
    // 0x802352B8: nop

    return;
    // 0x802352B8: nop

    // 0x802352BC: jr          $ra
    // 0x802352C0: nop

    return;
    // 0x802352C0: nop

    // 0x802352C4: jr          $ra
    // 0x802352C8: nop

    return;
    // 0x802352C8: nop

;}
RECOMP_FUNC void func_80237B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80237B10: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80237B14: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80237B18: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80237B1C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80237B20: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80237B24: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80237B28: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80237B2C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80237B30: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80237B34: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80237B38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80237B3C: lw          $s7, 0x14($a1)
    ctx->r23 = MEM_W(ctx->r5, 0X14);
    // 0x80237B40: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80237B44: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80237B48: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80237B4C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80237B50: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    // 0x80237B54: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x80237B58: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x80237B5C: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x80237B60: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
    // 0x80237B64: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x80237B68: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80237B6C: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x80237B70: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x80237B74: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x80237B78: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80237B7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237B80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237B84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80237B88: jal         0x80236CD0
    // 0x80237B8C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80236CD0(rdram, ctx);
        goto after_0;
    // 0x80237B8C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x80237B90: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80237B94: jal         0x80242330
    // 0x80237B98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80242330(rdram, ctx);
        goto after_1;
    // 0x80237B98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80237B9C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80237BA0: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x80237BA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237BA8: sw          $t1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r9;
    // 0x80237BAC: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80237BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237BB4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80237BB8: jal         0x80236CD0
    // 0x80237BBC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_2;
    // 0x80237BBC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80237BC0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80237BC4: sw          $v0, 0x34($s6)
    MEM_W(0X34, ctx->r22) = ctx->r2;
    // 0x80237BC8: sw          $t3, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r11;
    // 0x80237BCC: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80237BD0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80237BD4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80237BD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237BDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237BE0: jal         0x80236CD0
    // 0x80237BE4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80236CD0(rdram, ctx);
        goto after_3;
    // 0x80237BE4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_3:
    // 0x80237BE8: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80237BEC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80237BF0: jal         0x802423C8
    // 0x80237BF4: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    func_802423C8(rdram, ctx);
        goto after_4;
    // 0x80237BF4: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_4:
    // 0x80237BF8: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80237BFC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80237C00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237C08: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80237C0C: jal         0x80236CD0
    // 0x80237C10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80236CD0(rdram, ctx);
        goto after_5;
    // 0x80237C10: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80237C14: sw          $v0, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r2;
    // 0x80237C18: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80237C1C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80237C20: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80237C24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237C2C: jal         0x80236CD0
    // 0x80237C30: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80236CD0(rdram, ctx);
        goto after_6;
    // 0x80237C30: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_6:
    // 0x80237C34: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80237C38: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80237C3C: jal         0x80242374
    // 0x80237C40: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    func_80242374(rdram, ctx);
        goto after_7;
    // 0x80237C40: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_7:
    // 0x80237C44: lbu         $t7, 0x1C($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X1C);
    // 0x80237C48: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80237C4C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80237C50: beq         $t7, $zero, L_80237C6C
    if (ctx->r15 == 0) {
        // 0x80237C54: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80237C6C;
    }
    // 0x80237C54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237C5C: jal         0x80242AD0
    // 0x80237C60: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_80242AD0(rdram, ctx);
        goto after_8;
    // 0x80237C60: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_8:
    // 0x80237C64: b           L_80237C7C
    // 0x80237C68: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
        goto L_80237C7C;
    // 0x80237C68: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80237C6C:
    // 0x80237C6C: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80237C70: jal         0x80242B70
    // 0x80237C74: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    func_80242B70(rdram, ctx);
        goto after_9;
    // 0x80237C74: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    after_9:
    // 0x80237C78: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80237C7C:
    // 0x80237C7C: sw          $zero, 0x8($s6)
    MEM_W(0X8, ctx->r22) = 0;
    // 0x80237C80: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    // 0x80237C84: sw          $zero, 0x18($s6)
    MEM_W(0X18, ctx->r22) = 0;
    // 0x80237C88: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80237C8C: sw          $zero, 0x10($s6)
    MEM_W(0X10, ctx->r22) = 0;
    // 0x80237C90: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80237C94: addiu       $t8, $zero, 0xDC
    ctx->r24 = ADD32(0, 0XDC);
    // 0x80237C98: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80237C9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237CA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237CA4: jal         0x80236CD0
    // 0x80237CA8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80236CD0(rdram, ctx);
        goto after_10;
    // 0x80237CA8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_10:
    // 0x80237CAC: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x80237CB0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80237CB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80237CB8: blez        $t9, L_80237D78
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80237CBC: addiu       $a1, $s6, 0x4
        ctx->r5 = ADD32(ctx->r22, 0X4);
            goto L_80237D78;
    }
    // 0x80237CBC: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    // 0x80237CC0: addiu       $s1, $v0, 0x8C
    ctx->r17 = ADD32(ctx->r2, 0X8C);
    // 0x80237CC4: addiu       $s2, $v0, 0x58
    ctx->r18 = ADD32(ctx->r2, 0X58);
    // 0x80237CC8: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x80237CCC: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
L_80237CD0:
    // 0x80237CD0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80237CD4: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x80237CD8: jal         0x80237150
    // 0x80237CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80237150(rdram, ctx);
        goto after_11;
    // 0x80237CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80237CE0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80237CE4: lw          $a1, 0x24($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X24);
    // 0x80237CE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80237CEC: jal         0x802424A4
    // 0x80237CF0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_802424A4(rdram, ctx);
        goto after_12;
    // 0x80237CF0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_12:
    // 0x80237CF4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80237CF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237CFC: jal         0x80242CC0
    // 0x80237D00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80242CC0(rdram, ctx);
        goto after_13;
    // 0x80237D00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80237D04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237D08: jal         0x8024241C
    // 0x80237D0C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8024241C(rdram, ctx);
        goto after_14;
    // 0x80237D0C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_14:
    // 0x80237D10: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80237D14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237D18: jal         0x80243810
    // 0x80237D1C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_80243810(rdram, ctx);
        goto after_15;
    // 0x80237D1C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x80237D20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237D24: jal         0x8024254C
    // 0x80237D28: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8024254C(rdram, ctx);
        goto after_16;
    // 0x80237D28: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_16:
    // 0x80237D2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80237D30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237D34: jal         0x80243C24
    // 0x80237D38: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_80243C24(rdram, ctx);
        goto after_17;
    // 0x80237D38: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x80237D3C: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80237D40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237D44: jal         0x80244770
    // 0x80237D48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_80244770(rdram, ctx);
        goto after_18;
    // 0x80237D48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x80237D4C: addiu       $t0, $s5, 0x8C
    ctx->r8 = ADD32(ctx->r21, 0X8C);
    // 0x80237D50: sw          $t0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r8;
    // 0x80237D54: lw          $t1, 0x4($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X4);
    // 0x80237D58: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80237D5C: addiu       $s0, $s0, 0xDC
    ctx->r16 = ADD32(ctx->r16, 0XDC);
    // 0x80237D60: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80237D64: addiu       $s1, $s1, 0xDC
    ctx->r17 = ADD32(ctx->r17, 0XDC);
    // 0x80237D68: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x80237D6C: bne         $at, $zero, L_80237CD0
    if (ctx->r1 != 0) {
        // 0x80237D70: addiu       $s3, $s3, 0xDC
        ctx->r19 = ADD32(ctx->r19, 0XDC);
            goto L_80237CD0;
    }
    // 0x80237D70: addiu       $s3, $s3, 0xDC
    ctx->r19 = ADD32(ctx->r19, 0XDC);
    // 0x80237D74: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80237D78:
    // 0x80237D78: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80237D7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237D80: jal         0x80244880
    // 0x80237D84: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    func_80244880(rdram, ctx);
        goto after_19;
    // 0x80237D84: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    after_19:
    // 0x80237D88: lw          $a3, 0x8($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X8);
    // 0x80237D8C: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80237D90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80237D94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80237D98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80237D9C: jal         0x80236CD0
    // 0x80237DA0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    func_80236CD0(rdram, ctx);
        goto after_20;
    // 0x80237DA0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_20:
    // 0x80237DA4: sw          $zero, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = 0;
    // 0x80237DA8: lw          $t3, 0x8($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X8);
    // 0x80237DAC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80237DB0: blezl       $t3, L_80237DE0
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80237DB4: sw          $s7, 0x28($s6)
        MEM_W(0X28, ctx->r22) = ctx->r23;
            goto L_80237DE0;
    }
    goto skip_0;
    // 0x80237DB4: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
    skip_0:
    // 0x80237DB8: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
L_80237DBC:
    // 0x80237DBC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80237DC0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80237DC4: sw          $v1, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = ctx->r3;
    // 0x80237DC8: lw          $t5, 0x8($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X8);
    // 0x80237DCC: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x80237DD0: slt         $at, $s4, $t5
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80237DD4: bnel        $at, $zero, L_80237DBC
    if (ctx->r1 != 0) {
        // 0x80237DD8: lw          $t4, 0x2C($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X2C);
            goto L_80237DBC;
    }
    goto skip_1;
    // 0x80237DD8: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
    skip_1:
    // 0x80237DDC: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
L_80237DE0:
    // 0x80237DE0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80237DE4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80237DE8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80237DEC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80237DF0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80237DF4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80237DF8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80237DFC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80237E00: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80237E04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80237E08: jr          $ra
    // 0x80237E0C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80237E0C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_802238F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802238F0: bltz        $a0, L_8022390C
    if (SIGNED(ctx->r4) < 0) {
        // 0x802238F4: slti        $at, $a0, 0x2
        ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_8022390C;
    }
    // 0x802238F4: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x802238F8: beq         $at, $zero, L_8022390C
    if (ctx->r1 == 0) {
        // 0x802238FC: sll         $t6, $a0, 4
        ctx->r14 = S32(ctx->r4 << 4);
            goto L_8022390C;
    }
    // 0x802238FC: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80223900: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80223904: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80223908: sw          $zero, 0x5110($at)
    MEM_W(0X5110, ctx->r1) = 0;
L_8022390C:
    // 0x8022390C: jr          $ra
    // 0x80223910: nop

    return;
    // 0x80223910: nop

;}
RECOMP_FUNC void func_80227BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80227BB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227BB8: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80227BBC: lw          $t6, 0x5248($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5248);
    // 0x80227BC0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227BC4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80227BC8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80227BCC: jal         0x80223840
    // 0x80227BD0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_80223840(rdram, ctx);
        goto after_0;
    // 0x80227BD0: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_0:
    // 0x80227BD4: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80227BD8: lui         $a3, 0x434F
    ctx->r7 = S32(0X434F << 16);
    // 0x80227BDC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80227BE0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80227BE4: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80227BE8: ori         $a3, $a3, 0x4D4D
    ctx->r7 = ctx->r7 | 0X4D4D;
    // 0x80227BEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80227BF0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227BF4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80227BF8: jal         0x80223B30
    // 0x80227BFC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80223B30(rdram, ctx);
        goto after_1;
    // 0x80227BFC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_1:
    // 0x80227C00: beq         $v0, $zero, L_80227C14
    if (ctx->r2 == 0) {
        // 0x80227C04: nop
    
            goto L_80227C14;
    }
    // 0x80227C04: nop

    // 0x80227C08: jal         0x802271C4
    // 0x80227C0C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_802271C4(rdram, ctx);
        goto after_2;
    // 0x80227C0C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x80227C10: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_80227C14:
    // 0x80227C14: jal         0x802238F0
    // 0x80227C18: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_802238F0(rdram, ctx);
        goto after_3;
    // 0x80227C18: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x80227C1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227C20: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80227C24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227C28: jr          $ra
    // 0x80227C2C: nop

    return;
    // 0x80227C2C: nop

;}
RECOMP_FUNC void func_802073D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802073D8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x802073DC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x802073E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802073E4: addiu       $s1, $sp, 0x54
    ctx->r17 = ADD32(ctx->r29, 0X54);
    // 0x802073E8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x802073EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802073F0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x802073F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x802073F8: addiu       $a1, $s2, 0x88
    ctx->r5 = ADD32(ctx->r18, 0X88);
    // 0x802073FC: jal         0x80228DE0
    // 0x80207400: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80228DE0(rdram, ctx);
        goto after_0;
    // 0x80207400: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80207404: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80207408: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_8020740C:
    // 0x8020740C: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207410: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80207414: mflo        $t6
    ctx->r14 = lo;
    // 0x80207418: addu        $v0, $s2, $t6
    ctx->r2 = ADD32(ctx->r18, ctx->r14);
    // 0x8020741C: addiu       $a1, $v0, 0x188
    ctx->r5 = ADD32(ctx->r2, 0X188);
    // 0x80207420: jal         0x8022A4F4
    // 0x80207424: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    func_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x80207424: addiu       $a2, $v0, 0x140
    ctx->r6 = ADD32(ctx->r2, 0X140);
    after_1:
    // 0x80207428: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8020742C: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x80207430: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x80207434: bne         $at, $zero, L_8020740C
    if (ctx->r1 != 0) {
        // 0x80207438: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_8020740C;
    }
    // 0x80207438: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8020743C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80207440: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80207444: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x80207448: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8020744C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
L_80207450:
    // 0x80207450: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80207454: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80207458: mflo        $t8
    ctx->r24 = lo;
    // 0x8020745C: addu        $v0, $s2, $t8
    ctx->r2 = ADD32(ctx->r18, ctx->r24);
    // 0x80207460: addiu       $a1, $v0, 0x218
    ctx->r5 = ADD32(ctx->r2, 0X218);
    // 0x80207464: jal         0x8022A4F4
    // 0x80207468: addiu       $a2, $v0, 0x1D0
    ctx->r6 = ADD32(ctx->r2, 0X1D0);
    func_8022A4F4(rdram, ctx);
        goto after_2;
    // 0x80207468: addiu       $a2, $v0, 0x1D0
    ctx->r6 = ADD32(ctx->r2, 0X1D0);
    after_2:
    // 0x8020746C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80207470: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x80207474: slti        $at, $t9, 0x6
    ctx->r1 = SIGNED(ctx->r25) < 0X6 ? 1 : 0;
    // 0x80207478: bne         $at, $zero, L_80207450
    if (ctx->r1 != 0) {
        // 0x8020747C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_80207450;
    }
    // 0x8020747C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x80207480: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80207484: lw          $v0, -0x18F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X18F0);
    // 0x80207488: lhu         $t3, 0x4($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0X4);
    // 0x8020748C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80207490: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x80207494: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80207498: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8020749C: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x802074A0: beql        $t6, $zero, L_80207644
    if (ctx->r14 == 0) {
        // 0x802074A4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80207644;
    }
    goto skip_0;
    // 0x802074A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x802074A8: lwc1        $f2, 0xE0($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0XE0);
    // 0x802074AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802074B0: addiu       $a2, $s2, 0x188
    ctx->r6 = ADD32(ctx->r18, 0X188);
    // 0x802074B4: addiu       $a3, $a2, 0xC
    ctx->r7 = ADD32(ctx->r6, 0XC);
    // 0x802074B8: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x802074BC: addiu       $t0, $a2, 0x18
    ctx->r8 = ADD32(ctx->r6, 0X18);
    // 0x802074C0: addiu       $t1, $a2, 0x24
    ctx->r9 = ADD32(ctx->r6, 0X24);
    // 0x802074C4: addiu       $a1, $a2, 0x3C
    ctx->r5 = ADD32(ctx->r6, 0X3C);
    // 0x802074C8: bc1f        L_802074D8
    if (!c1cs) {
        // 0x802074CC: addiu       $t4, $zero, 0x5
        ctx->r12 = ADD32(0, 0X5);
            goto L_802074D8;
    }
    // 0x802074CC: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x802074D0: b           L_802074DC
    // 0x802074D4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_802074DC;
    // 0x802074D4: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_802074D8:
    // 0x802074D8: neg.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = -ctx->f2.fl;
L_802074DC:
    // 0x802074DC: lwc1        $f6, 0x2B00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2B00);
    // 0x802074E0: addiu       $s0, $s2, 0x188
    ctx->r16 = ADD32(ctx->r18, 0X188);
    // 0x802074E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802074E8: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x802074EC: addiu       $s1, $s0, 0xC
    ctx->r17 = ADD32(ctx->r16, 0XC);
    // 0x802074F0: bc1fl       L_8020759C
    if (!c1cs) {
        // 0x802074F4: sw          $a2, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r6;
            goto L_8020759C;
    }
    goto skip_1;
    // 0x802074F4: sw          $a2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r6;
    skip_1:
    // 0x802074F8: addiu       $a2, $s0, 0x18
    ctx->r6 = ADD32(ctx->r16, 0X18);
    // 0x802074FC: addiu       $a3, $s0, 0x24
    ctx->r7 = ADD32(ctx->r16, 0X24);
    // 0x80207500: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80207504: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80207508: jal         0x8020765C
    // 0x8020750C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8020765C(rdram, ctx);
        goto after_3;
    // 0x8020750C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80207510: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80207514: beq         $v0, $zero, L_80207548
    if (ctx->r2 == 0) {
        // 0x80207518: lw          $t1, 0x34($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X34);
            goto L_80207548;
    }
    // 0x80207518: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8020751C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80207520: beq         $v0, $at, L_8020755C
    if (ctx->r2 == ctx->r1) {
        // 0x80207524: addiu       $t8, $s0, 0x3C
        ctx->r24 = ADD32(ctx->r16, 0X3C);
            goto L_8020755C;
    }
    // 0x80207524: addiu       $t8, $s0, 0x3C
    ctx->r24 = ADD32(ctx->r16, 0X3C);
    // 0x80207528: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8020752C: beq         $v0, $at, L_8020756C
    if (ctx->r2 == ctx->r1) {
        // 0x80207530: addiu       $t9, $s0, 0x3C
        ctx->r25 = ADD32(ctx->r16, 0X3C);
            goto L_8020756C;
    }
    // 0x80207530: addiu       $t9, $s0, 0x3C
    ctx->r25 = ADD32(ctx->r16, 0X3C);
    // 0x80207534: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80207538: beq         $v0, $at, L_8020757C
    if (ctx->r2 == ctx->r1) {
        // 0x8020753C: addiu       $t3, $s0, 0x3C
        ctx->r11 = ADD32(ctx->r16, 0X3C);
            goto L_8020757C;
    }
    // 0x8020753C: addiu       $t3, $s0, 0x3C
    ctx->r11 = ADD32(ctx->r16, 0X3C);
    // 0x80207540: b           L_8020758C
    // 0x80207544: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
        goto L_8020758C;
    // 0x80207544: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_80207548:
    // 0x80207548: addiu       $t7, $s0, 0x3C
    ctx->r15 = ADD32(ctx->r16, 0X3C);
    // 0x8020754C: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x80207550: sw          $s1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r17;
    // 0x80207554: b           L_80207588
    // 0x80207558: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
        goto L_80207588;
    // 0x80207558: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
L_8020755C:
    // 0x8020755C: sw          $t8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r24;
    // 0x80207560: sw          $t0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r8;
    // 0x80207564: b           L_80207588
    // 0x80207568: sw          $s0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r16;
        goto L_80207588;
    // 0x80207568: sw          $s0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r16;
L_8020756C:
    // 0x8020756C: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x80207570: sw          $t1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r9;
    // 0x80207574: b           L_80207588
    // 0x80207578: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
        goto L_80207588;
    // 0x80207578: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
L_8020757C:
    // 0x8020757C: sw          $t3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r11;
    // 0x80207580: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x80207584: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
L_80207588:
    // 0x80207588: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_8020758C:
    // 0x8020758C: sb          $t2, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r10;
    // 0x80207590: b           L_802075E0
    // 0x80207594: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
        goto L_802075E0;
    // 0x80207594: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
    // 0x80207598: sw          $a2, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r6;
L_8020759C:
    // 0x8020759C: sw          $a3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r7;
    // 0x802075A0: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x802075A4: sw          $t1, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r9;
    // 0x802075A8: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x802075AC: sb          $t4, 0x52($sp)
    MEM_B(0X52, ctx->r29) = ctx->r12;
    // 0x802075B0: lhu         $t6, 0x4($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X4);
    // 0x802075B4: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x802075B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802075BC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x802075C0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x802075C4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x802075C8: jal         0x802076D8
    // 0x802075CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_802076D8(rdram, ctx);
        goto after_4;
    // 0x802075CC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_4:
    // 0x802075D0: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
    // 0x802075D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x802075D8: jal         0x80207C20
    // 0x802075DC: addiu       $a1, $sp, 0x52
    ctx->r5 = ADD32(ctx->r29, 0X52);
    func_80207C20(rdram, ctx);
        goto after_5;
    // 0x802075DC: addiu       $a1, $sp, 0x52
    ctx->r5 = ADD32(ctx->r29, 0X52);
    after_5:
L_802075E0:
    // 0x802075E0: lbu         $t9, 0x52($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X52);
    // 0x802075E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x802075E8: blezl       $t9, L_8020763C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x802075EC: lbu         $t8, 0x52($sp)
        ctx->r24 = MEM_BU(ctx->r29, 0X52);
            goto L_8020763C;
    }
    goto skip_2;
    // 0x802075EC: lbu         $t8, 0x52($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X52);
    skip_2:
L_802075F0:
    // 0x802075F0: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802075F4: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x802075F8: addu        $v1, $s1, $t2
    ctx->r3 = ADD32(ctx->r17, ctx->r10);
    // 0x802075FC: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80207600: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80207604: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x80207608: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8020760C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x80207610: mflo        $t3
    ctx->r11 = lo;
    // 0x80207614: addu        $v0, $s2, $t3
    ctx->r2 = ADD32(ctx->r18, ctx->r11);
    // 0x80207618: swc1        $f8, 0x260($v0)
    MEM_W(0X260, ctx->r2) = ctx->f8.u32l;
    // 0x8020761C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80207620: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80207624: swc1        $f10, 0x264($v0)
    MEM_W(0X264, ctx->r2) = ctx->f10.u32l;
    // 0x80207628: lbu         $t7, 0x52($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X52);
    // 0x8020762C: slt         $at, $t5, $t7
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80207630: bne         $at, $zero, L_802075F0
    if (ctx->r1 != 0) {
        // 0x80207634: nop
    
            goto L_802075F0;
    }
    // 0x80207634: nop

    // 0x80207638: lbu         $t8, 0x52($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X52);
L_8020763C:
    // 0x8020763C: sb          $t8, 0x2A8($s2)
    MEM_B(0X2A8, ctx->r18) = ctx->r24;
    // 0x80207640: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80207644:
    // 0x80207644: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80207648: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8020764C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80207650: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80207654: jr          $ra
    // 0x80207658: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80207658: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80223928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80223928: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x8022392C: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x80223930: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80223934: jr          $ra
    // 0x80223938: lw          $v0, 0x5114($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5114);
    return;
    // 0x80223938: lw          $v0, 0x5114($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5114);
;}
RECOMP_FUNC void func_80203DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203DA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80203DA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80203DA8: lui         $ra, 0x8025
    ctx->r31 = S32(0X8025 << 16);
    // 0x80203DAC: lui         $t4, 0x8025
    ctx->r12 = S32(0X8025 << 16);
    // 0x80203DB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80203DB4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80203DB8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80203DBC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80203DC0: addiu       $t1, $sp, 0x28
    ctx->r9 = ADD32(ctx->r29, 0X28);
    // 0x80203DC4: addiu       $t4, $t4, 0x7390
    ctx->r12 = ADD32(ctx->r12, 0X7390);
    // 0x80203DC8: addiu       $ra, $ra, 0x6EA0
    ctx->r31 = ADD32(ctx->r31, 0X6EA0);
    // 0x80203DCC: addiu       $t5, $zero, 0x54
    ctx->r13 = ADD32(0, 0X54);
    // 0x80203DD0: addiu       $t3, $zero, -0x4
    ctx->r11 = ADD32(0, -0X4);
    // 0x80203DD4: addiu       $t2, $zero, 0x24
    ctx->r10 = ADD32(0, 0X24);
    // 0x80203DD8: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
L_80203DDC:
    // 0x80203DDC: and         $t1, $t6, $t3
    ctx->r9 = ctx->r14 & ctx->r11;
    // 0x80203DE0: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80203DE4: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80203DE8: beq         $v0, $t2, L_80203FB4
    if (ctx->r2 == ctx->r10) {
        // 0x80203DEC: slti        $at, $v0, 0x24
        ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
            goto L_80203FB4;
    }
    // 0x80203DEC: slti        $at, $v0, 0x24
    ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
    // 0x80203DF0: bne         $at, $zero, L_80203E08
    if (ctx->r1 != 0) {
        // 0x80203DF4: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80203E08;
    }
    // 0x80203DF4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203DF8: jal         0x80231A24
    // 0x80203DFC: addiu       $a0, $a0, 0x2734
    ctx->r4 = ADD32(ctx->r4, 0X2734);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80203DFC: addiu       $a0, $a0, 0x2734
    ctx->r4 = ADD32(ctx->r4, 0X2734);
    after_0:
    // 0x80203E00: b           L_80203FB8
    // 0x80203E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80203FB8;
    // 0x80203E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203E08:
    // 0x80203E08: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80203E0C: beq         $at, $zero, L_80203EE4
    if (ctx->r1 == 0) {
        // 0x80203E10: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80203EE4;
    }
    // 0x80203E10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80203E14: multu       $v0, $t5
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203E18: mflo        $t7
    ctx->r15 = lo;
    // 0x80203E1C: addu        $a1, $t4, $t7
    ctx->r5 = ADD32(ctx->r12, ctx->r15);
    // 0x80203E20: lw          $t8, 0x50($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X50);
    // 0x80203E24: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80203E28: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80203E2C: blezl       $t8, L_80203DDC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80203E30: addiu       $t6, $t1, 0x3
        ctx->r14 = ADD32(ctx->r9, 0X3);
            goto L_80203DDC;
    }
    goto skip_0;
    // 0x80203E30: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
    skip_0:
    // 0x80203E34: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_80203E38:
    // 0x80203E38: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80203E3C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80203E40: bnel        $t9, $t6, L_80203EC8
    if (ctx->r25 != ctx->r14) {
        // 0x80203E44: lw          $t9, 0x50($t0)
        ctx->r25 = MEM_W(ctx->r8, 0X50);
            goto L_80203EC8;
    }
    goto skip_1;
    // 0x80203E44: lw          $t9, 0x50($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X50);
    skip_1:
    // 0x80203E48: lw          $t8, 0x4($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X4);
    // 0x80203E4C: bnel        $t7, $t8, L_80203EC8
    if (ctx->r15 != ctx->r24) {
        // 0x80203E50: lw          $t9, 0x50($t0)
        ctx->r25 = MEM_W(ctx->r8, 0X50);
            goto L_80203EC8;
    }
    goto skip_2;
    // 0x80203E50: lw          $t9, 0x50($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X50);
    skip_2:
    // 0x80203E54: lw          $a0, 0x50($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X50);
    // 0x80203E58: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80203E5C: sll         $t6, $v1, 3
    ctx->r14 = S32(ctx->r3 << 3);
    // 0x80203E60: addiu       $t9, $a0, -0x1
    ctx->r25 = ADD32(ctx->r4, -0X1);
    // 0x80203E64: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80203E68: beq         $at, $zero, L_80203E9C
    if (ctx->r1 == 0) {
        // 0x80203E6C: addu        $v0, $a1, $t6
        ctx->r2 = ADD32(ctx->r5, ctx->r14);
            goto L_80203E9C;
    }
    // 0x80203E6C: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x80203E70: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
L_80203E74:
    // 0x80203E74: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x80203E78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80203E7C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80203E80: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80203E84: lw          $a0, 0x50($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X50);
    // 0x80203E88: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80203E8C: addiu       $t9, $a0, -0x1
    ctx->r25 = ADD32(ctx->r4, -0X1);
    // 0x80203E90: slt         $at, $v1, $t9
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80203E94: bnel        $at, $zero, L_80203E74
    if (ctx->r1 != 0) {
        // 0x80203E98: lw          $t7, 0x8($v0)
        ctx->r15 = MEM_W(ctx->r2, 0X8);
            goto L_80203E74;
    }
    goto skip_3;
    // 0x80203E98: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    skip_3:
L_80203E9C:
    // 0x80203E9C: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80203EA0: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80203EA4: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x80203EA8: lw          $t8, 0x50($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X50);
    // 0x80203EAC: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80203EB0: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x80203EB4: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x80203EB8: lw          $t7, 0x50($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X50);
    // 0x80203EBC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80203EC0: sw          $t8, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->r24;
    // 0x80203EC4: lw          $t9, 0x50($t0)
    ctx->r25 = MEM_W(ctx->r8, 0X50);
L_80203EC8:
    // 0x80203EC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80203ECC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80203ED0: slt         $at, $a2, $t9
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80203ED4: bnel        $at, $zero, L_80203E38
    if (ctx->r1 != 0) {
        // 0x80203ED8: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_80203E38;
    }
    goto skip_4;
    // 0x80203ED8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    skip_4:
    // 0x80203EDC: b           L_80203DDC
    // 0x80203EE0: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
        goto L_80203DDC;
    // 0x80203EE0: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
L_80203EE4:
    // 0x80203EE4: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80203EE8: mflo        $t6
    ctx->r14 = lo;
    // 0x80203EEC: addu        $a1, $ra, $t6
    ctx->r5 = ADD32(ctx->r31, ctx->r14);
    // 0x80203EF0: lw          $t7, 0x20($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X20);
    // 0x80203EF4: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x80203EF8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80203EFC: blezl       $t7, L_80203DDC
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80203F00: addiu       $t6, $t1, 0x3
        ctx->r14 = ADD32(ctx->r9, 0X3);
            goto L_80203DDC;
    }
    goto skip_5;
    // 0x80203F00: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
    skip_5:
    // 0x80203F04: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
L_80203F08:
    // 0x80203F08: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80203F0C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80203F10: bnel        $t8, $t9, L_80203F98
    if (ctx->r24 != ctx->r25) {
        // 0x80203F14: lw          $t8, 0x20($t0)
        ctx->r24 = MEM_W(ctx->r8, 0X20);
            goto L_80203F98;
    }
    goto skip_6;
    // 0x80203F14: lw          $t8, 0x20($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X20);
    skip_6:
    // 0x80203F18: lw          $t7, 0x4($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X4);
    // 0x80203F1C: bnel        $t6, $t7, L_80203F98
    if (ctx->r14 != ctx->r15) {
        // 0x80203F20: lw          $t8, 0x20($t0)
        ctx->r24 = MEM_W(ctx->r8, 0X20);
            goto L_80203F98;
    }
    goto skip_7;
    // 0x80203F20: lw          $t8, 0x20($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X20);
    skip_7:
    // 0x80203F24: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x80203F28: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80203F2C: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x80203F30: addiu       $t8, $a0, -0x1
    ctx->r24 = ADD32(ctx->r4, -0X1);
    // 0x80203F34: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80203F38: beq         $at, $zero, L_80203F6C
    if (ctx->r1 == 0) {
        // 0x80203F3C: addu        $v0, $a1, $t9
        ctx->r2 = ADD32(ctx->r5, ctx->r25);
            goto L_80203F6C;
    }
    // 0x80203F3C: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x80203F40: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
L_80203F44:
    // 0x80203F44: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x80203F48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80203F4C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80203F50: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80203F54: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x80203F58: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80203F5C: addiu       $t8, $a0, -0x1
    ctx->r24 = ADD32(ctx->r4, -0X1);
    // 0x80203F60: slt         $at, $v1, $t8
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80203F64: bnel        $at, $zero, L_80203F44
    if (ctx->r1 != 0) {
        // 0x80203F68: lw          $t6, 0x8($v0)
        ctx->r14 = MEM_W(ctx->r2, 0X8);
            goto L_80203F44;
    }
    goto skip_8;
    // 0x80203F68: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    skip_8:
L_80203F6C:
    // 0x80203F6C: sll         $t9, $a0, 3
    ctx->r25 = S32(ctx->r4 << 3);
    // 0x80203F70: addu        $t6, $a1, $t9
    ctx->r14 = ADD32(ctx->r5, ctx->r25);
    // 0x80203F74: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x80203F78: lw          $t7, 0x20($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X20);
    // 0x80203F7C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80203F80: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x80203F84: sw          $zero, 0x4($t9)
    MEM_W(0X4, ctx->r25) = 0;
    // 0x80203F88: lw          $t6, 0x20($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X20);
    // 0x80203F8C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80203F90: sw          $t7, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r15;
    // 0x80203F94: lw          $t8, 0x20($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X20);
L_80203F98:
    // 0x80203F98: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80203F9C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80203FA0: slt         $at, $a2, $t8
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80203FA4: bnel        $at, $zero, L_80203F08
    if (ctx->r1 != 0) {
        // 0x80203FA8: lw          $t8, 0x20($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X20);
            goto L_80203F08;
    }
    goto skip_9;
    // 0x80203FA8: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    skip_9:
    // 0x80203FAC: b           L_80203DDC
    // 0x80203FB0: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
        goto L_80203DDC;
    // 0x80203FB0: addiu       $t6, $t1, 0x3
    ctx->r14 = ADD32(ctx->r9, 0X3);
L_80203FB4:
    // 0x80203FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203FB8:
    // 0x80203FB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80203FBC: jr          $ra
    // 0x80203FC0: nop

    return;
    // 0x80203FC0: nop

;}
RECOMP_FUNC void func_8023FDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023FDB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023FDB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023FDBC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8023FDC0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023FDC4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023FDC8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023FDCC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8023FDD0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8023FDD4: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
L_8023FDD8:
    // 0x8023FDD8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023FDDC: beql        $s1, $zero, L_8023FDD8
    if (ctx->r17 == 0) {
        // 0x8023FDE0: lw          $s1, 0xC($v0)
        ctx->r17 = MEM_W(ctx->r2, 0XC);
            goto L_8023FDD8;
    }
    goto skip_0;
    // 0x8023FDE0: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x8023FDE4: lbu         $t6, 0x34($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X34);
    // 0x8023FDE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8023FDEC: blez        $t6, L_8023FE20
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8023FDF0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8023FE20;
    }
    // 0x8023FDF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_8023FDF4:
    // 0x8023FDF4: jal         0x8023FD34
    // 0x8023FDF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FD34(rdram, ctx);
        goto after_0;
    // 0x8023FDF8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8023FDFC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023FE00: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8023FE04: jal         0x8023FCE0
    // 0x8023FE08: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8023FCE0(rdram, ctx);
        goto after_1;
    // 0x8023FE08: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x8023FE0C: lbu         $t7, 0x34($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X34);
    // 0x8023FE10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023FE14: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8023FE18: bnel        $at, $zero, L_8023FDF4
    if (ctx->r1 != 0) {
        // 0x8023FE1C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8023FDF4;
    }
    goto skip_1;
    // 0x8023FE1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
L_8023FE20:
    // 0x8023FE20: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8023FE24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023FE28: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8023FE2C: beql        $t9, $zero, L_8023FE54
    if (ctx->r25 == 0) {
        // 0x8023FE30: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8023FE54;
    }
    goto skip_2;
    // 0x8023FE30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x8023FE34: jal         0x8023FD34
    // 0x8023FE38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8023FD34(rdram, ctx);
        goto after_2;
    // 0x8023FE38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8023FE3C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8023FE40: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023FE44: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8023FE48: jal         0x8023FCE0
    // 0x8023FE4C: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    func_8023FCE0(rdram, ctx);
        goto after_3;
    // 0x8023FE4C: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    after_3:
    // 0x8023FE50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8023FE54:
    // 0x8023FE54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023FE58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FE5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023FE60: jr          $ra
    // 0x8023FE64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023FE64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80203654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80203654: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80203658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8020365C: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80203660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80203664: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80203668: beq         $at, $zero, L_80203710
    if (ctx->r1 == 0) {
        // 0x8020366C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_80203710;
    }
    // 0x8020366C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80203670: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203674: addiu       $a0, $a0, 0x2558
    ctx->r4 = ADD32(ctx->r4, 0X2558);
    // 0x80203678: jal         0x802011D0
    // 0x8020367C: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    func_802011D0(rdram, ctx);
        goto after_0;
    // 0x8020367C: sb          $a2, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r6;
    after_0:
    // 0x80203680: lbu         $a2, 0x1B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1B);
    // 0x80203684: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80203688: lw          $t6, -0x4678($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4678);
    // 0x8020368C: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x80203690: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203694: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80203698: lh          $a1, 0x0($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X0);
    // 0x8020369C: jal         0x80234E90
    // 0x802036A0: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    func_80234E90(rdram, ctx);
        goto after_1;
    // 0x802036A0: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    after_1:
    // 0x802036A4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802036A8: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x802036AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802036B0: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802036B4: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x802036B8: addiu       $a1, $a1, 0x2584
    ctx->r5 = ADD32(ctx->r5, 0X2584);
    // 0x802036BC: addiu       $a2, $zero, 0x469
    ctx->r6 = ADD32(0, 0X469);
    // 0x802036C0: bne         $t9, $at, L_802036DC
    if (ctx->r25 != ctx->r1) {
        // 0x802036C4: nop
    
            goto L_802036DC;
    }
    // 0x802036C4: nop

    // 0x802036C8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802036CC: jal         0x80231C9C
    // 0x802036D0: addiu       $a0, $a0, 0x256C
    ctx->r4 = ADD32(ctx->r4, 0X256C);
    func_80231C9C(rdram, ctx);
        goto after_2;
    // 0x802036D0: addiu       $a0, $a0, 0x256C
    ctx->r4 = ADD32(ctx->r4, 0X256C);
    after_2:
    // 0x802036D4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802036D8: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
L_802036DC:
    // 0x802036DC: jal         0x80234EB0
    // 0x802036E0: nop

    func_80234EB0(rdram, ctx);
        goto after_3;
    // 0x802036E0: nop

    after_3:
    // 0x802036E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802036E8: bne         $v0, $at, L_802036FC
    if (ctx->r2 != ctx->r1) {
        // 0x802036EC: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_802036FC;
    }
    // 0x802036EC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802036F0: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    // 0x802036F4: jal         0x80235080
    // 0x802036F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80235080(rdram, ctx);
        goto after_4;
    // 0x802036F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_802036FC:
    // 0x802036FC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203700: jal         0x80234ED0
    // 0x80203704: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    func_80234ED0(rdram, ctx);
        goto after_5;
    // 0x80203704: lw          $a0, -0x1A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1A4C);
    after_5:
    // 0x80203708: b           L_80203720
    // 0x8020370C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80203720;
    // 0x8020370C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203710:
    // 0x80203710: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80203714: jal         0x802011D0
    // 0x80203718: addiu       $a0, $a0, 0x258C
    ctx->r4 = ADD32(ctx->r4, 0X258C);
    func_802011D0(rdram, ctx);
        goto after_6;
    // 0x80203718: addiu       $a0, $a0, 0x258C
    ctx->r4 = ADD32(ctx->r4, 0X258C);
    after_6:
    // 0x8020371C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80203720:
    // 0x80203720: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80203724: jr          $ra
    // 0x80203728: nop

    return;
    // 0x80203728: nop

;}
RECOMP_FUNC void func_80239E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80239E44: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80239E48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80239E4C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80239E50: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80239E54: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80239E58: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80239E5C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80239E60: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80239E64: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80239E68: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80239E6C: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x80239E70: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80239E74: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80239E78: jal         0x802456A0
    // 0x80239E7C: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    func_802456A0(rdram, ctx);
        goto after_0;
    // 0x80239E7C: sb          $a3, 0x65($a0)
    MEM_B(0X65, ctx->r4) = ctx->r7;
    after_0:
    // 0x80239E80: beq         $v0, $zero, L_80239E90
    if (ctx->r2 == 0) {
        // 0x80239E84: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80239E90;
    }
    // 0x80239E84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80239E88: b           L_80239F08
    // 0x80239E8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80239F08;
    // 0x80239E8C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239E90:
    // 0x80239E90: sll         $s4, $s1, 3
    ctx->r20 = S32(ctx->r17 << 3);
    // 0x80239E94: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x80239E98: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
L_80239E9C:
    // 0x80239E9C: addu        $a2, $s4, $s0
    ctx->r6 = ADD32(ctx->r20, ctx->r16);
    // 0x80239EA0: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x80239EA4: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x80239EA8: lw          $a1, 0x8($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X8);
    // 0x80239EAC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80239EB0: jal         0x80245710
    // 0x80239EB4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80245710(rdram, ctx);
        goto after_1;
    // 0x80239EB4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_1:
    // 0x80239EB8: beq         $v0, $zero, L_80239EDC
    if (ctx->r2 == 0) {
        // 0x80239EBC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80239EDC;
    }
    // 0x80239EBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80239EC0: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    // 0x80239EC4: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80239EC8: jal         0x802456A0
    // 0x80239ECC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_802456A0(rdram, ctx);
        goto after_2;
    // 0x80239ECC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x80239ED0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80239ED4: b           L_80239F08
    // 0x80239ED8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80239F08;
    // 0x80239ED8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239EDC:
    // 0x80239EDC: jal         0x80244AC0
    // 0x80239EE0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80244AC0(rdram, ctx);
        goto after_3;
    // 0x80239EE0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_3:
    // 0x80239EE4: lhu         $t8, 0x0($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X0);
    // 0x80239EE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80239EEC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80239EF0: bne         $s0, $s5, L_80239E9C
    if (ctx->r16 != ctx->r21) {
        // 0x80239EF4: sh          $t9, 0x0($s2)
        MEM_H(0X0, ctx->r18) = ctx->r25;
            goto L_80239E9C;
    }
    // 0x80239EF4: sh          $t9, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r25;
    // 0x80239EF8: sb          $zero, 0x65($s3)
    MEM_B(0X65, ctx->r19) = 0;
    // 0x80239EFC: jal         0x802456A0
    // 0x80239F00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_802456A0(rdram, ctx);
        goto after_4;
    // 0x80239F00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x80239F04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80239F08:
    // 0x80239F08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80239F0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80239F10: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80239F14: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80239F18: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80239F1C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80239F20: jr          $ra
    // 0x80239F24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80239F24: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022B7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8022B7B4: beq         $a2, $zero, L_8022B800
    if (ctx->r6 == 0) {
        // 0x8022B7B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8022B800;
    }
    // 0x8022B7B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B7BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8022B7C0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
L_8022B7C4:
    // 0x8022B7C4: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B7C8: lbu         $a1, 0x0($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X0);
    // 0x8022B7CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B7D0: sltu        $at, $v0, $a2
    ctx->r1 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x8022B7D4: beq         $a0, $a1, L_8022B7F8
    if (ctx->r4 == ctx->r5) {
        // 0x8022B7D8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8022B7F8;
    }
    // 0x8022B7D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022B7DC: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022B7E0: beq         $at, $zero, L_8022B7F0
    if (ctx->r1 == 0) {
        // 0x8022B7E4: nop
    
            goto L_8022B7F0;
    }
    // 0x8022B7E4: nop

    // 0x8022B7E8: jr          $ra
    // 0x8022B7EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8022B7EC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8022B7F0:
    // 0x8022B7F0: jr          $ra
    // 0x8022B7F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8022B7F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B7F8:
    // 0x8022B7F8: bne         $at, $zero, L_8022B7C4
    if (ctx->r1 != 0) {
        // 0x8022B7FC: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8022B7C4;
    }
    // 0x8022B7FC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
L_8022B800:
    // 0x8022B800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8022B804: jr          $ra
    // 0x8022B808: nop

    return;
    // 0x8022B808: nop

;}
RECOMP_FUNC void func_80219500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80219500: addiu       $sp, $sp, -0x150
    ctx->r29 = ADD32(ctx->r29, -0X150);
    // 0x80219504: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80219508: lw          $fp, 0x168($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X168);
    // 0x8021950C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80219510: addiu       $s0, $sp, 0x110
    ctx->r16 = ADD32(ctx->r29, 0X110);
    // 0x80219514: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80219518: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x8021951C: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x80219520: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80219524: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80219528: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8021952C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80219530: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80219534: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80219538: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8021953C: swc1        $f14, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f14.u32l;
    // 0x80219540: sw          $a2, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r6;
    // 0x80219544: sw          $a3, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r7;
    // 0x80219548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8021954C: jal         0x8022A2F0
    // 0x80219550: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_8022A2F0(rdram, ctx);
        goto after_0;
    // 0x80219550: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_0:
    // 0x80219554: lwc1        $f4, 0x154($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X154);
    // 0x80219558: lwc1        $f6, 0x158($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X158);
    // 0x8021955C: lwc1        $f8, 0x15C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X15C);
    // 0x80219560: lwc1        $f10, 0x160($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X160);
    // 0x80219564: lwc1        $f16, 0x164($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X164);
    // 0x80219568: addiu       $a1, $sp, 0x104
    ctx->r5 = ADD32(ctx->r29, 0X104);
    // 0x8021956C: swc1        $f20, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f20.u32l;
    // 0x80219570: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80219574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80219578: swc1        $f4, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f4.u32l;
    // 0x8021957C: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    // 0x80219580: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x80219584: swc1        $f10, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f10.u32l;
    // 0x80219588: jal         0x8022A4F4
    // 0x8021958C: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    func_8022A4F4(rdram, ctx);
        goto after_1;
    // 0x8021958C: swc1        $f16, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x80219590: addiu       $a1, $sp, 0xF8
    ctx->r5 = ADD32(ctx->r29, 0XF8);
    // 0x80219594: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80219598: jal         0x8022A4F4
    // 0x8021959C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8022A4F4(rdram, ctx);
        goto after_2;
    // 0x8021959C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802195A0: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x802195A4: addiu       $s5, $s5, -0x3C68
    ctx->r21 = ADD32(ctx->r21, -0X3C68);
    // 0x802195A8: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x802195AC: lw          $s7, 0x170($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X170);
    // 0x802195B0: lw          $a2, 0x10C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10C);
    // 0x802195B4: sh          $t6, 0xE6($sp)
    MEM_H(0XE6, ctx->r29) = ctx->r14;
    // 0x802195B8: lbu         $t7, 0x11($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X11);
    // 0x802195BC: addiu       $t3, $sp, 0xEC
    ctx->r11 = ADD32(ctx->r29, 0XEC);
    // 0x802195C0: addiu       $t4, $sp, 0xE8
    ctx->r12 = ADD32(ctx->r29, 0XE8);
    // 0x802195C4: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x802195C8: beq         $t8, $zero, L_80219620
    if (ctx->r24 == 0) {
        // 0x802195CC: addiu       $t5, $sp, 0xE0
        ctx->r13 = ADD32(ctx->r29, 0XE0);
            goto L_80219620;
    }
    // 0x802195CC: addiu       $t5, $sp, 0xE0
    ctx->r13 = ADD32(ctx->r29, 0XE0);
    // 0x802195D0: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x802195D4: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x802195D8: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x802195DC: addiu       $t6, $sp, 0xDE
    ctx->r14 = ADD32(ctx->r29, 0XDE);
    // 0x802195E0: addiu       $t2, $t9, 0x8
    ctx->r10 = ADD32(ctx->r25, 0X8);
    // 0x802195E4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x802195E8: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x802195EC: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x802195F0: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x802195F4: lw          $a3, 0xF8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF8);
    // 0x802195F8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x802195FC: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80219600: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x80219604: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80219608: jal         0x80219B84
    // 0x8021960C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80219B84(rdram, ctx);
        goto after_3;
    // 0x8021960C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80219610: bne         $v0, $zero, L_80219620
    if (ctx->r2 != 0) {
        // 0x80219614: sb          $v0, 0xF7($sp)
        MEM_B(0XF7, ctx->r29) = ctx->r2;
            goto L_80219620;
    }
    // 0x80219614: sb          $v0, 0xF7($sp)
    MEM_B(0XF7, ctx->r29) = ctx->r2;
    // 0x80219618: b           L_80219B50
    // 0x8021961C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80219B50;
    // 0x8021961C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80219620:
    // 0x80219620: lbu         $t7, 0x11($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X11);
    // 0x80219624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80219628: addiu       $s0, $sp, 0x98
    ctx->r16 = ADD32(ctx->r29, 0X98);
    // 0x8021962C: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x80219630: bne         $t8, $zero, L_802197FC
    if (ctx->r24 != 0) {
        // 0x80219634: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_802197FC;
    }
    // 0x80219634: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80219638: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8021963C: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80219640: lw          $t3, -0x3C5C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C5C);
    // 0x80219644: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x80219648: subu        $t2, $t2, $t9
    ctx->r10 = SUB32(ctx->r10, ctx->r25);
    // 0x8021964C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80219650: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80219654: lh          $a1, 0xE0($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XE0);
    // 0x80219658: jal         0x8021A528
    // 0x8021965C: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    func_8021A528(rdram, ctx);
        goto after_4;
    // 0x8021965C: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    after_4:
    // 0x80219660: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80219664: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80219668: lw          $t5, -0x3C64($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C64);
    // 0x8021966C: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x80219670: lw          $t4, -0x3C6C($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C6C);
    // 0x80219674: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80219678: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8021967C: sw          $t4, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r12;
    // 0x80219680: lbu         $v0, 0xF7($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XF7);
    // 0x80219684: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80219688: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x8021968C: bnel        $v0, $at, L_802196B4
    if (ctx->r2 != ctx->r1) {
        // 0x80219690: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802196B4;
    }
    goto skip_0;
    // 0x80219690: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_0:
    // 0x80219694: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80219698: lw          $t9, -0x3C60($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C60);
    // 0x8021969C: lwc1        $f6, 0xEC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x802196A0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802196A4: addu        $t6, $t9, $t3
    ctx->r14 = ADD32(ctx->r25, ctx->r11);
    // 0x802196A8: b           L_802197A4
    // 0x802196AC: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
        goto L_802197A4;
    // 0x802196AC: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x802196B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_802196B4:
    // 0x802196B4: bne         $v0, $at, L_8021977C
    if (ctx->r2 != ctx->r1) {
        // 0x802196B8: lui         $t5, 0x8026
        ctx->r13 = S32(0X8026 << 16);
            goto L_8021977C;
    }
    // 0x802196B8: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x802196BC: lw          $t7, 0x0($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X0);
    // 0x802196C0: lw          $t5, -0x3C60($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C60);
    // 0x802196C4: lwc1        $f8, 0xEC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x802196C8: sll         $t4, $t7, 2
    ctx->r12 = S32(ctx->r15 << 2);
    // 0x802196CC: addu        $t8, $t5, $t4
    ctx->r24 = ADD32(ctx->r13, ctx->r12);
    // 0x802196D0: swc1        $f8, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f8.u32l;
    // 0x802196D4: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x802196D8: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x802196DC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802196E0: addiu       $t9, $t2, 0x1
    ctx->r25 = ADD32(ctx->r10, 0X1);
    // 0x802196E4: sw          $t9, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r25;
    // 0x802196E8: lhu         $t3, 0xBD8($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XBD8);
    // 0x802196EC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x802196F0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x802196F4: slt         $at, $t9, $t3
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x802196F8: bne         $at, $zero, L_80219718
    if (ctx->r1 != 0) {
        // 0x802196FC: addiu       $a1, $a1, 0x307C
        ctx->r5 = ADD32(ctx->r5, 0X307C);
            goto L_80219718;
    }
    // 0x802196FC: addiu       $a1, $a1, 0x307C
    ctx->r5 = ADD32(ctx->r5, 0X307C);
    // 0x80219700: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80219704: jal         0x80231C58
    // 0x80219708: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_5;
    // 0x80219708: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_5:
    // 0x8021970C: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80219710: addiu       $s1, $t6, -0x1
    ctx->r17 = ADD32(ctx->r14, -0X1);
    // 0x80219714: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
L_80219718:
    // 0x80219718: lui         $t4, 0x8026
    ctx->r12 = S32(0X8026 << 16);
    // 0x8021971C: lw          $t4, -0x3C64($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3C64);
    // 0x80219720: lui         $t5, 0x8026
    ctx->r13 = S32(0X8026 << 16);
    // 0x80219724: lw          $t5, -0x3C6C($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3C6C);
    // 0x80219728: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x8021972C: addu        $t2, $t4, $t8
    ctx->r10 = ADD32(ctx->r12, ctx->r24);
    // 0x80219730: sw          $t5, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r13;
    // 0x80219734: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x80219738: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x8021973C: lw          $t6, -0x3C5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C5C);
    // 0x80219740: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x80219744: subu        $t3, $t3, $t9
    ctx->r11 = SUB32(ctx->r11, ctx->r25);
    // 0x80219748: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8021974C: lh          $a1, 0xDE($sp)
    ctx->r5 = MEM_H(ctx->r29, 0XDE);
    // 0x80219750: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80219754: jal         0x8021A528
    // 0x80219758: addu        $a2, $t3, $t6
    ctx->r6 = ADD32(ctx->r11, ctx->r14);
    func_8021A528(rdram, ctx);
        goto after_6;
    // 0x80219758: addu        $a2, $t3, $t6
    ctx->r6 = ADD32(ctx->r11, ctx->r14);
    after_6:
    // 0x8021975C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80219760: lui         $t7, 0x8026
    ctx->r15 = S32(0X8026 << 16);
    // 0x80219764: lw          $t7, -0x3C60($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C60);
    // 0x80219768: lwc1        $f10, 0xE8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8021976C: sll         $t8, $t4, 2
    ctx->r24 = S32(ctx->r12 << 2);
    // 0x80219770: addu        $t5, $t7, $t8
    ctx->r13 = ADD32(ctx->r15, ctx->r24);
    // 0x80219774: b           L_802197A4
    // 0x80219778: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
        goto L_802197A4;
    // 0x80219778: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
L_8021977C:
    // 0x8021977C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80219780: bne         $v0, $at, L_802197A4
    if (ctx->r2 != ctx->r1) {
        // 0x80219784: lui         $t2, 0x8026
        ctx->r10 = S32(0X8026 << 16);
            goto L_802197A4;
    }
    // 0x80219784: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x80219788: lw          $t9, 0x0($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X0);
    // 0x8021978C: lw          $t2, -0x3C60($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C60);
    // 0x80219790: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80219794: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80219798: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x8021979C: addu        $t6, $t2, $t3
    ctx->r14 = ADD32(ctx->r10, ctx->r11);
    // 0x802197A0: swc1        $f16, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f16.u32l;
L_802197A4:
    // 0x802197A4: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x802197A8: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x802197AC: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802197B0: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x802197B4: sw          $t7, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r15;
    // 0x802197B8: lhu         $t8, 0xBD8($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XBD8);
    // 0x802197BC: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x802197C0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x802197C4: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802197C8: bne         $at, $zero, L_802197E8
    if (ctx->r1 != 0) {
        // 0x802197CC: addiu       $a1, $a1, 0x3088
        ctx->r5 = ADD32(ctx->r5, 0X3088);
            goto L_802197E8;
    }
    // 0x802197CC: addiu       $a1, $a1, 0x3088
    ctx->r5 = ADD32(ctx->r5, 0X3088);
    // 0x802197D0: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x802197D4: jal         0x80231C58
    // 0x802197D8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    func_80231C58(rdram, ctx);
        goto after_7;
    // 0x802197D8: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    after_7:
    // 0x802197DC: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x802197E0: addiu       $s1, $t5, -0x1
    ctx->r17 = ADD32(ctx->r13, -0X1);
    // 0x802197E4: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
L_802197E8:
    // 0x802197E8: lh          $t2, 0xE6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0XE6);
    // 0x802197EC: subu        $v0, $s1, $t2
    ctx->r2 = SUB32(ctx->r17, ctx->r10);
    // 0x802197F0: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x802197F4: b           L_80219B50
    // 0x802197F8: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
        goto L_80219B50;
    // 0x802197F8: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
L_802197FC:
    // 0x802197FC: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x80219800: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80219804: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80219808: sra         $t5, $t8, 16
    ctx->r13 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8021980C: slti        $at, $t5, 0x10
    ctx->r1 = SIGNED(ctx->r13) < 0X10 ? 1 : 0;
    // 0x80219810: addu        $t7, $s0, $t4
    ctx->r15 = ADD32(ctx->r16, ctx->r12);
    // 0x80219814: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
    // 0x80219818: bne         $at, $zero, L_802197FC
    if (ctx->r1 != 0) {
        // 0x8021981C: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_802197FC;
    }
    // 0x8021981C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x80219820: lw          $t9, 0x16C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X16C);
    // 0x80219824: sh          $zero, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = 0;
    // 0x80219828: addiu       $s6, $zero, 0xA
    ctx->r22 = ADD32(0, 0XA);
    // 0x8021982C: lbu         $t2, 0x4($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X4);
    // 0x80219830: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80219834: blezl       $t2, L_80219B2C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80219838: lw          $t3, 0x0($s5)
        ctx->r11 = MEM_W(ctx->r21, 0X0);
            goto L_80219B2C;
    }
    goto skip_1;
    // 0x80219838: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    skip_1:
    // 0x8021983C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80219840: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
L_80219844:
    // 0x80219844: lw          $t3, 0x16C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X16C);
    // 0x80219848: lh          $t4, 0xE4($sp)
    ctx->r12 = MEM_H(ctx->r29, 0XE4);
    // 0x8021984C: lw          $t6, 0x0($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X0);
    // 0x80219850: sll         $t7, $t4, 4
    ctx->r15 = S32(ctx->r12 << 4);
    // 0x80219854: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80219858: lw          $s4, 0xC($t8)
    ctx->r20 = MEM_W(ctx->r24, 0XC);
    // 0x8021985C: or          $s4, $s4, $a0
    ctx->r20 = ctx->r20 | ctx->r4;
L_80219860:
    // 0x80219860: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x80219864: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80219868: lw          $t0, 0x4($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X4);
    // 0x8021986C: and         $v0, $a2, $at
    ctx->r2 = ctx->r6 & ctx->r1;
    // 0x80219870: bne         $v1, $v0, L_80219888
    if (ctx->r3 != ctx->r2) {
        // 0x80219874: lui         $at, 0x400
        ctx->r1 = S32(0X400 << 16);
            goto L_80219888;
    }
    // 0x80219874: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x80219878: lw          $t5, 0x16C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X16C);
    // 0x8021987C: lbu         $v0, 0x4($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X4);
    // 0x80219880: b           L_80219B10
    // 0x80219884: lh          $t5, 0xE4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XE4);
        goto L_80219B10;
    // 0x80219884: lh          $t5, 0xE4($sp)
    ctx->r13 = MEM_H(ctx->r29, 0XE4);
L_80219888:
    // 0x80219888: bne         $v0, $at, L_80219910
    if (ctx->r2 != ctx->r1) {
        // 0x8021988C: lw          $t1, 0x0($s7)
        ctx->r9 = MEM_W(ctx->r23, 0X0);
            goto L_80219910;
    }
    // 0x8021988C: lw          $t1, 0x0($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X0);
    // 0x80219890: subu        $v1, $t0, $t1
    ctx->r3 = SUB32(ctx->r8, ctx->r9);
    // 0x80219894: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80219898: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8021989C: lui         $at, 0xF0
    ctx->r1 = S32(0XF0 << 16);
    // 0x802198A0: and         $a1, $a2, $at
    ctx->r5 = ctx->r6 & ctx->r1;
    // 0x802198A4: sra         $t2, $a1, 20
    ctx->r10 = S32(SIGNED(ctx->r5) >> 20);
    // 0x802198A8: srl         $t9, $v1, 4
    ctx->r25 = S32(U32(ctx->r3) >> 4);
    // 0x802198AC: addiu       $a1, $t2, 0x1
    ctx->r5 = ADD32(ctx->r10, 0X1);
    // 0x802198B0: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x802198B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802198B8: blez        $a1, L_80219B00
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802198BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80219B00;
    }
    // 0x802198BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802198C0: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x802198C4: and         $a1, $a2, $at
    ctx->r5 = ctx->r6 & ctx->r1;
    // 0x802198C8: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802198CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802198D0: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
L_802198D4:
    // 0x802198D4: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x802198D8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x802198DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802198E0: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x802198E4: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802198E8: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x802198EC: addu        $t5, $t8, $a1
    ctx->r13 = ADD32(ctx->r24, ctx->r5);
    // 0x802198F0: slt         $at, $t2, $a0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802198F4: sw          $t6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r14;
    // 0x802198F8: bne         $at, $zero, L_802198D4
    if (ctx->r1 != 0) {
        // 0x802198FC: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_802198D4;
    }
    // 0x802198FC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80219900: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80219904: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80219908: b           L_80219860
    // 0x8021990C: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
        goto L_80219860;
    // 0x8021990C: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
L_80219910:
    // 0x80219910: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80219914: and         $t3, $t0, $at
    ctx->r11 = ctx->r8 & ctx->r1;
    // 0x80219918: div         $zero, $t3, $s6
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r22)));
    // 0x8021991C: mflo        $t4
    ctx->r12 = lo;
    // 0x80219920: andi        $t5, $t0, 0xFF00
    ctx->r13 = ctx->r8 & 0XFF00;
    // 0x80219924: sra         $t7, $t4, 16
    ctx->r15 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80219928: div         $zero, $t5, $s6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r22)));
    // 0x8021992C: mflo        $t9
    ctx->r25 = lo;
    // 0x80219930: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80219934: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x80219938: div         $zero, $t7, $s6
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r22)));
    // 0x8021993C: bne         $s6, $zero, L_80219948
    if (ctx->r22 != 0) {
        // 0x80219940: nop
    
            goto L_80219948;
    }
    // 0x80219940: nop

    // 0x80219944: break       7
    do_break(2149685572);
L_80219948:
    // 0x80219948: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8021994C: bne         $s6, $at, L_80219960
    if (ctx->r22 != ctx->r1) {
        // 0x80219950: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80219960;
    }
    // 0x80219950: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80219954: bne         $t3, $at, L_80219960
    if (ctx->r11 != ctx->r1) {
        // 0x80219958: nop
    
            goto L_80219960;
    }
    // 0x80219958: nop

    // 0x8021995C: break       6
    do_break(2149685596);
L_80219960:
    // 0x80219960: addu        $t6, $s0, $t8
    ctx->r14 = ADD32(ctx->r16, ctx->r24);
    // 0x80219964: lw          $s1, 0x0($t6)
    ctx->r17 = MEM_W(ctx->r14, 0X0);
    // 0x80219968: sra         $t2, $t9, 8
    ctx->r10 = S32(SIGNED(ctx->r25) >> 8);
    // 0x8021996C: mflo        $t8
    ctx->r24 = lo;
    // 0x80219970: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80219974: bne         $s6, $zero, L_80219980
    if (ctx->r22 != 0) {
        // 0x80219978: nop
    
            goto L_80219980;
    }
    // 0x80219978: nop

    // 0x8021997C: break       7
    do_break(2149685628);
L_80219980:
    // 0x80219980: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80219984: bne         $s6, $at, L_80219998
    if (ctx->r22 != ctx->r1) {
        // 0x80219988: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80219998;
    }
    // 0x80219988: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8021998C: bne         $t5, $at, L_80219998
    if (ctx->r13 != ctx->r1) {
        // 0x80219990: nop
    
            goto L_80219998;
    }
    // 0x80219990: nop

    // 0x80219994: break       6
    do_break(2149685652);
L_80219998:
    // 0x80219998: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8021999C: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x802199A0: addu        $t5, $s0, $t6
    ctx->r13 = ADD32(ctx->r16, ctx->r14);
    // 0x802199A4: lw          $s2, 0x0($t4)
    ctx->r18 = MEM_W(ctx->r12, 0X0);
    // 0x802199A8: lw          $s3, 0x0($t5)
    ctx->r19 = MEM_W(ctx->r13, 0X0);
    // 0x802199AC: lwc1        $f18, 0xFC($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XFC);
    // 0x802199B0: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x802199B4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x802199B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802199BC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802199C0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802199C4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x802199C8: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x802199CC: lwc1        $f6, 0x20($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X20);
    // 0x802199D0: bne         $s6, $zero, L_802199DC
    if (ctx->r22 != 0) {
        // 0x802199D4: nop
    
            goto L_802199DC;
    }
    // 0x802199D4: nop

    // 0x802199D8: break       7
    do_break(2149685720);
L_802199DC:
    // 0x802199DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802199E0: bne         $s6, $at, L_802199F4
    if (ctx->r22 != ctx->r1) {
        // 0x802199E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802199F4;
    }
    // 0x802199E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802199E8: bne         $t7, $at, L_802199F4
    if (ctx->r15 != ctx->r1) {
        // 0x802199EC: nop
    
            goto L_802199F4;
    }
    // 0x802199EC: nop

    // 0x802199F0: break       6
    do_break(2149685744);
L_802199F4:
    // 0x802199F4: addiu       $t9, $sp, 0xF0
    ctx->r25 = ADD32(ctx->r29, 0XF0);
    // 0x802199F8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x802199FC: lwc1        $f12, 0x104($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80219A00: lwc1        $f14, 0x108($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80219A04: lw          $a2, 0x10C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10C);
    // 0x80219A08: lw          $a3, 0xF8($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XF8);
    // 0x80219A0C: jal         0x80215AA8
    // 0x80219A10: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_80215AA8(rdram, ctx);
        goto after_8;
    // 0x80219A10: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80219A14: beq         $v0, $zero, L_80219B00
    if (ctx->r2 == 0) {
        // 0x80219A18: lui         $t3, 0x8026
        ctx->r11 = S32(0X8026 << 16);
            goto L_80219B00;
    }
    // 0x80219A18: lui         $t3, 0x8026
    ctx->r11 = S32(0X8026 << 16);
    // 0x80219A1C: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80219A20: lw          $t3, -0x3C64($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3C64);
    // 0x80219A24: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x80219A28: lw          $t2, -0x3C6C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C6C);
    // 0x80219A2C: sll         $t7, $t4, 2
    ctx->r15 = S32(ctx->r12 << 2);
    // 0x80219A30: addu        $t8, $t3, $t7
    ctx->r24 = ADD32(ctx->r11, ctx->r15);
    // 0x80219A34: sw          $t2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r10;
    // 0x80219A38: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80219A3C: lui         $t6, 0x8026
    ctx->r14 = S32(0X8026 << 16);
    // 0x80219A40: lw          $t6, -0x3C60($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C60);
    // 0x80219A44: lwc1        $f8, 0xF0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XF0);
    // 0x80219A48: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x80219A4C: addu        $t4, $t6, $t9
    ctx->r12 = ADD32(ctx->r14, ctx->r25);
    // 0x80219A50: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x80219A54: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
    // 0x80219A58: lui         $t2, 0x8026
    ctx->r10 = S32(0X8026 << 16);
    // 0x80219A5C: lw          $t2, -0x3C5C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C5C);
    // 0x80219A60: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80219A64: subu        $t7, $t7, $t3
    ctx->r15 = SUB32(ctx->r15, ctx->r11);
    // 0x80219A68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80219A6C: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x80219A70: addu        $t8, $t7, $t2
    ctx->r24 = ADD32(ctx->r15, ctx->r10);
    // 0x80219A74: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80219A78: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80219A7C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80219A80: jal         0x80212C84
    // 0x80219A84: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    func_80212C84(rdram, ctx);
        goto after_9;
    // 0x80219A84: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_9:
    // 0x80219A88: swc1        $f20, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->f20.u32l;
    // 0x80219A8C: swc1        $f20, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->f20.u32l;
    // 0x80219A90: swc1        $f20, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->f20.u32l;
    // 0x80219A94: lw          $t5, 0x0($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X0);
    // 0x80219A98: lui         $t9, 0x8026
    ctx->r25 = S32(0X8026 << 16);
    // 0x80219A9C: lw          $t9, -0x3C5C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C5C);
    // 0x80219AA0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80219AA4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80219AA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80219AAC: addu        $a1, $t6, $t9
    ctx->r5 = ADD32(ctx->r14, ctx->r25);
    // 0x80219AB0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80219AB4: jal         0x8022A4F4
    // 0x80219AB8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8022A4F4(rdram, ctx);
        goto after_10;
    // 0x80219AB8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_10:
    // 0x80219ABC: lw          $t4, 0x0($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X0);
    // 0x80219AC0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80219AC4: lui         $a2, 0x8028
    ctx->r6 = S32(0X8028 << 16);
    // 0x80219AC8: addiu       $t3, $t4, 0x1
    ctx->r11 = ADD32(ctx->r12, 0X1);
    // 0x80219ACC: sw          $t3, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r11;
    // 0x80219AD0: lhu         $t7, 0xBD8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0XBD8);
    // 0x80219AD4: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80219AD8: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80219ADC: slt         $at, $t3, $t7
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80219AE0: bne         $at, $zero, L_80219B00
    if (ctx->r1 != 0) {
        // 0x80219AE4: addiu       $a2, $a2, 0xBD8
        ctx->r6 = ADD32(ctx->r6, 0XBD8);
            goto L_80219B00;
    }
    // 0x80219AE4: addiu       $a2, $a2, 0xBD8
    ctx->r6 = ADD32(ctx->r6, 0XBD8);
    // 0x80219AE8: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80219AEC: jal         0x80231C58
    // 0x80219AF0: addiu       $a1, $a1, 0x3094
    ctx->r5 = ADD32(ctx->r5, 0X3094);
    func_80231C58(rdram, ctx);
        goto after_11;
    // 0x80219AF0: addiu       $a1, $a1, 0x3094
    ctx->r5 = ADD32(ctx->r5, 0X3094);
    after_11:
    // 0x80219AF4: lw          $t2, 0x0($s5)
    ctx->r10 = MEM_W(ctx->r21, 0X0);
    // 0x80219AF8: addiu       $t8, $t2, -0x1
    ctx->r24 = ADD32(ctx->r10, -0X1);
    // 0x80219AFC: sw          $t8, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r24;
L_80219B00:
    // 0x80219B00: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80219B04: lui         $a0, 0x8000
    ctx->r4 = S32(0X8000 << 16);
    // 0x80219B08: b           L_80219860
    // 0x80219B0C: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
        goto L_80219860;
    // 0x80219B0C: lui         $v1, 0xB800
    ctx->r3 = S32(0XB800 << 16);
L_80219B10:
    // 0x80219B10: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80219B14: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x80219B18: sra         $t4, $t9, 16
    ctx->r12 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80219B1C: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80219B20: bne         $at, $zero, L_80219844
    if (ctx->r1 != 0) {
        // 0x80219B24: sh          $t6, 0xE4($sp)
        MEM_H(0XE4, ctx->r29) = ctx->r14;
            goto L_80219844;
    }
    // 0x80219B24: sh          $t6, 0xE4($sp)
    MEM_H(0XE4, ctx->r29) = ctx->r14;
    // 0x80219B28: lw          $t3, 0x0($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X0);
L_80219B2C:
    // 0x80219B2C: lh          $t7, 0xE6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XE6);
    // 0x80219B30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80219B34: subu        $v1, $t3, $t7
    ctx->r3 = SUB32(ctx->r11, ctx->r15);
    // 0x80219B38: beq         $v1, $zero, L_80219B50
    if (ctx->r3 == 0) {
        // 0x80219B3C: nop
    
            goto L_80219B50;
    }
    // 0x80219B3C: nop

    // 0x80219B40: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80219B44: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80219B48: b           L_80219B50
    // 0x80219B4C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_80219B50;
    // 0x80219B4C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80219B50:
    // 0x80219B50: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80219B54: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80219B58: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80219B5C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80219B60: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80219B64: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80219B68: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80219B6C: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80219B70: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80219B74: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80219B78: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80219B7C: jr          $ra
    // 0x80219B80: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
    return;
    // 0x80219B80: addiu       $sp, $sp, 0x150
    ctx->r29 = ADD32(ctx->r29, 0X150);
;}
RECOMP_FUNC void func_8023D92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023D92C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023D930: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023D934: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8023D938: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8023D93C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8023D940: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8023D944: jal         0x8023D820
    // 0x8023D948: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    func_8023D820(rdram, ctx);
        goto after_0;
    // 0x8023D948: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    after_0:
    // 0x8023D94C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8023D950: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8023D954: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8023D958: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8023D95C: beq         $t7, $zero, L_8023D9AC
    if (ctx->r15 == 0) {
        // 0x8023D960: nop
    
            goto L_8023D9AC;
    }
    // 0x8023D960: nop

    // 0x8023D964: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x8023D968: lw          $t9, 0x3C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X3C);
    // 0x8023D96C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8023D970: sw          $t8, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r24;
    // 0x8023D974: sw          $t9, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r25;
    // 0x8023D978: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8023D97C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x8023D980: sw          $t1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r9;
    // 0x8023D984: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x8023D988: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x8023D98C: beq         $t3, $zero, L_8023D9AC
    if (ctx->r11 == 0) {
        // 0x8023D990: nop
    
            goto L_8023D9AC;
    }
    // 0x8023D990: nop

    // 0x8023D994: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x8023D998: lui         $at, 0xA000
    ctx->r1 = S32(0XA000 << 16);
    // 0x8023D99C: addiu       $t5, $t4, 0xBFC
    ctx->r13 = ADD32(ctx->r12, 0XBFC);
    // 0x8023D9A0: or          $t6, $t5, $at
    ctx->r14 = ctx->r13 | ctx->r1;
    // 0x8023D9A4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8023D9A8: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
L_8023D9AC:
    // 0x8023D9AC: jal         0x8023CE80
    // 0x8023D9B0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8023CE80(rdram, ctx);
        goto after_1;
    // 0x8023D9B0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x8023D9B4: jal         0x80246F80
    // 0x8023D9B8: addiu       $a0, $zero, 0x2B00
    ctx->r4 = ADD32(0, 0X2B00);
    func_80246F80(rdram, ctx);
        goto after_2;
    // 0x8023D9B8: addiu       $a0, $zero, 0x2B00
    ctx->r4 = ADD32(0, 0X2B00);
    after_2:
    // 0x8023D9BC: lui         $s3, 0x400
    ctx->r19 = S32(0X400 << 16);
    // 0x8023D9C0: ori         $s3, $s3, 0x1000
    ctx->r19 = ctx->r19 | 0X1000;
    // 0x8023D9C4: jal         0x80246F90
    // 0x8023D9C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80246F90(rdram, ctx);
        goto after_3;
    // 0x8023D9C8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8023D9CC: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x8023D9D0: bnel        $v0, $s1, L_8023D9EC
    if (ctx->r2 != ctx->r17) {
        // 0x8023D9D4: lui         $s0, 0x400
        ctx->r16 = S32(0X400 << 16);
            goto L_8023D9EC;
    }
    goto skip_0;
    // 0x8023D9D4: lui         $s0, 0x400
    ctx->r16 = S32(0X400 << 16);
    skip_0:
L_8023D9D8:
    // 0x8023D9D8: jal         0x80246F90
    // 0x8023D9DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80246F90(rdram, ctx);
        goto after_4;
    // 0x8023D9DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_4:
    // 0x8023D9E0: beq         $v0, $s1, L_8023D9D8
    if (ctx->r2 == ctx->r17) {
        // 0x8023D9E4: nop
    
            goto L_8023D9D8;
    }
    // 0x8023D9E4: nop

    // 0x8023D9E8: lui         $s0, 0x400
    ctx->r16 = S32(0X400 << 16);
L_8023D9EC:
    // 0x8023D9EC: ori         $s0, $s0, 0xFC0
    ctx->r16 = ctx->r16 | 0XFC0;
    // 0x8023D9F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8023D9F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023D9F8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8023D9FC: jal         0x80246FD0
    // 0x8023DA00: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80246FD0(rdram, ctx);
        goto after_5;
    // 0x8023DA00: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_5:
    // 0x8023DA04: bne         $v0, $s1, L_8023DA24
    if (ctx->r2 != ctx->r17) {
        // 0x8023DA08: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023DA24;
    }
    // 0x8023DA08: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023DA0C:
    // 0x8023DA0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8023DA10: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8023DA14: jal         0x80246FD0
    // 0x8023DA18: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_80246FD0(rdram, ctx);
        goto after_6;
    // 0x8023DA18: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_6:
    // 0x8023DA1C: beql        $v0, $s1, L_8023DA0C
    if (ctx->r2 == ctx->r17) {
        // 0x8023DA20: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023DA0C;
    }
    goto skip_1;
    // 0x8023DA20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
L_8023DA24:
    // 0x8023DA24: jal         0x80247060
    // 0x8023DA28: nop

    func_80247060(rdram, ctx);
        goto after_7;
    // 0x8023DA28: nop

    after_7:
    // 0x8023DA2C: beql        $v0, $zero, L_8023DA48
    if (ctx->r2 == 0) {
        // 0x8023DA30: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023DA48;
    }
    goto skip_2;
    // 0x8023DA30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_2:
L_8023DA34:
    // 0x8023DA34: jal         0x80247060
    // 0x8023DA38: nop

    func_80247060(rdram, ctx);
        goto after_8;
    // 0x8023DA38: nop

    after_8:
    // 0x8023DA3C: bne         $v0, $zero, L_8023DA34
    if (ctx->r2 != 0) {
        // 0x8023DA40: nop
    
            goto L_8023DA34;
    }
    // 0x8023DA40: nop

    // 0x8023DA44: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023DA48:
    // 0x8023DA48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8023DA4C: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x8023DA50: jal         0x80246FD0
    // 0x8023DA54: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    func_80246FD0(rdram, ctx);
        goto after_9;
    // 0x8023DA54: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    after_9:
    // 0x8023DA58: bne         $v0, $s1, L_8023DA78
    if (ctx->r2 != ctx->r17) {
        // 0x8023DA5C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023DA78;
    }
    // 0x8023DA5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8023DA60:
    // 0x8023DA60: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8023DA64: lw          $a2, 0x8($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X8);
    // 0x8023DA68: jal         0x80246FD0
    // 0x8023DA6C: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    func_80246FD0(rdram, ctx);
        goto after_10;
    // 0x8023DA6C: lw          $a3, 0xC($s2)
    ctx->r7 = MEM_W(ctx->r18, 0XC);
    after_10:
    // 0x8023DA70: beql        $v0, $s1, L_8023DA60
    if (ctx->r2 == ctx->r17) {
        // 0x8023DA74: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023DA60;
    }
    goto skip_3;
    // 0x8023DA74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_3:
L_8023DA78:
    // 0x8023DA78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023DA7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8023DA80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8023DA84: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8023DA88: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8023DA8C: jr          $ra
    // 0x8023DA90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8023DA90: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80228D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80228D0C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228D10: addiu       $v1, $v1, 0x8C0
    ctx->r3 = ADD32(ctx->r3, 0X8C0);
    // 0x80228D14: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80228D18: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80228D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228D20: addiu       $v0, $t6, 0x1
    ctx->r2 = ADD32(ctx->r14, 0X1);
    // 0x80228D24: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80228D28: lhu         $t8, 0xBE6($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XBE6);
    // 0x80228D2C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80228D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228D34: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80228D38: bne         $at, $zero, L_80228D50
    if (ctx->r1 != 0) {
        // 0x80228D3C: lui         $a0, 0x8025
        ctx->r4 = S32(0X8025 << 16);
            goto L_80228D50;
    }
    // 0x80228D3C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80228D40: jal         0x80231A24
    // 0x80228D44: addiu       $a0, $a0, 0x3E00
    ctx->r4 = ADD32(ctx->r4, 0X3E00);
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80228D44: addiu       $a0, $a0, 0x3E00
    ctx->r4 = ADD32(ctx->r4, 0X3E00);
    after_0:
    // 0x80228D48: b           L_80228D90
    // 0x80228D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228D90;
    // 0x80228D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D50:
    // 0x80228D50: bne         $v0, $zero, L_80228D78
    if (ctx->r2 != 0) {
        // 0x80228D54: lui         $t1, 0x8027
        ctx->r9 = S32(0X8027 << 16);
            goto L_80228D78;
    }
    // 0x80228D54: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x80228D58: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80228D5C: lw          $t9, 0x5E60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5E60);
    // 0x80228D60: sll         $t0, $v0, 6
    ctx->r8 = S32(ctx->r2 << 6);
    // 0x80228D64: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80228D68: jal         0x80228DE0
    // 0x80228D6C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    func_80228DE0(rdram, ctx);
        goto after_1;
    // 0x80228D6C: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    after_1:
    // 0x80228D70: b           L_80228D90
    // 0x80228D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80228D90;
    // 0x80228D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D78:
    // 0x80228D78: lw          $t1, 0x5E60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5E60);
    // 0x80228D7C: sll         $t2, $v0, 6
    ctx->r10 = S32(ctx->r2 << 6);
    // 0x80228D80: addu        $a0, $t1, $t2
    ctx->r4 = ADD32(ctx->r9, ctx->r10);
    // 0x80228D84: jal         0x802297A8
    // 0x80228D88: addiu       $a1, $a0, -0x40
    ctx->r5 = ADD32(ctx->r4, -0X40);
    func_802297A8(rdram, ctx);
        goto after_2;
    // 0x80228D88: addiu       $a1, $a0, -0x40
    ctx->r5 = ADD32(ctx->r4, -0X40);
    after_2:
    // 0x80228D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80228D90:
    // 0x80228D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80228D94: jr          $ra
    // 0x80228D98: nop

    return;
    // 0x80228D98: nop

;}
RECOMP_FUNC void func_8021B4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021B4B0: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x8021B4B4: addiu       $v1, $v1, 0xBC0
    ctx->r3 = ADD32(ctx->r3, 0XBC0);
    // 0x8021B4B8: lhu         $t6, 0x26($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X26);
    // 0x8021B4BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8021B4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8021B4C4: slt         $at, $t6, $a0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8021B4C8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8021B4CC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8021B4D0: beq         $at, $zero, L_8021B4F0
    if (ctx->r1 == 0) {
        // 0x8021B4D4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8021B4F0;
    }
    // 0x8021B4D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8021B4D8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B4DC: addiu       $a0, $a0, 0x3290
    ctx->r4 = ADD32(ctx->r4, 0X3290);
    // 0x8021B4E0: jal         0x80231A24
    // 0x8021B4E4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x8021B4E4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_0:
    // 0x8021B4E8: b           L_8021B6C8
    // 0x8021B4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B6C8;
    // 0x8021B4EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B4F0:
    // 0x8021B4F0: lui         $t8, 0x8026
    ctx->r24 = S32(0X8026 << 16);
    // 0x8021B4F4: lw          $t8, -0x3C20($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C20);
    // 0x8021B4F8: sll         $t7, $a3, 3
    ctx->r15 = S32(ctx->r7 << 3);
    // 0x8021B4FC: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x8021B500: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8021B504: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x8021B508: lhu         $v0, 0x0($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X0);
    // 0x8021B50C: lhu         $t2, 0x10($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X10);
    // 0x8021B510: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x8021B514: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8021B518: slt         $at, $v0, $t2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8021B51C: bne         $at, $zero, L_8021B53C
    if (ctx->r1 != 0) {
        // 0x8021B520: or          $t9, $v0, $zero
        ctx->r25 = ctx->r2 | 0;
            goto L_8021B53C;
    }
    // 0x8021B520: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x8021B524: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B528: addiu       $a0, $a0, 0x32BC
    ctx->r4 = ADD32(ctx->r4, 0X32BC);
    // 0x8021B52C: jal         0x80231A24
    // 0x8021B530: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8021B530: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_1:
    // 0x8021B534: b           L_8021B6C8
    // 0x8021B538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B6C8;
    // 0x8021B538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B53C:
    // 0x8021B53C: lw          $t3, -0x18F0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X18F0);
    // 0x8021B540: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x8021B544: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B548: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x8021B54C: addiu       $a0, $a0, 0x32DC
    ctx->r4 = ADD32(ctx->r4, 0X32DC);
    // 0x8021B550: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8021B554: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x8021B558: bnel        $a2, $zero, L_8021B574
    if (ctx->r6 != 0) {
        // 0x8021B55C: lw          $t8, 0x8($a2)
        ctx->r24 = MEM_W(ctx->r6, 0X8);
            goto L_8021B574;
    }
    goto skip_0;
    // 0x8021B55C: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
    skip_0:
    // 0x8021B560: jal         0x80231A24
    // 0x8021B564: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x8021B564: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x8021B568: b           L_8021B6C8
    // 0x8021B56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B6C8;
    // 0x8021B56C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8021B570: lw          $t8, 0x8($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X8);
L_8021B574:
    // 0x8021B574: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8021B578: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8021B57C: lbu         $t2, 0x4($t8)
    ctx->r10 = MEM_BU(ctx->r24, 0X4);
    // 0x8021B580: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x8021B584: addiu       $t1, $t1, -0x3C1C
    ctx->r9 = ADD32(ctx->r9, -0X3C1C);
    // 0x8021B588: slt         $at, $t7, $t2
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8021B58C: bne         $at, $zero, L_8021B5B0
    if (ctx->r1 != 0) {
        // 0x8021B590: sll         $t9, $v1, 1
        ctx->r25 = S32(ctx->r3 << 1);
            goto L_8021B5B0;
    }
    // 0x8021B590: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8021B594: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8021B598: addiu       $a0, $a0, 0x3304
    ctx->r4 = ADD32(ctx->r4, 0X3304);
    // 0x8021B59C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8021B5A0: jal         0x80231A24
    // 0x8021B5A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x8021B5A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8021B5A8: b           L_8021B6C8
    // 0x8021B5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B6C8;
    // 0x8021B5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B5B0:
    // 0x8021B5B0: lw          $t4, 0x4($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X4);
    // 0x8021B5B4: lw          $t3, 0x0($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X0);
    // 0x8021B5B8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8021B5BC: addu        $t5, $t4, $t9
    ctx->r13 = ADD32(ctx->r12, ctx->r25);
    // 0x8021B5C0: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x8021B5C4: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8021B5C8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8021B5CC: sll         $t8, $t6, 6
    ctx->r24 = S32(ctx->r14 << 6);
    // 0x8021B5D0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8021B5D4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8021B5D8: jal         0x80228DE0
    // 0x8021B5DC: addu        $a0, $t3, $t8
    ctx->r4 = ADD32(ctx->r11, ctx->r24);
    func_80228DE0(rdram, ctx);
        goto after_4;
    // 0x8021B5DC: addu        $a0, $t3, $t8
    ctx->r4 = ADD32(ctx->r11, ctx->r24);
    after_4:
    // 0x8021B5E0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8021B5E4: lui         $t1, 0x8026
    ctx->r9 = S32(0X8026 << 16);
    // 0x8021B5E8: addiu       $t1, $t1, -0x3C1C
    ctx->r9 = ADD32(ctx->r9, -0X3C1C);
    // 0x8021B5EC: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8021B5F0: bne         $v1, $zero, L_8021B64C
    if (ctx->r3 != 0) {
        // 0x8021B5F4: lw          $t0, 0x2C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X2C);
            goto L_8021B64C;
    }
    // 0x8021B5F4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8021B5F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8021B5FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8021B600: lwc1        $f2, 0x20($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B604: c.eq.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl == ctx->f2.fl;
    // 0x8021B608: nop

    // 0x8021B60C: bc1tl       L_8021B6C8
    if (c1cs) {
        // 0x8021B610: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8021B6C8;
    }
    goto skip_1;
    // 0x8021B610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8021B614: div.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8021B618: lw          $t7, 0x4($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X4);
    // 0x8021B61C: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8021B620: addu        $t9, $t7, $v1
    ctx->r25 = ADD32(ctx->r15, ctx->r3);
    // 0x8021B624: lhu         $t4, 0x0($t9)
    ctx->r12 = MEM_HU(ctx->r25, 0X0);
    // 0x8021B628: sll         $t5, $t4, 6
    ctx->r13 = S32(ctx->r12 << 6);
    // 0x8021B62C: addu        $a0, $t2, $t5
    ctx->r4 = ADD32(ctx->r10, ctx->r13);
    // 0x8021B630: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8021B634: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8021B638: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x8021B63C: jal         0x8022A210
    // 0x8021B640: nop

    func_8022A210(rdram, ctx);
        goto after_5;
    // 0x8021B640: nop

    after_5:
    // 0x8021B644: b           L_8021B6C8
    // 0x8021B648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8021B6C8;
    // 0x8021B648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B64C:
    // 0x8021B64C: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x8021B650: lw          $t6, 0x0($t1)
    ctx->r14 = MEM_W(ctx->r9, 0X0);
    // 0x8021B654: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B658: addu        $t8, $t3, $v1
    ctx->r24 = ADD32(ctx->r11, ctx->r3);
    // 0x8021B65C: lhu         $t7, 0x0($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X0);
    // 0x8021B660: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x8021B664: addu        $v0, $t6, $t9
    ctx->r2 = ADD32(ctx->r14, ctx->r25);
    // 0x8021B668: lwc1        $f4, 0x30($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X30);
    // 0x8021B66C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021B670: swc1        $f8, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f8.u32l;
    // 0x8021B674: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x8021B678: lw          $t4, 0x0($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X0);
    // 0x8021B67C: lwc1        $f16, 0x20($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B680: addu        $t5, $t2, $v1
    ctx->r13 = ADD32(ctx->r10, ctx->r3);
    // 0x8021B684: lhu         $t3, 0x0($t5)
    ctx->r11 = MEM_HU(ctx->r13, 0X0);
    // 0x8021B688: sll         $t8, $t3, 6
    ctx->r24 = S32(ctx->r11 << 6);
    // 0x8021B68C: addu        $v0, $t4, $t8
    ctx->r2 = ADD32(ctx->r12, ctx->r24);
    // 0x8021B690: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x8021B694: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x8021B698: swc1        $f18, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f18.u32l;
    // 0x8021B69C: lw          $t6, 0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X4);
    // 0x8021B6A0: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8021B6A4: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x8021B6A8: addu        $t9, $t6, $v1
    ctx->r25 = ADD32(ctx->r14, ctx->r3);
    // 0x8021B6AC: lhu         $t2, 0x0($t9)
    ctx->r10 = MEM_HU(ctx->r25, 0X0);
    // 0x8021B6B0: sll         $t5, $t2, 6
    ctx->r13 = S32(ctx->r10 << 6);
    // 0x8021B6B4: addu        $v0, $t7, $t5
    ctx->r2 = ADD32(ctx->r15, ctx->r13);
    // 0x8021B6B8: lwc1        $f4, 0x38($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X38);
    // 0x8021B6BC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8021B6C0: swc1        $f8, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f8.u32l;
    // 0x8021B6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8021B6C8:
    // 0x8021B6C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8021B6CC: jr          $ra
    // 0x8021B6D0: nop

    return;
    // 0x8021B6D0: nop

;}
RECOMP_FUNC void func_802291F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802291F8: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x802291FC: sw          $s1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r17;
    // 0x80229200: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x80229204: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80229208: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8022920C: sw          $a0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r4;
    // 0x80229210: bne         $a0, $a1, L_8022921C
    if (ctx->r4 != ctx->r5) {
        // 0x80229214: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_8022921C;
    }
    // 0x80229214: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80229218: addiu       $s0, $sp, 0xA0
    ctx->r16 = ADD32(ctx->r29, 0XA0);
L_8022921C:
    // 0x8022921C: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80229220: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80229224: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80229228: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8022922C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229230: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80229234: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229238: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8022923C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80229240: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80229244: nop

    // 0x80229248: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8022924C: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x80229250: sh          $t9, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r25;
    // 0x80229254: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80229258: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8022925C: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x80229260: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80229264: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80229268: nop

    // 0x8022926C: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80229270: sh          $t1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r9;
    // 0x80229274: sh          $t2, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r10;
    // 0x80229278: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8022927C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80229280: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80229284: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80229288: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8022928C: nop

    // 0x80229290: sra         $t4, $t5, 16
    ctx->r12 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80229294: sh          $t4, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r12;
    // 0x80229298: sh          $t5, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r13;
    // 0x8022929C: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x802292A0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x802292A4: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x802292A8: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x802292AC: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x802292B0: nop

    // 0x802292B4: sra         $t7, $t8, 16
    ctx->r15 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802292B8: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x802292BC: sh          $t8, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r24;
    // 0x802292C0: lwc1        $f16, 0x10($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X10);
    // 0x802292C4: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802292C8: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x802292CC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802292D0: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x802292D4: nop

    // 0x802292D8: sra         $t0, $t1, 16
    ctx->r8 = S32(SIGNED(ctx->r9) >> 16);
    // 0x802292DC: sh          $t0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r8;
    // 0x802292E0: sh          $t1, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r9;
    // 0x802292E4: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x802292E8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802292EC: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x802292F0: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802292F4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x802292F8: nop

    // 0x802292FC: sra         $t3, $t4, 16
    ctx->r11 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80229300: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    // 0x80229304: sh          $t4, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r12;
    // 0x80229308: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x8022930C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80229310: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80229314: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80229318: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8022931C: nop

    // 0x80229320: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80229324: sh          $t6, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r14;
    // 0x80229328: sh          $t7, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r15;
    // 0x8022932C: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80229330: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80229334: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x80229338: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8022933C: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x80229340: nop

    // 0x80229344: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80229348: sh          $t9, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r25;
    // 0x8022934C: sh          $t0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r8;
    // 0x80229350: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80229354: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80229358: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8022935C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80229360: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x80229364: nop

    // 0x80229368: sra         $t2, $t3, 16
    ctx->r10 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8022936C: sh          $t2, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r10;
    // 0x80229370: sh          $t3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r11;
    // 0x80229374: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x80229378: addiu       $t3, $zero, 0x7FFF
    ctx->r11 = ADD32(0, 0X7FFF);
    // 0x8022937C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80229380: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80229384: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80229388: mfc1        $t6, $f10
    ctx->r14 = (int32_t)ctx->f10.u32l;
    // 0x8022938C: nop

    // 0x80229390: sra         $t5, $t6, 16
    ctx->r13 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80229394: sh          $t5, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r13;
    // 0x80229398: sh          $t6, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r14;
    // 0x8022939C: lwc1        $f16, 0x28($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X28);
    // 0x802293A0: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x802293A4: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x802293A8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x802293AC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x802293B0: nop

    // 0x802293B4: sra         $t8, $t9, 16
    ctx->r24 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802293B8: sh          $t8, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r24;
    // 0x802293BC: sh          $t9, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r25;
    // 0x802293C0: lwc1        $f8, 0x2C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x802293C4: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x802293C8: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x802293CC: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x802293D0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x802293D4: nop

    // 0x802293D8: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x802293DC: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
    // 0x802293E0: sh          $t2, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r10;
    // 0x802293E4: lwc1        $f4, 0x3EF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3EF0);
    // 0x802293E8: lwc1        $f12, 0x30($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X30);
    // 0x802293EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802293F0: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x802293F4: nop

    // 0x802293F8: bc1f        L_80229444
    if (!c1cs) {
        // 0x802293FC: nop
    
            goto L_80229444;
    }
    // 0x802293FC: nop

    // 0x80229400: sh          $t3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r11;
    // 0x80229404: lwc1        $f6, 0x30($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80229408: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022940C: addiu       $a0, $a0, 0x3E40
    ctx->r4 = ADD32(ctx->r4, 0X3E40);
    // 0x80229410: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80229414: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80229418: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x8022941C: jal         0x80231A24
    // 0x80229420: nop

    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80229420: nop

    after_0:
    // 0x80229424: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80229428: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022942C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80229430: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229434: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x80229438: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x8022943C: b           L_802294C0
    // 0x80229440: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_802294C0;
    // 0x80229440: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_80229444:
    // 0x80229444: lwc1        $f10, 0x3EF4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3EF4);
    // 0x80229448: addiu       $t4, $zero, -0x8000
    ctx->r12 = ADD32(0, -0X8000);
    // 0x8022944C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80229450: nop

    // 0x80229454: bc1f        L_802294A0
    if (!c1cs) {
        // 0x80229458: nop
    
            goto L_802294A0;
    }
    // 0x80229458: nop

    // 0x8022945C: sh          $t4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r12;
    // 0x80229460: lwc1        $f16, 0x30($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X30);
    // 0x80229464: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80229468: addiu       $a0, $a0, 0x3E54
    ctx->r4 = ADD32(ctx->r4, 0X3E54);
    // 0x8022946C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80229470: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80229474: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x80229478: jal         0x80231A24
    // 0x8022947C: nop

    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x8022947C: nop

    after_1:
    // 0x80229480: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80229484: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80229488: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8022948C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229490: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x80229494: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x80229498: b           L_802294C0
    // 0x8022949C: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_802294C0;
    // 0x8022949C: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_802294A0:
    // 0x802294A0: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x802294A4: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802294A8: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x802294AC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802294B0: nop

    // 0x802294B4: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802294B8: sh          $t6, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r14;
    // 0x802294BC: sh          $t7, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r15;
L_802294C0:
    // 0x802294C0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802294C4: lwc1        $f10, 0x3EF8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3EF8);
    // 0x802294C8: lwc1        $f12, 0x34($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X34);
    // 0x802294CC: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x802294D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802294D4: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x802294D8: nop

    // 0x802294DC: bc1f        L_80229528
    if (!c1cs) {
        // 0x802294E0: nop
    
            goto L_80229528;
    }
    // 0x802294E0: nop

    // 0x802294E4: sh          $t8, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r24;
    // 0x802294E8: lwc1        $f16, 0x34($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X34);
    // 0x802294EC: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802294F0: addiu       $a0, $a0, 0x3E68
    ctx->r4 = ADD32(ctx->r4, 0X3E68);
    // 0x802294F4: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x802294F8: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x802294FC: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x80229500: jal         0x80231A24
    // 0x80229504: nop

    func_80231A24(rdram, ctx);
        goto after_2;
    // 0x80229504: nop

    after_2:
    // 0x80229508: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8022950C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80229510: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80229514: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229518: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x8022951C: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x80229520: b           L_802295A4
    // 0x80229524: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_802295A4;
    // 0x80229524: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_80229528:
    // 0x80229528: lwc1        $f4, 0x3EFC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3EFC);
    // 0x8022952C: addiu       $t9, $zero, -0x8000
    ctx->r25 = ADD32(0, -0X8000);
    // 0x80229530: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80229534: nop

    // 0x80229538: bc1f        L_80229584
    if (!c1cs) {
        // 0x8022953C: nop
    
            goto L_80229584;
    }
    // 0x8022953C: nop

    // 0x80229540: sh          $t9, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r25;
    // 0x80229544: lwc1        $f6, 0x34($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X34);
    // 0x80229548: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022954C: addiu       $a0, $a0, 0x3E7C
    ctx->r4 = ADD32(ctx->r4, 0X3E7C);
    // 0x80229550: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80229554: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x80229558: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x8022955C: jal         0x80231A24
    // 0x80229560: nop

    func_80231A24(rdram, ctx);
        goto after_3;
    // 0x80229560: nop

    after_3:
    // 0x80229564: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80229568: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8022956C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80229570: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229574: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x80229578: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x8022957C: b           L_802295A4
    // 0x80229580: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_802295A4;
    // 0x80229580: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_80229584:
    // 0x80229584: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80229588: add.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x8022958C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80229590: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x80229594: nop

    // 0x80229598: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8022959C: sh          $t1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r9;
    // 0x802295A0: sh          $t2, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r10;
L_802295A4:
    // 0x802295A4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802295A8: lwc1        $f4, 0x3F00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3F00);
    // 0x802295AC: lwc1        $f12, 0x38($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X38);
    // 0x802295B0: addiu       $t3, $zero, 0x7FFF
    ctx->r11 = ADD32(0, 0X7FFF);
    // 0x802295B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802295B8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x802295BC: nop

    // 0x802295C0: bc1f        L_8022960C
    if (!c1cs) {
        // 0x802295C4: nop
    
            goto L_8022960C;
    }
    // 0x802295C4: nop

    // 0x802295C8: sh          $t3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r11;
    // 0x802295CC: lwc1        $f6, 0x38($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X38);
    // 0x802295D0: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802295D4: addiu       $a0, $a0, 0x3E90
    ctx->r4 = ADD32(ctx->r4, 0X3E90);
    // 0x802295D8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802295DC: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x802295E0: mfc1        $a2, $f9
    ctx->r6 = (int32_t)ctx->f_odd[(9 - 1) * 2];
    // 0x802295E4: jal         0x80231A24
    // 0x802295E8: nop

    func_80231A24(rdram, ctx);
        goto after_4;
    // 0x802295E8: nop

    after_4:
    // 0x802295EC: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x802295F0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802295F4: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x802295F8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x802295FC: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x80229600: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x80229604: b           L_80229688
    // 0x80229608: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229688;
    // 0x80229608: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_8022960C:
    // 0x8022960C: lwc1        $f10, 0x3F04($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3F04);
    // 0x80229610: addiu       $t4, $zero, -0x8000
    ctx->r12 = ADD32(0, -0X8000);
    // 0x80229614: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x80229618: nop

    // 0x8022961C: bc1f        L_80229668
    if (!c1cs) {
        // 0x80229620: nop
    
            goto L_80229668;
    }
    // 0x80229620: nop

    // 0x80229624: sh          $t4, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r12;
    // 0x80229628: lwc1        $f16, 0x38($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X38);
    // 0x8022962C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80229630: addiu       $a0, $a0, 0x3EA4
    ctx->r4 = ADD32(ctx->r4, 0X3EA4);
    // 0x80229634: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80229638: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x8022963C: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x80229640: jal         0x80231A24
    // 0x80229644: nop

    func_80231A24(rdram, ctx);
        goto after_5;
    // 0x80229644: nop

    after_5:
    // 0x80229648: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8022964C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80229650: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80229654: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80229658: srl         $at, $zero, 8
    ctx->r1 = S32(U32(0) >> 8);
    // 0x8022965C: sb          $at, 0x1($zero)
    MEM_B(0X1, 0) = ctx->r1;
    // 0x80229660: b           L_80229688
    // 0x80229664: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
        goto L_80229688;
    // 0x80229664: sb          $zero, 0x2($zero)
    MEM_B(0X2, 0) = 0;
L_80229668:
    // 0x80229668: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8022966C: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80229670: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80229674: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80229678: nop

    // 0x8022967C: sra         $t6, $t7, 16
    ctx->r14 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80229680: sh          $t6, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r14;
    // 0x80229684: sh          $t7, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r15;
L_80229688:
    // 0x80229688: lwc1        $f10, 0x3C($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X3C);
    // 0x8022968C: addiu       $t1, $sp, 0xA0
    ctx->r9 = ADD32(ctx->r29, 0XA0);
    // 0x80229690: addiu       $t3, $t1, 0x3C
    ctx->r11 = ADD32(ctx->r9, 0X3C);
    // 0x80229694: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80229698: or          $t4, $sp, $zero
    ctx->r12 = ctx->r29 | 0;
    // 0x8022969C: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x802296A0: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x802296A4: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x802296A8: nop

    // 0x802296AC: sra         $t9, $t0, 16
    ctx->r25 = S32(SIGNED(ctx->r8) >> 16);
    // 0x802296B0: sh          $t9, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r25;
    // 0x802296B4: bne         $s0, $s1, L_802296F8
    if (ctx->r16 != ctx->r17) {
        // 0x802296B8: sh          $t0, 0x3E($s0)
        MEM_H(0X3E, ctx->r16) = ctx->r8;
            goto L_802296F8;
    }
    // 0x802296B8: sh          $t0, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = ctx->r8;
    // 0x802296BC: lw          $a0, 0xE8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE8);
L_802296C0:
    // 0x802296C0: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802296C4: addiu       $t1, $t1, 0xC
    ctx->r9 = ADD32(ctx->r9, 0XC);
    // 0x802296C8: addiu       $t4, $t4, 0xC
    ctx->r12 = ADD32(ctx->r12, 0XC);
    // 0x802296CC: sw          $at, -0x4($t4)
    MEM_W(-0X4, ctx->r12) = ctx->r1;
    // 0x802296D0: lw          $at, -0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X8);
    // 0x802296D4: sw          $at, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r1;
    // 0x802296D8: lw          $at, -0x4($t1)
    ctx->r1 = MEM_W(ctx->r9, -0X4);
    // 0x802296DC: bne         $t1, $t3, L_802296C0
    if (ctx->r9 != ctx->r11) {
        // 0x802296E0: sw          $at, 0x4($t4)
        MEM_W(0X4, ctx->r12) = ctx->r1;
            goto L_802296C0;
    }
    // 0x802296E0: sw          $at, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r1;
    // 0x802296E4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x802296E8: sw          $at, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r1;
    // 0x802296EC: lw          $a3, 0xC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC);
    // 0x802296F0: jal         0x80228EB0
    // 0x802296F4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    func_80228EB0(rdram, ctx);
        goto after_6;
    // 0x802296F4: lw          $a2, 0x8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8);
    after_6:
L_802296F8:
    // 0x802296F8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x802296FC: lw          $s0, 0x4C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4C);
    // 0x80229700: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80229704: jr          $ra
    // 0x80229708: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x80229708: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_80218C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80218C74: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80218C78: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80218C7C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80218C80: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80218C84: lwc1        $f2, 0x0($a2)
    ctx->f2.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80218C88: bgez        $t7, L_80218CA0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80218C8C: lwc1        $f0, 0x0($a1)
        ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
            goto L_80218CA0;
    }
    // 0x80218C8C: lwc1        $f0, 0x0($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80218C90: addiu       $a0, $t7, 0x4
    ctx->r4 = ADD32(ctx->r15, 0X4);
    // 0x80218C94: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x80218C98: b           L_80218CC8
    // 0x80218C9C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
        goto L_80218CC8;
    // 0x80218C9C: sra         $a0, $t8, 16
    ctx->r4 = S32(SIGNED(ctx->r24) >> 16);
L_80218CA0:
    // 0x80218CA0: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80218CA4: bne         $at, $zero, L_80218CC8
    if (ctx->r1 != 0) {
        // 0x80218CA8: nop
    
            goto L_80218CC8;
    }
    // 0x80218CA8: nop

    // 0x80218CAC: bgez        $a0, L_80218CC0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80218CB0: andi        $t0, $a0, 0x3
        ctx->r8 = ctx->r4 & 0X3;
            goto L_80218CC0;
    }
    // 0x80218CB0: andi        $t0, $a0, 0x3
    ctx->r8 = ctx->r4 & 0X3;
    // 0x80218CB4: beq         $t0, $zero, L_80218CC0
    if (ctx->r8 == 0) {
        // 0x80218CB8: nop
    
            goto L_80218CC0;
    }
    // 0x80218CB8: nop

    // 0x80218CBC: addiu       $t0, $t0, -0x4
    ctx->r8 = ADD32(ctx->r8, -0X4);
L_80218CC0:
    // 0x80218CC0: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80218CC4: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
L_80218CC8:
    // 0x80218CC8: beq         $a0, $zero, L_80218CF0
    if (ctx->r4 == 0) {
        // 0x80218CCC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80218CF0;
    }
    // 0x80218CCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80218CD0: beq         $a0, $at, L_80218CFC
    if (ctx->r4 == ctx->r1) {
        // 0x80218CD4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80218CFC;
    }
    // 0x80218CD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80218CD8: beq         $a0, $at, L_80218D0C
    if (ctx->r4 == ctx->r1) {
        // 0x80218CDC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80218D0C;
    }
    // 0x80218CDC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80218CE0: beql        $a0, $at, L_80218D24
    if (ctx->r4 == ctx->r1) {
        // 0x80218CE4: neg.s       $f10, $f2
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
            goto L_80218D24;
    }
    goto skip_0;
    // 0x80218CE4: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    skip_0:
    // 0x80218CE8: jr          $ra
    // 0x80218CEC: nop

    return;
    // 0x80218CEC: nop

L_80218CF0:
    // 0x80218CF0: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x80218CF4: jr          $ra
    // 0x80218CF8: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
    return;
    // 0x80218CF8: swc1        $f2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f2.u32l;
L_80218CFC:
    // 0x80218CFC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80218D00: swc1        $f2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f2.u32l;
    // 0x80218D04: jr          $ra
    // 0x80218D08: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    return;
    // 0x80218D08: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
L_80218D0C:
    // 0x80218D0C: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80218D10: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x80218D14: swc1        $f6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f6.u32l;
    // 0x80218D18: jr          $ra
    // 0x80218D1C: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x80218D1C: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80218D20: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
L_80218D24:
    // 0x80218D24: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x80218D28: swc1        $f0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f0.u32l;
    // 0x80218D2C: jr          $ra
    // 0x80218D30: nop

    return;
    // 0x80218D30: nop

;}
RECOMP_FUNC void func_8023CE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8023CE10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023CE14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023CE18: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8023CE1C: jal         0x80241760
    // 0x8023CE20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80241760(rdram, ctx);
        goto after_0;
    // 0x8023CE20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023CE24: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x8023CE28: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8023CE2C: beq         $t6, $zero, L_8023CE4C
    if (ctx->r14 == 0) {
        // 0x8023CE30: nop
    
            goto L_8023CE4C;
    }
    // 0x8023CE30: nop

    // 0x8023CE34: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x8023CE38: lw          $t7, 0x1774($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1774);
    // 0x8023CE3C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x8023CE40: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8023CE44: b           L_8023CE64
    // 0x8023CE48: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
        goto L_8023CE64;
    // 0x8023CE48: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
L_8023CE4C:
    // 0x8023CE4C: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x8023CE50: lw          $t0, 0x1774($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1774);
    // 0x8023CE54: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x8023CE58: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x8023CE5C: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x8023CE60: sh          $t2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r10;
L_8023CE64:
    // 0x8023CE64: jal         0x80241780
    // 0x8023CE68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80241780(rdram, ctx);
        goto after_1;
    // 0x8023CE68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8023CE6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023CE70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023CE74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023CE78: jr          $ra
    // 0x8023CE7C: nop

    return;
    // 0x8023CE7C: nop

;}
RECOMP_FUNC void func_8021178C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8021178C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80211790: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80211794: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80211798: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8021179C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x802117A0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x802117A4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x802117A8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x802117AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x802117B0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802117B4: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802117B8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802117BC: beq         $a0, $at, L_80211960
    if (ctx->r4 == ctx->r1) {
        // 0x802117C0: sw          $a3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r7;
            goto L_80211960;
    }
    // 0x802117C0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x802117C4: lui         $t7, 0x8025
    ctx->r15 = S32(0X8025 << 16);
    // 0x802117C8: lw          $t7, -0x18F0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X18F0);
    // 0x802117CC: sll         $t0, $a0, 2
    ctx->r8 = S32(ctx->r4 << 2);
    // 0x802117D0: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x802117D4: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x802117D8: or          $t9, $a0, $zero
    ctx->r25 = ctx->r4 | 0;
    // 0x802117DC: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x802117E0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x802117E4: lw          $s2, 0x0($t1)
    ctx->r18 = MEM_W(ctx->r9, 0X0);
    // 0x802117E8: addiu       $s4, $s4, 0x2D50
    ctx->r20 = ADD32(ctx->r20, 0X2D50);
    // 0x802117EC: lui         $s5, 0x200
    ctx->r21 = S32(0X200 << 16);
    // 0x802117F0: bne         $s2, $zero, L_80211810
    if (ctx->r18 != 0) {
        // 0x802117F4: addiu       $s3, $zero, 0x24
        ctx->r19 = ADD32(0, 0X24);
            goto L_80211810;
    }
    // 0x802117F4: addiu       $s3, $zero, 0x24
    ctx->r19 = ADD32(0, 0X24);
    // 0x802117F8: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802117FC: addiu       $a0, $a0, 0x2D1C
    ctx->r4 = ADD32(ctx->r4, 0X2D1C);
    // 0x80211800: jal         0x80231A24
    // 0x80211804: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80231A24(rdram, ctx);
        goto after_0;
    // 0x80211804: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
    // 0x80211808: b           L_80211964
    // 0x8021180C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80211964;
    // 0x8021180C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80211810:
    // 0x80211810: addiu       $s1, $zero, -0x4
    ctx->r17 = ADD32(0, -0X4);
L_80211814:
    // 0x80211814: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
L_80211818:
    // 0x80211818: and         $s0, $t2, $s1
    ctx->r16 = ctx->r10 & ctx->r17;
    // 0x8021181C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80211820: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80211824: sltiu       $at, $a1, 0xA
    ctx->r1 = ctx->r5 < 0XA ? 1 : 0;
    // 0x80211828: beq         $at, $zero, L_80211950
    if (ctx->r1 == 0) {
        // 0x8021182C: sll         $t3, $a1, 2
        ctx->r11 = S32(ctx->r5 << 2);
            goto L_80211950;
    }
    // 0x8021182C: sll         $t3, $a1, 2
    ctx->r11 = S32(ctx->r5 << 2);
    // 0x80211830: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80211834: addu        $at, $at, $t3
    gpr jr_addend_8021183C = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80211838: lw          $t3, 0x30C8($at)
    ctx->r11 = ADD32(ctx->r1, 0X30C8);
    // 0x8021183C: jr          $t3
    // 0x80211840: nop

    switch (jr_addend_8021183C >> 2) {
        case 0: goto L_80211960; break;
        case 1: goto L_802118C0; break;
        case 2: goto L_80211844; break;
        case 3: goto L_80211950; break;
        case 4: goto L_802118A0; break;
        case 5: goto L_80211860; break;
        case 6: goto L_80211950; break;
        case 7: goto L_80211914; break;
        case 8: goto L_802118F8; break;
        case 9: goto L_802118DC; break;
        default: switch_error(__func__, 0x8021183C, 0x802530C8);
    }
    // 0x80211840: nop

L_80211844:
    // 0x80211844: addiu       $t4, $s0, 0x3
    ctx->r12 = ADD32(ctx->r16, 0X3);
    // 0x80211848: and         $s0, $t4, $s1
    ctx->r16 = ctx->r12 & ctx->r17;
    // 0x8021184C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80211850: lbu         $t5, 0x10($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X10);
    // 0x80211854: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80211858: b           L_80211814
    // 0x8021185C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
        goto L_80211814;
    // 0x8021185C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
L_80211860:
    // 0x80211860: lw          $t7, 0x8($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X8);
    // 0x80211864: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x80211868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8021186C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80211870: and         $s0, $t2, $s1
    ctx->r16 = ctx->r10 & ctx->r17;
    // 0x80211874: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80211878: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x8021187C: and         $t9, $t1, $s5
    ctx->r25 = ctx->r9 & ctx->r21;
    // 0x80211880: beq         $t9, $zero, L_80211890
    if (ctx->r25 == 0) {
        // 0x80211884: nop
    
            goto L_80211890;
    }
    // 0x80211884: nop

    // 0x80211888: b           L_80211890
    // 0x8021188C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80211890;
    // 0x8021188C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80211890:
    // 0x80211890: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80211894: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80211898: b           L_80211814
    // 0x8021189C: sb          $v0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r2;
        goto L_80211814;
    // 0x8021189C: sb          $v0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r2;
L_802118A0:
    // 0x802118A0: lw          $t5, 0x8($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X8);
    // 0x802118A4: addiu       $t4, $s0, 0x3
    ctx->r12 = ADD32(ctx->r16, 0X3);
    // 0x802118A8: and         $s0, $t4, $s1
    ctx->r16 = ctx->r12 & ctx->r17;
    // 0x802118AC: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x802118B0: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x802118B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802118B8: b           L_80211814
    // 0x802118BC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
        goto L_80211814;
    // 0x802118BC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_802118C0:
    // 0x802118C0: addiu       $t8, $s0, 0x3
    ctx->r24 = ADD32(ctx->r16, 0X3);
    // 0x802118C4: and         $s0, $t8, $s1
    ctx->r16 = ctx->r24 & ctx->r17;
    // 0x802118C8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x802118CC: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x802118D0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802118D4: b           L_80211814
    // 0x802118D8: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
        goto L_80211814;
    // 0x802118D8: swc1        $f4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f4.u32l;
L_802118DC:
    // 0x802118DC: addiu       $t1, $s0, 0x3
    ctx->r9 = ADD32(ctx->r16, 0X3);
    // 0x802118E0: and         $s0, $t1, $s1
    ctx->r16 = ctx->r9 & ctx->r17;
    // 0x802118E4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x802118E8: lwc1        $f6, 0x20($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X20);
    // 0x802118EC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x802118F0: b           L_80211814
    // 0x802118F4: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
        goto L_80211814;
    // 0x802118F4: swc1        $f6, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f6.u32l;
L_802118F8:
    // 0x802118F8: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
    // 0x802118FC: and         $s0, $t2, $s1
    ctx->r16 = ctx->r10 & ctx->r17;
    // 0x80211900: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80211904: lbu         $t3, 0x11($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X11);
    // 0x80211908: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021190C: b           L_80211814
    // 0x80211910: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
        goto L_80211814;
    // 0x80211910: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
L_80211914:
    // 0x80211914: addiu       $t5, $s0, 0x3
    ctx->r13 = ADD32(ctx->r16, 0X3);
    // 0x80211918: and         $s0, $t5, $s1
    ctx->r16 = ctx->r13 & ctx->r17;
    // 0x8021191C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80211920: lw          $t7, 0x8($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X8);
    // 0x80211924: addiu       $t6, $s0, 0x7
    ctx->r14 = ADD32(ctx->r16, 0X7);
    // 0x80211928: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8021192C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80211930: and         $s0, $t6, $s1
    ctx->r16 = ctx->r14 & ctx->r17;
    // 0x80211934: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80211938: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8021193C: mflo        $t0
    ctx->r8 = lo;
    // 0x80211940: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80211944: lbu         $t9, 0x6($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X6);
    // 0x80211948: b           L_80211814
    // 0x8021194C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
        goto L_80211814;
    // 0x8021194C: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
L_80211950:
    // 0x80211950: jal         0x80231A24
    // 0x80211954: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_80231A24(rdram, ctx);
        goto after_1;
    // 0x80211954: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_1:
    // 0x80211958: b           L_80211818
    // 0x8021195C: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
        goto L_80211818;
    // 0x8021195C: addiu       $t2, $s0, 0x3
    ctx->r10 = ADD32(ctx->r16, 0X3);
L_80211960:
    // 0x80211960: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80211964:
    // 0x80211964: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80211968: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8021196C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80211970: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80211974: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80211978: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8021197C: jr          $ra
    // 0x80211980: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80211980: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
