#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextAhdSeq__12CSceneCmrSeqFv
// Address: 0x259a60 - 0x259abc
void SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60");
#endif

    switch (ctx->pc) {
        case 0x259a74u: goto label_259a74;
        default: break;
    }

    ctx->pc = 0x259a60u;

    // 0x259a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259a6c: 0xc09666c  jal         func_2599B0
    ctx->pc = 0x259A6Cu;
    SET_GPR_U32(ctx, 31, 0x259A74u);
    ctx->pc = 0x259A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259A6Cu;
            // 0x259a70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2599B0u;
    if (runtime->hasFunction(0x2599B0u)) {
        auto targetFn = runtime->lookupFunction(0x2599B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A74u; }
        if (ctx->pc != 0x259A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneCmrSeqFv_0x2599b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259A74u; }
        if (ctx->pc != 0x259A74u) { return; }
    }
    ctx->pc = 0x259A74u;
label_259a74:
    // 0x259a74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259A74u;
    {
        const bool branch_taken_0x259a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259a74) {
            ctx->pc = 0x259A84u;
            goto label_259a84;
        }
    }
    ctx->pc = 0x259A7Cu;
    // 0x259a7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x259A7Cu;
    {
        const bool branch_taken_0x259a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259A7Cu;
            // 0x259a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259a7c) {
            ctx->pc = 0x259AACu;
            goto label_259aac;
        }
    }
    ctx->pc = 0x259A84u;
label_259a84:
    // 0x259a84: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x259a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x259a88: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259A88u;
    {
        const bool branch_taken_0x259a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x259a88) {
            ctx->pc = 0x259A94u;
            goto label_259a94;
        }
    }
    ctx->pc = 0x259A90u;
    // 0x259a90: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x259a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_259a94:
    // 0x259a94: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x259a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x259a98: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x259a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x259a9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x259a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x259aa0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x259AA0u;
    {
        const bool branch_taken_0x259aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x259aa0) {
            ctx->pc = 0x259AACu;
            goto label_259aac;
        }
    }
    ctx->pc = 0x259AA8u;
    // 0x259aa8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x259aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_259aac:
    // 0x259aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x259AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259AB4u;
            // 0x259ab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259ABCu;
}
