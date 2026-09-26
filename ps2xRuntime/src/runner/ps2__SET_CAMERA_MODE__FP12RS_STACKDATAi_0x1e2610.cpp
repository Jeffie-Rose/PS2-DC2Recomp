#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_MODE__FP12RS_STACKDATAi
// Address: 0x1e2610 - 0x1e264c
void ps2__SET_CAMERA_MODE__FP12RS_STACKDATAi_0x1e2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_MODE__FP12RS_STACKDATAi_0x1e2610");
#endif

    switch (ctx->pc) {
        case 0x1e2620u: goto label_1e2620;
        default: break;
    }

    ctx->pc = 0x1e2610u;

    // 0x1e2610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2618: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2618u;
    SET_GPR_U32(ctx, 31, 0x1E2620u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2620u; }
        if (ctx->pc != 0x1E2620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2620u; }
        if (ctx->pc != 0x1E2620u) { return; }
    }
    ctx->pc = 0x1E2620u;
label_1e2620:
    // 0x1e2620: 0x8f838e6c  lw          $v1, -0x7194($gp)
    ctx->pc = 0x1e2620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e2624: 0x24632f90  addiu       $v1, $v1, 0x2F90
    ctx->pc = 0x1e2624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
    // 0x1e2628: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2628u;
    {
        const bool branch_taken_0x1e2628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2628) {
            ctx->pc = 0x1E2638u;
            goto label_1e2638;
        }
    }
    ctx->pc = 0x1E2630u;
    // 0x1e2630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2630u;
    {
        const bool branch_taken_0x1e2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2630u;
            // 0x1e2634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2630) {
            ctx->pc = 0x1E2640u;
            goto label_1e2640;
        }
    }
    ctx->pc = 0x1E2638u;
label_1e2638:
    // 0x1e2638: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1e2638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x1e263c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2640:
    // 0x1e2640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2644: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2644u;
            // 0x1e2648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E264Cu;
}
