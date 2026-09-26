#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRGBACalcParam__16CMenuPosDataFormFiii
// Address: 0x225b30 - 0x225b60
void SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30");
#endif

    ctx->pc = 0x225b30u;

    // 0x225b30: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x225B30u;
    {
        const bool branch_taken_0x225b30 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x225b30) {
            ctx->pc = 0x225B58u;
            goto label_225b58;
        }
    }
    ctx->pc = 0x225B38u;
    // 0x225b38: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x225b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x225b3c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x225B3Cu;
    {
        const bool branch_taken_0x225b3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B3Cu;
            // 0x225b40: 0xa41821  addu        $v1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b3c) {
            ctx->pc = 0x225B50u;
            goto label_225b50;
        }
    }
    ctx->pc = 0x225B44u;
    // 0x225b44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x225B44u;
    {
        const bool branch_taken_0x225b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225b44) {
            ctx->pc = 0x225B58u;
            goto label_225b58;
        }
    }
    ctx->pc = 0x225B4Cu;
    // 0x225b4c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x225b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_225b50:
    // 0x225b50: 0xa0660051  sb          $a2, 0x51($v1)
    ctx->pc = 0x225b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 81), (uint8_t)GPR_U32(ctx, 6));
    // 0x225b54: 0xa0670059  sb          $a3, 0x59($v1)
    ctx->pc = 0x225b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 89), (uint8_t)GPR_U32(ctx, 7));
label_225b58:
    // 0x225b58: 0x3e00008  jr          $ra
    ctx->pc = 0x225B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225B60u;
}
