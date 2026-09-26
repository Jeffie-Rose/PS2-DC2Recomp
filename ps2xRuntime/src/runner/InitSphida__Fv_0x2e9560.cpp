#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitSphida__Fv
// Address: 0x2e9560 - 0x2e9568
void InitSphida__Fv_0x2e9560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSphida__Fv_0x2e9560");
#endif

    ctx->pc = 0x2e9560u;

    // 0x2e9560: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9560u;
            // 0x2e9564: 0xaf809ed4  sw          $zero, -0x612C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9568u;
}
