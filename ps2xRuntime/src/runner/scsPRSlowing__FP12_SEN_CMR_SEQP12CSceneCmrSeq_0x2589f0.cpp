#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsPRSlowing__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x2589f0 - 0x258aac
void scsPRSlowing__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2589f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsPRSlowing__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2589f0");
#endif

    switch (ctx->pc) {
        case 0x258a38u: goto label_258a38;
        case 0x258a40u: goto label_258a40;
        case 0x258a58u: goto label_258a58;
        case 0x258a68u: goto label_258a68;
        case 0x258a78u: goto label_258a78;
        case 0x258a88u: goto label_258a88;
        default: break;
    }

    ctx->pc = 0x2589f0u;

    // 0x2589f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2589f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2589f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2589f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2589f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2589f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2589fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2589fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258a04: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x258a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x258a08: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x258A08u;
    {
        const bool branch_taken_0x258a08 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x258A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A08u;
            // 0x258a0c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a08) {
            ctx->pc = 0x258A20u;
            goto label_258a20;
        }
    }
    ctx->pc = 0x258A10u;
    // 0x258a10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258a18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x258A18u;
    {
        const bool branch_taken_0x258a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A18u;
            // 0x258a1c: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a18) {
            ctx->pc = 0x258A98u;
            goto label_258a98;
        }
    }
    ctx->pc = 0x258A20u;
label_258a20:
    // 0x258a20: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x258a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x258a24: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258a28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258A28u;
    {
        const bool branch_taken_0x258a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A28u;
            // 0x258a2c: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a28) {
            ctx->pc = 0x258A48u;
            goto label_258a48;
        }
    }
    ctx->pc = 0x258A30u;
    // 0x258a30: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x258A30u;
    SET_GPR_U32(ctx, 31, 0x258A38u);
    ctx->pc = 0x258A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A30u;
            // 0x258a34: 0xae000038  sw          $zero, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A38u; }
        if (ctx->pc != 0x258A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A38u; }
        if (ctx->pc != 0x258A38u) { return; }
    }
    ctx->pc = 0x258A38u;
label_258a38:
    // 0x258a38: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x258A38u;
    SET_GPR_U32(ctx, 31, 0x258A40u);
    ctx->pc = 0x258A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A38u;
            // 0x258a3c: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A40u; }
        if (ctx->pc != 0x258A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A40u; }
        if (ctx->pc != 0x258A40u) { return; }
    }
    ctx->pc = 0x258A40u;
label_258a40:
    // 0x258a40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x258A40u;
    {
        const bool branch_taken_0x258a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258A40u;
            // 0x258a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a40) {
            ctx->pc = 0x258A98u;
            goto label_258a98;
        }
    }
    ctx->pc = 0x258A48u;
label_258a48:
    // 0x258a48: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x258a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x258a4c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x258a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x258a50: 0xc041c4a  jal         func_107128
    ctx->pc = 0x258A50u;
    SET_GPR_U32(ctx, 31, 0x258A58u);
    ctx->pc = 0x258A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A50u;
            // 0x258a54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A58u; }
        if (ctx->pc != 0x258A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A58u; }
        if (ctx->pc != 0x258A58u) { return; }
    }
    ctx->pc = 0x258A58u;
label_258a58:
    // 0x258a58: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x258a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x258a5c: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x258a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x258a60: 0xc041c4a  jal         func_107128
    ctx->pc = 0x258A60u;
    SET_GPR_U32(ctx, 31, 0x258A68u);
    ctx->pc = 0x258A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A60u;
            // 0x258a64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A68u; }
        if (ctx->pc != 0x258A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A68u; }
        if (ctx->pc != 0x258A68u) { return; }
    }
    ctx->pc = 0x258A68u;
label_258a68:
    // 0x258a68: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x258a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x258a6c: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x258a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x258a70: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258A70u;
    SET_GPR_U32(ctx, 31, 0x258A78u);
    ctx->pc = 0x258A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A70u;
            // 0x258a74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A78u; }
        if (ctx->pc != 0x258A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A78u; }
        if (ctx->pc != 0x258A78u) { return; }
    }
    ctx->pc = 0x258A78u;
label_258a78:
    // 0x258a78: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x258a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x258a7c: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x258a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x258a80: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x258A80u;
    SET_GPR_U32(ctx, 31, 0x258A88u);
    ctx->pc = 0x258A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x258A80u;
            // 0x258a84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A88u; }
        if (ctx->pc != 0x258A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258A88u; }
        if (ctx->pc != 0x258A88u) { return; }
    }
    ctx->pc = 0x258A88u;
label_258a88:
    // 0x258a88: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x258a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x258a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258a90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258a94: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x258a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_258a98:
    // 0x258a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x258AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258AA4u;
            // 0x258aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258AACu;
}
