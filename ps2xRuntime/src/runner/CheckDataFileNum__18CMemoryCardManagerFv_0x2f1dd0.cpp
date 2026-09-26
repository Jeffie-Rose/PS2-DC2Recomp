#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDataFileNum__18CMemoryCardManagerFv
// Address: 0x2f1dd0 - 0x2f1e08
void CheckDataFileNum__18CMemoryCardManagerFv_0x2f1dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDataFileNum__18CMemoryCardManagerFv_0x2f1dd0");
#endif

    switch (ctx->pc) {
        case 0x2f1ddcu: goto label_2f1ddc;
        default: break;
    }

    ctx->pc = 0x2f1dd0u;

    // 0x2f1dd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ddc:
    // 0x2f1ddc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2f1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f1de0: 0x8c630da0  lw          $v1, 0xDA0($v1)
    ctx->pc = 0x2f1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x2f1de4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1DE4u;
    {
        const bool branch_taken_0x2f1de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1de4) {
            ctx->pc = 0x2F1DF0u;
            goto label_2f1df0;
        }
    }
    ctx->pc = 0x2F1DECu;
    // 0x2f1dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f1decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f1df0:
    // 0x2f1df0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f1df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f1df4: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x2f1df4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f1df8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F1DF8u;
    {
        const bool branch_taken_0x2f1df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1DF8u;
            // 0x2f1dfc: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1df8) {
            ctx->pc = 0x2F1DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1ddc;
        }
    }
    ctx->pc = 0x2F1E00u;
    // 0x2f1e00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1E08u;
}
