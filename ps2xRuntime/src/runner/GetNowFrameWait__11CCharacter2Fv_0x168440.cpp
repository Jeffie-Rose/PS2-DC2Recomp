#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowFrameWait__11CCharacter2Fv
// Address: 0x168440 - 0x168448
void GetNowFrameWait__11CCharacter2Fv_0x168440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowFrameWait__11CCharacter2Fv_0x168440");
#endif

    ctx->pc = 0x168440u;

    // 0x168440: 0x3e00008  jr          $ra
    ctx->pc = 0x168440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168440u;
            // 0x168444: 0xc480038c  lwc1        $f0, 0x38C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168448u;
}
