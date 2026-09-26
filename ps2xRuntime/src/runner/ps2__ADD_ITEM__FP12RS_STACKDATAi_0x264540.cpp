#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_ITEM__FP12RS_STACKDATAi
// Address: 0x264540 - 0x2645d0
void ps2__ADD_ITEM__FP12RS_STACKDATAi_0x264540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_ITEM__FP12RS_STACKDATAi_0x264540");
#endif

    switch (ctx->pc) {
        case 0x264564u: goto label_264564;
        case 0x26457cu: goto label_26457c;
        case 0x264588u: goto label_264588;
        case 0x2645b4u: goto label_2645b4;
        default: break;
    }

    ctx->pc = 0x264540u;

    // 0x264540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264544: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x264544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x264548: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x264548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26454c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264550: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x264550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x264554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x264554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x264558: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x264558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26455c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26455Cu;
    SET_GPR_U32(ctx, 31, 0x264564u);
    ctx->pc = 0x264560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26455Cu;
            // 0x264560: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264564u; }
        if (ctx->pc != 0x264564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264564u; }
        if (ctx->pc != 0x264564u) { return; }
    }
    ctx->pc = 0x264564u;
label_264564:
    // 0x264564: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264568: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x264568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26456c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26456Cu;
    {
        const bool branch_taken_0x26456c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x264570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26456Cu;
            // 0x264570: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26456c) {
            ctx->pc = 0x264580u;
            goto label_264580;
        }
    }
    ctx->pc = 0x264574u;
    // 0x264574: 0xc097e18  jal         func_25F860
    ctx->pc = 0x264574u;
    SET_GPR_U32(ctx, 31, 0x26457Cu);
    ctx->pc = 0x264578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264574u;
            // 0x264578: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26457Cu; }
        if (ctx->pc != 0x26457Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26457Cu; }
        if (ctx->pc != 0x26457Cu) { return; }
    }
    ctx->pc = 0x26457Cu;
label_26457c:
    // 0x26457c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26457cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264580:
    // 0x264580: 0xc064220  jal         func_190880
    ctx->pc = 0x264580u;
    SET_GPR_U32(ctx, 31, 0x264588u);
    ctx->pc = 0x264584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264580u;
            // 0x264584: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264588u; }
        if (ctx->pc != 0x264588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264588u; }
        if (ctx->pc != 0x264588u) { return; }
    }
    ctx->pc = 0x264588u;
label_264588:
    // 0x264588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264588u;
    {
        const bool branch_taken_0x264588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264588u;
            // 0x26458c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264588) {
            ctx->pc = 0x264598u;
            goto label_264598;
        }
    }
    ctx->pc = 0x264590u;
    // 0x264590: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x264590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x264594: 0x419021  addu        $s2, $v0, $at
    ctx->pc = 0x264594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_264598:
    // 0x264598: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x264598u;
    {
        const bool branch_taken_0x264598 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26459Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264598u;
            // 0x26459c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264598) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x2645A0u;
    // 0x2645a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2645A0u;
    {
        const bool branch_taken_0x2645a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645A0u;
            // 0x2645a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645a0) {
            ctx->pc = 0x2645B4u;
            goto label_2645b4;
        }
    }
    ctx->pc = 0x2645A8u;
label_2645a8:
    // 0x2645a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2645a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645ac: 0xc0677fc  jal         func_19DFF0
    ctx->pc = 0x2645ACu;
    SET_GPR_U32(ctx, 31, 0x2645B4u);
    ctx->pc = 0x2645B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2645ACu;
            // 0x2645b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DFF0u;
    if (runtime->hasFunction(0x19DFF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2645B4u; }
        if (ctx->pc != 0x2645B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItem__16CUserDataManagerFii_0x19dff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2645B4u; }
        if (ctx->pc != 0x2645B4u) { return; }
    }
    ctx->pc = 0x2645B4u;
label_2645b4:
    // 0x2645b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2645b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2645b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2645b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2645bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2645bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2645c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2645c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2645c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2645c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2645c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2645C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2645CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645C8u;
            // 0x2645cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2645D0u;
}
