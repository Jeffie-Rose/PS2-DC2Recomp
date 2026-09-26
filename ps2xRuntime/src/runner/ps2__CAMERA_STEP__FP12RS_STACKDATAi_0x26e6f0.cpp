#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CAMERA_STEP__FP12RS_STACKDATAi
// Address: 0x26e6f0 - 0x26e750
void ps2__CAMERA_STEP__FP12RS_STACKDATAi_0x26e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CAMERA_STEP__FP12RS_STACKDATAi_0x26e6f0");
#endif

    switch (ctx->pc) {
        case 0x26e6f0u: goto label_26e6f0;
        case 0x26e6f4u: goto label_26e6f4;
        case 0x26e6f8u: goto label_26e6f8;
        case 0x26e6fcu: goto label_26e6fc;
        case 0x26e700u: goto label_26e700;
        case 0x26e704u: goto label_26e704;
        case 0x26e708u: goto label_26e708;
        case 0x26e70cu: goto label_26e70c;
        case 0x26e710u: goto label_26e710;
        case 0x26e714u: goto label_26e714;
        case 0x26e718u: goto label_26e718;
        case 0x26e71cu: goto label_26e71c;
        case 0x26e720u: goto label_26e720;
        case 0x26e724u: goto label_26e724;
        case 0x26e728u: goto label_26e728;
        case 0x26e72cu: goto label_26e72c;
        case 0x26e730u: goto label_26e730;
        case 0x26e734u: goto label_26e734;
        case 0x26e738u: goto label_26e738;
        case 0x26e73cu: goto label_26e73c;
        case 0x26e740u: goto label_26e740;
        case 0x26e744u: goto label_26e744;
        case 0x26e748u: goto label_26e748;
        case 0x26e74cu: goto label_26e74c;
        default: break;
    }

    ctx->pc = 0x26e6f0u;

label_26e6f0:
    // 0x26e6f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26e6f4:
    // 0x26e6f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26e6f8:
    // 0x26e6f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26e6fc:
    // 0x26e6fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26e6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26e700:
    // 0x26e700: 0xc09b8c8  jal         func_26E320
label_26e704:
    if (ctx->pc == 0x26E704u) {
        ctx->pc = 0x26E704u;
            // 0x26e704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x26E708u;
        goto label_26e708;
    }
    ctx->pc = 0x26E700u;
    SET_GPR_U32(ctx, 31, 0x26E708u);
    ctx->pc = 0x26E704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E700u;
            // 0x26e704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E708u; }
        if (ctx->pc != 0x26E708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E708u; }
        if (ctx->pc != 0x26E708u) { return; }
    }
    ctx->pc = 0x26E708u;
label_26e708:
    // 0x26e708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e70c:
    // 0x26e70c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_26e710:
    if (ctx->pc == 0x26E710u) {
        ctx->pc = 0x26E710u;
            // 0x26e710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26E714u;
        goto label_26e714;
    }
    ctx->pc = 0x26E70Cu;
    {
        const bool branch_taken_0x26e70c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E70Cu;
            // 0x26e710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e70c) {
            ctx->pc = 0x26E71Cu;
            goto label_26e71c;
        }
    }
    ctx->pc = 0x26E714u;
label_26e714:
    // 0x26e714: 0x10000009  b           . + 4 + (0x9 << 2)
label_26e718:
    if (ctx->pc == 0x26E718u) {
        ctx->pc = 0x26E718u;
            // 0x26e718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26E71Cu;
        goto label_26e71c;
    }
    ctx->pc = 0x26E714u;
    {
        const bool branch_taken_0x26e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E714u;
            // 0x26e718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e714) {
            ctx->pc = 0x26E73Cu;
            goto label_26e73c;
        }
    }
    ctx->pc = 0x26E71Cu;
label_26e71c:
    // 0x26e71c: 0xc097e18  jal         func_25F860
label_26e720:
    if (ctx->pc == 0x26E720u) {
        ctx->pc = 0x26E724u;
        goto label_26e724;
    }
    ctx->pc = 0x26E71Cu;
    SET_GPR_U32(ctx, 31, 0x26E724u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E724u; }
        if (ctx->pc != 0x26E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E724u; }
        if (ctx->pc != 0x26E724u) { return; }
    }
    ctx->pc = 0x26E724u;
label_26e724:
    // 0x26e724: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x26e724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_26e728:
    // 0x26e728: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e72c:
    // 0x26e72c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x26e72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_26e730:
    // 0x26e730: 0x320f809  jalr        $t9
label_26e734:
    if (ctx->pc == 0x26E734u) {
        ctx->pc = 0x26E734u;
            // 0x26e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26E738u;
        goto label_26e738;
    }
    ctx->pc = 0x26E730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26E738u);
        ctx->pc = 0x26E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E730u;
            // 0x26e734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26E738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26E738u; }
            if (ctx->pc != 0x26E738u) { return; }
        }
        }
    }
    ctx->pc = 0x26E738u;
label_26e738:
    // 0x26e738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e73c:
    // 0x26e73c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26e73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26e740:
    // 0x26e740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26e744:
    // 0x26e744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26e748:
    // 0x26e748: 0x3e00008  jr          $ra
label_26e74c:
    if (ctx->pc == 0x26E74Cu) {
        ctx->pc = 0x26E74Cu;
            // 0x26e74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x26E750u;
        goto label_fallthrough_0x26e748;
    }
    ctx->pc = 0x26E748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E748u;
            // 0x26e74c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26e748:
    ctx->pc = 0x26E750u;
}
