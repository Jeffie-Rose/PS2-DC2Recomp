#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DEL_IMG__FP12RS_STACKDATAi
// Address: 0x263e40 - 0x263e78
void ps2__DEL_IMG__FP12RS_STACKDATAi_0x263e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DEL_IMG__FP12RS_STACKDATAi_0x263e40");
#endif

    switch (ctx->pc) {
        case 0x263e50u: goto label_263e50;
        case 0x263e68u: goto label_263e68;
        default: break;
    }

    ctx->pc = 0x263e40u;

    // 0x263e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263e48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x263E48u;
    SET_GPR_U32(ctx, 31, 0x263E50u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E50u; }
        if (ctx->pc != 0x263E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E50u; }
        if (ctx->pc != 0x263E50u) { return; }
    }
    ctx->pc = 0x263E50u;
label_263e50:
    // 0x263e50: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x263e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x263e54: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x263e58: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x263e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x263e5c: 0x8c632e7c  lw          $v1, 0x2E7C($v1)
    ctx->pc = 0x263e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11900)));
    // 0x263e60: 0xc04b950  jal         func_12E540
    ctx->pc = 0x263E60u;
    SET_GPR_U32(ctx, 31, 0x263E68u);
    ctx->pc = 0x263E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263E60u;
            // 0x263e64: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E68u; }
        if (ctx->pc != 0x263E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E68u; }
        if (ctx->pc != 0x263E68u) { return; }
    }
    ctx->pc = 0x263E68u;
label_263e68:
    // 0x263e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263e70: 0x3e00008  jr          $ra
    ctx->pc = 0x263E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E70u;
            // 0x263e74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x263E78u;
}
