#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetInversMatrix__8CEditMapFPA4_fPA4_f
// Address: 0x1b13b0 - 0x1b13bc
void GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0");
#endif

    ctx->pc = 0x1b13b0u;

    // 0x1b13b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b13b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13b4: 0x8041c02  j           func_107008
    ctx->pc = 0x1B13B4u;
    ctx->pc = 0x1B13B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B13B4u;
            // 0x1b13b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107008u;
    if (runtime->hasFunction(0x107008u)) {
        auto targetFn = runtime->lookupFunction(0x107008u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0InversMatrix_0x107008(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B13BCu;
}
