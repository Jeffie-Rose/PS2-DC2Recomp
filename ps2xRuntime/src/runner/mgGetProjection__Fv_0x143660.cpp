#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetProjection__Fv
// Address: 0x143660 - 0x14366c
void mgGetProjection__Fv_0x143660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetProjection__Fv_0x143660");
#endif

    ctx->pc = 0x143660u;

    // 0x143660: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143664: 0x3e00008  jr          $ra
    ctx->pc = 0x143664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143664u;
            // 0x143668: 0xc4200ec0  lwc1        $f0, 0xEC0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 3776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14366Cu;
}
