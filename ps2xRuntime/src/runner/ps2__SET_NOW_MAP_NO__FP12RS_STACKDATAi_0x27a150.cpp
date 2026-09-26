#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_NOW_MAP_NO__FP12RS_STACKDATAi
// Address: 0x27a150 - 0x27a17c
void ps2__SET_NOW_MAP_NO__FP12RS_STACKDATAi_0x27a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_NOW_MAP_NO__FP12RS_STACKDATAi_0x27a150");
#endif

    switch (ctx->pc) {
        case 0x27a160u: goto label_27a160;
        case 0x27a16cu: goto label_27a16c;
        default: break;
    }

    ctx->pc = 0x27a150u;

    // 0x27a150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a158: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A158u;
    SET_GPR_U32(ctx, 31, 0x27A160u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A160u; }
        if (ctx->pc != 0x27A160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A160u; }
        if (ctx->pc != 0x27A160u) { return; }
    }
    ctx->pc = 0x27A160u;
label_27a160:
    // 0x27a160: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27a160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27a164: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x27A164u;
    SET_GPR_U32(ctx, 31, 0x27A16Cu);
    ctx->pc = 0x27A168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A164u;
            // 0x27a168: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A16Cu; }
        if (ctx->pc != 0x27A16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A16Cu; }
        if (ctx->pc != 0x27A16Cu) { return; }
    }
    ctx->pc = 0x27A16Cu;
label_27a16c:
    // 0x27a16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a174: 0x3e00008  jr          $ra
    ctx->pc = 0x27A174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A174u;
            // 0x27a178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A17Cu;
}
