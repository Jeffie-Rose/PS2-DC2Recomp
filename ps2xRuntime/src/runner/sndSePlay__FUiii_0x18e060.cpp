#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlay__FUiii
// Address: 0x18e060 - 0x18e078
void sndSePlay__FUiii_0x18e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlay__FUiii_0x18e060");
#endif

    ctx->pc = 0x18e060u;

    // 0x18e060: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x18e060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e064: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x18e064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18e068: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18e068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e06c: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x18e06cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x18e070: 0x8063968  j           func_18E5A0
    ctx->pc = 0x18E070u;
    ctx->pc = 0x18E074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E070u;
            // 0x18e074: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E5A0u;
    if (runtime->hasFunction(0x18E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18E5A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sndSePlaySeID__FUiiiiiii_0x18e5a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18E078u;
}
