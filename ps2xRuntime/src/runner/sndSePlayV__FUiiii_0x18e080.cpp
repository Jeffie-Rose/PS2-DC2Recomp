#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlayV__FUiiii
// Address: 0x18e080 - 0x18e09c
void sndSePlayV__FUiiii_0x18e080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlayV__FUiiii_0x18e080");
#endif

    ctx->pc = 0x18e080u;

    // 0x18e080: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x18e080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e084: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x18e084u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e088: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18e088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e08c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18e08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e090: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x18e090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18e094: 0x8063968  j           func_18E5A0
    ctx->pc = 0x18E094u;
    ctx->pc = 0x18E098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E094u;
            // 0x18e098: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E5A0u;
    if (runtime->hasFunction(0x18E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18E5A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sndSePlaySeID__FUiiiiiii_0x18e5a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18E09Cu;
}
