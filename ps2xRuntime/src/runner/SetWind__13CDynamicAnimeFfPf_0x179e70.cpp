#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWind__13CDynamicAnimeFfPf
// Address: 0x179e70 - 0x179e7c
void SetWind__13CDynamicAnimeFfPf_0x179e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWind__13CDynamicAnimeFfPf_0x179e70");
#endif

    ctx->pc = 0x179e70u;

    // 0x179e70: 0xe48c0068  swc1        $f12, 0x68($a0)
    ctx->pc = 0x179e70u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x179e74: 0x8041be0  j           func_106F80
    ctx->pc = 0x179E74u;
    ctx->pc = 0x179E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179E74u;
            // 0x179e78: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0Normalize_0x106f80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x179E7Cu;
}
