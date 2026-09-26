#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnterDataMenu__15CMenuChrCngMenuFPUc
// Address: 0x2b0660 - 0x2b0c68
void EnterDataMenu__15CMenuChrCngMenuFPUc_0x2b0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnterDataMenu__15CMenuChrCngMenuFPUc_0x2b0660");
#endif

    switch (ctx->pc) {
        case 0x2b06a4u: goto label_2b06a4;
        case 0x2b06bcu: goto label_2b06bc;
        case 0x2b06d0u: goto label_2b06d0;
        case 0x2b06fcu: goto label_2b06fc;
        case 0x2b0704u: goto label_2b0704;
        case 0x2b071cu: goto label_2b071c;
        case 0x2b0730u: goto label_2b0730;
        case 0x2b0748u: goto label_2b0748;
        case 0x2b0760u: goto label_2b0760;
        case 0x2b077cu: goto label_2b077c;
        case 0x2b0794u: goto label_2b0794;
        case 0x2b07a0u: goto label_2b07a0;
        case 0x2b07b0u: goto label_2b07b0;
        case 0x2b07c4u: goto label_2b07c4;
        case 0x2b07d8u: goto label_2b07d8;
        case 0x2b07f0u: goto label_2b07f0;
        case 0x2b083cu: goto label_2b083c;
        case 0x2b08b4u: goto label_2b08b4;
        case 0x2b08d0u: goto label_2b08d0;
        case 0x2b08ecu: goto label_2b08ec;
        case 0x2b0908u: goto label_2b0908;
        case 0x2b0910u: goto label_2b0910;
        case 0x2b0918u: goto label_2b0918;
        case 0x2b0928u: goto label_2b0928;
        case 0x2b0930u: goto label_2b0930;
        case 0x2b093cu: goto label_2b093c;
        case 0x2b0944u: goto label_2b0944;
        case 0x2b0958u: goto label_2b0958;
        case 0x2b0964u: goto label_2b0964;
        case 0x2b097cu: goto label_2b097c;
        case 0x2b0988u: goto label_2b0988;
        case 0x2b09a0u: goto label_2b09a0;
        case 0x2b09acu: goto label_2b09ac;
        case 0x2b0a38u: goto label_2b0a38;
        case 0x2b0a4cu: goto label_2b0a4c;
        case 0x2b0a64u: goto label_2b0a64;
        case 0x2b0aacu: goto label_2b0aac;
        case 0x2b0adcu: goto label_2b0adc;
        case 0x2b0af4u: goto label_2b0af4;
        case 0x2b0b00u: goto label_2b0b00;
        case 0x2b0b14u: goto label_2b0b14;
        case 0x2b0b28u: goto label_2b0b28;
        case 0x2b0b3cu: goto label_2b0b3c;
        case 0x2b0b50u: goto label_2b0b50;
        case 0x2b0b5cu: goto label_2b0b5c;
        case 0x2b0b90u: goto label_2b0b90;
        case 0x2b0bd0u: goto label_2b0bd0;
        case 0x2b0becu: goto label_2b0bec;
        case 0x2b0c18u: goto label_2b0c18;
        case 0x2b0c34u: goto label_2b0c34;
        default: break;
    }

    ctx->pc = 0x2b0660u;

    // 0x2b0660: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b0660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b0664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0668: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b0668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b066c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b066cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b0670: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b0670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b0674: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b0678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b067c: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2b067cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2b0680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0684: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b0684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0688: 0x8c930018  lw          $s3, 0x18($a0)
    ctx->pc = 0x2b0688u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b068c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b068cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0690: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0694: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x2b0694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x2b0698: 0x24a5eac8  addiu       $a1, $a1, -0x1538
    ctx->pc = 0x2b0698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961864));
    // 0x2b069c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B069Cu;
    SET_GPR_U32(ctx, 31, 0x2B06A4u);
    ctx->pc = 0x2B06A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B069Cu;
            // 0x2b06a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06A4u; }
        if (ctx->pc != 0x2B06A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06A4u; }
        if (ctx->pc != 0x2B06A4u) { return; }
    }
    ctx->pc = 0x2B06A4u;
label_2b06a4:
    // 0x2b06a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b06a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b06a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b06acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b06b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06b4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2B06B4u;
    SET_GPR_U32(ctx, 31, 0x2B06BCu);
    ctx->pc = 0x2B06B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B06B4u;
            // 0x2b06b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06BCu; }
        if (ctx->pc != 0x2B06BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06BCu; }
        if (ctx->pc != 0x2B06BCu) { return; }
    }
    ctx->pc = 0x2B06BCu;
label_2b06bc:
    // 0x2b06bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b06bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b06c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b06c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06c4: 0x24a5ead8  addiu       $a1, $a1, -0x1528
    ctx->pc = 0x2b06c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961880));
    // 0x2b06c8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B06C8u;
    SET_GPR_U32(ctx, 31, 0x2B06D0u);
    ctx->pc = 0x2B06CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B06C8u;
            // 0x2b06cc: 0x27a6008c  addiu       $a2, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06D0u; }
        if (ctx->pc != 0x2B06D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06D0u; }
        if (ctx->pc != 0x2B06D0u) { return; }
    }
    ctx->pc = 0x2B06D0u;
label_2b06d0:
    // 0x2b06d0: 0x8f839b88  lw          $v1, -0x6478($gp)
    ctx->pc = 0x2b06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941576)));
    // 0x2b06d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B06D4u;
    {
        const bool branch_taken_0x2b06d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b06d4) {
            ctx->pc = 0x2B06FCu;
            goto label_2b06fc;
        }
    }
    ctx->pc = 0x2B06DCu;
    // 0x2b06dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B06DCu;
    {
        const bool branch_taken_0x2b06dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b06dc) {
            ctx->pc = 0x2B06FCu;
            goto label_2b06fc;
        }
    }
    ctx->pc = 0x2B06E4u;
    // 0x2b06e4: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2b06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2b06e8: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b06e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b06ec: 0xaf829b88  sw          $v0, -0x6478($gp)
    ctx->pc = 0x2b06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941576), GPR_U32(ctx, 2));
    // 0x2b06f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b06f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b06f4: 0xc094f98  jal         func_253E60
    ctx->pc = 0x2B06F4u;
    SET_GPR_U32(ctx, 31, 0x2B06FCu);
    ctx->pc = 0x2B06F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B06F4u;
            // 0x2b06f8: 0x24c6cc50  addiu       $a2, $a2, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06FCu; }
        if (ctx->pc != 0x2B06FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B06FCu; }
        if (ctx->pc != 0x2B06FCu) { return; }
    }
    ctx->pc = 0x2B06FCu;
label_2b06fc:
    // 0x2b06fc: 0xc08b614  jal         func_22D850
    ctx->pc = 0x2B06FCu;
    SET_GPR_U32(ctx, 31, 0x2B0704u);
    ctx->pc = 0x2B0700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B06FCu;
            // 0x2b0700: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0704u; }
        if (ctx->pc != 0x2B0704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CRepairManagerFv_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0704u; }
        if (ctx->pc != 0x2B0704u) { return; }
    }
    ctx->pc = 0x2B0704u;
label_2b0704:
    // 0x2b0704: 0x8f849584  lw          $a0, -0x6A7C($gp)
    ctx->pc = 0x2b0704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
    // 0x2b0708: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b0708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2b070c: 0x24a5cc50  addiu       $a1, $a1, -0x33B0
    ctx->pc = 0x2b070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954064));
    // 0x2b0710: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2b0710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0714: 0xc08b6d8  jal         func_22DB60
    ctx->pc = 0x2B0714u;
    SET_GPR_U32(ctx, 31, 0x2B071Cu);
    ctx->pc = 0x2B0718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0714u;
            // 0x2b0718: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DB60u;
    if (runtime->hasFunction(0x22DB60u)) {
        auto targetFn = runtime->lookupFunction(0x22DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B071Cu; }
        if (ctx->pc != 0x2B071Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRepairData__14CRepairManagerFP9mgCMemoryiPUi_0x22db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B071Cu; }
        if (ctx->pc != 0x2B071Cu) { return; }
    }
    ctx->pc = 0x2B071Cu;
label_2b071c:
    // 0x2b071c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b071cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0724: 0x24a5eae8  addiu       $a1, $a1, -0x1518
    ctx->pc = 0x2b0724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961896));
    // 0x2b0728: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B0728u;
    SET_GPR_U32(ctx, 31, 0x2B0730u);
    ctx->pc = 0x2B072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0728u;
            // 0x2b072c: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0730u; }
        if (ctx->pc != 0x2B0730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0730u; }
        if (ctx->pc != 0x2B0730u) { return; }
    }
    ctx->pc = 0x2B0730u;
label_2b0730:
    // 0x2b0730: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0734: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2b0734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2b0738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b073c: 0x24a5eaf8  addiu       $a1, $a1, -0x1508
    ctx->pc = 0x2b073cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961912));
    // 0x2b0740: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2B0740u;
    SET_GPR_U32(ctx, 31, 0x2B0748u);
    ctx->pc = 0x2B0744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0740u;
            // 0x2b0744: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0748u; }
        if (ctx->pc != 0x2B0748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0748u; }
        if (ctx->pc != 0x2B0748u) { return; }
    }
    ctx->pc = 0x2B0748u;
label_2b0748:
    // 0x2b0748: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b074c: 0xaf829b80  sw          $v0, -0x6480($gp)
    ctx->pc = 0x2b074cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941568), GPR_U32(ctx, 2));
    // 0x2b0750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0754: 0x24a5eb08  addiu       $a1, $a1, -0x14F8
    ctx->pc = 0x2b0754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961928));
    // 0x2b0758: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2B0758u;
    SET_GPR_U32(ctx, 31, 0x2B0760u);
    ctx->pc = 0x2B075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0758u;
            // 0x2b075c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0760u; }
        if (ctx->pc != 0x2B0760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0760u; }
        if (ctx->pc != 0x2B0760u) { return; }
    }
    ctx->pc = 0x2B0760u;
label_2b0760:
    // 0x2b0760: 0xaf829b78  sw          $v0, -0x6488($gp)
    ctx->pc = 0x2b0760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941560), GPR_U32(ctx, 2));
    // 0x2b0764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0768: 0x26221a80  addiu       $v0, $s1, 0x1A80
    ctx->pc = 0x2b0768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6784));
    // 0x2b076c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0770: 0xaf829b84  sw          $v0, -0x647C($gp)
    ctx->pc = 0x2b0770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941572), GPR_U32(ctx, 2));
    // 0x2b0774: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2B0774u;
    SET_GPR_U32(ctx, 31, 0x2B077Cu);
    ctx->pc = 0x2B0778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0774u;
            // 0x2b0778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B077Cu; }
        if (ctx->pc != 0x2B077Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B077Cu; }
        if (ctx->pc != 0x2B077Cu) { return; }
    }
    ctx->pc = 0x2B077Cu;
label_2b077c:
    // 0x2b077c: 0x8f829b7c  lw          $v0, -0x6484($gp)
    ctx->pc = 0x2b077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941564)));
    // 0x2b0780: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0780u;
    {
        const bool branch_taken_0x2b0780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0780u;
            // 0x2b0784: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0780) {
            ctx->pc = 0x2B07B4u;
            goto label_2b07b4;
        }
    }
    ctx->pc = 0x2B0788u;
    // 0x2b0788: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2b0788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b078c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B078Cu;
    SET_GPR_U32(ctx, 31, 0x2B0794u);
    ctx->pc = 0x2B0790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B078Cu;
            // 0x2b0790: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0794u; }
        if (ctx->pc != 0x2B0794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0794u; }
        if (ctx->pc != 0x2B0794u) { return; }
    }
    ctx->pc = 0x2B0794u;
label_2b0794:
    // 0x2b0794: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2b0794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2b0798: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2B0798u;
    SET_GPR_U32(ctx, 31, 0x2B07A0u);
    ctx->pc = 0x2B079Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0798u;
            // 0x2b079c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07A0u; }
        if (ctx->pc != 0x2B07A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07A0u; }
        if (ctx->pc != 0x2B07A0u) { return; }
    }
    ctx->pc = 0x2B07A0u;
label_2b07a0:
    // 0x2b07a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B07A0u;
    {
        const bool branch_taken_0x2b07a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B07A0u;
            // 0x2b07a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07a0) {
            ctx->pc = 0x2B07B0u;
            goto label_2b07b0;
        }
    }
    ctx->pc = 0x2B07A8u;
    // 0x2b07a8: 0xc04b120  jal         func_12C480
    ctx->pc = 0x2B07A8u;
    SET_GPR_U32(ctx, 31, 0x2B07B0u);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07B0u; }
        if (ctx->pc != 0x2B07B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07B0u; }
        if (ctx->pc != 0x2B07B0u) { return; }
    }
    ctx->pc = 0x2B07B0u;
label_2b07b0:
    // 0x2b07b0: 0xaf829b7c  sw          $v0, -0x6484($gp)
    ctx->pc = 0x2b07b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941564), GPR_U32(ctx, 2));
label_2b07b4:
    // 0x2b07b4: 0x8f849b7c  lw          $a0, -0x6484($gp)
    ctx->pc = 0x2b07b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941564)));
    // 0x2b07b8: 0x8f859b78  lw          $a1, -0x6488($gp)
    ctx->pc = 0x2b07b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941560)));
    // 0x2b07bc: 0xc049c18  jal         func_127060
    ctx->pc = 0x2B07BCu;
    SET_GPR_U32(ctx, 31, 0x2B07C4u);
    ctx->pc = 0x2B07C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B07BCu;
            // 0x2b07c0: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07C4u; }
        if (ctx->pc != 0x2B07C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07C4u; }
        if (ctx->pc != 0x2B07C4u) { return; }
    }
    ctx->pc = 0x2B07C4u;
label_2b07c4:
    // 0x2b07c4: 0x8f829b78  lw          $v0, -0x6488($gp)
    ctx->pc = 0x2b07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941560)));
    // 0x2b07c8: 0x8f849b84  lw          $a0, -0x647C($gp)
    ctx->pc = 0x2b07c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941572)));
    // 0x2b07cc: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x2b07ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2b07d0: 0xc049c18  jal         func_127060
    ctx->pc = 0x2B07D0u;
    SET_GPR_U32(ctx, 31, 0x2B07D8u);
    ctx->pc = 0x2B07D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B07D0u;
            // 0x2b07d4: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07D8u; }
        if (ctx->pc != 0x2B07D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B07D8u; }
        if (ctx->pc != 0x2B07D8u) { return; }
    }
    ctx->pc = 0x2B07D8u;
label_2b07d8:
    // 0x2b07d8: 0x8f839b84  lw          $v1, -0x647C($gp)
    ctx->pc = 0x2b07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941572)));
    // 0x2b07dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b07dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b07e0: 0x8f829b7c  lw          $v0, -0x6484($gp)
    ctx->pc = 0x2b07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941564)));
    // 0x2b07e4: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x2b07e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x2b07e8: 0x8f939b84  lw          $s3, -0x647C($gp)
    ctx->pc = 0x2b07e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941572)));
    // 0x2b07ec: 0x0  nop
    ctx->pc = 0x2b07ecu;
    // NOP
label_2b07f0:
    // 0x2b07f0: 0x92670000  lbu         $a3, 0x0($s3)
    ctx->pc = 0x2b07f0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b07f4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x2b07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x2b07f8: 0x92660001  lbu         $a2, 0x1($s3)
    ctx->pc = 0x2b07f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2b07fc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x2b07fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x2b0800: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x2b0800u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b0804: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2b0804u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0808: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2b0808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2b080c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b080cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b0810: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2b0810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2b0814: 0x0  nop
    ctx->pc = 0x2b0814u;
    // NOP
    // 0x2b0818: 0x0  nop
    ctx->pc = 0x2b0818u;
    // NOP
    // 0x2b081c: 0x1010  mfhi        $v0
    ctx->pc = 0x2b081cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b0820: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2b0820u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2b0824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b082c: 0x0  nop
    ctx->pc = 0x2b082cu;
    // NOP
    // 0x2b0830: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2b0830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b0834: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b0834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b0838: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b0838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2b083c:
    // 0x2b083c: 0x0  nop
    ctx->pc = 0x2b083cu;
    // NOP
    // 0x2b0840: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2b0840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2b0844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b0844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0848: 0x0  nop
    ctx->pc = 0x2b0848u;
    // NOP
    // 0x2b084c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b084cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0850: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b0850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b0854: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b0854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0858: 0x0  nop
    ctx->pc = 0x2b0858u;
    // NOP
    // 0x2b085c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2B085Cu;
    {
        const bool branch_taken_0x2b085c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b085c) {
            ctx->pc = 0x2B0884u;
            goto label_2b0884;
        }
    }
    ctx->pc = 0x2B0864u;
    // 0x2b0864: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2b0864u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b0868: 0x0  nop
    ctx->pc = 0x2b0868u;
    // NOP
    // 0x2b086c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b086cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b0870: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b0870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b0874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b0874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b0878: 0x0  nop
    ctx->pc = 0x2b0878u;
    // NOP
    // 0x2b087c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B087Cu;
    {
        const bool branch_taken_0x2b087c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b087c) {
            ctx->pc = 0x2B0898u;
            goto label_2b0898;
        }
    }
    ctx->pc = 0x2B0884u;
label_2b0884:
    // 0x2b0884: 0x0  nop
    ctx->pc = 0x2b0884u;
    // NOP
    // 0x2b0888: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b0888u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b088c: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x2b088cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x2b0890: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2B0890u;
    {
        const bool branch_taken_0x2b0890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0890) {
            ctx->pc = 0x2B083Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b083c;
        }
    }
    ctx->pc = 0x2B0898u;
label_2b0898:
    // 0x2b0898: 0x3c0240f8  lui         $v0, 0x40F8
    ctx->pc = 0x2b0898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16632 << 16));
    // 0x2b089c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2b089cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b08a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b08a4: 0x0  nop
    ctx->pc = 0x2b08a4u;
    // NOP
    // 0x2b08a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b08a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b08ac: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2B08ACu;
    SET_GPR_U32(ctx, 31, 0x2B08B4u);
    ctx->pc = 0x2B08B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08ACu;
            // 0x2b08b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08B4u; }
        if (ctx->pc != 0x2B08B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08B4u; }
        if (ctx->pc != 0x2B08B4u) { return; }
    }
    ctx->pc = 0x2B08B4u;
label_2b08b4:
    // 0x2b08b4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2b08b4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08b8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2b08b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b08bc: 0x3c0240b4  lui         $v0, 0x40B4
    ctx->pc = 0x2b08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16564 << 16));
    // 0x2b08c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b08c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b08c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b08c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b08c8: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2B08C8u;
    SET_GPR_U32(ctx, 31, 0x2B08D0u);
    ctx->pc = 0x2B08CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08C8u;
            // 0x2b08cc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08D0u; }
        if (ctx->pc != 0x2B08D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08D0u; }
        if (ctx->pc != 0x2B08D0u) { return; }
    }
    ctx->pc = 0x2B08D0u;
label_2b08d0:
    // 0x2b08d0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2b08d0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b08d4: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x2b08d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b08d8: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x2b08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x2b08dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b08dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b08e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b08e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b08e4: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x2B08E4u;
    SET_GPR_U32(ctx, 31, 0x2B08ECu);
    ctx->pc = 0x2B08E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08E4u;
            // 0x2b08e8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08ECu; }
        if (ctx->pc != 0x2B08ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B08ECu; }
        if (ctx->pc != 0x2B08ECu) { return; }
    }
    ctx->pc = 0x2B08ECu;
label_2b08ec:
    // 0x2b08ec: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x2b08ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b08f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b08f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b08f4: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x2b08f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2b08f8: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x2B08F8u;
    {
        const bool branch_taken_0x2b08f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B08FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B08F8u;
            // 0x2b08fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08f8) {
            ctx->pc = 0x2B07F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b07f0;
        }
    }
    ctx->pc = 0x2B0900u;
    // 0x2b0900: 0xc08ac10  jal         func_22B040
    ctx->pc = 0x2B0900u;
    SET_GPR_U32(ctx, 31, 0x2B0908u);
    ctx->pc = 0x2B0904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0900u;
            // 0x2b0904: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B040u;
    if (runtime->hasFunction(0x22B040u)) {
        auto targetFn = runtime->lookupFunction(0x22B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0908u; }
        if (ctx->pc != 0x2B0908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDrawList__14CPosDataManageFv_0x22b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0908u; }
        if (ctx->pc != 0x2B0908u) { return; }
    }
    ctx->pc = 0x2B0908u;
label_2b0908:
    // 0x2b0908: 0xc0ac138  jal         func_2B04E0
    ctx->pc = 0x2B0908u;
    SET_GPR_U32(ctx, 31, 0x2B0910u);
    ctx->pc = 0x2B090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0908u;
            // 0x2b090c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E0u;
    if (runtime->hasFunction(0x2B04E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B04E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0910u; }
        if (ctx->pc != 0x2B0910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__15CMenuChrCngMenuFv_0x2b04e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0910u; }
        if (ctx->pc != 0x2B0910u) { return; }
    }
    ctx->pc = 0x2B0910u;
label_2b0910:
    // 0x2b0910: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2B0910u;
    SET_GPR_U32(ctx, 31, 0x2B0918u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0918u; }
        if (ctx->pc != 0x2B0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0918u; }
        if (ctx->pc != 0x2B0918u) { return; }
    }
    ctx->pc = 0x2B0918u;
label_2b0918:
    // 0x2b0918: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b091c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b091cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0920: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B0920u;
    SET_GPR_U32(ctx, 31, 0x2B0928u);
    ctx->pc = 0x2B0924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0920u;
            // 0x2b0924: 0x24a5eb10  addiu       $a1, $a1, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0928u; }
        if (ctx->pc != 0x2B0928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0928u; }
        if (ctx->pc != 0x2B0928u) { return; }
    }
    ctx->pc = 0x2B0928u;
label_2b0928:
    // 0x2b0928: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x2B0928u;
    SET_GPR_U32(ctx, 31, 0x2B0930u);
    ctx->pc = 0x2B092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0928u;
            // 0x2b092c: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0930u; }
        if (ctx->pc != 0x2B0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0930u; }
        if (ctx->pc != 0x2B0930u) { return; }
    }
    ctx->pc = 0x2B0930u;
label_2b0930:
    // 0x2b0930: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x2b0930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
    // 0x2b0934: 0xc066fe0  jal         func_19BF80
    ctx->pc = 0x2B0934u;
    SET_GPR_U32(ctx, 31, 0x2B093Cu);
    ctx->pc = 0x2B0938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0934u;
            // 0x2b0938: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF80u;
    if (runtime->hasFunction(0x19BF80u)) {
        auto targetFn = runtime->lookupFunction(0x19BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B093Cu; }
        if (ctx->pc != 0x2B093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableCharaChangeFlag__16CUserDataManagerFv_0x19bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B093Cu; }
        if (ctx->pc != 0x2B093Cu) { return; }
    }
    ctx->pc = 0x2B093Cu;
label_2b093c:
    // 0x2b093c: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x2b093cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
    // 0x2b0940: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b0940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0944:
    // 0x2b0944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0948: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b0948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b094c: 0x24a5eb20  addiu       $a1, $a1, -0x14E0
    ctx->pc = 0x2b094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961952));
    // 0x2b0950: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B0950u;
    SET_GPR_U32(ctx, 31, 0x2B0958u);
    ctx->pc = 0x2B0954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0950u;
            // 0x2b0954: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0958u; }
        if (ctx->pc != 0x2B0958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0958u; }
        if (ctx->pc != 0x2B0958u) { return; }
    }
    ctx->pc = 0x2B0958u;
label_2b0958:
    // 0x2b0958: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x2b0958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2b095c: 0xc089664  jal         func_225990
    ctx->pc = 0x2B095Cu;
    SET_GPR_U32(ctx, 31, 0x2B0964u);
    ctx->pc = 0x2B0960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B095Cu;
            // 0x2b0960: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0964u; }
        if (ctx->pc != 0x2B0964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0964u; }
        if (ctx->pc != 0x2B0964u) { return; }
    }
    ctx->pc = 0x2B0964u;
label_2b0964:
    // 0x2b0964: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0968: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b0968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b096c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b0970: 0x24a5eb28  addiu       $a1, $a1, -0x14D8
    ctx->pc = 0x2b0970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961960));
    // 0x2b0974: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B0974u;
    SET_GPR_U32(ctx, 31, 0x2B097Cu);
    ctx->pc = 0x2B0978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0974u;
            // 0x2b0978: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B097Cu; }
        if (ctx->pc != 0x2B097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B097Cu; }
        if (ctx->pc != 0x2B097Cu) { return; }
    }
    ctx->pc = 0x2B097Cu;
label_2b097c:
    // 0x2b097c: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x2b097cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2b0980: 0xc089664  jal         func_225990
    ctx->pc = 0x2B0980u;
    SET_GPR_U32(ctx, 31, 0x2B0988u);
    ctx->pc = 0x2B0984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0980u;
            // 0x2b0984: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0988u; }
        if (ctx->pc != 0x2B0988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0988u; }
        if (ctx->pc != 0x2B0988u) { return; }
    }
    ctx->pc = 0x2B0988u;
label_2b0988:
    // 0x2b0988: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b098c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b098cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0990: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2b0990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b0994: 0x24a5eb30  addiu       $a1, $a1, -0x14D0
    ctx->pc = 0x2b0994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961968));
    // 0x2b0998: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B0998u;
    SET_GPR_U32(ctx, 31, 0x2B09A0u);
    ctx->pc = 0x2B099Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0998u;
            // 0x2b099c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B09A0u; }
        if (ctx->pc != 0x2B09A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B09A0u; }
        if (ctx->pc != 0x2B09A0u) { return; }
    }
    ctx->pc = 0x2B09A0u;
label_2b09a0:
    // 0x2b09a0: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x2b09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2b09a4: 0xc089664  jal         func_225990
    ctx->pc = 0x2B09A4u;
    SET_GPR_U32(ctx, 31, 0x2B09ACu);
    ctx->pc = 0x2B09A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B09A4u;
            // 0x2b09a8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B09ACu; }
        if (ctx->pc != 0x2B09ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B09ACu; }
        if (ctx->pc != 0x2B09ACu) { return; }
    }
    ctx->pc = 0x2B09ACu;
label_2b09ac:
    // 0x2b09ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b09acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b09b0: 0xa2640005  sb          $a0, 0x5($s3)
    ctx->pc = 0x2b09b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b09b4: 0x2442804  sllv        $a1, $a0, $s2
    ctx->pc = 0x2b09b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 18) & 0x1F));
    // 0x2b09b8: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x2b09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2b09bc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b09bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b09c0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B09C0u;
    {
        const bool branch_taken_0x2b09c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b09c0) {
            ctx->pc = 0x2B0A14u;
            goto label_2b0a14;
        }
    }
    ctx->pc = 0x2B09C8u;
    // 0x2b09c8: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x2b09c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b09cc: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2b09ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b09d0: 0xa2640005  sb          $a0, 0x5($s3)
    ctx->pc = 0x2b09d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b09d4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B09D4u;
    {
        const bool branch_taken_0x2b09d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B09D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B09D4u;
            // 0x2b09d8: 0xa2800005  sb          $zero, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09d4) {
            ctx->pc = 0x2B09ECu;
            goto label_2b09ec;
        }
    }
    ctx->pc = 0x2B09DCu;
    // 0x2b09dc: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x2b09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x2b09e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b09e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2b09e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B09E4u;
    {
        const bool branch_taken_0x2b09e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b09e4) {
            ctx->pc = 0x2B09FCu;
            goto label_2b09fc;
        }
    }
    ctx->pc = 0x2B09ECu;
label_2b09ec:
    // 0x2b09ec: 0x0  nop
    ctx->pc = 0x2b09ecu;
    // NOP
    // 0x2b09f0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2b09f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b09f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B09F4u;
    {
        const bool branch_taken_0x2b09f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b09f4) {
            ctx->pc = 0x2B0A08u;
            goto label_2b0a08;
        }
    }
    ctx->pc = 0x2B09FCu;
label_2b09fc:
    // 0x2b09fc: 0x0  nop
    ctx->pc = 0x2b09fcu;
    // NOP
    // 0x2b0a00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0A00u;
    {
        const bool branch_taken_0x2b0a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A00u;
            // 0x2b0a04: 0xa2600005  sb          $zero, 0x5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a00) {
            ctx->pc = 0x2B0A1Cu;
            goto label_2b0a1c;
        }
    }
    ctx->pc = 0x2B0A08u;
label_2b0a08:
    // 0x2b0a08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0A0Cu;
    {
        const bool branch_taken_0x2b0a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A0Cu;
            // 0x2b0a10: 0xa2820005  sb          $v0, 0x5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a0c) {
            ctx->pc = 0x2B0A1Cu;
            goto label_2b0a1c;
        }
    }
    ctx->pc = 0x2B0A14u;
label_2b0a14:
    // 0x2b0a14: 0x0  nop
    ctx->pc = 0x2b0a14u;
    // NOP
    // 0x2b0a18: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x2b0a18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
label_2b0a1c:
    // 0x2b0a1c: 0x0  nop
    ctx->pc = 0x2b0a1cu;
    // NOP
    // 0x2b0a20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b0a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b0a24: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2b0a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b0a28: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x2B0A28u;
    {
        const bool branch_taken_0x2b0a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0a28) {
            ctx->pc = 0x2B0944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0944;
        }
    }
    ctx->pc = 0x2B0A30u;
    // 0x2b0a30: 0xc0ad178  jal         func_2B45E0
    ctx->pc = 0x2B0A30u;
    SET_GPR_U32(ctx, 31, 0x2B0A38u);
    ctx->pc = 0x2B0A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A30u;
            // 0x2b0a34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E0u;
    if (runtime->hasFunction(0x2B45E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B45E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A38u; }
        if (ctx->pc != 0x2B0A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdataLife__15CMenuChrCngMenuFv_0x2b45e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A38u; }
        if (ctx->pc != 0x2B0A38u) { return; }
    }
    ctx->pc = 0x2B0A38u;
label_2b0a38:
    // 0x2b0a38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0a40: 0x24a5eb38  addiu       $a1, $a1, -0x14C8
    ctx->pc = 0x2b0a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961976));
    // 0x2b0a44: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2B0A44u;
    SET_GPR_U32(ctx, 31, 0x2B0A4Cu);
    ctx->pc = 0x2B0A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A44u;
            // 0x2b0a48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A4Cu; }
        if (ctx->pc != 0x2B0A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A4Cu; }
        if (ctx->pc != 0x2B0A4Cu) { return; }
    }
    ctx->pc = 0x2B0A4Cu;
label_2b0a4c:
    // 0x2b0a4c: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x2b0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    // 0x2b0a50: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b0a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b0a54: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x2b0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2b0a58: 0x8c4221d4  lw          $v0, 0x21D4($v0)
    ctx->pc = 0x2b0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8660)));
    // 0x2b0a5c: 0xc065a18  jal         func_196860
    ctx->pc = 0x2B0A5Cu;
    SET_GPR_U32(ctx, 31, 0x2B0A64u);
    ctx->pc = 0x2B0A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A5Cu;
            // 0x2b0a60: 0xae220244  sw          $v0, 0x244($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A64u; }
        if (ctx->pc != 0x2B0A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0A64u; }
        if (ctx->pc != 0x2B0A64u) { return; }
    }
    ctx->pc = 0x2B0A64u;
label_2b0a64:
    // 0x2b0a64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b0a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b0a68: 0xac22e3a8  sw          $v0, -0x1C58($at)
    ctx->pc = 0x2b0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 2));
    // 0x2b0a6c: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x2b0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x2b0a70: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b0a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b0a74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b0a78: 0xac23e3ac  sw          $v1, -0x1C54($at)
    ctx->pc = 0x2b0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 3));
    // 0x2b0a7c: 0x8e230244  lw          $v1, 0x244($s1)
    ctx->pc = 0x2b0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x2b0a80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b0a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b0a84: 0xac23e3b8  sw          $v1, -0x1C48($at)
    ctx->pc = 0x2b0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 3));
    // 0x2b0a88: 0x8e230248  lw          $v1, 0x248($s1)
    ctx->pc = 0x2b0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x2b0a8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b0a90: 0xac23e3bc  sw          $v1, -0x1C44($at)
    ctx->pc = 0x2b0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 3));
    // 0x2b0a94: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x2b0a94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b0a98: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0A98u;
    {
        const bool branch_taken_0x2b0a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0A98u;
            // 0x2b0a9c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a98) {
            ctx->pc = 0x2B0AACu;
            goto label_2b0aac;
        }
    }
    ctx->pc = 0x2B0AA0u;
    // 0x2b0aa0: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2b0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2b0aa4: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x2B0AA4u;
    SET_GPR_U32(ctx, 31, 0x2B0AACu);
    ctx->pc = 0x2B0AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0AA4u;
            // 0x2b0aa8: 0x8e250248  lw          $a1, 0x248($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AACu; }
        if (ctx->pc != 0x2B0AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AACu; }
        if (ctx->pc != 0x2B0AACu) { return; }
    }
    ctx->pc = 0x2B0AACu;
label_2b0aac:
    // 0x2b0aac: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x2b0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x2b0ab0: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x2b0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x2b0ab4: 0xae200228  sw          $zero, 0x228($s1)
    ctx->pc = 0x2b0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 0));
    // 0x2b0ab8: 0xae20022c  sw          $zero, 0x22C($s1)
    ctx->pc = 0x2b0ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 0));
    // 0x2b0abc: 0xae200230  sw          $zero, 0x230($s1)
    ctx->pc = 0x2b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
    // 0x2b0ac0: 0xae200234  sw          $zero, 0x234($s1)
    ctx->pc = 0x2b0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
    // 0x2b0ac4: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x2b0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x2b0ac8: 0xae20023c  sw          $zero, 0x23C($s1)
    ctx->pc = 0x2b0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 0));
    // 0x2b0acc: 0xae2001f4  sw          $zero, 0x1F4($s1)
    ctx->pc = 0x2b0accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
    // 0x2b0ad0: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x2b0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    // 0x2b0ad4: 0xc06724c  jal         func_19C930
    ctx->pc = 0x2B0AD4u;
    SET_GPR_U32(ctx, 31, 0x2B0ADCu);
    ctx->pc = 0x2B0AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0AD4u;
            // 0x2b0ad8: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C930u;
    if (runtime->hasFunction(0x19C930u)) {
        auto targetFn = runtime->lookupFunction(0x19C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0ADCu; }
        if (ctx->pc != 0x2B0ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPartyCharaID__16CUserDataManagerFv_0x19c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0ADCu; }
        if (ctx->pc != 0x2B0ADCu) { return; }
    }
    ctx->pc = 0x2B0ADCu;
label_2b0adc:
    // 0x2b0adc: 0xae22021c  sw          $v0, 0x21C($s1)
    ctx->pc = 0x2b0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 2));
    // 0x2b0ae0: 0x8e25021c  lw          $a1, 0x21C($s1)
    ctx->pc = 0x2b0ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x2b0ae4: 0x18a00057  blez        $a1, . + 4 + (0x57 << 2)
    ctx->pc = 0x2B0AE4u;
    {
        const bool branch_taken_0x2b0ae4 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2b0ae4) {
            ctx->pc = 0x2B0C44u;
            goto label_2b0c44;
        }
    }
    ctx->pc = 0x2B0AECu;
    // 0x2b0aec: 0xc067278  jal         func_19C9E0
    ctx->pc = 0x2B0AECu;
    SET_GPR_U32(ctx, 31, 0x2B0AF4u);
    ctx->pc = 0x2B0AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0AECu;
            // 0x2b0af0: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E0u;
    if (runtime->hasFunction(0x19C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AF4u; }
        if (ctx->pc != 0x2B0AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaInfo__16CUserDataManagerFi_0x19c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0AF4u; }
        if (ctx->pc != 0x2B0AF4u) { return; }
    }
    ctx->pc = 0x2B0AF4u;
label_2b0af4:
    // 0x2b0af4: 0xae2201f4  sw          $v0, 0x1F4($s1)
    ctx->pc = 0x2b0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
    // 0x2b0af8: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x2B0AF8u;
    SET_GPR_U32(ctx, 31, 0x2B0B00u);
    ctx->pc = 0x2B0AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0AF8u;
            // 0x2b0afc: 0x8e24021c  lw          $a0, 0x21C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B00u; }
        if (ctx->pc != 0x2B0B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B00u; }
        if (ctx->pc != 0x2B0B00u) { return; }
    }
    ctx->pc = 0x2B0B00u;
label_2b0b00:
    // 0x2b0b00: 0xae2201f8  sw          $v0, 0x1F8($s1)
    ctx->pc = 0x2b0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
    // 0x2b0b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b0b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0b08: 0x8e24021c  lw          $a0, 0x21C($s1)
    ctx->pc = 0x2b0b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x2b0b0c: 0xc0aacc4  jal         func_2AB310
    ctx->pc = 0x2B0B0Cu;
    SET_GPR_U32(ctx, 31, 0x2B0B14u);
    ctx->pc = 0x2B0B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B0Cu;
            // 0x2b0b10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B14u; }
        if (ctx->pc != 0x2B0B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B14u; }
        if (ctx->pc != 0x2B0B14u) { return; }
    }
    ctx->pc = 0x2B0B14u;
label_2b0b14:
    // 0x2b0b14: 0xae220220  sw          $v0, 0x220($s1)
    ctx->pc = 0x2b0b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 2));
    // 0x2b0b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0b1c: 0x8e24021c  lw          $a0, 0x21C($s1)
    ctx->pc = 0x2b0b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x2b0b20: 0xc0aacc4  jal         func_2AB310
    ctx->pc = 0x2B0B20u;
    SET_GPR_U32(ctx, 31, 0x2B0B28u);
    ctx->pc = 0x2B0B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B20u;
            // 0x2b0b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B28u; }
        if (ctx->pc != 0x2B0B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B28u; }
        if (ctx->pc != 0x2B0B28u) { return; }
    }
    ctx->pc = 0x2B0B28u;
label_2b0b28:
    // 0x2b0b28: 0xae220224  sw          $v0, 0x224($s1)
    ctx->pc = 0x2b0b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
    // 0x2b0b2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b0b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b0b30: 0x8e24021c  lw          $a0, 0x21C($s1)
    ctx->pc = 0x2b0b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x2b0b34: 0xc0aacc4  jal         func_2AB310
    ctx->pc = 0x2B0B34u;
    SET_GPR_U32(ctx, 31, 0x2B0B3Cu);
    ctx->pc = 0x2B0B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B34u;
            // 0x2b0b38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B3Cu; }
        if (ctx->pc != 0x2B0B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B3Cu; }
        if (ctx->pc != 0x2B0B3Cu) { return; }
    }
    ctx->pc = 0x2B0B3Cu;
label_2b0b3c:
    // 0x2b0b3c: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x2b0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
    // 0x2b0b40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b0b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b0b44: 0x8e24021c  lw          $a0, 0x21C($s1)
    ctx->pc = 0x2b0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 540)));
    // 0x2b0b48: 0xc0aacc4  jal         func_2AB310
    ctx->pc = 0x2B0B48u;
    SET_GPR_U32(ctx, 31, 0x2B0B50u);
    ctx->pc = 0x2B0B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B48u;
            // 0x2b0b4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB310u;
    if (runtime->hasFunction(0x2AB310u)) {
        auto targetFn = runtime->lookupFunction(0x2AB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B50u; }
        if (ctx->pc != 0x2B0B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaMessage__Fiii_0x2ab310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0B50u; }
        if (ctx->pc != 0x2B0B50u) { return; }
    }
    ctx->pc = 0x2B0B50u;
label_2b0b50:
    // 0x2b0b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b0b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0b54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0B54u;
    {
        const bool branch_taken_0x2b0b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B54u;
            // 0x2b0b58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b54) {
            ctx->pc = 0x2B0B6Cu;
            goto label_2b0b6c;
        }
    }
    ctx->pc = 0x2B0B5Cu;
label_2b0b5c:
    // 0x2b0b5c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x2b0b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2b0b60: 0xac64022c  sw          $a0, 0x22C($v1)
    ctx->pc = 0x2b0b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 556), GPR_U32(ctx, 4));
    // 0x2b0b64: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2b0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2b0b68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b0b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2b0b6c:
    // 0x2b0b6c: 0x0  nop
    ctx->pc = 0x2b0b6cu;
    // NOP
    // 0x2b0b70: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x2b0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2b0b74: 0x80630030  lb          $v1, 0x30($v1)
    ctx->pc = 0x2b0b74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b0b78: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2b0b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b0b7c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B0B7Cu;
    {
        const bool branch_taken_0x2b0b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B7Cu;
            // 0x2b0b80: 0x462021  addu        $a0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b7c) {
            ctx->pc = 0x2B0B5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0b5c;
        }
    }
    ctx->pc = 0x2B0B84u;
    // 0x2b0b84: 0x28c10004  slti        $at, $a2, 0x4
    ctx->pc = 0x2b0b84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b0b88: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0B88u;
    {
        const bool branch_taken_0x2b0b88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0B88u;
            // 0x2b0b8c: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b88) {
            ctx->pc = 0x2B0BB0u;
            goto label_2b0bb0;
        }
    }
    ctx->pc = 0x2B0B90u;
label_2b0b90:
    // 0x2b0b90: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x2b0b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2b0b94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b0b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b0b98: 0xac60022c  sw          $zero, 0x22C($v1)
    ctx->pc = 0x2b0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 556), GPR_U32(ctx, 0));
    // 0x2b0b9c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2b0b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2b0ba0: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x2b0ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b0ba4: 0x0  nop
    ctx->pc = 0x2b0ba4u;
    // NOP
    // 0x2b0ba8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B0BA8u;
    {
        const bool branch_taken_0x2b0ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ba8) {
            ctx->pc = 0x2B0B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0b90;
        }
    }
    ctx->pc = 0x2B0BB0u;
label_2b0bb0:
    // 0x2b0bb0: 0x8e2301f8  lw          $v1, 0x1F8($s1)
    ctx->pc = 0x2b0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2b0bb4: 0x80630030  lb          $v1, 0x30($v1)
    ctx->pc = 0x2b0bb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b0bb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0BB8u;
    {
        const bool branch_taken_0x2b0bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BB8u;
            // 0x2b0bbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bb8) {
            ctx->pc = 0x2B0BC8u;
            goto label_2b0bc8;
        }
    }
    ctx->pc = 0x2B0BC0u;
    // 0x2b0bc0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b0bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b0bc4: 0xae23022c  sw          $v1, 0x22C($s1)
    ctx->pc = 0x2b0bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 556), GPR_U32(ctx, 3));
label_2b0bc8:
    // 0x2b0bc8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B0BC8u;
    {
        const bool branch_taken_0x2b0bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BC8u;
            // 0x2b0bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bc8) {
            ctx->pc = 0x2B0BF4u;
            goto label_2b0bf4;
        }
    }
    ctx->pc = 0x2B0BD0u;
label_2b0bd0:
    // 0x2b0bd0: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x2b0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2b0bd4: 0x24634750  addiu       $v1, $v1, 0x4750
    ctx->pc = 0x2b0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18256));
    // 0x2b0bd8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2b0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b0bdc: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x2b0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2b0be0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b0be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0be4: 0xc089728  jal         func_225CA0
    ctx->pc = 0x2B0BE4u;
    SET_GPR_U32(ctx, 31, 0x2B0BECu);
    ctx->pc = 0x2B0BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0BE4u;
            // 0x2b0be8: 0x90460032  lbu         $a2, 0x32($v0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0BECu; }
        if (ctx->pc != 0x2B0BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0BECu; }
        if (ctx->pc != 0x2B0BECu) { return; }
    }
    ctx->pc = 0x2B0BECu;
label_2b0bec:
    // 0x2b0bec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b0becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b0bf0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b0bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b0bf4:
    // 0x2b0bf4: 0x0  nop
    ctx->pc = 0x2b0bf4u;
    // NOP
    // 0x2b0bf8: 0x8e2401f8  lw          $a0, 0x1F8($s1)
    ctx->pc = 0x2b0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x2b0bfc: 0x80830030  lb          $v1, 0x30($a0)
    ctx->pc = 0x2b0bfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b0c00: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2b0c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b0c04: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2B0C04u;
    {
        const bool branch_taken_0x2b0c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C04u;
            // 0x2b0c08: 0x3c030035  lui         $v1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c04) {
            ctx->pc = 0x2B0BD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0bd0;
        }
    }
    ctx->pc = 0x2B0C0Cu;
    // 0x2b0c0c: 0x2a410004  slti        $at, $s2, 0x4
    ctx->pc = 0x2b0c0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b0c10: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0C10u;
    {
        const bool branch_taken_0x2b0c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C10u;
            // 0x2b0c14: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c10) {
            ctx->pc = 0x2B0C44u;
            goto label_2b0c44;
        }
    }
    ctx->pc = 0x2B0C18u;
label_2b0c18:
    // 0x2b0c18: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2b0c1c: 0x8e240140  lw          $a0, 0x140($s1)
    ctx->pc = 0x2b0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2b0c20: 0x24424750  addiu       $v0, $v0, 0x4750
    ctx->pc = 0x2b0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18256));
    // 0x2b0c24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b0c28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0c2c: 0xc08968c  jal         func_225A30
    ctx->pc = 0x2B0C2Cu;
    SET_GPR_U32(ctx, 31, 0x2B0C34u);
    ctx->pc = 0x2B0C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C2Cu;
            // 0x2b0c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A30u;
    if (runtime->hasFunction(0x225A30u)) {
        auto targetFn = runtime->lookupFunction(0x225A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C34u; }
        if (ctx->pc != 0x2B0C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPartDrawFlag__16CMenuPosDataFormFPcb_0x225a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0C34u; }
        if (ctx->pc != 0x2B0C34u) { return; }
    }
    ctx->pc = 0x2B0C34u;
label_2b0c34:
    // 0x2b0c34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b0c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b0c38: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x2b0c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b0c3c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2B0C3Cu;
    {
        const bool branch_taken_0x2b0c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C3Cu;
            // 0x2b0c40: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c3c) {
            ctx->pc = 0x2B0C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b0c18;
        }
    }
    ctx->pc = 0x2B0C44u;
label_2b0c44:
    // 0x2b0c44: 0x0  nop
    ctx->pc = 0x2b0c44u;
    // NOP
    // 0x2b0c48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b0c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0c4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b0c4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0c50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b0c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0C60u;
            // 0x2b0c64: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B0C68u;
}
