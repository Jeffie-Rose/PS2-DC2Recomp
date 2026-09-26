#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvertCharaLoadDataPhase__Fii
// Address: 0x2afd30 - 0x2afd54
void ConvertCharaLoadDataPhase__Fii_0x2afd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvertCharaLoadDataPhase__Fii_0x2afd30");
#endif

    ctx->pc = 0x2afd30u;

    // 0x2afd30: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2afd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2afd34: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2afd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2afd38: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2afd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2afd3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2afd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2afd40: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x2afd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x2afd44: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2afd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2afd48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2afd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2afd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD4Cu;
            // 0x2afd50: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFD54u;
}
