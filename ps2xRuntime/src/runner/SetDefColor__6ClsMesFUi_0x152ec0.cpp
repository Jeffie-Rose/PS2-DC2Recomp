#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDefColor__6ClsMesFUi
// Address: 0x152ec0 - 0x152ed0
void SetDefColor__6ClsMesFUi_0x152ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDefColor__6ClsMesFUi_0x152ec0");
#endif

    ctx->pc = 0x152ec0u;

    // 0x152ec0: 0xac8517d0  sw          $a1, 0x17D0($a0)
    ctx->pc = 0x152ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6096), GPR_U32(ctx, 5));
    // 0x152ec4: 0x8c8317d0  lw          $v1, 0x17D0($a0)
    ctx->pc = 0x152ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6096)));
    // 0x152ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x152EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EC8u;
            // 0x152ecc: 0xac8317d4  sw          $v1, 0x17D4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152ED0u;
}
