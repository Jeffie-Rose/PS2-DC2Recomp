#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACTIVE_CMRID__FP12RS_STACKDATAi
// Address: 0x267d40 - 0x267d68
void ps2__SET_ACTIVE_CMRID__FP12RS_STACKDATAi_0x267d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACTIVE_CMRID__FP12RS_STACKDATAi_0x267d40");
#endif

    switch (ctx->pc) {
        case 0x267d50u: goto label_267d50;
        default: break;
    }

    ctx->pc = 0x267d40u;

    // 0x267d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267d48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267D48u;
    SET_GPR_U32(ctx, 31, 0x267D50u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D50u; }
        if (ctx->pc != 0x267D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D50u; }
        if (ctx->pc != 0x267D50u) { return; }
    }
    ctx->pc = 0x267D50u;
label_267d50:
    // 0x267d50: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x267d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x267d54: 0xac622e54  sw          $v0, 0x2E54($v1)
    ctx->pc = 0x267d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11860), GPR_U32(ctx, 2));
    // 0x267d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267d60: 0x3e00008  jr          $ra
    ctx->pc = 0x267D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267D60u;
            // 0x267d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267D68u;
}
