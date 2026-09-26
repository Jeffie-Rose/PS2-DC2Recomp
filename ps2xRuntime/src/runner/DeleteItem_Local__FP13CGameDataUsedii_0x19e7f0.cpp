#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteItem_Local__FP13CGameDataUsedii
// Address: 0x19e7f0 - 0x19e8b4
void DeleteItem_Local__FP13CGameDataUsedii_0x19e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteItem_Local__FP13CGameDataUsedii_0x19e7f0");
#endif

    switch (ctx->pc) {
        case 0x19e838u: goto label_19e838;
        case 0x19e854u: goto label_19e854;
        case 0x19e864u: goto label_19e864;
        case 0x19e878u: goto label_19e878;
        default: break;
    }

    ctx->pc = 0x19e7f0u;

    // 0x19e7f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19e7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19e7f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19e7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19e7f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19e7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19e7fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19e7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19e800: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19e800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19e804: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19e804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e80c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19e80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e814: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E814u;
    {
        const bool branch_taken_0x19e814 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x19E818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E814u;
            // 0x19e818: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e814) {
            ctx->pc = 0x19E824u;
            goto label_19e824;
        }
    }
    ctx->pc = 0x19E81Cu;
    // 0x19e81c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19E81Cu;
    {
        const bool branch_taken_0x19e81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E81Cu;
            // 0x19e820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e81c) {
            ctx->pc = 0x19E894u;
            goto label_19e894;
        }
    }
    ctx->pc = 0x19E824u;
label_19e824:
    // 0x19e824: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x19e824u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x19e828: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E828u;
    {
        const bool branch_taken_0x19e828 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E828u;
            // 0x19e82c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e828) {
            ctx->pc = 0x19E840u;
            goto label_19e840;
        }
    }
    ctx->pc = 0x19E830u;
    // 0x19e830: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x19E830u;
    SET_GPR_U32(ctx, 31, 0x19E838u);
    ctx->pc = 0x19E834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E830u;
            // 0x19e834: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E838u; }
        if (ctx->pc != 0x19E838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E838u; }
        if (ctx->pc != 0x19E838u) { return; }
    }
    ctx->pc = 0x19E838u;
label_19e838:
    // 0x19e838: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19E838u;
    {
        const bool branch_taken_0x19e838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E838u;
            // 0x19e83c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e838) {
            ctx->pc = 0x19E890u;
            goto label_19e890;
        }
    }
    ctx->pc = 0x19E840u;
label_19e840:
    // 0x19e840: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x19e840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x19e844: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19e848: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19E848u;
    {
        const bool branch_taken_0x19e848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E848u;
            // 0x19e84c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e848) {
            ctx->pc = 0x19E890u;
            goto label_19e890;
        }
    }
    ctx->pc = 0x19E850u;
    // 0x19e850: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x19e850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_19e854:
    // 0x19e854: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19E854u;
    {
        const bool branch_taken_0x19e854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E854u;
            // 0x19e858: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e854) {
            ctx->pc = 0x19E880u;
            goto label_19e880;
        }
    }
    ctx->pc = 0x19E85Cu;
    // 0x19e85c: 0xc066648  jal         func_199920
    ctx->pc = 0x19E85Cu;
    SET_GPR_U32(ctx, 31, 0x19E864u);
    ctx->pc = 0x19E860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E85Cu;
            // 0x19e860: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E864u; }
        if (ctx->pc != 0x19E864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E864u; }
        if (ctx->pc != 0x19E864u) { return; }
    }
    ctx->pc = 0x19E864u;
label_19e864:
    // 0x19e864: 0x16420006  bne         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E864u;
    {
        const bool branch_taken_0x19e864 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E864u;
            // 0x19e868: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e864) {
            ctx->pc = 0x19E880u;
            goto label_19e880;
        }
    }
    ctx->pc = 0x19E86Cu;
    // 0x19e86c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e870: 0xc06662c  jal         func_1998B0
    ctx->pc = 0x19E870u;
    SET_GPR_U32(ctx, 31, 0x19E878u);
    ctx->pc = 0x19E874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E870u;
            // 0x19e874: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1998B0u;
    if (runtime->hasFunction(0x1998B0u)) {
        auto targetFn = runtime->lookupFunction(0x1998B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E878u; }
        if (ctx->pc != 0x19E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGiftBoxItem__13CGameDataUsedFii_0x1998b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E878u; }
        if (ctx->pc != 0x19E878u) { return; }
    }
    ctx->pc = 0x19E878u;
label_19e878:
    // 0x19e878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19e878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19e87c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19e87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19e880:
    // 0x19e880: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x19e880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x19e884: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x19e884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19e888: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19E888u;
    {
        const bool branch_taken_0x19e888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E888u;
            // 0x19e88c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e888) {
            ctx->pc = 0x19E854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19e854;
        }
    }
    ctx->pc = 0x19E890u;
label_19e890:
    // 0x19e890: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e894:
    // 0x19e894: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19e894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19e898: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19e898u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e89c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19e89cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e8a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e8a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e8a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e8a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19E8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19E8ACu;
            // 0x19e8b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19E8B4u;
}
