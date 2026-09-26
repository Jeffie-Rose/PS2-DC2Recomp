#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_editdata.cpp
// Address: 0x3748a0 - 0x3748c0
void ps2___sinit_editdata_cpp_0x3748a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_editdata_cpp_0x3748a0");
#endif

    ctx->pc = 0x3748a0u;

    // 0x3748a0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x3748a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x3748a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x3748a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x3748a8: 0x24846300  addiu       $a0, $a0, 0x6300
    ctx->pc = 0x3748a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
    // 0x3748ac: 0x24a5a9f0  addiu       $a1, $a1, -0x5610
    ctx->pc = 0x3748acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945264));
    // 0x3748b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3748b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748b4: 0x24070340  addiu       $a3, $zero, 0x340
    ctx->pc = 0x3748b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
    // 0x3748b8: 0x8040070  j           func_1001C0
    ctx->pc = 0x3748B8u;
    ctx->pc = 0x3748BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3748B8u;
            // 0x3748bc: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___construct_array_0x1001c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3748C0u;
}
