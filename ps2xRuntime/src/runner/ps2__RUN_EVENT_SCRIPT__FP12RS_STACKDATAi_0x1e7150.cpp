#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RUN_EVENT_SCRIPT__FP12RS_STACKDATAi
// Address: 0x1e7150 - 0x1e7188
void ps2__RUN_EVENT_SCRIPT__FP12RS_STACKDATAi_0x1e7150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RUN_EVENT_SCRIPT__FP12RS_STACKDATAi_0x1e7150");
#endif

    switch (ctx->pc) {
        case 0x1e7170u: goto label_1e7170;
        default: break;
    }

    ctx->pc = 0x1e7150u;

    // 0x1e7150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7158: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7158u;
    {
        const bool branch_taken_0x1e7158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7158u;
            // 0x1e715c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7158) {
            ctx->pc = 0x1E7168u;
            goto label_1e7168;
        }
    }
    ctx->pc = 0x1E7160u;
    // 0x1e7160: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7160u;
    {
        const bool branch_taken_0x1e7160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7160u;
            // 0x1e7164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7160) {
            ctx->pc = 0x1E717Cu;
            goto label_1e717c;
        }
    }
    ctx->pc = 0x1E7168u;
label_1e7168:
    // 0x1e7168: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7168u;
    SET_GPR_U32(ctx, 31, 0x1E7170u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7170u; }
        if (ctx->pc != 0x1E7170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7170u; }
        if (ctx->pc != 0x1E7170u) { return; }
    }
    ctx->pc = 0x1E7170u;
label_1e7170:
    // 0x1e7170: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e7170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e7174: 0xa46212e0  sh          $v0, 0x12E0($v1)
    ctx->pc = 0x1e7174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4832), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e7178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e717c:
    // 0x1e717c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e717cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7180: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7180u;
            // 0x1e7184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7188u;
}
