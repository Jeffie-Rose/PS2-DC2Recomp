#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetStereoMode__6CSoundFi
// Address: 0x18a320 - 0x18a328
void SetStereoMode__6CSoundFi_0x18a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStereoMode__6CSoundFi_0x18a320");
#endif

    ctx->pc = 0x18a320u;

    // 0x18a320: 0x8062c94  j           func_18B250
    ctx->pc = 0x18A320u;
    ctx->pc = 0x18A324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A320u;
            // 0x18a324: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ezMidi__Fii_0x18b250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18A328u;
}
