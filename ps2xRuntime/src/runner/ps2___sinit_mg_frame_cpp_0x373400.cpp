#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_mg_frame.cpp
// Address: 0x373400 - 0x37340c
void ps2___sinit_mg_frame_cpp_0x373400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_mg_frame_cpp_0x373400");
#endif

    ctx->pc = 0x373400u;

    // 0x373400: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x373400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x373404: 0x804d6d8  j           func_135B60
    ctx->pc = 0x373404u;
    ctx->pc = 0x373408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373404u;
            // 0x373408: 0x24840da0  addiu       $a0, $a0, 0xDA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x37340Cu;
}
