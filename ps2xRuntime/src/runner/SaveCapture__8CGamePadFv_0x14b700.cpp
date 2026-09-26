#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveCapture__8CGamePadFv
// Address: 0x14b700 - 0x14b720
void SaveCapture__8CGamePadFv_0x14b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveCapture__8CGamePadFv_0x14b700");
#endif

    ctx->pc = 0x14b700u;

    // 0x14b700: 0x8c830474  lw          $v1, 0x474($a0)
    ctx->pc = 0x14b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x14b704: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x14b704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    // 0x14b708: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x14b708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14b70c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x14b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x14b710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14b714: 0x24842870  addiu       $a0, $a0, 0x2870
    ctx->pc = 0x14b714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10352));
    // 0x14b718: 0x80526fc  j           func_149BF0
    ctx->pc = 0x14B718u;
    ctx->pc = 0x14B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B718u;
            // 0x14b71c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149BF0u;
    if (runtime->hasFunction(0x149BF0u)) {
        auto targetFn = runtime->lookupFunction(0x149BF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        WriteFile__FPcPvi_0x149bf0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x14B720u;
}
