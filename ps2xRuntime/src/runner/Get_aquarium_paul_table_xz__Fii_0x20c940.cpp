#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get_aquarium_paul_table_xz__Fii
// Address: 0x20c940 - 0x20c954
void Get_aquarium_paul_table_xz__Fii_0x20c940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_aquarium_paul_table_xz__Fii_0x20c940");
#endif

    ctx->pc = 0x20c940u;

    // 0x20c940: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20c944: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20c948: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20c948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20c94c: 0x8083244  j           func_20C910
    ctx->pc = 0x20C94Cu;
    ctx->pc = 0x20C950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C94Cu;
            // 0x20c950: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C910u;
    if (runtime->hasFunction(0x20C910u)) {
        auto targetFn = runtime->lookupFunction(0x20C910u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Get_aquarium_paul_table__Fi_0x20c910(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x20C954u;
}
