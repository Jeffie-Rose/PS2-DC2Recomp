#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__20CStartupEpisodeTitleFv
// Address: 0x28b5f0 - 0x28b600
void Initialize__20CStartupEpisodeTitleFv_0x28b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__20CStartupEpisodeTitleFv_0x28b5f0");
#endif

    ctx->pc = 0x28b5f0u;

    // 0x28b5f0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x28b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x28b5f4: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x28b5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x28B5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5F8u;
            // 0x28b5fc: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B600u;
}
