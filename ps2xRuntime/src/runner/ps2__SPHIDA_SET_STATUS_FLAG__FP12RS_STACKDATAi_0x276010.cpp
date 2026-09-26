#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_STATUS_FLAG__FP12RS_STACKDATAi
// Address: 0x276010 - 0x276048
void ps2__SPHIDA_SET_STATUS_FLAG__FP12RS_STACKDATAi_0x276010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_STATUS_FLAG__FP12RS_STACKDATAi_0x276010");
#endif

    switch (ctx->pc) {
        case 0x276020u: goto label_276020;
        default: break;
    }

    ctx->pc = 0x276010u;

    // 0x276010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276018: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276018u;
    SET_GPR_U32(ctx, 31, 0x276020u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276020u; }
        if (ctx->pc != 0x276020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x276020u; }
        if (ctx->pc != 0x276020u) { return; }
    }
    ctx->pc = 0x276020u;
label_276020:
    // 0x276020: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x276020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x276024: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276024u;
    {
        const bool branch_taken_0x276024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x276024) {
            ctx->pc = 0x276034u;
            goto label_276034;
        }
    }
    ctx->pc = 0x27602Cu;
    // 0x27602c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27602Cu;
    {
        const bool branch_taken_0x27602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27602Cu;
            // 0x276030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27602c) {
            ctx->pc = 0x27603Cu;
            goto label_27603c;
        }
    }
    ctx->pc = 0x276034u;
label_276034:
    // 0x276034: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x276034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x276038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27603c:
    // 0x27603c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27603cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276040: 0x3e00008  jr          $ra
    ctx->pc = 0x276040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276040u;
            // 0x276044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276048u;
}
