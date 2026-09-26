#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Vertex4__11mgCDrawPrimFPi
// Address: 0x134c60 - 0x134c74
void Vertex4__11mgCDrawPrimFPi_0x134c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vertex4__11mgCDrawPrimFPi_0x134c60");
#endif

    ctx->pc = 0x134c60u;

    // 0x134c60: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x134c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c64: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x134c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x134c68: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x134c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x134c6c: 0x804d2ec  j           func_134BB0
    ctx->pc = 0x134C6Cu;
    ctx->pc = 0x134C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134C6Cu;
            // 0x134c70: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x134C74u;
}
