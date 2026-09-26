#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ieee754_acosf
// Address: 0x11abc8 - 0x11aff8
void ps2___ieee754_acosf_0x11abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_acosf_0x11abc8");
#endif

    switch (ctx->pc) {
        case 0x11ae68u: goto label_11ae68;
        case 0x11aec8u: goto label_11aec8;
        default: break;
    }

    ctx->pc = 0x11abc8u;

    // 0x11abc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11abc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11abcc: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x11abccu;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x11abd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11abd4: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x11abd4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11abd8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x11abd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11abdc: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x11abdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11abe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abe4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11abe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11abec: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x11abecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x11abf0: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x11abf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11abf4: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x11ABF4u;
    {
        const bool branch_taken_0x11abf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABF4u;
            // 0x11abf8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abf4) {
            ctx->pc = 0x11AC20u;
            goto label_11ac20;
        }
    }
    ctx->pc = 0x11ABFCu;
    // 0x11abfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11abfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ac00: 0x1c8000f8  bgtz        $a0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x11AC00u;
    {
        const bool branch_taken_0x11ac00 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x11AC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC00u;
            // 0x11ac04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac00) {
            ctx->pc = 0x11AFE4u;
            goto label_11afe4;
        }
    }
    ctx->pc = 0x11AC08u;
    // 0x11ac08: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11ac08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11ac0c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11ac0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11ac10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ac10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ac14: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x11AC14u;
    {
        const bool branch_taken_0x11ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC14u;
            // 0x11ac18: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac14) {
            ctx->pc = 0x11AFE8u;
            goto label_11afe8;
        }
    }
    ctx->pc = 0x11AC1Cu;
    // 0x11ac1c: 0x0  nop
    ctx->pc = 0x11ac1cu;
    // NOP
label_11ac20:
    // 0x11ac20: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x11ac20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11ac24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AC24u;
    {
        const bool branch_taken_0x11ac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC24u;
            // 0x11ac28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac24) {
            ctx->pc = 0x11AC44u;
            goto label_11ac44;
        }
    }
    ctx->pc = 0x11AC2Cu;
    // 0x11ac2c: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x11ac2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x11ac30: 0x0  nop
    ctx->pc = 0x11ac30u;
    // NOP
    // 0x11ac34: 0x0  nop
    ctx->pc = 0x11ac34u;
    // NOP
    // 0x11ac38: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11ac38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x11ac3c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x11AC3Cu;
    {
        const bool branch_taken_0x11ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC3Cu;
            // 0x11ac40: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac3c) {
            ctx->pc = 0x11AFE8u;
            goto label_11afe8;
        }
    }
    ctx->pc = 0x11AC44u;
label_11ac44:
    // 0x11ac44: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x11ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x11ac48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11ac48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ac4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11ac4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11ac50: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x11AC50u;
    {
        const bool branch_taken_0x11ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC50u;
            // 0x11ac54: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac50) {
            ctx->pc = 0x11AD7Cu;
            goto label_11ad7c;
        }
    }
    ctx->pc = 0x11AC58u;
    // 0x11ac58: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11ac58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11ac5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11AC5Cu;
    {
        const bool branch_taken_0x11ac5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ac5c) {
            ctx->pc = 0x11AC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC5Cu;
            // 0x11ac60: 0x460b5d42  mul.s       $f21, $f11, $f11 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AC78u;
            goto label_11ac78;
        }
    }
    ctx->pc = 0x11AC64u;
    // 0x11ac64: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11ac64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11ac68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11ac68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11ac6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ac6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ac70: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x11AC70u;
    {
        const bool branch_taken_0x11ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC70u;
            // 0x11ac74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac70) {
            ctx->pc = 0x11AFE4u;
            goto label_11afe4;
        }
    }
    ctx->pc = 0x11AC78u;
label_11ac78:
    // 0x11ac78: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11ac78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11ac7c: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11ac7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11ac80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ac80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ac84: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11ac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11ac88: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11ac88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11ac8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11ac8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11ac90: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11ac90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11ac94: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11ac94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11ac98: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11ac98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11ac9c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ac9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11aca0: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11aca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11aca4: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x11aca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x11aca8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11aca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11acac: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11acacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11acb0: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x11acb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x11acb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11acb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11acb8: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11acb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11acbc: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11acbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11acc0: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11acc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11acc4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11acc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11acc8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11acc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11accc: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11acccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11acd0: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x11acd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x11acd4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11acd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11acd8: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11acd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11acdc: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x11acdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x11ace0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11ace0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11ace4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11ace4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11ace8: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11ace8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11acec: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x11acecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x11acf0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11acf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11acf4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11acf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11acf8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11acf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11acfc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x11acfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x11ad00: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11ad00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11ad04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ad04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ad08: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11ad08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11ad0c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11ad0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11ad10: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x11ad10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x11ad14: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11ad14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11ad18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ad18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ad1c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x11ad1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x11ad20: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x11ad20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x11ad24: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11ad24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11ad28: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11ad28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11ad2c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x11ad2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x11ad30: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ad30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ad34: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11ad34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11ad38: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x11ad38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x11ad3c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x11ad3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x11ad40: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ad40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ad44: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x11ad44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x11ad48: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x11ad48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x11ad4c: 0x46051580  add.s       $f22, $f2, $f5
    ctx->pc = 0x11ad4cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x11ad50: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ad50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ad54: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x11ad54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x11ad58: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x11ad58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ad5c: 0x0  nop
    ctx->pc = 0x11ad5cu;
    // NOP
    // 0x11ad60: 0x0  nop
    ctx->pc = 0x11ad60u;
    // NOP
    // 0x11ad64: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x11ad64u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x11ad68: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x11ad68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x11ad6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ad6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ad70: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x11ad70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x11ad74: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x11AD74u;
    {
        const bool branch_taken_0x11ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AD74u;
            // 0x11ad78: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad74) {
            ctx->pc = 0x11AFE0u;
            goto label_11afe0;
        }
    }
    ctx->pc = 0x11AD7Cu;
label_11ad7c:
    // 0x11ad7c: 0x481004a  bgez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x11AD7Cu;
    {
        const bool branch_taken_0x11ad7c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11ad7c) {
            ctx->pc = 0x11AEA8u;
            goto label_11aea8;
        }
    }
    ctx->pc = 0x11AD84u;
    // 0x11ad84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11ad84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11ad88: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x11ad88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11ad8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11ad8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11ad90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11ad90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11ad94: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x11ad94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x11ad98: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11ad98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11ad9c: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11ad9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11ada0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ada0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ada4: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11ada4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11ada8: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11ada8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11adac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11adacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11adb0: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11adb4: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11adb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11adb8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11adb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11adbc: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x11adbcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11adc0: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11adc4: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x11adc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x11adc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11adc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11adcc: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11adccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11add0: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x11add0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x11add4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11add4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11add8: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11addc: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11addcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11ade0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11ade0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11ade4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ade4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ade8: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11ade8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11adec: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x11adecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x11adf0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11adf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11adf4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11adf4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11adf8: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11adf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11adfc: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x11adfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x11ae00: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11ae00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11ae04: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11ae04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11ae08: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x11ae08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x11ae0c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11ae0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11ae10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11ae10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x11ae14: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11ae14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11ae18: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11ae18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11ae1c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x11ae1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x11ae20: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11ae20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11ae24: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11ae24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11ae28: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ae28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae2c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ae2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ae30: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11ae30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11ae34: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11ae34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11ae38: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ae38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae3c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ae3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ae40: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11ae40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11ae44: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x11ae44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11ae48: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ae48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae4c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ae4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ae50: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x11ae50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x11ae54: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x11ae54u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x11ae58: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ae58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae5c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x11ae5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x11ae60: 0xc046db0  jal         func_11B6C0
    ctx->pc = 0x11AE60u;
    SET_GPR_U32(ctx, 31, 0x11AE68u);
    ctx->pc = 0x11AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE60u;
            // 0x11ae64: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B6C0u;
    if (runtime->hasFunction(0x11B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x11B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE68u; }
        if (ctx->pc != 0x11AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_sqrtf_0x11b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE68u; }
        if (ctx->pc != 0x11AE68u) { return; }
    }
    ctx->pc = 0x11AE68u;
label_11ae68:
    // 0x11ae68: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x11ae68u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x11ae6c: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x11ae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x11ae70: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x11ae70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x11ae74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ae74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ae78: 0x0  nop
    ctx->pc = 0x11ae78u;
    // NOP
    // 0x11ae7c: 0x0  nop
    ctx->pc = 0x11ae7cu;
    // NOP
    // 0x11ae80: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x11ae80u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x11ae84: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11ae84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11ae88: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x11ae88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x11ae8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11ae8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11ae90: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x11ae90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x11ae94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ae94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ae98: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x11ae98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x11ae9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11ae9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11aea0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x11AEA0u;
    {
        const bool branch_taken_0x11aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEA0u;
            // 0x11aea4: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aea0) {
            ctx->pc = 0x11AFE0u;
            goto label_11afe0;
        }
    }
    ctx->pc = 0x11AEA8u;
label_11aea8:
    // 0x11aea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11aea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11aeac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11aeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11aeb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x11aeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x11aeb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11aeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aeb8: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x11aeb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x11aebc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x11aebcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11aec0: 0xc046db0  jal         func_11B6C0
    ctx->pc = 0x11AEC0u;
    SET_GPR_U32(ctx, 31, 0x11AEC8u);
    ctx->pc = 0x11AEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEC0u;
            // 0x11aec4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B6C0u;
    if (runtime->hasFunction(0x11B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x11B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEC8u; }
        if (ctx->pc != 0x11AEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_sqrtf_0x11b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEC8u; }
        if (ctx->pc != 0x11AEC8u) { return; }
    }
    ctx->pc = 0x11AEC8u;
label_11aec8:
    // 0x11aec8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11aec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11aecc: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x11aeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x11aed0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11aed4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x11aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x11aed8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11aed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11aedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x11aedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aee0: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x11aee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11aee4: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x11aee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x11aee8: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x11aee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x11aeec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11aeecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11aef0: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11aef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x11aef4: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x11aef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x11aef8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11aef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11aefc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11aefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11af00: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x11af00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11af04: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x11af04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x11af08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11af08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11af0c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x11af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11af10: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11af10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x11af14: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x11af14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11af18: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x11af18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x11af1c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11af1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11af20: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x11af20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x11af24: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x11af24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x11af28: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x11af28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x11af2c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x11af2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x11af30: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x11af30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x11af34: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x11af34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x11af38: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x11af38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11af3c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x11af3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11af40: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x11af40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x11af44: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x11af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x11af48: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x11af48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x11af4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11af4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11af50: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11af50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11af54: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x11af54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x11af58: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x11af58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x11af5c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11af5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x11af60: 0x460650c0  add.s       $f3, $f10, $f6
    ctx->pc = 0x11af60u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x11af64: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x11af64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x11af68: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x11af68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11af6c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x11af6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11af70: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11af70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11af74: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x11af74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x11af78: 0x0  nop
    ctx->pc = 0x11af78u;
    // NOP
    // 0x11af7c: 0x0  nop
    ctx->pc = 0x11af7cu;
    // NOP
    // 0x11af80: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x11af80u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x11af84: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x11af84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11af88: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x11af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x11af8c: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x11af8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x11af90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11af90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11af94: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11af94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11af98: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11af98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11af9c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x11af9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x11afa0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11afa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11afa4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11afa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11afa8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11afa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11afac: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x11afacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x11afb0: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x11afb0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x11afb4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11afb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11afb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x11afb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11afbc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x11afbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x11afc0: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x11afc0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11afc4: 0x0  nop
    ctx->pc = 0x11afc4u;
    // NOP
    // 0x11afc8: 0x0  nop
    ctx->pc = 0x11afc8u;
    // NOP
    // 0x11afcc: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x11afccu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x11afd0: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x11afd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x11afd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11afd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11afd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11afd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11afdc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11afdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_11afe0:
    // 0x11afe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11afe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11afe4:
    // 0x11afe4: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x11afe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11afe8:
    // 0x11afe8: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x11afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11afec: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x11afecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11aff0: 0x3e00008  jr          $ra
    ctx->pc = 0x11AFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFF0u;
            // 0x11aff4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11AFF8u;
}
