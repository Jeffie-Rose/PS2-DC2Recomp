#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Iam__13mgCVisualPrimFv
// Address: 0x13bc80 - 0x13bc88
void Iam__13mgCVisualPrimFv_0x13bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Iam__13mgCVisualPrimFv_0x13bc80");
#endif

    ctx->pc = 0x13bc80u;

    // 0x13bc80: 0x3e00008  jr          $ra
    ctx->pc = 0x13BC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BC80u;
            // 0x13bc84: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BC88u;
}
