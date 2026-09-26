#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MUTEKI__FP12RS_STACKDATAi
// Address: 0x1e61e0 - 0x1e6218
void ps2__SET_MUTEKI__FP12RS_STACKDATAi_0x1e61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MUTEKI__FP12RS_STACKDATAi_0x1e61e0");
#endif

    switch (ctx->pc) {
        case 0x1e6200u: goto label_1e6200;
        default: break;
    }

    ctx->pc = 0x1e61e0u;

    // 0x1e61e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e61e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e61e8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E61E8u;
    {
        const bool branch_taken_0x1e61e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E61ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61E8u;
            // 0x1e61ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61e8) {
            ctx->pc = 0x1E61F8u;
            goto label_1e61f8;
        }
    }
    ctx->pc = 0x1E61F0u;
    // 0x1e61f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E61F0u;
    {
        const bool branch_taken_0x1e61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E61F0u;
            // 0x1e61f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e61f0) {
            ctx->pc = 0x1E6210u;
            goto label_1e6210;
        }
    }
    ctx->pc = 0x1E61F8u;
label_1e61f8:
    // 0x1e61f8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E61F8u;
    SET_GPR_U32(ctx, 31, 0x1E6200u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6200u; }
        if (ctx->pc != 0x1E6200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6200u; }
        if (ctx->pc != 0x1E6200u) { return; }
    }
    ctx->pc = 0x1E6200u;
label_1e6200:
    // 0x1e6200: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6204: 0xac620768  sw          $v0, 0x768($v1)
    ctx->pc = 0x1e6204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1896), GPR_U32(ctx, 2));
    // 0x1e6208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e620c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e620cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6210:
    // 0x1e6210: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6210u;
            // 0x1e6214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6218u;
}
