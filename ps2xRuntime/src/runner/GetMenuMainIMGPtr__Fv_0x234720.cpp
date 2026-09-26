#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuMainIMGPtr__Fv
// Address: 0x234720 - 0x234738
void GetMenuMainIMGPtr__Fv_0x234720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuMainIMGPtr__Fv_0x234720");
#endif

    ctx->pc = 0x234720u;

    // 0x234720: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x234720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234724: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x234724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234728: 0x8c24d610  lw          $a0, -0x29F0($at)
    ctx->pc = 0x234728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956560)));
    // 0x23472c: 0x24a5a828  addiu       $a1, $a1, -0x57D8
    ctx->pc = 0x23472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944808));
    // 0x234730: 0x8052734  j           func_149CD0
    ctx->pc = 0x234730u;
    ctx->pc = 0x234734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234730u;
            // 0x234734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x234738u;
}
