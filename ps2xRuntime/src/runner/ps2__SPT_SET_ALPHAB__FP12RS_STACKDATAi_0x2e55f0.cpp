#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_ALPHAB__FP12RS_STACKDATAi
// Address: 0x2e55f0 - 0x2e56a8
void ps2__SPT_SET_ALPHAB__FP12RS_STACKDATAi_0x2e55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_ALPHAB__FP12RS_STACKDATAi_0x2e55f0");
#endif

    switch (ctx->pc) {
        case 0x2e561cu: goto label_2e561c;
        case 0x2e562cu: goto label_2e562c;
        case 0x2e5644u: goto label_2e5644;
        case 0x2e5654u: goto label_2e5654;
        case 0x2e565cu: goto label_2e565c;
        default: break;
    }

    ctx->pc = 0x2e55f0u;

    // 0x2e55f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e55f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e55f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e55f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e55f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e55fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e55fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5600: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x2e5600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5604: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5608: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e5608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e560c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5610: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e5610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5614: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5614u;
    SET_GPR_U32(ctx, 31, 0x2E561Cu);
    ctx->pc = 0x2E5618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5614u;
            // 0x2e5618: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E561Cu; }
        if (ctx->pc != 0x2E561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E561Cu; }
        if (ctx->pc != 0x2E561Cu) { return; }
    }
    ctx->pc = 0x2E561Cu;
label_2e561c:
    // 0x2e561c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5624: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5624u;
    SET_GPR_U32(ctx, 31, 0x2E562Cu);
    ctx->pc = 0x2E5628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5624u;
            // 0x2e5628: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E562Cu; }
        if (ctx->pc != 0x2E562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E562Cu; }
        if (ctx->pc != 0x2E562Cu) { return; }
    }
    ctx->pc = 0x2E562Cu;
label_2e562c:
    // 0x2e562c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e562cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5630: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2e5630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e5634: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5634u;
    {
        const bool branch_taken_0x2e5634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5634u;
            // 0x2e5638: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5634) {
            ctx->pc = 0x2E564Cu;
            goto label_2e564c;
        }
    }
    ctx->pc = 0x2E563Cu;
    // 0x2e563c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E563Cu;
    SET_GPR_U32(ctx, 31, 0x2E5644u);
    ctx->pc = 0x2E5640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E563Cu;
            // 0x2e5640: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5644u; }
        if (ctx->pc != 0x2E5644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5644u; }
        if (ctx->pc != 0x2E5644u) { return; }
    }
    ctx->pc = 0x2E5644u;
label_2e5644:
    // 0x2e5644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e564c:
    // 0x2e564c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E564Cu;
    {
        const bool branch_taken_0x2e564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e564c) {
            ctx->pc = 0x2E5674u;
            goto label_2e5674;
        }
    }
    ctx->pc = 0x2E5654u;
label_2e5654:
    // 0x2e5654: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5654u;
    SET_GPR_U32(ctx, 31, 0x2E565Cu);
    ctx->pc = 0x2E5658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5654u;
            // 0x2e5658: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E565Cu; }
        if (ctx->pc != 0x2E565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E565Cu; }
        if (ctx->pc != 0x2E565Cu) { return; }
    }
    ctx->pc = 0x2E565Cu;
label_2e565c:
    // 0x2e565c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E565Cu;
    {
        const bool branch_taken_0x2e565c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e565c) {
            ctx->pc = 0x2E566Cu;
            goto label_2e566c;
        }
    }
    ctx->pc = 0x2E5664u;
    // 0x2e5664: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5664u;
    {
        const bool branch_taken_0x2e5664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5664u;
            // 0x2e5668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5664) {
            ctx->pc = 0x2E5688u;
            goto label_2e5688;
        }
    }
    ctx->pc = 0x2E566Cu;
label_2e566c:
    // 0x2e566c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x2e566cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x2e5670: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e5674:
    // 0x2e5674: 0x0  nop
    ctx->pc = 0x2e5674u;
    // NOP
    // 0x2e5678: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2e5678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e567c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e567cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5680: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5680u;
    {
        const bool branch_taken_0x2e5680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5680u;
            // 0x2e5684: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5680) {
            ctx->pc = 0x2E5654u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5654;
        }
    }
    ctx->pc = 0x2E5688u;
label_2e5688:
    // 0x2e5688: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e5688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e568c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e568cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e569c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e569cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e56a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E56A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E56A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56A0u;
            // 0x2e56a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E56A8u;
}
