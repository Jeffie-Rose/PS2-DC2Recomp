#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CTRLC_STEP__FP12RS_STACKDATAi
// Address: 0x277550 - 0x277584
void ps2__CTRLC_STEP__FP12RS_STACKDATAi_0x277550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CTRLC_STEP__FP12RS_STACKDATAi_0x277550");
#endif

    switch (ctx->pc) {
        case 0x277550u: goto label_277550;
        case 0x277554u: goto label_277554;
        case 0x277558u: goto label_277558;
        case 0x27755cu: goto label_27755c;
        case 0x277560u: goto label_277560;
        case 0x277564u: goto label_277564;
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        default: break;
    }

    ctx->pc = 0x277550u;

label_277550:
    // 0x277550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_277554:
    // 0x277554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_277558:
    // 0x277558: 0xc09b8c8  jal         func_26E320
label_27755c:
    if (ctx->pc == 0x27755Cu) {
        ctx->pc = 0x277560u;
        goto label_277560;
    }
    ctx->pc = 0x277558u;
    SET_GPR_U32(ctx, 31, 0x277560u);
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277560u; }
        if (ctx->pc != 0x277560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277560u; }
        if (ctx->pc != 0x277560u) { return; }
    }
    ctx->pc = 0x277560u;
label_277560:
    // 0x277560: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x277560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_277564:
    // 0x277564: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277568:
    // 0x277568: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x277568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27756c:
    // 0x27756c: 0x320f809  jalr        $t9
label_277570:
    if (ctx->pc == 0x277570u) {
        ctx->pc = 0x277570u;
            // 0x277570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x277574u;
        goto label_277574;
    }
    ctx->pc = 0x27756Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x277574u);
        ctx->pc = 0x277570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27756Cu;
            // 0x277570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x277574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x277574u; }
            if (ctx->pc != 0x277574u) { return; }
        }
        }
    }
    ctx->pc = 0x277574u;
label_277574:
    // 0x277574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_277578:
    // 0x277578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27757c:
    // 0x27757c: 0x3e00008  jr          $ra
label_277580:
    if (ctx->pc == 0x277580u) {
        ctx->pc = 0x277580u;
            // 0x277580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x277584u;
        goto label_fallthrough_0x27757c;
    }
    ctx->pc = 0x27757Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27757Cu;
            // 0x277580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27757c:
    ctx->pc = 0x277584u;
}
