#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWinTbl_str__6ClsMesFiPiPi
// Address: 0x1556b0 - 0x1556c0
void MakeMesWinTbl_str__6ClsMesFiPiPi_0x1556b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWinTbl_str__6ClsMesFiPiPi_0x1556b0");
#endif

    ctx->pc = 0x1556b0u;

    // 0x1556b0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1556b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1556b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1556b8: 0x80552ac  j           func_154AB0
    ctx->pc = 0x1556B8u;
    ctx->pc = 0x1556BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1556B8u;
            // 0x1556bc: 0x24451801  addiu       $a1, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154AB0u;
    if (runtime->hasFunction(0x154AB0u)) {
        auto targetFn = runtime->lookupFunction(0x154AB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MakeMesWinTbl_str__6ClsMesFPcPiPi_0x154ab0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1556C0u;
}
