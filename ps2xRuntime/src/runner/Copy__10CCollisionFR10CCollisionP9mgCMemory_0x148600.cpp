#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__10CCollisionFR10CCollisionP9mgCMemory
// Address: 0x148600 - 0x148610
void Copy__10CCollisionFR10CCollisionP9mgCMemory_0x148600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__10CCollisionFR10CCollisionP9mgCMemory_0x148600");
#endif

    ctx->pc = 0x148600u;

    // 0x148600: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x148600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148604: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x148604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x148608: 0x804e624  j           func_139890
    ctx->pc = 0x148608u;
    ctx->pc = 0x14860Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148608u;
            // 0x14860c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x148610u;
}
