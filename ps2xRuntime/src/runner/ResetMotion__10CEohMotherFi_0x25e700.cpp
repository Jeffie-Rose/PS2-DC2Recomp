#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetMotion__10CEohMotherFi
// Address: 0x25e700 - 0x25e770
void ResetMotion__10CEohMotherFi_0x25e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetMotion__10CEohMotherFi_0x25e700");
#endif

    switch (ctx->pc) {
        case 0x25e700u: goto label_25e700;
        case 0x25e704u: goto label_25e704;
        case 0x25e708u: goto label_25e708;
        case 0x25e70cu: goto label_25e70c;
        case 0x25e710u: goto label_25e710;
        case 0x25e714u: goto label_25e714;
        case 0x25e718u: goto label_25e718;
        case 0x25e71cu: goto label_25e71c;
        case 0x25e720u: goto label_25e720;
        case 0x25e724u: goto label_25e724;
        case 0x25e728u: goto label_25e728;
        case 0x25e72cu: goto label_25e72c;
        case 0x25e730u: goto label_25e730;
        case 0x25e734u: goto label_25e734;
        case 0x25e738u: goto label_25e738;
        case 0x25e73cu: goto label_25e73c;
        case 0x25e740u: goto label_25e740;
        case 0x25e744u: goto label_25e744;
        case 0x25e748u: goto label_25e748;
        case 0x25e74cu: goto label_25e74c;
        case 0x25e750u: goto label_25e750;
        case 0x25e754u: goto label_25e754;
        case 0x25e758u: goto label_25e758;
        case 0x25e75cu: goto label_25e75c;
        case 0x25e760u: goto label_25e760;
        case 0x25e764u: goto label_25e764;
        case 0x25e768u: goto label_25e768;
        case 0x25e76cu: goto label_25e76c;
        default: break;
    }

    ctx->pc = 0x25e700u;

label_25e700:
    // 0x25e700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25e704:
    // 0x25e704: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e708:
    if (ctx->pc == 0x25E708u) {
        ctx->pc = 0x25E708u;
            // 0x25e708: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x25E70Cu;
        goto label_25e70c;
    }
    ctx->pc = 0x25E704u;
    {
        const bool branch_taken_0x25e704 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E704u;
            // 0x25e708: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e704) {
            ctx->pc = 0x25E718u;
            goto label_25e718;
        }
    }
    ctx->pc = 0x25E70Cu;
label_25e70c:
    // 0x25e70c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e710:
    // 0x25e710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e714:
    if (ctx->pc == 0x25E714u) {
        ctx->pc = 0x25E714u;
            // 0x25e714: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E718u;
        goto label_25e718;
    }
    ctx->pc = 0x25E710u;
    {
        const bool branch_taken_0x25e710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E710u;
            // 0x25e714: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e710) {
            ctx->pc = 0x25E720u;
            goto label_25e720;
        }
    }
    ctx->pc = 0x25E718u;
label_25e718:
    // 0x25e718: 0x10000012  b           . + 4 + (0x12 << 2)
label_25e71c:
    if (ctx->pc == 0x25E71Cu) {
        ctx->pc = 0x25E71Cu;
            // 0x25e71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E720u;
        goto label_25e720;
    }
    ctx->pc = 0x25E718u;
    {
        const bool branch_taken_0x25e718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E718u;
            // 0x25e71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e718) {
            ctx->pc = 0x25E764u;
            goto label_25e764;
        }
    }
    ctx->pc = 0x25E720u;
label_25e720:
    // 0x25e720: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25e724:
    // 0x25e724: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25e728:
    // 0x25e728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25e72c:
    if (ctx->pc == 0x25E72Cu) {
        ctx->pc = 0x25E730u;
        goto label_25e730;
    }
    ctx->pc = 0x25E728u;
    {
        const bool branch_taken_0x25e728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e728) {
            ctx->pc = 0x25E738u;
            goto label_25e738;
        }
    }
    ctx->pc = 0x25E730u;
label_25e730:
    // 0x25e730: 0x1000000c  b           . + 4 + (0xC << 2)
label_25e734:
    if (ctx->pc == 0x25E734u) {
        ctx->pc = 0x25E734u;
            // 0x25e734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E738u;
        goto label_25e738;
    }
    ctx->pc = 0x25E730u;
    {
        const bool branch_taken_0x25e730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E730u;
            // 0x25e734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e730) {
            ctx->pc = 0x25E764u;
            goto label_25e764;
        }
    }
    ctx->pc = 0x25E738u;
label_25e738:
    // 0x25e738: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25e738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_25e73c:
    // 0x25e73c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e740:
    if (ctx->pc == 0x25E740u) {
        ctx->pc = 0x25E740u;
            // 0x25e740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E744u;
        goto label_25e744;
    }
    ctx->pc = 0x25E73Cu;
    {
        const bool branch_taken_0x25e73c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E73Cu;
            // 0x25e740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e73c) {
            ctx->pc = 0x25E74Cu;
            goto label_25e74c;
        }
    }
    ctx->pc = 0x25E744u;
label_25e744:
    // 0x25e744: 0x10000008  b           . + 4 + (0x8 << 2)
label_25e748:
    if (ctx->pc == 0x25E748u) {
        ctx->pc = 0x25E748u;
            // 0x25e748: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x25E74Cu;
        goto label_25e74c;
    }
    ctx->pc = 0x25E744u;
    {
        const bool branch_taken_0x25e744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E744u;
            // 0x25e748: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e744) {
            ctx->pc = 0x25E768u;
            goto label_25e768;
        }
    }
    ctx->pc = 0x25E74Cu;
label_25e74c:
    // 0x25e74c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e74cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e750:
    // 0x25e750: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x25e750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_25e754:
    // 0x25e754: 0x320f809  jalr        $t9
label_25e758:
    if (ctx->pc == 0x25E758u) {
        ctx->pc = 0x25E75Cu;
        goto label_25e75c;
    }
    ctx->pc = 0x25E754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E75Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E75Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E75Cu; }
            if (ctx->pc != 0x25E75Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25E75Cu;
label_25e75c:
    // 0x25e75c: 0x10000001  b           . + 4 + (0x1 << 2)
label_25e760:
    if (ctx->pc == 0x25E760u) {
        ctx->pc = 0x25E760u;
            // 0x25e760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E764u;
        goto label_25e764;
    }
    ctx->pc = 0x25E75Cu;
    {
        const bool branch_taken_0x25e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E75Cu;
            // 0x25e760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e75c) {
            ctx->pc = 0x25E764u;
            goto label_25e764;
        }
    }
    ctx->pc = 0x25E764u;
label_25e764:
    // 0x25e764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e768:
    // 0x25e768: 0x3e00008  jr          $ra
label_25e76c:
    if (ctx->pc == 0x25E76Cu) {
        ctx->pc = 0x25E76Cu;
            // 0x25e76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x25E770u;
        goto label_fallthrough_0x25e768;
    }
    ctx->pc = 0x25E768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E768u;
            // 0x25e76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e768:
    ctx->pc = 0x25E770u;
}
