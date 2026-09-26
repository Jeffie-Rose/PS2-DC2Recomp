#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FADE_OUT_BGM__FP12RS_STACKDATAi
// Address: 0x273860 - 0x27388c
void ps2__FADE_OUT_BGM__FP12RS_STACKDATAi_0x273860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FADE_OUT_BGM__FP12RS_STACKDATAi_0x273860");
#endif

    switch (ctx->pc) {
        case 0x273870u: goto label_273870;
        case 0x27387cu: goto label_27387c;
        default: break;
    }

    ctx->pc = 0x273860u;

    // 0x273860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273868: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273868u;
    SET_GPR_U32(ctx, 31, 0x273870u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273870u; }
        if (ctx->pc != 0x273870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273870u; }
        if (ctx->pc != 0x273870u) { return; }
    }
    ctx->pc = 0x273870u;
label_273870:
    // 0x273870: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273874: 0xc0a9910  jal         func_2A6440
    ctx->pc = 0x273874u;
    SET_GPR_U32(ctx, 31, 0x27387Cu);
    ctx->pc = 0x273878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273874u;
            // 0x273878: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6440u;
    if (runtime->hasFunction(0x2A6440u)) {
        auto targetFn = runtime->lookupFunction(0x2A6440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27387Cu; }
        if (ctx->pc != 0x27387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutBGM__6CSceneFi_0x2a6440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27387Cu; }
        if (ctx->pc != 0x27387Cu) { return; }
    }
    ctx->pc = 0x27387Cu;
label_27387c:
    // 0x27387c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273884: 0x3e00008  jr          $ra
    ctx->pc = 0x273884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273884u;
            // 0x273888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27388Cu;
}
