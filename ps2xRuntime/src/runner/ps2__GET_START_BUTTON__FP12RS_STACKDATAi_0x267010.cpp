#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_START_BUTTON__FP12RS_STACKDATAi
// Address: 0x267010 - 0x267034
void ps2__GET_START_BUTTON__FP12RS_STACKDATAi_0x267010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_START_BUTTON__FP12RS_STACKDATAi_0x267010");
#endif

    switch (ctx->pc) {
        case 0x267024u: goto label_267024;
        default: break;
    }

    ctx->pc = 0x267010u;

    // 0x267010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x267010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x267014: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x267014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x267018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x267018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26701c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26701Cu;
    SET_GPR_U32(ctx, 31, 0x267024u);
    ctx->pc = 0x267020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26701Cu;
            // 0x267020: 0x8c25e520  lw          $a1, -0x1AE0($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267024u; }
        if (ctx->pc != 0x267024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267024u; }
        if (ctx->pc != 0x267024u) { return; }
    }
    ctx->pc = 0x267024u;
label_267024:
    // 0x267024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26702c: 0x3e00008  jr          $ra
    ctx->pc = 0x26702Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26702Cu;
            // 0x267030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267034u;
}
