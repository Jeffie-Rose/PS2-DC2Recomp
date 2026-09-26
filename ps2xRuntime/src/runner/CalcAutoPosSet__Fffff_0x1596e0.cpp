#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcAutoPosSet__Fffff
// Address: 0x1596e0 - 0x1596f4
void CalcAutoPosSet__Fffff_0x1596e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcAutoPosSet__Fffff_0x1596e0");
#endif

    ctx->pc = 0x1596e0u;

    // 0x1596e0: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x1596e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x1596e4: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x1596e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x1596e8: 0x460f0002  mul.s       $f0, $f0, $f15
    ctx->pc = 0x1596e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x1596ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1596ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1596F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596ECu;
            // 0x1596f0: 0x460c0000  add.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1596F4u;
}
