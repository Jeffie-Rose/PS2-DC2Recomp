#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdatePosition__11CCharacter2Fv
// Address: 0x173700 - 0x1737a8
void UpdatePosition__11CCharacter2Fv_0x173700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePosition__11CCharacter2Fv_0x173700");
#endif

    switch (ctx->pc) {
        case 0x173700u: goto label_173700;
        case 0x173704u: goto label_173704;
        case 0x173708u: goto label_173708;
        case 0x17370cu: goto label_17370c;
        case 0x173710u: goto label_173710;
        case 0x173714u: goto label_173714;
        case 0x173718u: goto label_173718;
        case 0x17371cu: goto label_17371c;
        case 0x173720u: goto label_173720;
        case 0x173724u: goto label_173724;
        case 0x173728u: goto label_173728;
        case 0x17372cu: goto label_17372c;
        case 0x173730u: goto label_173730;
        case 0x173734u: goto label_173734;
        case 0x173738u: goto label_173738;
        case 0x17373cu: goto label_17373c;
        case 0x173740u: goto label_173740;
        case 0x173744u: goto label_173744;
        case 0x173748u: goto label_173748;
        case 0x17374cu: goto label_17374c;
        case 0x173750u: goto label_173750;
        case 0x173754u: goto label_173754;
        case 0x173758u: goto label_173758;
        case 0x17375cu: goto label_17375c;
        case 0x173760u: goto label_173760;
        case 0x173764u: goto label_173764;
        case 0x173768u: goto label_173768;
        case 0x17376cu: goto label_17376c;
        case 0x173770u: goto label_173770;
        case 0x173774u: goto label_173774;
        case 0x173778u: goto label_173778;
        case 0x17377cu: goto label_17377c;
        case 0x173780u: goto label_173780;
        case 0x173784u: goto label_173784;
        case 0x173788u: goto label_173788;
        case 0x17378cu: goto label_17378c;
        case 0x173790u: goto label_173790;
        case 0x173794u: goto label_173794;
        case 0x173798u: goto label_173798;
        case 0x17379cu: goto label_17379c;
        case 0x1737a0u: goto label_1737a0;
        case 0x1737a4u: goto label_1737a4;
        default: break;
    }

    ctx->pc = 0x173700u;

label_173700:
    // 0x173700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_173704:
    // 0x173704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_173708:
    // 0x173708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17370c:
    // 0x17370c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173710:
    // 0x173710: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x173710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_173714:
    // 0x173714: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_173718:
    if (ctx->pc == 0x173718u) {
        ctx->pc = 0x17371Cu;
        goto label_17371c;
    }
    ctx->pc = 0x173714u;
    {
        const bool branch_taken_0x173714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173714) {
            ctx->pc = 0x173754u;
            goto label_173754;
        }
    }
    ctx->pc = 0x17371Cu;
label_17371c:
    // 0x17371c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17371cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173720:
    // 0x173720: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x173720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_173724:
    // 0x173724: 0x320f809  jalr        $t9
label_173728:
    if (ctx->pc == 0x173728u) {
        ctx->pc = 0x173728u;
            // 0x173728: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x17372Cu;
        goto label_17372c;
    }
    ctx->pc = 0x173724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17372Cu);
        ctx->pc = 0x173728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173724u;
            // 0x173728: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17372Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17372Cu; }
            if (ctx->pc != 0x17372Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17372Cu;
label_17372c:
    // 0x17372c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x17372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_173730:
    // 0x173730: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173734:
    // 0x173734: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x173734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_173738:
    // 0x173738: 0x320f809  jalr        $t9
label_17373c:
    if (ctx->pc == 0x17373Cu) {
        ctx->pc = 0x17373Cu;
            // 0x17373c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x173740u;
        goto label_173740;
    }
    ctx->pc = 0x173738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173740u);
        ctx->pc = 0x17373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173738u;
            // 0x17373c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173740u; }
            if (ctx->pc != 0x173740u) { return; }
        }
        }
    }
    ctx->pc = 0x173740u;
label_173740:
    // 0x173740: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x173740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_173744:
    // 0x173744: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173748:
    // 0x173748: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x173748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_17374c:
    // 0x17374c: 0x320f809  jalr        $t9
label_173750:
    if (ctx->pc == 0x173750u) {
        ctx->pc = 0x173750u;
            // 0x173750: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x173754u;
        goto label_173754;
    }
    ctx->pc = 0x17374Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173754u);
        ctx->pc = 0x173750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17374Cu;
            // 0x173750: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173754u; }
            if (ctx->pc != 0x173754u) { return; }
        }
        }
    }
    ctx->pc = 0x173754u;
label_173754:
    // 0x173754: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x173754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_173758:
    // 0x173758: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_17375c:
    if (ctx->pc == 0x17375Cu) {
        ctx->pc = 0x173760u;
        goto label_173760;
    }
    ctx->pc = 0x173758u;
    {
        const bool branch_taken_0x173758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x173758) {
            ctx->pc = 0x173798u;
            goto label_173798;
        }
    }
    ctx->pc = 0x173760u;
label_173760:
    // 0x173760: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173764:
    // 0x173764: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x173764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_173768:
    // 0x173768: 0x320f809  jalr        $t9
label_17376c:
    if (ctx->pc == 0x17376Cu) {
        ctx->pc = 0x17376Cu;
            // 0x17376c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x173770u;
        goto label_173770;
    }
    ctx->pc = 0x173768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173770u);
        ctx->pc = 0x17376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173768u;
            // 0x17376c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173770u; }
            if (ctx->pc != 0x173770u) { return; }
        }
        }
    }
    ctx->pc = 0x173770u;
label_173770:
    // 0x173770: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x173770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_173774:
    // 0x173774: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_173778:
    // 0x173778: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x173778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_17377c:
    // 0x17377c: 0x320f809  jalr        $t9
label_173780:
    if (ctx->pc == 0x173780u) {
        ctx->pc = 0x173780u;
            // 0x173780: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x173784u;
        goto label_173784;
    }
    ctx->pc = 0x17377Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173784u);
        ctx->pc = 0x173780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17377Cu;
            // 0x173780: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173784u; }
            if (ctx->pc != 0x173784u) { return; }
        }
        }
    }
    ctx->pc = 0x173784u;
label_173784:
    // 0x173784: 0x8e0402c0  lw          $a0, 0x2C0($s0)
    ctx->pc = 0x173784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 704)));
label_173788:
    // 0x173788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x173788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17378c:
    // 0x17378c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x17378cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_173790:
    // 0x173790: 0x320f809  jalr        $t9
label_173794:
    if (ctx->pc == 0x173794u) {
        ctx->pc = 0x173794u;
            // 0x173794: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x173798u;
        goto label_173798;
    }
    ctx->pc = 0x173790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x173798u);
        ctx->pc = 0x173794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173790u;
            // 0x173794: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173798u; }
            if (ctx->pc != 0x173798u) { return; }
        }
        }
    }
    ctx->pc = 0x173798u;
label_173798:
    // 0x173798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17379c:
    // 0x17379c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17379cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1737a0:
    // 0x1737a0: 0x3e00008  jr          $ra
label_1737a4:
    if (ctx->pc == 0x1737A4u) {
        ctx->pc = 0x1737A4u;
            // 0x1737a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1737A8u;
        goto label_fallthrough_0x1737a0;
    }
    ctx->pc = 0x1737A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1737A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1737A0u;
            // 0x1737a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1737a0:
    ctx->pc = 0x1737A8u;
}
