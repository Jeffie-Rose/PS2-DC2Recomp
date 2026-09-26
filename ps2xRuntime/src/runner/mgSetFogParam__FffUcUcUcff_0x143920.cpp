#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetFogParam__FffUcUcUcff
// Address: 0x143920 - 0x14393c
void mgSetFogParam__FffUcUcUcff_0x143920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetFogParam__FffUcUcUcff_0x143920");
#endif

    ctx->pc = 0x143920u;

    // 0x143920: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x143920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143924: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x143924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143928: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14392c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14392cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143930: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143934: 0x804e600  j           func_139800
    ctx->pc = 0x143934u;
    ctx->pc = 0x143938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143934u;
            // 0x143938: 0x24840ec0  addiu       $a0, $a0, 0xEC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139800u;
    if (runtime->hasFunction(0x139800u)) {
        auto targetFn = runtime->lookupFunction(0x139800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetFogParam__13mgRENDER_INFOFffUcUcUcff_0x139800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14393Cu;
}
