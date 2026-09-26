#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndFishBattle__Fv
// Address: 0x310c30 - 0x310c44
void EndFishBattle__Fv_0x310c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndFishBattle__Fv_0x310c30");
#endif

    ctx->pc = 0x310c30u;

    // 0x310c30: 0xaf80a25c  sw          $zero, -0x5DA4($gp)
    ctx->pc = 0x310c30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943324), GPR_U32(ctx, 0));
    // 0x310c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310c38: 0xaf80a278  sw          $zero, -0x5D88($gp)
    ctx->pc = 0x310c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943352), GPR_U32(ctx, 0));
    // 0x310c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x310C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310C3Cu;
            // 0x310c40: 0xaf80a27c  sw          $zero, -0x5D84($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310C44u;
}
