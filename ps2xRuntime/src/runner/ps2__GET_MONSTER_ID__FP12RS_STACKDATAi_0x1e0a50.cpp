#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONSTER_ID__FP12RS_STACKDATAi
// Address: 0x1e0a50 - 0x1e0a74
void ps2__GET_MONSTER_ID__FP12RS_STACKDATAi_0x1e0a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONSTER_ID__FP12RS_STACKDATAi_0x1e0a50");
#endif

    switch (ctx->pc) {
        case 0x1e0a64u: goto label_1e0a64;
        default: break;
    }

    ctx->pc = 0x1e0a50u;

    // 0x1e0a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0a58: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0a5c: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E0A5Cu;
    SET_GPR_U32(ctx, 31, 0x1E0A64u);
    ctx->pc = 0x1E0A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A5Cu;
            // 0x1e0a60: 0x84451154  lh          $a1, 0x1154($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A64u; }
        if (ctx->pc != 0x1E0A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A64u; }
        if (ctx->pc != 0x1E0A64u) { return; }
    }
    ctx->pc = 0x1E0A64u;
label_1e0a64:
    // 0x1e0a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0A6Cu;
            // 0x1e0a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0A74u;
}
