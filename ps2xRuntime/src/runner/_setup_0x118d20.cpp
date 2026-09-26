#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _setup
// Address: 0x118d20 - 0x118d3c
void _setup_0x118d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setup_0x118d20");
#endif

    ctx->pc = 0x118d20u;

    // 0x118d20: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x118d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x118d24: 0xc  syscall     0
    ctx->pc = 0x118d24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x118d28: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x118d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x118d2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x118d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x118d30: 0x8c62159c  lw          $v0, 0x159C($v1)
    ctx->pc = 0x118d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5532)));
    // 0x118d34: 0x3e00008  jr          $ra
    ctx->pc = 0x118D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118D34u;
            // 0x118d38: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118D3Cu;
}
