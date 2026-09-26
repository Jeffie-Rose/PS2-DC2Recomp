#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCN_GET_CHR_FRM_DIR__FP12RS_STACKDATAi
// Address: 0x2e74c0 - 0x2e75a4
void ps2__SCN_GET_CHR_FRM_DIR__FP12RS_STACKDATAi_0x2e74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCN_GET_CHR_FRM_DIR__FP12RS_STACKDATAi_0x2e74c0");
#endif

    switch (ctx->pc) {
        case 0x2e74dcu: goto label_2e74dc;
        case 0x2e74ecu: goto label_2e74ec;
        case 0x2e74f8u: goto label_2e74f8;
        case 0x2e7524u: goto label_2e7524;
        case 0x2e755cu: goto label_2e755c;
        case 0x2e756cu: goto label_2e756c;
        case 0x2e757cu: goto label_2e757c;
        case 0x2e7588u: goto label_2e7588;
        default: break;
    }

    ctx->pc = 0x2e74c0u;

    // 0x2e74c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e74c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e74c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e74c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e74c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e74cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e74ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e74d0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2e74d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e74d4: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E74D4u;
    SET_GPR_U32(ctx, 31, 0x2E74DCu);
    ctx->pc = 0x2E74D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E74D4u;
            // 0x2e74d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74DCu; }
        if (ctx->pc != 0x2E74DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74DCu; }
        if (ctx->pc != 0x2E74DCu) { return; }
    }
    ctx->pc = 0x2E74DCu;
label_2e74dc:
    // 0x2e74dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e74dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e74e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e74e4: 0xc0b8cd0  jal         func_2E3340
    ctx->pc = 0x2E74E4u;
    SET_GPR_U32(ctx, 31, 0x2E74ECu);
    ctx->pc = 0x2E74E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E74E4u;
            // 0x2e74e8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3340u;
    if (runtime->hasFunction(0x2E3340u)) {
        auto targetFn = runtime->lookupFunction(0x2E3340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74ECu; }
        if (ctx->pc != 0x2E74ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2e3340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74ECu; }
        if (ctx->pc != 0x2E74ECu) { return; }
    }
    ctx->pc = 0x2E74ECu;
label_2e74ec:
    // 0x2e74ec: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e74ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e74f0: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E74F0u;
    SET_GPR_U32(ctx, 31, 0x2E74F8u);
    ctx->pc = 0x2E74F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E74F0u;
            // 0x2e74f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74F8u; }
        if (ctx->pc != 0x2E74F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E74F8u; }
        if (ctx->pc != 0x2E74F8u) { return; }
    }
    ctx->pc = 0x2E74F8u;
label_2e74f8:
    // 0x2e74f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E74F8u;
    {
        const bool branch_taken_0x2e74f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e74f8) {
            ctx->pc = 0x2E7508u;
            goto label_2e7508;
        }
    }
    ctx->pc = 0x2E7500u;
    // 0x2e7500: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2E7500u;
    {
        const bool branch_taken_0x2e7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7500u;
            // 0x2e7504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7500) {
            ctx->pc = 0x2E758Cu;
            goto label_2e758c;
        }
    }
    ctx->pc = 0x2E7508u;
label_2e7508:
    // 0x2e7508: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2e7508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2e750c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E750Cu;
    {
        const bool branch_taken_0x2e750c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E750Cu;
            // 0x2e7510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e750c) {
            ctx->pc = 0x2E751Cu;
            goto label_2e751c;
        }
    }
    ctx->pc = 0x2E7514u;
    // 0x2e7514: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E7514u;
    {
        const bool branch_taken_0x2e7514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7514u;
            // 0x2e7518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7514) {
            ctx->pc = 0x2E758Cu;
            goto label_2e758c;
        }
    }
    ctx->pc = 0x2E751Cu;
label_2e751c:
    // 0x2e751c: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2E751Cu;
    SET_GPR_U32(ctx, 31, 0x2E7524u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7524u; }
        if (ctx->pc != 0x2E7524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7524u; }
        if (ctx->pc != 0x2E7524u) { return; }
    }
    ctx->pc = 0x2E7524u;
label_2e7524:
    // 0x2e7524: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7524u;
    {
        const bool branch_taken_0x2e7524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7524u;
            // 0x2e7528: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7524) {
            ctx->pc = 0x2E7534u;
            goto label_2e7534;
        }
    }
    ctx->pc = 0x2E752Cu;
    // 0x2e752c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E752Cu;
    {
        const bool branch_taken_0x2e752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E752Cu;
            // 0x2e7530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e752c) {
            ctx->pc = 0x2E758Cu;
            goto label_2e758c;
        }
    }
    ctx->pc = 0x2E7534u;
label_2e7534:
    // 0x2e7534: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2e7534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2e7538: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x2e7538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2e753c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e753cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e7540: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e7540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e7544: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2e7544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2e7548: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x2e7548u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2e754c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e754cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7550: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e7550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2e7554: 0xc04de1c  jal         func_137870
    ctx->pc = 0x2E7554u;
    SET_GPR_U32(ctx, 31, 0x2E755Cu);
    ctx->pc = 0x2E7558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7554u;
            // 0x2e7558: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137870u;
    if (runtime->hasFunction(0x137870u)) {
        auto targetFn = runtime->lookupFunction(0x137870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E755Cu; }
        if (ctx->pc != 0x2E755Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldDir__8mgCFrameFPfPf_0x137870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E755Cu; }
        if (ctx->pc != 0x2E755Cu) { return; }
    }
    ctx->pc = 0x2E755Cu;
label_2e755c:
    // 0x2e755c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x2e755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7564: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7564u;
    SET_GPR_U32(ctx, 31, 0x2E756Cu);
    ctx->pc = 0x2E7568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7564u;
            // 0x2e7568: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E756Cu; }
        if (ctx->pc != 0x2E756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E756Cu; }
        if (ctx->pc != 0x2E756Cu) { return; }
    }
    ctx->pc = 0x2E756Cu;
label_2e756c:
    // 0x2e756c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2e756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e7570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7574: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7574u;
    SET_GPR_U32(ctx, 31, 0x2E757Cu);
    ctx->pc = 0x2E7578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7574u;
            // 0x2e7578: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E757Cu; }
        if (ctx->pc != 0x2E757Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E757Cu; }
        if (ctx->pc != 0x2E757Cu) { return; }
    }
    ctx->pc = 0x2E757Cu;
label_2e757c:
    // 0x2e757c: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2e757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e7580: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E7580u;
    SET_GPR_U32(ctx, 31, 0x2E7588u);
    ctx->pc = 0x2E7584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7580u;
            // 0x2e7584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7588u; }
        if (ctx->pc != 0x2E7588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7588u; }
        if (ctx->pc != 0x2E7588u) { return; }
    }
    ctx->pc = 0x2E7588u;
label_2e7588:
    // 0x2e7588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e758c:
    // 0x2e758c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e758cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7590: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e759c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E759Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E75A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E759Cu;
            // 0x2e75a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E75A4u;
}
