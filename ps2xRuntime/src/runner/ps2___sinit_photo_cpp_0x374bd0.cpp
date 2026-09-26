#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_photo.cpp
// Address: 0x374bd0 - 0x374bdc
void ps2___sinit_photo_cpp_0x374bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_photo_cpp_0x374bd0");
#endif

    ctx->pc = 0x374bd0u;

    // 0x374bd0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374bd4: 0x80b5750  j           func_2D5D40
    ctx->pc = 0x374BD4u;
    ctx->pc = 0x374BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374BD4u;
            // 0x374bd8: 0x2484ddf0  addiu       $a0, $a0, -0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D40u;
    if (runtime->hasFunction(0x2D5D40u)) {
        auto targetFn = runtime->lookupFunction(0x2D5D40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Init__5CFontFv_0x2d5d40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x374BDCu;
}
