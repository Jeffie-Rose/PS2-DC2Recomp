#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFishCondition__Fv
// Address: 0x23a530 - 0x23a5b8
void CheckFishCondition__Fv_0x23a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFishCondition__Fv_0x23a530");
#endif

    switch (ctx->pc) {
        case 0x23a544u: goto label_23a544;
        case 0x23a54cu: goto label_23a54c;
        case 0x23a584u: goto label_23a584;
        default: break;
    }

    ctx->pc = 0x23a530u;

    // 0x23a530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23a538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a53c: 0xc06421c  jal         func_190870
    ctx->pc = 0x23A53Cu;
    SET_GPR_U32(ctx, 31, 0x23A544u);
    ctx->pc = 0x23A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A53Cu;
            // 0x23a540: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A544u; }
        if (ctx->pc != 0x23A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A544u; }
        if (ctx->pc != 0x23A544u) { return; }
    }
    ctx->pc = 0x23A544u;
label_23a544:
    // 0x23a544: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x23A544u;
    SET_GPR_U32(ctx, 31, 0x23A54Cu);
    ctx->pc = 0x23A548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A544u;
            // 0x23a548: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A54Cu; }
        if (ctx->pc != 0x23A54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A54Cu; }
        if (ctx->pc != 0x23A54Cu) { return; }
    }
    ctx->pc = 0x23A54Cu;
label_23a54c:
    // 0x23a54c: 0x8e032e60  lw          $v1, 0x2E60($s0)
    ctx->pc = 0x23a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11872)));
    // 0x23a550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23a550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a554: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x23a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x23a558: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A558u;
    {
        const bool branch_taken_0x23a558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A558u;
            // 0x23a55c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a558) {
            ctx->pc = 0x23A564u;
            goto label_23a564;
        }
    }
    ctx->pc = 0x23A560u;
    // 0x23a560: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23a560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a564:
    // 0x23a564: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x23a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x23a568: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A568u;
    {
        const bool branch_taken_0x23a568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A568u;
            // 0x23a56c: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a568) {
            ctx->pc = 0x23A578u;
            goto label_23a578;
        }
    }
    ctx->pc = 0x23A570u;
    // 0x23a570: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A570u;
    {
        const bool branch_taken_0x23a570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a570) {
            ctx->pc = 0x23A57Cu;
            goto label_23a57c;
        }
    }
    ctx->pc = 0x23A578u;
label_23a578:
    // 0x23a578: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23a578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a57c:
    // 0x23a57c: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x23A57Cu;
    SET_GPR_U32(ctx, 31, 0x23A584u);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A584u; }
        if (ctx->pc != 0x23A584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A584u; }
        if (ctx->pc != 0x23A584u) { return; }
    }
    ctx->pc = 0x23A584u;
label_23a584:
    // 0x23a584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a588: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A588u;
    {
        const bool branch_taken_0x23a588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23A58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A588u;
            // 0x23a58c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a588) {
            ctx->pc = 0x23A5A4u;
            goto label_23a5a4;
        }
    }
    ctx->pc = 0x23A590u;
    // 0x23a590: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x23a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x23a594: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A594u;
    {
        const bool branch_taken_0x23a594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a594) {
            ctx->pc = 0x23A5A0u;
            goto label_23a5a0;
        }
    }
    ctx->pc = 0x23A59Cu;
    // 0x23a59c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23a59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a5a0:
    // 0x23a5a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a5a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a5a4:
    // 0x23a5a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23a5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a5a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a5ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a5acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A5B0u;
            // 0x23a5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A5B8u;
}
