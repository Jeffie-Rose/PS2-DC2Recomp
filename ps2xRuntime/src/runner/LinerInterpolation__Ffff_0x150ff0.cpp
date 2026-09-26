#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LinerInterpolation__Ffff
// Address: 0x150ff0 - 0x151000
void LinerInterpolation__Ffff_0x150ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinerInterpolation__Ffff_0x150ff0");
#endif

    ctx->pc = 0x150ff0u;

    // 0x150ff0: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x150ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x150ff4: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x150ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x150ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x150FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150FF8u;
            // 0x150ffc: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151000u;
}
