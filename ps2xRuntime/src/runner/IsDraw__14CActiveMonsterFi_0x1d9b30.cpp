#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsDraw__14CActiveMonsterFi
// Address: 0x1d9b30 - 0x1d9b74
void IsDraw__14CActiveMonsterFi_0x1d9b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsDraw__14CActiveMonsterFi_0x1d9b30");
#endif

    ctx->pc = 0x1d9b30u;

    // 0x1d9b30: 0x8483068a  lh          $v1, 0x68A($a0)
    ctx->pc = 0x1d9b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1674)));
    // 0x1d9b34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9b38: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9B38u;
    {
        const bool branch_taken_0x1d9b38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B38u;
            // 0x1d9b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b38) {
            ctx->pc = 0x1D9B48u;
            goto label_1d9b48;
        }
    }
    ctx->pc = 0x1D9B40u;
    // 0x1d9b40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D9B40u;
    {
        const bool branch_taken_0x1d9b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b40) {
            ctx->pc = 0x1D9B6Cu;
            goto label_1d9b6c;
        }
    }
    ctx->pc = 0x1D9B48u;
label_1d9b48:
    // 0x1d9b48: 0x8c821314  lw          $v0, 0x1314($a0)
    ctx->pc = 0x1d9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4884)));
    // 0x1d9b4c: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9B4Cu;
    {
        const bool branch_taken_0x1d9b4c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1D9B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B4Cu;
            // 0x1d9b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b4c) {
            ctx->pc = 0x1D9B6Cu;
            goto label_1d9b6c;
        }
    }
    ctx->pc = 0x1D9B54u;
    // 0x1d9b54: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1d9b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1d9b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9B58u;
    {
        const bool branch_taken_0x1d9b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B58u;
            // 0x1d9b5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9b58) {
            ctx->pc = 0x1D9B68u;
            goto label_1d9b68;
        }
    }
    ctx->pc = 0x1D9B60u;
    // 0x1d9b60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9B60u;
    {
        const bool branch_taken_0x1d9b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9b60) {
            ctx->pc = 0x1D9B6Cu;
            goto label_1d9b6c;
        }
    }
    ctx->pc = 0x1D9B68u;
label_1d9b68:
    // 0x1d9b68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9b6c:
    // 0x1d9b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D9B74u;
}
