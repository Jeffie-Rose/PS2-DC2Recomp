#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNotUsedTexb__16CEffectScriptManFv
// Address: 0x2e03b0 - 0x2e03dc
void GetNotUsedTexb__16CEffectScriptManFv_0x2e03b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNotUsedTexb__16CEffectScriptManFv_0x2e03b0");
#endif

    ctx->pc = 0x2e03b0u;

    // 0x2e03b0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e03b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e03b4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2e03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e03b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e03b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e03bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E03BCu;
    {
        const bool branch_taken_0x2e03bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E03C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E03BCu;
            // 0x2e03c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e03bc) {
            ctx->pc = 0x2E03CCu;
            goto label_2e03cc;
        }
    }
    ctx->pc = 0x2E03C4u;
    // 0x2e03c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E03C4u;
    {
        const bool branch_taken_0x2e03c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e03c4) {
            ctx->pc = 0x2E03D4u;
            goto label_2e03d4;
        }
    }
    ctx->pc = 0x2E03CCu;
label_2e03cc:
    // 0x2e03cc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2e03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e03d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e03d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e03d4:
    // 0x2e03d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E03D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E03DCu;
}
