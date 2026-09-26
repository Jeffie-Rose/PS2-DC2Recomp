#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _initSeqAgain
// Address: 0x10eb98 - 0x10eba4
void _initSeqAgain_0x10eb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_initSeqAgain_0x10eb98");
#endif

    ctx->pc = 0x10eb98u;

    // 0x10eb98: 0xac800848  sw          $zero, 0x848($a0)
    ctx->pc = 0x10eb98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2120), GPR_U32(ctx, 0));
    // 0x10eb9c: 0x8042656  j           func_109958
    ctx->pc = 0x10EB9Cu;
    ctx->pc = 0x10EBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EB9Cu;
            // 0x10eba0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109958u;
    if (runtime->hasFunction(0x109958u)) {
        auto targetFn = runtime->lookupFunction(0x109958u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _ipuSetMPEG1_0x109958(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10EBA4u;
}
