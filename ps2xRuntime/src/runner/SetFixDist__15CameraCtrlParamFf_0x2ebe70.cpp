#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFixDist__15CameraCtrlParamFf
// Address: 0x2ebe70 - 0x2ebe7c
void SetFixDist__15CameraCtrlParamFf_0x2ebe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFixDist__15CameraCtrlParamFf_0x2ebe70");
#endif

    ctx->pc = 0x2ebe70u;

    // 0x2ebe70: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x2ebe70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ebe74: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE74u;
            // 0x2ebe78: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBE7Cu;
}
