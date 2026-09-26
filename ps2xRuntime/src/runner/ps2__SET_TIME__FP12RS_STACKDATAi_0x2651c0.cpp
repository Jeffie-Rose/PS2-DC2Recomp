#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_TIME__FP12RS_STACKDATAi
// Address: 0x2651c0 - 0x2651ec
void ps2__SET_TIME__FP12RS_STACKDATAi_0x2651c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_TIME__FP12RS_STACKDATAi_0x2651c0");
#endif

    switch (ctx->pc) {
        case 0x2651d0u: goto label_2651d0;
        case 0x2651dcu: goto label_2651dc;
        default: break;
    }

    ctx->pc = 0x2651c0u;

    // 0x2651c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2651c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2651c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2651c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2651c8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2651C8u;
    SET_GPR_U32(ctx, 31, 0x2651D0u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2651D0u; }
        if (ctx->pc != 0x2651D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2651D0u; }
        if (ctx->pc != 0x2651D0u) { return; }
    }
    ctx->pc = 0x2651D0u;
label_2651d0:
    // 0x2651d0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2651d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2651d4: 0xc0a1270  jal         func_2849C0
    ctx->pc = 0x2651D4u;
    SET_GPR_U32(ctx, 31, 0x2651DCu);
    ctx->pc = 0x2651D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2651D4u;
            // 0x2651d8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849C0u;
    if (runtime->hasFunction(0x2849C0u)) {
        auto targetFn = runtime->lookupFunction(0x2849C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2651DCu; }
        if (ctx->pc != 0x2651DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTime__6CSceneFf_0x2849c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2651DCu; }
        if (ctx->pc != 0x2651DCu) { return; }
    }
    ctx->pc = 0x2651DCu;
label_2651dc:
    // 0x2651dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2651dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2651e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2651e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2651e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2651E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2651E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2651E4u;
            // 0x2651e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2651ECu;
}
