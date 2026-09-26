#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsAHDKeep__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x2588b0 - 0x2588bc
void scsAHDKeep__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2588b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsAHDKeep__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2588b0");
#endif

    ctx->pc = 0x2588b0u;

    // 0x2588b0: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x2588b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
    // 0x2588b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2588B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2588B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2588B4u;
            // 0x2588b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2588BCu;
}
