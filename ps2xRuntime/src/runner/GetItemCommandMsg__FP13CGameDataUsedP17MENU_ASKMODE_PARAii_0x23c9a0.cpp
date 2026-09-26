#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemCommandMsg__FP13CGameDataUsedP17MENU_ASKMODE_PARAii
// Address: 0x23c9a0 - 0x23c9c0
void GetItemCommandMsg__FP13CGameDataUsedP17MENU_ASKMODE_PARAii_0x23c9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemCommandMsg__FP13CGameDataUsedP17MENU_ASKMODE_PARAii_0x23c9a0");
#endif

    ctx->pc = 0x23c9a0u;

    // 0x23c9a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23c9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9a4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x23c9a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9a8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x23c9a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9ac: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x23c9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x23c9b0: 0x24460028  addiu       $a2, $v0, 0x28
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23c9b4: 0x24470048  addiu       $a3, $v0, 0x48
    ctx->pc = 0x23c9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x23c9b8: 0x808f270  j           func_23C9C0
    ctx->pc = 0x23C9B8u;
    ctx->pc = 0x23C9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C9B8u;
            // 0x23c9bc: 0x24480058  addiu       $t0, $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C9C0u;
    if (runtime->hasFunction(0x23C9C0u)) {
        auto targetFn = runtime->lookupFunction(0x23C9C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetItemCommandMsg__FP13CGameDataUsedPiPUiPsPsii_0x23c9c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23C9C0u;
}
