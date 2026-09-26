#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPosition__9mgCObjectFPf
// Address: 0x136260 - 0x136270
void GetPosition__9mgCObjectFPf_0x136260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPosition__9mgCObjectFPf_0x136260");
#endif

    ctx->pc = 0x136260u;

    // 0x136260: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x136260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136264: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x136264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136268: 0x8041c5c  j           func_107170
    ctx->pc = 0x136268u;
    ctx->pc = 0x13626Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136268u;
            // 0x13626c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0CopyVector_0x107170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x136270u;
}
