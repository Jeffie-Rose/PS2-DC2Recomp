#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuMainPosCfgBuffer__FPi
// Address: 0x234740 - 0x234758
void GetMenuMainPosCfgBuffer__FPi_0x234740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuMainPosCfgBuffer__FPi_0x234740");
#endif

    ctx->pc = 0x234740u;

    // 0x234740: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x234740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234744: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x234744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x234748: 0x8c24d610  lw          $a0, -0x29F0($at)
    ctx->pc = 0x234748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956560)));
    // 0x23474c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23474cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x234750: 0x8052734  j           func_149CD0
    ctx->pc = 0x234750u;
    ctx->pc = 0x234754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234750u;
            // 0x234754: 0x24a5a838  addiu       $a1, $a1, -0x57C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x234758u;
}
