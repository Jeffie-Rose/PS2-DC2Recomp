#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12CPalletAnimeFv
// Address: 0x1c13e0 - 0x1c13ec
void Initialize__12CPalletAnimeFv_0x1c13e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12CPalletAnimeFv_0x1c13e0");
#endif

    ctx->pc = 0x1c13e0u;

    // 0x1c13e0: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x1c13e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c13e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C13E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C13E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C13E4u;
            // 0x1c13e8: 0xa4800008  sh          $zero, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C13ECu;
}
