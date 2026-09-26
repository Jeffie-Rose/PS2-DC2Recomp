#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12COutLineDrawFPfff
// Address: 0x17c2c0 - 0x17c2cc
void Draw__12COutLineDrawFPfff_0x17c2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12COutLineDrawFPfff_0x17c2c0");
#endif

    ctx->pc = 0x17c2c0u;

    // 0x17c2c0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x17c2c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c2c4: 0x805f0b4  j           func_17C2D0
    ctx->pc = 0x17C2C4u;
    ctx->pc = 0x17C2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C2C4u;
            // 0x17c2c8: 0x7c820040  sq          $v0, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C2D0u;
    if (runtime->hasFunction(0x17C2D0u)) {
        auto targetFn = runtime->lookupFunction(0x17C2D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Draw__12COutLineDrawFff_0x17c2d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17C2CCu;
}
