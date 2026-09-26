#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMaxUniqueCounter__18CMemoryCardManagerFv
// Address: 0x2f1d30 - 0x2f1d70
void CheckMaxUniqueCounter__18CMemoryCardManagerFv_0x2f1d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMaxUniqueCounter__18CMemoryCardManagerFv_0x2f1d30");
#endif

    switch (ctx->pc) {
        case 0x2f1d3cu: goto label_2f1d3c;
        default: break;
    }

    ctx->pc = 0x2f1d30u;

    // 0x2f1d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d3c:
    // 0x2f1d3c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2f1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f1d40: 0xdc630dd0  ld          $v1, 0xDD0($v1)
    ctx->pc = 0x2f1d40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 3536)));
    // 0x2f1d44: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2f1d44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f1d48: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1D48u;
    {
        const bool branch_taken_0x2f1d48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1d48) {
            ctx->pc = 0x2F1D54u;
            goto label_2f1d54;
        }
    }
    ctx->pc = 0x2F1D50u;
    // 0x2f1d50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f1d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d54:
    // 0x2f1d54: 0x0  nop
    ctx->pc = 0x2f1d54u;
    // NOP
    // 0x2f1d58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f1d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f1d5c: 0x28a3000d  slti        $v1, $a1, 0xD
    ctx->pc = 0x2f1d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f1d60: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F1D60u;
    {
        const bool branch_taken_0x2f1d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D60u;
            // 0x2f1d64: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d60) {
            ctx->pc = 0x2F1D3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1d3c;
        }
    }
    ctx->pc = 0x2F1D68u;
    // 0x2f1d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1D70u;
}
