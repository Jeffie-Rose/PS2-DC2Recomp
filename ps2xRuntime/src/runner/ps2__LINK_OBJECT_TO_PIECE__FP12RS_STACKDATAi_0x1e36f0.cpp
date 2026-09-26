#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LINK_OBJECT_TO_PIECE__FP12RS_STACKDATAi
// Address: 0x1e36f0 - 0x1e37a0
void ps2__LINK_OBJECT_TO_PIECE__FP12RS_STACKDATAi_0x1e36f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LINK_OBJECT_TO_PIECE__FP12RS_STACKDATAi_0x1e36f0");
#endif

    switch (ctx->pc) {
        case 0x1e3728u: goto label_1e3728;
        case 0x1e3734u: goto label_1e3734;
        case 0x1e3740u: goto label_1e3740;
        case 0x1e3768u: goto label_1e3768;
        default: break;
    }

    ctx->pc = 0x1e36f0u;

    // 0x1e36f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e36f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e36f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e36f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e36f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e36fc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E36FCu;
    {
        const bool branch_taken_0x1e36fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E36FCu;
            // 0x1e3700: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e36fc) {
            ctx->pc = 0x1E370Cu;
            goto label_1e370c;
        }
    }
    ctx->pc = 0x1E3704u;
    // 0x1e3704: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1E3704u;
    {
        const bool branch_taken_0x1e3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3704u;
            // 0x1e3708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3704) {
            ctx->pc = 0x1E3790u;
            goto label_1e3790;
        }
    }
    ctx->pc = 0x1E370Cu;
label_1e370c:
    // 0x1e370c: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1e370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
    // 0x1e3710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3710u;
    {
        const bool branch_taken_0x1e3710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3710u;
            // 0x1e3714: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3710) {
            ctx->pc = 0x1E3720u;
            goto label_1e3720;
        }
    }
    ctx->pc = 0x1E3718u;
    // 0x1e3718: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1E3718u;
    {
        const bool branch_taken_0x1e3718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3718u;
            // 0x1e371c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3718) {
            ctx->pc = 0x1E3790u;
            goto label_1e3790;
        }
    }
    ctx->pc = 0x1E3720u;
label_1e3720:
    // 0x1e3720: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E3720u;
    SET_GPR_U32(ctx, 31, 0x1E3728u);
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3728u; }
        if (ctx->pc != 0x1E3728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3728u; }
        if (ctx->pc != 0x1E3728u) { return; }
    }
    ctx->pc = 0x1E3728u;
label_1e3728:
    // 0x1e3728: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e3728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e372c: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E372Cu;
    SET_GPR_U32(ctx, 31, 0x1E3734u);
    ctx->pc = 0x1E3730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E372Cu;
            // 0x1e3730: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3734u; }
        if (ctx->pc != 0x1E3734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3734u; }
        if (ctx->pc != 0x1E3734u) { return; }
    }
    ctx->pc = 0x1E3734u;
label_1e3734:
    // 0x1e3734: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1e3734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
    // 0x1e3738: 0xc057508  jal         func_15D420
    ctx->pc = 0x1E3738u;
    SET_GPR_U32(ctx, 31, 0x1E3740u);
    ctx->pc = 0x1E373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3738u;
            // 0x1e373c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3740u; }
        if (ctx->pc != 0x1E3740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3740u; }
        if (ctx->pc != 0x1E3740u) { return; }
    }
    ctx->pc = 0x1E3740u;
label_1e3740:
    // 0x1e3740: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3744: 0xac6211fc  sw          $v0, 0x11FC($v1)
    ctx->pc = 0x1e3744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4604), GPR_U32(ctx, 2));
    // 0x1e3748: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e374c: 0x8c4411fc  lw          $a0, 0x11FC($v0)
    ctx->pc = 0x1e374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4604)));
    // 0x1e3750: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3750u;
    {
        const bool branch_taken_0x1e3750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3750u;
            // 0x1e3754: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3750) {
            ctx->pc = 0x1E3760u;
            goto label_1e3760;
        }
    }
    ctx->pc = 0x1E3758u;
    // 0x1e3758: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1E3758u;
    {
        const bool branch_taken_0x1e3758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E375Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3758u;
            // 0x1e375c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3758) {
            ctx->pc = 0x1E3790u;
            goto label_1e3790;
        }
    }
    ctx->pc = 0x1E3760u;
label_1e3760:
    // 0x1e3760: 0xc059924  jal         func_166490
    ctx->pc = 0x1E3760u;
    SET_GPR_U32(ctx, 31, 0x1E3768u);
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3768u; }
        if (ctx->pc != 0x1E3768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3768u; }
        if (ctx->pc != 0x1E3768u) { return; }
    }
    ctx->pc = 0x1E3768u;
label_1e3768:
    // 0x1e3768: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e3768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e376c: 0xac621200  sw          $v0, 0x1200($v1)
    ctx->pc = 0x1e376cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4608), GPR_U32(ctx, 2));
    // 0x1e3770: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3774: 0x8c821200  lw          $v0, 0x1200($a0)
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4608)));
    // 0x1e3778: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3778u;
    {
        const bool branch_taken_0x1e3778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E377Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3778u;
            // 0x1e377c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3778) {
            ctx->pc = 0x1E3788u;
            goto label_1e3788;
        }
    }
    ctx->pc = 0x1E3780u;
    // 0x1e3780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3780u;
    {
        const bool branch_taken_0x1e3780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3780u;
            // 0x1e3784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3780) {
            ctx->pc = 0x1E3790u;
            goto label_1e3790;
        }
    }
    ctx->pc = 0x1E3788u;
label_1e3788:
    // 0x1e3788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e378c: 0xa4831204  sh          $v1, 0x1204($a0)
    ctx->pc = 0x1e378cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4612), (uint16_t)GPR_U32(ctx, 3));
label_1e3790:
    // 0x1e3790: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3798: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3798u;
            // 0x1e379c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E37A0u;
}
