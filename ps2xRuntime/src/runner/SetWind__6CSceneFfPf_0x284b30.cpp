#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWind__6CSceneFfPf
// Address: 0x284b30 - 0x284b3c
void SetWind__6CSceneFfPf_0x284b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWind__6CSceneFfPf_0x284b30");
#endif

    ctx->pc = 0x284b30u;

    // 0x284b30: 0xe48c2f78  swc1        $f12, 0x2F78($a0)
    ctx->pc = 0x284b30u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12152), bits); }
    // 0x284b34: 0x8041be0  j           func_106F80
    ctx->pc = 0x284B34u;
    ctx->pc = 0x284B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284B34u;
            // 0x284b38: 0x24842f80  addiu       $a0, $a0, 0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0Normalize_0x106f80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x284B3Cu;
}
