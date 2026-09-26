#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_vlgr_info.cpp
// Address: 0x374ce0 - 0x374d00
void ps2___sinit_vlgr_info_cpp_0x374ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_vlgr_info_cpp_0x374ce0");
#endif

    ctx->pc = 0x374ce0u;

    // 0x374ce0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374ce4: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x374ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x374ce8: 0x24842bd0  addiu       $a0, $a0, 0x2BD0
    ctx->pc = 0x374ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11216));
    // 0x374cec: 0x24a5a780  addiu       $a1, $a1, -0x5880
    ctx->pc = 0x374cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944640));
    // 0x374cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374cf4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x374cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x374cf8: 0x8040070  j           func_1001C0
    ctx->pc = 0x374CF8u;
    ctx->pc = 0x374CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374CF8u;
            // 0x374cfc: 0x24080200  addiu       $t0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___construct_array_0x1001c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x374D00u;
}
