#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PRDelay__12CSceneCmrSeqFi
// Address: 0x259c80 - 0x259cb4
void PRDelay__12CSceneCmrSeqFi_0x259c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PRDelay__12CSceneCmrSeqFi_0x259c80");
#endif

    switch (ctx->pc) {
        case 0x259c94u: goto label_259c94;
        default: break;
    }

    ctx->pc = 0x259c80u;

    // 0x259c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259c8c: 0xc096680  jal         func_259A00
    ctx->pc = 0x259C8Cu;
    SET_GPR_U32(ctx, 31, 0x259C94u);
    ctx->pc = 0x259C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259C8Cu;
            // 0x259c90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259A00u;
    if (runtime->hasFunction(0x259A00u)) {
        auto targetFn = runtime->lookupFunction(0x259A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C94u; }
        if (ctx->pc != 0x259C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextPrSeq__12CSceneCmrSeqFv_0x259a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259C94u; }
        if (ctx->pc != 0x259C94u) { return; }
    }
    ctx->pc = 0x259C94u;
label_259c94:
    // 0x259c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x259C94u;
    {
        const bool branch_taken_0x259c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x259C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259C94u;
            // 0x259c98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259c94) {
            ctx->pc = 0x259CA4u;
            goto label_259ca4;
        }
    }
    ctx->pc = 0x259C9Cu;
    // 0x259c9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x259c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x259ca0: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x259ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_259ca4:
    // 0x259ca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259cac: 0x3e00008  jr          $ra
    ctx->pc = 0x259CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259CACu;
            // 0x259cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259CB4u;
}
