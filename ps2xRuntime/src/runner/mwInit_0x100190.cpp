#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mwInit
// Address: 0x100190 - 0x1001b4
void mwInit_0x100190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwInit_0x100190");
#endif

    ctx->pc = 0x100190u;

    // 0x100190: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x100190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x100194: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x100194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x100198: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x100198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x10019c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x10019cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
    // 0x1001a0: 0x24844d80  addiu       $a0, $a0, 0x4D80
    ctx->pc = 0x1001a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19840));
    // 0x1001a4: 0x24a54e40  addiu       $a1, $a1, 0x4E40
    ctx->pc = 0x1001a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20032));
    // 0x1001a8: 0x24c66480  addiu       $a2, $a2, 0x6480
    ctx->pc = 0x1001a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25728));
    // 0x1001ac: 0x8040274  j           func_1009D0
    ctx->pc = 0x1001ACu;
    ctx->pc = 0x1001B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1001ACu;
            // 0x1001b0: 0x24e76480  addiu       $a3, $a3, 0x6480 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (runtime->hasFunction(0x1009D0u)) {
        auto targetFn = runtime->lookupFunction(0x1009D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___initialize_cpp_rts_0x1009d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1001B4u;
}
