#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCursorDraw__FP10mgCTexturePffi
// Address: 0x223d40 - 0x223d58
void MenuCursorDraw__FP10mgCTexturePffi_0x223d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCursorDraw__FP10mgCTexturePffi_0x223d40");
#endif

    ctx->pc = 0x223d40u;

    // 0x223d40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x223d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x223d44: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x223d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x223d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x223d4c: 0x0  nop
    ctx->pc = 0x223d4cu;
    // NOP
    // 0x223d50: 0x8088e94  j           func_223A50
    ctx->pc = 0x223D50u;
    ctx->pc = 0x223D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223D50u;
            // 0x223d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (runtime->hasFunction(0x223A50u)) {
        auto targetFn = runtime->lookupFunction(0x223A50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x223D58u;
}
