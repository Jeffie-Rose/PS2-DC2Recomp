#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_ADD_TEXB__FP12RS_STACKDATAi
// Address: 0x1e6f50 - 0x1e6f7c
void ps2__ESM_ADD_TEXB__FP12RS_STACKDATAi_0x1e6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_ADD_TEXB__FP12RS_STACKDATAi_0x1e6f50");
#endif

    switch (ctx->pc) {
        case 0x1e6f6cu: goto label_1e6f6c;
        default: break;
    }

    ctx->pc = 0x1e6f50u;

    // 0x1e6f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6f54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6f5c: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6f60: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e6f60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e6f64: 0xc0b80f8  jal         func_2E03E0
    ctx->pc = 0x1E6F64u;
    SET_GPR_U32(ctx, 31, 0x1E6F6Cu);
    ctx->pc = 0x1E6F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F64u;
            // 0x1e6f68: 0x8c24fff0  lw          $a0, -0x10($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E03E0u;
    if (runtime->hasFunction(0x2E03E0u)) {
        auto targetFn = runtime->lookupFunction(0x2E03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F6Cu; }
        if (ctx->pc != 0x1E6F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddTexb__16CEffectScriptManFv_0x2e03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F6Cu; }
        if (ctx->pc != 0x1E6F6Cu) { return; }
    }
    ctx->pc = 0x1E6F6Cu;
label_1e6f6c:
    // 0x1e6f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6f74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F74u;
            // 0x1e6f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6F7Cu;
}
