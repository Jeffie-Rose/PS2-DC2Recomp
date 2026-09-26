#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExitFishing__FP6CScene
// Address: 0x2fc750 - 0x2fc75c
void ExitFishing__FP6CScene_0x2fc750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExitFishing__FP6CScene_0x2fc750");
#endif

    ctx->pc = 0x2fc750u;

    // 0x2fc750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fc750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fc754: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC754u;
            // 0x2fc758: 0xaf83a05c  sw          $v1, -0x5FA4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC75Cu;
}
