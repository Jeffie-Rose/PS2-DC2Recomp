#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWaterLevel__Ff
// Address: 0x30f9d0 - 0x30f9d8
void SetWaterLevel__Ff_0x30f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWaterLevel__Ff_0x30f9d0");
#endif

    ctx->pc = 0x30f9d0u;

    // 0x30f9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F9D0u;
            // 0x30f9d4: 0xe78ca244  swc1        $f12, -0x5DBC($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943300), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F9D8u;
}
