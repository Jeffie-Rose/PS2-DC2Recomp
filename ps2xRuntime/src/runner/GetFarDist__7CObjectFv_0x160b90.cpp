#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFarDist__7CObjectFv
// Address: 0x160b90 - 0x160b98
void GetFarDist__7CObjectFv_0x160b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFarDist__7CObjectFv_0x160b90");
#endif

    ctx->pc = 0x160b90u;

    // 0x160b90: 0x3e00008  jr          $ra
    ctx->pc = 0x160B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B90u;
            // 0x160b94: 0xc4800050  lwc1        $f0, 0x50($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160B98u;
}
