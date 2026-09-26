#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Move__12CSceneCmrSeqFPfPfi
// Address: 0x259d40 - 0x259db4
void Move__12CSceneCmrSeqFPfPfi_0x259d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__12CSceneCmrSeqFPfPfi_0x259d40");
#endif

    switch (ctx->pc) {
        case 0x259d68u: goto label_259d68;
        case 0x259d88u: goto label_259d88;
        case 0x259d94u: goto label_259d94;
        default: break;
    }

    ctx->pc = 0x259d40u;

    // 0x259d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x259d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x259d44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x259d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x259d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x259d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x259d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259d50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x259d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259d58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x259d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d5c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x259d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d60: 0xc096680  jal         func_259A00
    ctx->pc = 0x259D60u;
    SET_GPR_U32(ctx, 31, 0x259D68u);
    ctx->pc = 0x259D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D60u;
            // 0x259d64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D68u; }
        if (ctx->pc != 0x259D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D68u; }
        if (ctx->pc != 0x259D68u) { return; }
    }
    ctx->pc = 0x259D68u;
label_259d68:
    // 0x259d68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d6c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x259D6Cu;
    {
        const bool branch_taken_0x259d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d6c) {
            ctx->pc = 0x259D98u;
            goto label_259d98;
        }
    }
    ctx->pc = 0x259D74u;
    // 0x259d74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x259d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x259d78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x259d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x259d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x259d80: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259D80u;
    SET_GPR_U32(ctx, 31, 0x259D88u);
    ctx->pc = 0x259D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D80u;
            // 0x259d84: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D88u; }
        if (ctx->pc != 0x259D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D88u; }
        if (ctx->pc != 0x259D88u) { return; }
    }
    ctx->pc = 0x259D88u;
label_259d88:
    // 0x259d88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x259d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259d8c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x259D8Cu;
    SET_GPR_U32(ctx, 31, 0x259D94u);
    ctx->pc = 0x259D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259D8Cu;
            // 0x259d90: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D94u; }
        if (ctx->pc != 0x259D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259D94u; }
        if (ctx->pc != 0x259D94u) { return; }
    }
    ctx->pc = 0x259D94u;
label_259d94:
    // 0x259d94: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x259d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_259d98:
    // 0x259d98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x259d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x259d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259dac: 0x3e00008  jr          $ra
    ctx->pc = 0x259DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259DACu;
            // 0x259db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259DB4u;
}
