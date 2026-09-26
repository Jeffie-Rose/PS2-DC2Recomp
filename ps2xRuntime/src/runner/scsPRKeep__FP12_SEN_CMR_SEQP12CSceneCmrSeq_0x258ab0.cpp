#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsPRKeep__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258ab0 - 0x258abc
void scsPRKeep__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsPRKeep__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258ab0");
#endif

    ctx->pc = 0x258ab0u;

    // 0x258ab0: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x258ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x258ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x258AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258AB4u;
            // 0x258ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258ABCu;
}
