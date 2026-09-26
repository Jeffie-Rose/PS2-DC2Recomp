#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetNowFrameRate__Fv
// Address: 0x1421d0 - 0x1421dc
void mgGetNowFrameRate__Fv_0x1421d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetNowFrameRate__Fv_0x1421d0");
#endif

    ctx->pc = 0x1421d0u;

    // 0x1421d0: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x1421d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1421d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1421D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1421D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1421D4u;
            // 0x1421d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1421DCu;
}
