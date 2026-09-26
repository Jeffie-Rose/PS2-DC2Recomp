#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSePlayVP__FUiiiii
// Address: 0x18e0a0 - 0x18e0bc
void sndSePlayVP__FUiiiii_0x18e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSePlayVP__FUiiiii_0x18e0a0");
#endif

    ctx->pc = 0x18e0a0u;

    // 0x18e0a0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x18e0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0a4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x18e0a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x18e0a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0ac: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x18e0acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e0b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x18e0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18e0b4: 0x8063968  j           func_18E5A0
    ctx->pc = 0x18E0B4u;
    ctx->pc = 0x18E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E0B4u;
            // 0x18e0b8: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E5A0u;
    if (runtime->hasFunction(0x18E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x18E5A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sndSePlaySeID__FUiiiiiii_0x18e5a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18E0BCu;
}
