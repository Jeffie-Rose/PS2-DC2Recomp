#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWaterLevel__Fv
// Address: 0x30f9e0 - 0x30f9e8
void GetWaterLevel__Fv_0x30f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWaterLevel__Fv_0x30f9e0");
#endif

    ctx->pc = 0x30f9e0u;

    // 0x30f9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x30F9E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F9E0u;
            // 0x30f9e4: 0xc780a244  lwc1        $f0, -0x5DBC($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F9E8u;
}
