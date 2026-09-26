#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetPosition__13CDynamicAnimeFv
// Address: 0x179870 - 0x179910
void ResetPosition__13CDynamicAnimeFv_0x179870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetPosition__13CDynamicAnimeFv_0x179870");
#endif

    switch (ctx->pc) {
        case 0x17989cu: goto label_17989c;
        case 0x1798b0u: goto label_1798b0;
        case 0x1798bcu: goto label_1798bc;
        case 0x1798c8u: goto label_1798c8;
        default: break;
    }

    ctx->pc = 0x179870u;

    // 0x179870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x179870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x179874: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179878: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17987c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179880: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179884: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179888: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x179888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17988c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17988Cu;
    {
        const bool branch_taken_0x17988c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17988Cu;
            // 0x179890: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17988c) {
            ctx->pc = 0x1798B4u;
            goto label_1798b4;
        }
    }
    ctx->pc = 0x179894u;
    // 0x179894: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x179894u;
    SET_GPR_U32(ctx, 31, 0x17989Cu);
    ctx->pc = 0x179898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179894u;
            // 0x179898: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17989Cu; }
        if (ctx->pc != 0x17989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17989Cu; }
        if (ctx->pc != 0x17989Cu) { return; }
    }
    ctx->pc = 0x17989Cu;
label_17989c:
    // 0x17989c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x17989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1798a0: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1798a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1798a4: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x1798a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1798a8: 0xc04c228  jal         func_1308A0
    ctx->pc = 0x1798A8u;
    SET_GPR_U32(ctx, 31, 0x1798B0u);
    ctx->pc = 0x1798ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1798A8u;
            // 0x1798ac: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798B0u; }
        if (ctx->pc != 0x1798B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798B0u; }
        if (ctx->pc != 0x1798B0u) { return; }
    }
    ctx->pc = 0x1798B0u;
label_1798b0:
    // 0x1798b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1798b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1798b4:
    // 0x1798b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1798B4u;
    {
        const bool branch_taken_0x1798b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1798B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1798B4u;
            // 0x1798b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798b4) {
            ctx->pc = 0x1798E8u;
            goto label_1798e8;
        }
    }
    ctx->pc = 0x1798BCu;
label_1798bc:
    // 0x1798bc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1798bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1798c0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1798C0u;
    SET_GPR_U32(ctx, 31, 0x1798C8u);
    ctx->pc = 0x1798C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1798C0u;
            // 0x1798c4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798C8u; }
        if (ctx->pc != 0x1798C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798C8u; }
        if (ctx->pc != 0x1798C8u) { return; }
    }
    ctx->pc = 0x1798C8u;
label_1798c8:
    // 0x1798c8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1798c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1798cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1798ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1798d0: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1798d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1798d4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1798d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1798d8: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x1798d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1798dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1798dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1798e0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1798e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1798e4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1798e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1798e8:
    // 0x1798e8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1798e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1798ec: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1798ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1798f0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1798F0u;
    {
        const bool branch_taken_0x1798f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1798f0) {
            ctx->pc = 0x1798BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1798bc;
        }
    }
    ctx->pc = 0x1798F8u;
    // 0x1798f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1798f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1798fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1798fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179908: 0x3e00008  jr          $ra
    ctx->pc = 0x179908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179908u;
            // 0x17990c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179910u;
}
