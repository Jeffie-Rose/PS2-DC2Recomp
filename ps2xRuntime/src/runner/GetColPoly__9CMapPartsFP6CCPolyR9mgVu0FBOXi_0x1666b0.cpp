#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetColPoly__9CMapPartsFP6CCPolyR9mgVu0FBOXi
// Address: 0x1666b0 - 0x1666c8
void GetColPoly__9CMapPartsFP6CCPolyR9mgVu0FBOXi_0x1666b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetColPoly__9CMapPartsFP6CCPolyR9mgVu0FBOXi_0x1666b0");
#endif

    ctx->pc = 0x1666b0u;

    // 0x1666b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1666b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1666b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1666b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1666bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666c0: 0x8059960  j           func_166580
    ctx->pc = 0x1666C0u;
    ctx->pc = 0x1666C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666C0u;
            // 0x1666c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166580u;
    if (runtime->hasFunction(0x166580u)) {
        auto targetFn = runtime->lookupFunction(0x166580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetPoly__9CMapPartsFiP6CCPolyR9mgVu0FBOXi_0x166580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1666C8u;
}
