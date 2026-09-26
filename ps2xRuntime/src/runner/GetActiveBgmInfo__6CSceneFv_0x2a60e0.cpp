#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveBgmInfo__6CSceneFv
// Address: 0x2a60e0 - 0x2a6110
void GetActiveBgmInfo__6CSceneFv_0x2a60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveBgmInfo__6CSceneFv_0x2a60e0");
#endif

    ctx->pc = 0x2a60e0u;

    // 0x2a60e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a60e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a60e4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a60e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a60e8: 0x8c239940  lw          $v1, -0x66C0($at)
    ctx->pc = 0x2a60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940992)));
    // 0x2a60ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a60f0: 0x34019080  ori         $at, $zero, 0x9080
    ctx->pc = 0x2a60f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36992);
    // 0x2a60f4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2a60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a60f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a60fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6100: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a6100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a6104: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a6104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a6108: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A610Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6108u;
            // 0x2a610c: 0x411021  addu        $v0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6110u;
}
