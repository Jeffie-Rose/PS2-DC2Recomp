#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_GET_MOT_WAIT__FP12RS_STACKDATAi
// Address: 0x2e4720 - 0x2e4788
void ps2__CHR_GET_MOT_WAIT__FP12RS_STACKDATAi_0x2e4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_GET_MOT_WAIT__FP12RS_STACKDATAi_0x2e4720");
#endif

    switch (ctx->pc) {
        case 0x2e4720u: goto label_2e4720;
        case 0x2e4724u: goto label_2e4724;
        case 0x2e4728u: goto label_2e4728;
        case 0x2e472cu: goto label_2e472c;
        case 0x2e4730u: goto label_2e4730;
        case 0x2e4734u: goto label_2e4734;
        case 0x2e4738u: goto label_2e4738;
        case 0x2e473cu: goto label_2e473c;
        case 0x2e4740u: goto label_2e4740;
        case 0x2e4744u: goto label_2e4744;
        case 0x2e4748u: goto label_2e4748;
        case 0x2e474cu: goto label_2e474c;
        case 0x2e4750u: goto label_2e4750;
        case 0x2e4754u: goto label_2e4754;
        case 0x2e4758u: goto label_2e4758;
        case 0x2e475cu: goto label_2e475c;
        case 0x2e4760u: goto label_2e4760;
        case 0x2e4764u: goto label_2e4764;
        case 0x2e4768u: goto label_2e4768;
        case 0x2e476cu: goto label_2e476c;
        case 0x2e4770u: goto label_2e4770;
        case 0x2e4774u: goto label_2e4774;
        case 0x2e4778u: goto label_2e4778;
        case 0x2e477cu: goto label_2e477c;
        case 0x2e4780u: goto label_2e4780;
        case 0x2e4784u: goto label_2e4784;
        default: break;
    }

    ctx->pc = 0x2e4720u;

label_2e4720:
    // 0x2e4720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2e4724:
    // 0x2e4724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4728:
    // 0x2e4728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e4728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2e472c:
    // 0x2e472c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e472cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e4730:
    // 0x2e4730: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_2e4734:
    if (ctx->pc == 0x2E4734u) {
        ctx->pc = 0x2E4734u;
            // 0x2e4734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4738u;
        goto label_2e4738;
    }
    ctx->pc = 0x2E4730u;
    {
        const bool branch_taken_0x2e4730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4730u;
            // 0x2e4734: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4730) {
            ctx->pc = 0x2E4740u;
            goto label_2e4740;
        }
    }
    ctx->pc = 0x2E4738u;
label_2e4738:
    // 0x2e4738: 0x1000000f  b           . + 4 + (0xF << 2)
label_2e473c:
    if (ctx->pc == 0x2E473Cu) {
        ctx->pc = 0x2E473Cu;
            // 0x2e473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4740u;
        goto label_2e4740;
    }
    ctx->pc = 0x2E4738u;
    {
        const bool branch_taken_0x2e4738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4738u;
            // 0x2e473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4738) {
            ctx->pc = 0x2E4778u;
            goto label_2e4778;
        }
    }
    ctx->pc = 0x2E4740u;
label_2e4740:
    // 0x2e4740: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4744:
    // 0x2e4744: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2e4744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2e4748:
    // 0x2e4748: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2e474c:
    if (ctx->pc == 0x2E474Cu) {
        ctx->pc = 0x2E474Cu;
            // 0x2e474c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4750u;
        goto label_2e4750;
    }
    ctx->pc = 0x2E4748u;
    {
        const bool branch_taken_0x2e4748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4748u;
            // 0x2e474c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4748) {
            ctx->pc = 0x2E4758u;
            goto label_2e4758;
        }
    }
    ctx->pc = 0x2E4750u;
label_2e4750:
    // 0x2e4750: 0x1000000a  b           . + 4 + (0xA << 2)
label_2e4754:
    if (ctx->pc == 0x2E4754u) {
        ctx->pc = 0x2E4754u;
            // 0x2e4754: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2E4758u;
        goto label_2e4758;
    }
    ctx->pc = 0x2E4750u;
    {
        const bool branch_taken_0x2e4750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4750u;
            // 0x2e4754: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4750) {
            ctx->pc = 0x2E477Cu;
            goto label_2e477c;
        }
    }
    ctx->pc = 0x2E4758u;
label_2e4758:
    // 0x2e4758: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e475c:
    // 0x2e475c: 0x8f390094  lw          $t9, 0x94($t9)
    ctx->pc = 0x2e475cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 148)));
label_2e4760:
    // 0x2e4760: 0x320f809  jalr        $t9
label_2e4764:
    if (ctx->pc == 0x2E4764u) {
        ctx->pc = 0x2E4768u;
        goto label_2e4768;
    }
    ctx->pc = 0x2E4760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4768u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4768u; }
            if (ctx->pc != 0x2E4768u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4768u;
label_2e4768:
    // 0x2e4768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e476c:
    // 0x2e476c: 0xc0b8cdc  jal         func_2E3370
label_2e4770:
    if (ctx->pc == 0x2E4770u) {
        ctx->pc = 0x2E4770u;
            // 0x2e4770: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2E4774u;
        goto label_2e4774;
    }
    ctx->pc = 0x2E476Cu;
    SET_GPR_U32(ctx, 31, 0x2E4774u);
    ctx->pc = 0x2E4770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E476Cu;
            // 0x2e4770: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4774u; }
        if (ctx->pc != 0x2E4774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4774u; }
        if (ctx->pc != 0x2E4774u) { return; }
    }
    ctx->pc = 0x2E4774u;
label_2e4774:
    // 0x2e4774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4778:
    // 0x2e4778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e4778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e477c:
    // 0x2e477c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e477cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4780:
    // 0x2e4780: 0x3e00008  jr          $ra
label_2e4784:
    if (ctx->pc == 0x2E4784u) {
        ctx->pc = 0x2E4784u;
            // 0x2e4784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2E4788u;
        goto label_fallthrough_0x2e4780;
    }
    ctx->pc = 0x2E4780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4780u;
            // 0x2e4784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4780:
    ctx->pc = 0x2E4788u;
}
