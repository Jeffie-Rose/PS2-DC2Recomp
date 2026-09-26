#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MOTION_BLUR__FP12RS_STACKDATAi
// Address: 0x1e7800 - 0x1e7838
void ps2__SET_MOTION_BLUR__FP12RS_STACKDATAi_0x1e7800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MOTION_BLUR__FP12RS_STACKDATAi_0x1e7800");
#endif

    switch (ctx->pc) {
        case 0x1e7820u: goto label_1e7820;
        default: break;
    }

    ctx->pc = 0x1e7800u;

    // 0x1e7800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7808: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7808u;
    {
        const bool branch_taken_0x1e7808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E780Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7808u;
            // 0x1e780c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7808) {
            ctx->pc = 0x1E7818u;
            goto label_1e7818;
        }
    }
    ctx->pc = 0x1E7810u;
    // 0x1e7810: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E7810u;
    {
        const bool branch_taken_0x1e7810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7810u;
            // 0x1e7814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7810) {
            ctx->pc = 0x1E782Cu;
            goto label_1e782c;
        }
    }
    ctx->pc = 0x1E7818u;
label_1e7818:
    // 0x1e7818: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E7818u;
    SET_GPR_U32(ctx, 31, 0x1E7820u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7820u; }
        if (ctx->pc != 0x1E7820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7820u; }
        if (ctx->pc != 0x1E7820u) { return; }
    }
    ctx->pc = 0x1E7820u;
label_1e7820:
    // 0x1e7820: 0x8f838e6c  lw          $v1, -0x7194($gp)
    ctx->pc = 0x1e7820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e7824: 0xac622c9c  sw          $v0, 0x2C9C($v1)
    ctx->pc = 0x1e7824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11420), GPR_U32(ctx, 2));
    // 0x1e7828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e782c:
    // 0x1e782c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7830: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7830u;
            // 0x1e7834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7838u;
}
