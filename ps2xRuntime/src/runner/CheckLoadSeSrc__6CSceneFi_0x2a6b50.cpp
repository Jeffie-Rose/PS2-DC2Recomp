#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckLoadSeSrc__6CSceneFi
// Address: 0x2a6b50 - 0x2a6ba0
void CheckLoadSeSrc__6CSceneFi_0x2a6b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckLoadSeSrc__6CSceneFi_0x2a6b50");
#endif

    switch (ctx->pc) {
        case 0x2a6b64u: goto label_2a6b64;
        default: break;
    }

    ctx->pc = 0x2a6b50u;

    // 0x2a6b50: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6B50u;
    {
        const bool branch_taken_0x2a6b50 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A6B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B50u;
            // 0x2a6b54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b50) {
            ctx->pc = 0x2A6B60u;
            goto label_2a6b60;
        }
    }
    ctx->pc = 0x2A6B58u;
    // 0x2a6b58: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A6B58u;
    {
        const bool branch_taken_0x2a6b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B58u;
            // 0x2a6b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b58) {
            ctx->pc = 0x2A6B98u;
            goto label_2a6b98;
        }
    }
    ctx->pc = 0x2A6B60u;
label_2a6b60:
    // 0x2a6b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6b64:
    // 0x2a6b64: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2a6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a6b68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a6b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a6b6c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a6b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a6b70: 0x8c229984  lw          $v0, -0x667C($at)
    ctx->pc = 0x2a6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941060)));
    // 0x2a6b74: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A6B74u;
    {
        const bool branch_taken_0x2a6b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A6B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B74u;
            // 0x2a6b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b74) {
            ctx->pc = 0x2A6B84u;
            goto label_2a6b84;
        }
    }
    ctx->pc = 0x2A6B7Cu;
    // 0x2a6b7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A6B7Cu;
    {
        const bool branch_taken_0x2a6b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6b7c) {
            ctx->pc = 0x2A6B98u;
            goto label_2a6b98;
        }
    }
    ctx->pc = 0x2A6B84u;
label_2a6b84:
    // 0x2a6b84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a6b88: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2a6b88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2a6b8c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2A6B8Cu;
    {
        const bool branch_taken_0x2a6b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A6B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6B8Cu;
            // 0x2a6b90: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6b8c) {
            ctx->pc = 0x2A6B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a6b64;
        }
    }
    ctx->pc = 0x2A6B94u;
    // 0x2a6b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6b98:
    // 0x2a6b98: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6BA0u;
}
