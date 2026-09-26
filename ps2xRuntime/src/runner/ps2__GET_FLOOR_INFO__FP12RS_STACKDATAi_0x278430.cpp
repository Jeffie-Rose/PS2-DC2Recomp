#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FLOOR_INFO__FP12RS_STACKDATAi
// Address: 0x278430 - 0x2785a0
void ps2__GET_FLOOR_INFO__FP12RS_STACKDATAi_0x278430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FLOOR_INFO__FP12RS_STACKDATAi_0x278430");
#endif

    switch (ctx->pc) {
        case 0x278450u: goto label_278450;
        case 0x278460u: goto label_278460;
        case 0x278470u: goto label_278470;
        case 0x278478u: goto label_278478;
        case 0x2784a8u: goto label_2784a8;
        case 0x2784e4u: goto label_2784e4;
        case 0x2784f8u: goto label_2784f8;
        case 0x27850cu: goto label_27850c;
        case 0x278520u: goto label_278520;
        case 0x278534u: goto label_278534;
        case 0x278548u: goto label_278548;
        case 0x27855cu: goto label_27855c;
        case 0x278570u: goto label_278570;
        default: break;
    }

    ctx->pc = 0x278430u;

    // 0x278430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278434: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x278434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x278438: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27843c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x278440: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278448: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278448u;
    SET_GPR_U32(ctx, 31, 0x278450u);
    ctx->pc = 0x27844Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278448u;
            // 0x27844c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278450u; }
        if (ctx->pc != 0x278450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278450u; }
        if (ctx->pc != 0x278450u) { return; }
    }
    ctx->pc = 0x278450u;
label_278450:
    // 0x278450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278454: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x278454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278458: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278458u;
    SET_GPR_U32(ctx, 31, 0x278460u);
    ctx->pc = 0x27845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278458u;
            // 0x27845c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278460u; }
        if (ctx->pc != 0x278460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278460u; }
        if (ctx->pc != 0x278460u) { return; }
    }
    ctx->pc = 0x278460u;
label_278460:
    // 0x278460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278464: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x278464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278468: 0xc097e18  jal         func_25F860
    ctx->pc = 0x278468u;
    SET_GPR_U32(ctx, 31, 0x278470u);
    ctx->pc = 0x27846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278468u;
            // 0x27846c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278470u; }
        if (ctx->pc != 0x278470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278470u; }
        if (ctx->pc != 0x278470u) { return; }
    }
    ctx->pc = 0x278470u;
label_278470:
    // 0x278470: 0xc064220  jal         func_190880
    ctx->pc = 0x278470u;
    SET_GPR_U32(ctx, 31, 0x278478u);
    ctx->pc = 0x278474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278470u;
            // 0x278474: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278478u; }
        if (ctx->pc != 0x278478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278478u; }
        if (ctx->pc != 0x278478u) { return; }
    }
    ctx->pc = 0x278478u;
label_278478:
    // 0x278478: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278478u;
    {
        const bool branch_taken_0x278478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278478u;
            // 0x27847c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278478) {
            ctx->pc = 0x278488u;
            goto label_278488;
        }
    }
    ctx->pc = 0x278480u;
    // 0x278480: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x278480u;
    {
        const bool branch_taken_0x278480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278480u;
            // 0x278484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278480) {
            ctx->pc = 0x278584u;
            goto label_278584;
        }
    }
    ctx->pc = 0x278488u;
label_278488:
    // 0x278488: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x278488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x27848c: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x27848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x278490: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278490u;
    {
        const bool branch_taken_0x278490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278490u;
            // 0x278494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278490) {
            ctx->pc = 0x2784A0u;
            goto label_2784a0;
        }
    }
    ctx->pc = 0x278498u;
    // 0x278498: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x278498u;
    {
        const bool branch_taken_0x278498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27849Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278498u;
            // 0x27849c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278498) {
            ctx->pc = 0x278584u;
            goto label_278584;
        }
    }
    ctx->pc = 0x2784A0u;
label_2784a0:
    // 0x2784a0: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2784A0u;
    SET_GPR_U32(ctx, 31, 0x2784A8u);
    ctx->pc = 0x2784A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784A0u;
            // 0x2784a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784A8u; }
        if (ctx->pc != 0x2784A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784A8u; }
        if (ctx->pc != 0x2784A8u) { return; }
    }
    ctx->pc = 0x2784A8u;
label_2784a8:
    // 0x2784a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2784A8u;
    {
        const bool branch_taken_0x2784a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2784ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2784A8u;
            // 0x2784ac: 0x2e610008  sltiu       $at, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784a8) {
            ctx->pc = 0x2784B8u;
            goto label_2784b8;
        }
    }
    ctx->pc = 0x2784B0u;
    // 0x2784b0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2784B0u;
    {
        const bool branch_taken_0x2784b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2784B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2784B0u;
            // 0x2784b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784b0) {
            ctx->pc = 0x278584u;
            goto label_278584;
        }
    }
    ctx->pc = 0x2784B8u;
label_2784b8:
    // 0x2784b8: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
    ctx->pc = 0x2784B8u;
    {
        const bool branch_taken_0x2784b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2784BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2784B8u;
            // 0x2784bc: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784b8) {
            ctx->pc = 0x278578u;
            goto label_278578;
        }
    }
    ctx->pc = 0x2784C0u;
    // 0x2784c0: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2784c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2784c4: 0x2484cba0  addiu       $a0, $a0, -0x3460
    ctx->pc = 0x2784c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953888));
    // 0x2784c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2784c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2784cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2784ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2784d0: 0x600008  jr          $v1
    ctx->pc = 0x2784D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2784D8u: goto label_2784d8;
            case 0x2784ECu: goto label_2784ec;
            case 0x278500u: goto label_278500;
            case 0x278514u: goto label_278514;
            case 0x278528u: goto label_278528;
            case 0x27853Cu: goto label_27853c;
            case 0x278550u: goto label_278550;
            case 0x278564u: goto label_278564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2784D8u;
label_2784d8:
    // 0x2784d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2784d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2784dc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2784DCu;
    SET_GPR_U32(ctx, 31, 0x2784E4u);
    ctx->pc = 0x2784E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784DCu;
            // 0x2784e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784E4u; }
        if (ctx->pc != 0x2784E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784E4u; }
        if (ctx->pc != 0x2784E4u) { return; }
    }
    ctx->pc = 0x2784E4u;
label_2784e4:
    // 0x2784e4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2784E4u;
    {
        const bool branch_taken_0x2784e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2784E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2784E4u;
            // 0x2784e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784e4) {
            ctx->pc = 0x278584u;
            goto label_278584;
        }
    }
    ctx->pc = 0x2784ECu;
label_2784ec:
    // 0x2784ec: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2784ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2784f0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2784F0u;
    SET_GPR_U32(ctx, 31, 0x2784F8u);
    ctx->pc = 0x2784F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2784F0u;
            // 0x2784f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784F8u; }
        if (ctx->pc != 0x2784F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2784F8u; }
        if (ctx->pc != 0x2784F8u) { return; }
    }
    ctx->pc = 0x2784F8u;
label_2784f8:
    // 0x2784f8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2784F8u;
    {
        const bool branch_taken_0x2784f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2784f8) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278500u;
label_278500:
    // 0x278500: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x278500u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278504: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278504u;
    SET_GPR_U32(ctx, 31, 0x27850Cu);
    ctx->pc = 0x278508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278504u;
            // 0x278508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27850Cu; }
        if (ctx->pc != 0x27850Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27850Cu; }
        if (ctx->pc != 0x27850Cu) { return; }
    }
    ctx->pc = 0x27850Cu;
label_27850c:
    // 0x27850c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27850Cu;
    {
        const bool branch_taken_0x27850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27850c) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278514u;
label_278514:
    // 0x278514: 0x9045000a  lbu         $a1, 0xA($v0)
    ctx->pc = 0x278514u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x278518: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278518u;
    SET_GPR_U32(ctx, 31, 0x278520u);
    ctx->pc = 0x27851Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278518u;
            // 0x27851c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278520u; }
        if (ctx->pc != 0x278520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278520u; }
        if (ctx->pc != 0x278520u) { return; }
    }
    ctx->pc = 0x278520u;
label_278520:
    // 0x278520: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x278520u;
    {
        const bool branch_taken_0x278520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278520) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278528u;
label_278528:
    // 0x278528: 0x9445000c  lhu         $a1, 0xC($v0)
    ctx->pc = 0x278528u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27852c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27852Cu;
    SET_GPR_U32(ctx, 31, 0x278534u);
    ctx->pc = 0x278530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27852Cu;
            // 0x278530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278534u; }
        if (ctx->pc != 0x278534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278534u; }
        if (ctx->pc != 0x278534u) { return; }
    }
    ctx->pc = 0x278534u;
label_278534:
    // 0x278534: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x278534u;
    {
        const bool branch_taken_0x278534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278534) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x27853Cu;
label_27853c:
    // 0x27853c: 0x9445000e  lhu         $a1, 0xE($v0)
    ctx->pc = 0x27853cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x278540: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278540u;
    SET_GPR_U32(ctx, 31, 0x278548u);
    ctx->pc = 0x278544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278540u;
            // 0x278544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278548u; }
        if (ctx->pc != 0x278548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278548u; }
        if (ctx->pc != 0x278548u) { return; }
    }
    ctx->pc = 0x278548u;
label_278548:
    // 0x278548: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x278548u;
    {
        const bool branch_taken_0x278548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278548) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278550u;
label_278550:
    // 0x278550: 0x94450010  lhu         $a1, 0x10($v0)
    ctx->pc = 0x278550u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x278554: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278554u;
    SET_GPR_U32(ctx, 31, 0x27855Cu);
    ctx->pc = 0x278558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278554u;
            // 0x278558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27855Cu; }
        if (ctx->pc != 0x27855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27855Cu; }
        if (ctx->pc != 0x27855Cu) { return; }
    }
    ctx->pc = 0x27855Cu;
label_27855c:
    // 0x27855c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27855Cu;
    {
        const bool branch_taken_0x27855c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27855c) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278564u;
label_278564:
    // 0x278564: 0x94450012  lhu         $a1, 0x12($v0)
    ctx->pc = 0x278564u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x278568: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x278568u;
    SET_GPR_U32(ctx, 31, 0x278570u);
    ctx->pc = 0x27856Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278568u;
            // 0x27856c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278570u; }
        if (ctx->pc != 0x278570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278570u; }
        if (ctx->pc != 0x278570u) { return; }
    }
    ctx->pc = 0x278570u;
label_278570:
    // 0x278570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x278570u;
    {
        const bool branch_taken_0x278570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278570) {
            ctx->pc = 0x278580u;
            goto label_278580;
        }
    }
    ctx->pc = 0x278578u;
label_278578:
    // 0x278578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x278578u;
    {
        const bool branch_taken_0x278578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278578u;
            // 0x27857c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278578) {
            ctx->pc = 0x278584u;
            goto label_278584;
        }
    }
    ctx->pc = 0x278580u;
label_278580:
    // 0x278580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278584:
    // 0x278584: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x278584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278588: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x278588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27858c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27858cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x278590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278598: 0x3e00008  jr          $ra
    ctx->pc = 0x278598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278598u;
            // 0x27859c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2785A0u;
}
