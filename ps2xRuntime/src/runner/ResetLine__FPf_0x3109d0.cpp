#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetLine__FPf
// Address: 0x3109d0 - 0x310b5c
void ResetLine__FPf_0x3109d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetLine__FPf_0x3109d0");
#endif

    switch (ctx->pc) {
        case 0x310a10u: goto label_310a10;
        case 0x310a2cu: goto label_310a2c;
        case 0x310a94u: goto label_310a94;
        case 0x310adcu: goto label_310adc;
        case 0x310b10u: goto label_310b10;
        case 0x310b44u: goto label_310b44;
        default: break;
    }

    ctx->pc = 0x3109d0u;

    // 0x3109d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3109d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3109d4: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x3109d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x3109d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3109d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3109dc: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x3109dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x3109e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3109e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3109e4: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x3109e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x3109e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3109e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3109ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3109ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3109f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3109f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3109f4: 0xaf82a248  sw          $v0, -0x5DB8($gp)
    ctx->pc = 0x3109f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943304), GPR_U32(ctx, 2));
    // 0x3109f8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3109f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3109fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3109fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x310a00: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x310a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x310a04: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x310a04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x310a08: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310A08u;
    SET_GPR_U32(ctx, 31, 0x310A10u);
    ctx->pc = 0x310A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310A08u;
            // 0x310a0c: 0x24640020  addiu       $a0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A10u; }
        if (ctx->pc != 0x310A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A10u; }
        if (ctx->pc != 0x310A10u) { return; }
    }
    ctx->pc = 0x310A10u;
label_310a10:
    // 0x310a10: 0x8f82a248  lw          $v0, -0x5DB8($gp)
    ctx->pc = 0x310a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943304)));
    // 0x310a14: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x310a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310a18: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x310a18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x310a1c: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x310A1Cu;
    {
        const bool branch_taken_0x310a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x310A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310A1Cu;
            // 0x310a20: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a1c) {
            ctx->pc = 0x310AA4u;
            goto label_310aa4;
        }
    }
    ctx->pc = 0x310A24u;
    // 0x310a24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x310a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x310a28: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x310a28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_310a2c:
    // 0x310a2c: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x310a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x310a30: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310a34: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x310a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x310a38: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x310a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
    // 0x310a3c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x310a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x310a40: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x310a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x310a44: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x310a44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x310a48: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x310a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x310a4c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x310a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x310a50: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x310a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x310a54: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x310a54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x310a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x310a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310a5c: 0x24c40020  addiu       $a0, $a2, 0x20
    ctx->pc = 0x310a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x310a60: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x310a60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x310a64: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x310a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310a68: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x310a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310a6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310a6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x310a70: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x310a70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x310a74: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x310a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x310a78: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x310a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310a7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x310a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x310a80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x310a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310a84: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x310a84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x310a88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x310a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310a8c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310A8Cu;
    SET_GPR_U32(ctx, 31, 0x310A94u);
    ctx->pc = 0x310A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310A8Cu;
            // 0x310a90: 0x7cc20010  sq          $v0, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A94u; }
        if (ctx->pc != 0x310A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310A94u; }
        if (ctx->pc != 0x310A94u) { return; }
    }
    ctx->pc = 0x310A94u;
label_310a94:
    // 0x310a94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x310a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x310a98: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x310a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x310a9c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x310A9Cu;
    {
        const bool branch_taken_0x310a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310A9Cu;
            // 0x310aa0: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a9c) {
            ctx->pc = 0x310A2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_310a2c;
        }
    }
    ctx->pc = 0x310AA4u;
label_310aa4:
    // 0x310aa4: 0x0  nop
    ctx->pc = 0x310aa4u;
    // NOP
    // 0x310aa8: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x310aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x310aac: 0x24c6ec70  addiu       $a2, $a2, -0x1390
    ctx->pc = 0x310aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962288));
    // 0x310ab0: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x310ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310ab4: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x310ab4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310ab8: 0x2463edd0  addiu       $v1, $v1, -0x1230
    ctx->pc = 0x310ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962640));
    // 0x310abc: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x310ac0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310ac4: 0x2442ede0  addiu       $v0, $v0, -0x1220
    ctx->pc = 0x310ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962656));
    // 0x310ac8: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x310ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    // 0x310acc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x310accu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x310ad0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x310ad0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310ad4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310AD4u;
    SET_GPR_U32(ctx, 31, 0x310ADCu);
    ctx->pc = 0x310AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310AD4u;
            // 0x310ad8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310ADCu; }
        if (ctx->pc != 0x310ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310ADCu; }
        if (ctx->pc != 0x310ADCu) { return; }
    }
    ctx->pc = 0x310ADCu;
label_310adc:
    // 0x310adc: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x310adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x310ae0: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x310ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310ae4: 0x24c6ebe0  addiu       $a2, $a2, -0x1420
    ctx->pc = 0x310ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962144));
    // 0x310ae8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x310aec: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x310aecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310af0: 0x2463f1a0  addiu       $v1, $v1, -0xE60
    ctx->pc = 0x310af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963616));
    // 0x310af4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310af8: 0x2442f1b0  addiu       $v0, $v0, -0xE50
    ctx->pc = 0x310af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
    // 0x310afc: 0x2484f1c0  addiu       $a0, $a0, -0xE40
    ctx->pc = 0x310afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963648));
    // 0x310b00: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x310b00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x310b04: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x310b04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310b08: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310B08u;
    SET_GPR_U32(ctx, 31, 0x310B10u);
    ctx->pc = 0x310B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310B08u;
            // 0x310b0c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B10u; }
        if (ctx->pc != 0x310B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B10u; }
        if (ctx->pc != 0x310B10u) { return; }
    }
    ctx->pc = 0x310B10u;
label_310b10:
    // 0x310b10: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x310b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x310b14: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x310b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310b18: 0x24c6ec70  addiu       $a2, $a2, -0x1390
    ctx->pc = 0x310b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962288));
    // 0x310b1c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x310b20: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x310b20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310b24: 0x2463f570  addiu       $v1, $v1, -0xA90
    ctx->pc = 0x310b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964592));
    // 0x310b28: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x310b2c: 0x2442f580  addiu       $v0, $v0, -0xA80
    ctx->pc = 0x310b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964608));
    // 0x310b30: 0x2484f590  addiu       $a0, $a0, -0xA70
    ctx->pc = 0x310b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964624));
    // 0x310b34: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x310b34u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x310b38: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x310b38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310b3c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310B3Cu;
    SET_GPR_U32(ctx, 31, 0x310B44u);
    ctx->pc = 0x310B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310B3Cu;
            // 0x310b40: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B44u; }
        if (ctx->pc != 0x310B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310B44u; }
        if (ctx->pc != 0x310B44u) { return; }
    }
    ctx->pc = 0x310B44u;
label_310b44:
    // 0x310b44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x310b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310b48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x310b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x310b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310b54: 0x3e00008  jr          $ra
    ctx->pc = 0x310B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310B54u;
            // 0x310b58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310B5Cu;
}
