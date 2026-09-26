#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BEFORE_CMRID__FP12RS_STACKDATAi
// Address: 0x267d70 - 0x267d98
void ps2__SET_BEFORE_CMRID__FP12RS_STACKDATAi_0x267d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BEFORE_CMRID__FP12RS_STACKDATAi_0x267d70");
#endif

    switch (ctx->pc) {
        case 0x267d80u: goto label_267d80;
        default: break;
    }

    ctx->pc = 0x267d70u;

    // 0x267d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x267d78: 0xc097e18  jal         func_25F860
    ctx->pc = 0x267D78u;
    SET_GPR_U32(ctx, 31, 0x267D80u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D80u; }
        if (ctx->pc != 0x267D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267D80u; }
        if (ctx->pc != 0x267D80u) { return; }
    }
    ctx->pc = 0x267D80u;
label_267d80:
    // 0x267d80: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x267d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x267d84: 0xac622e58  sw          $v0, 0x2E58($v1)
    ctx->pc = 0x267d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11864), GPR_U32(ctx, 2));
    // 0x267d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267d8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267d90: 0x3e00008  jr          $ra
    ctx->pc = 0x267D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267D90u;
            // 0x267d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267D98u;
}
