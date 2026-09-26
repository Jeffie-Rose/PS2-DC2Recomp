#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitFishPrize__Fv
// Address: 0x219f10 - 0x219f24
void InitFishPrize__Fv_0x219f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFishPrize__Fv_0x219f10");
#endif

    ctx->pc = 0x219f10u;

    // 0x219f10: 0xaf809270  sw          $zero, -0x6D90($gp)
    ctx->pc = 0x219f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939248), GPR_U32(ctx, 0));
    // 0x219f14: 0xaf809274  sw          $zero, -0x6D8C($gp)
    ctx->pc = 0x219f14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939252), GPR_U32(ctx, 0));
    // 0x219f18: 0xa7809278  sh          $zero, -0x6D88($gp)
    ctx->pc = 0x219f18u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939256), (uint16_t)GPR_U32(ctx, 0));
    // 0x219f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x219F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219F1Cu;
            // 0x219f20: 0xaf809284  sw          $zero, -0x6D7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219F24u;
}
