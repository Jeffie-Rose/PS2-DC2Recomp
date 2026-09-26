#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEffect__7CEffectFP12EFFECT_PARAM
// Address: 0x17f770 - 0x17f7b8
void SetEffect__7CEffectFP12EFFECT_PARAM_0x17f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffect__7CEffectFP12EFFECT_PARAM_0x17f770");
#endif

    ctx->pc = 0x17f770u;

    // 0x17f770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f774: 0x240601b0  addiu       $a2, $zero, 0x1B0
    ctx->pc = 0x17f774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
    // 0x17f778: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17f778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17f77c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17f780: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17f780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17f784: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17f784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17f788: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17f788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17f78c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x17f790: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17f790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17f794: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17f794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17f798: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x17f798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x17f79c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x17f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x17f7a0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x17f7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x17f7a4: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17f7a8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17f7ac: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x17f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x17f7b0: 0x8049c18  j           func_127060
    ctx->pc = 0x17F7B0u;
    ctx->pc = 0x17F7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7B0u;
            // 0x17f7b4: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memcpy_0x127060(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17F7B8u;
}
