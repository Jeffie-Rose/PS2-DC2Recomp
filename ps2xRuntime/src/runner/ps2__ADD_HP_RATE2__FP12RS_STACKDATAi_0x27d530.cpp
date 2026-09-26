#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_HP_RATE2__FP12RS_STACKDATAi
// Address: 0x27d530 - 0x27d5a8
void ps2__ADD_HP_RATE2__FP12RS_STACKDATAi_0x27d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_HP_RATE2__FP12RS_STACKDATAi_0x27d530");
#endif

    switch (ctx->pc) {
        case 0x27d548u: goto label_27d548;
        case 0x27d578u: goto label_27d578;
        case 0x27d584u: goto label_27d584;
        case 0x27d590u: goto label_27d590;
        default: break;
    }

    ctx->pc = 0x27d530u;

    // 0x27d530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27d530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27d534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d53c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d53cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d540: 0xc064220  jal         func_190880
    ctx->pc = 0x27D540u;
    SET_GPR_U32(ctx, 31, 0x27D548u);
    ctx->pc = 0x27D544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D540u;
            // 0x27d544: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D548u; }
        if (ctx->pc != 0x27D548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D548u; }
        if (ctx->pc != 0x27D548u) { return; }
    }
    ctx->pc = 0x27D548u;
label_27d548:
    // 0x27d548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D548u;
    {
        const bool branch_taken_0x27d548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D548u;
            // 0x27d54c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d548) {
            ctx->pc = 0x27D558u;
            goto label_27d558;
        }
    }
    ctx->pc = 0x27D550u;
    // 0x27d550: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27D550u;
    {
        const bool branch_taken_0x27d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D550u;
            // 0x27d554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d550) {
            ctx->pc = 0x27D594u;
            goto label_27d594;
        }
    }
    ctx->pc = 0x27D558u;
label_27d558:
    // 0x27d558: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27d558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27d55c: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x27d55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x27d560: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D560u;
    {
        const bool branch_taken_0x27d560 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D560u;
            // 0x27d564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d560) {
            ctx->pc = 0x27D570u;
            goto label_27d570;
        }
    }
    ctx->pc = 0x27D568u;
    // 0x27d568: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27D568u;
    {
        const bool branch_taken_0x27d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D568u;
            // 0x27d56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d568) {
            ctx->pc = 0x27D594u;
            goto label_27d594;
        }
    }
    ctx->pc = 0x27D570u;
label_27d570:
    // 0x27d570: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27D570u;
    SET_GPR_U32(ctx, 31, 0x27D578u);
    ctx->pc = 0x27D574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D570u;
            // 0x27d574: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D578u; }
        if (ctx->pc != 0x27D578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D578u; }
        if (ctx->pc != 0x27D578u) { return; }
    }
    ctx->pc = 0x27D578u;
label_27d578:
    // 0x27d578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d57c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x27D57Cu;
    SET_GPR_U32(ctx, 31, 0x27D584u);
    ctx->pc = 0x27D580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D57Cu;
            // 0x27d580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D584u; }
        if (ctx->pc != 0x27D584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D584u; }
        if (ctx->pc != 0x27D584u) { return; }
    }
    ctx->pc = 0x27D584u;
label_27d584:
    // 0x27d584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27d584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d588: 0xc066d68  jal         func_19B5A0
    ctx->pc = 0x27D588u;
    SET_GPR_U32(ctx, 31, 0x27D590u);
    ctx->pc = 0x27D58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D588u;
            // 0x27d58c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B5A0u;
    if (runtime->hasFunction(0x19B5A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D590u; }
        if (ctx->pc != 0x27D590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Rate__16CUserDataManagerFif_0x19b5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D590u; }
        if (ctx->pc != 0x27D590u) { return; }
    }
    ctx->pc = 0x27D590u;
label_27d590:
    // 0x27d590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d594:
    // 0x27d594: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27d594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D5A0u;
            // 0x27d5a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D5A8u;
}
