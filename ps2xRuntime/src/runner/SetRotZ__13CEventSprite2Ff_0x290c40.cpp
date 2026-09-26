#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotZ__13CEventSprite2Ff
// Address: 0x290c40 - 0x290c48
void SetRotZ__13CEventSprite2Ff_0x290c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotZ__13CEventSprite2Ff_0x290c40");
#endif

    ctx->pc = 0x290c40u;

    // 0x290c40: 0x3e00008  jr          $ra
    ctx->pc = 0x290C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290C40u;
            // 0x290c44: 0xe48c0050  swc1        $f12, 0x50($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290C48u;
}
