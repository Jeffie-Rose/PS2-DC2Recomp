#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDebugCode__18CMemoryCardManagerFv
// Address: 0x2f1e80 - 0x2f1ec8
void CheckDebugCode__18CMemoryCardManagerFv_0x2f1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDebugCode__18CMemoryCardManagerFv_0x2f1e80");
#endif

    switch (ctx->pc) {
        case 0x2f1e8cu: goto label_2f1e8c;
        default: break;
    }

    ctx->pc = 0x2f1e80u;

    // 0x2f1e80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1e88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e8c:
    // 0x2f1e8c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x2f1e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f1e90: 0x8ce30da0  lw          $v1, 0xDA0($a3)
    ctx->pc = 0x2f1e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3488)));
    // 0x2f1e94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1E94u;
    {
        const bool branch_taken_0x2f1e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1e94) {
            ctx->pc = 0x2F1EB0u;
            goto label_2f1eb0;
        }
    }
    ctx->pc = 0x2F1E9Cu;
    // 0x2f1e9c: 0x84e30db8  lh          $v1, 0xDB8($a3)
    ctx->pc = 0x2f1e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 3512)));
    // 0x2f1ea0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2f1ea0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f1ea4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1EA4u;
    {
        const bool branch_taken_0x2f1ea4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ea4) {
            ctx->pc = 0x2F1EB0u;
            goto label_2f1eb0;
        }
    }
    ctx->pc = 0x2F1EACu;
    // 0x2f1eac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f1eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f1eb0:
    // 0x2f1eb0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f1eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f1eb4: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x2f1eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f1eb8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F1EB8u;
    {
        const bool branch_taken_0x2f1eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1EB8u;
            // 0x2f1ebc: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1eb8) {
            ctx->pc = 0x2F1E8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1e8c;
        }
    }
    ctx->pc = 0x2F1EC0u;
    // 0x2f1ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1EC8u;
}
