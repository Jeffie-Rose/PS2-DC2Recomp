#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _AUTO_CHANGE_ENV__FP12RS_STACKDATAi
// Address: 0x273a20 - 0x273a4c
void ps2__AUTO_CHANGE_ENV__FP12RS_STACKDATAi_0x273a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__AUTO_CHANGE_ENV__FP12RS_STACKDATAi_0x273a20");
#endif

    switch (ctx->pc) {
        case 0x273a30u: goto label_273a30;
        case 0x273a3cu: goto label_273a3c;
        default: break;
    }

    ctx->pc = 0x273a20u;

    // 0x273a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273a28: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273A28u;
    SET_GPR_U32(ctx, 31, 0x273A30u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A30u; }
        if (ctx->pc != 0x273A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A30u; }
        if (ctx->pc != 0x273A30u) { return; }
    }
    ctx->pc = 0x273A30u;
label_273a30:
    // 0x273a30: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273a34: 0xc0a9a08  jal         func_2A6820
    ctx->pc = 0x273A34u;
    SET_GPR_U32(ctx, 31, 0x273A3Cu);
    ctx->pc = 0x273A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273A34u;
            // 0x273a38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6820u;
    if (runtime->hasFunction(0x2A6820u)) {
        auto targetFn = runtime->lookupFunction(0x2A6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A3Cu; }
        if (ctx->pc != 0x273A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeEnvBGM__6CSceneFi_0x2a6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273A3Cu; }
        if (ctx->pc != 0x273A3Cu) { return; }
    }
    ctx->pc = 0x273A3Cu;
label_273a3c:
    // 0x273a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a44: 0x3e00008  jr          $ra
    ctx->pc = 0x273A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273A44u;
            // 0x273a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273A4Cu;
}
