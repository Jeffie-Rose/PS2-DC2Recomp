#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemPos__12CMenuKeyFuncFPi
// Address: 0x23c090 - 0x23c0a8
void GetItemPos__12CMenuKeyFuncFPi_0x23c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemPos__12CMenuKeyFuncFPi_0x23c090");
#endif

    ctx->pc = 0x23c090u;

    // 0x23c090: 0x8c840138  lw          $a0, 0x138($a0)
    ctx->pc = 0x23c090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x23c094: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x23c094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c098: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x23c098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x23c09c: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x23c09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x23c0a0: 0x808974c  j           func_225D30
    ctx->pc = 0x23C0A0u;
    ctx->pc = 0x23C0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23C0A0u;
            // 0x23c0a4: 0x24a5abf0  addiu       $a1, $a1, -0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x23C0A8u;
}
