#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_INIT_FIX__FP12RS_STACKDATAi
// Address: 0x27a3b0 - 0x27a4a4
void ps2__ESM_INIT_FIX__FP12RS_STACKDATAi_0x27a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_INIT_FIX__FP12RS_STACKDATAi_0x27a3b0");
#endif

    switch (ctx->pc) {
        case 0x27a3e8u: goto label_27a3e8;
        case 0x27a400u: goto label_27a400;
        case 0x27a410u: goto label_27a410;
        case 0x27a42cu: goto label_27a42c;
        case 0x27a438u: goto label_27a438;
        case 0x27a448u: goto label_27a448;
        case 0x27a460u: goto label_27a460;
        case 0x27a470u: goto label_27a470;
        case 0x27a484u: goto label_27a484;
        default: break;
    }

    ctx->pc = 0x27a3b0u;

    // 0x27a3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27a3b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27a3b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27a3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27a3bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27a3c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27a3c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a3c8: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a3cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A3CCu;
    {
        const bool branch_taken_0x27a3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3CCu;
            // 0x27a3d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3cc) {
            ctx->pc = 0x27A3DCu;
            goto label_27a3dc;
        }
    }
    ctx->pc = 0x27A3D4u;
    // 0x27a3d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27A3D4u;
    {
        const bool branch_taken_0x27a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3D4u;
            // 0x27a3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3d4) {
            ctx->pc = 0x27A488u;
            goto label_27a488;
        }
    }
    ctx->pc = 0x27A3DCu;
label_27a3dc:
    // 0x27a3dc: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x27a3dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27a3e0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A3E0u;
    SET_GPR_U32(ctx, 31, 0x27A3E8u);
    ctx->pc = 0x27A3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3E0u;
            // 0x27a3e4: 0x241136b0  addiu       $s1, $zero, 0x36B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3E8u; }
        if (ctx->pc != 0x27A3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A3E8u; }
        if (ctx->pc != 0x27A3E8u) { return; }
    }
    ctx->pc = 0x27A3E8u;
label_27a3e8:
    // 0x27a3e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a3ec: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x27a3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27a3f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A3F0u;
    {
        const bool branch_taken_0x27a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A3F0u;
            // 0x27a3f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3f0) {
            ctx->pc = 0x27A404u;
            goto label_27a404;
        }
    }
    ctx->pc = 0x27A3F8u;
    // 0x27a3f8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A3F8u;
    SET_GPR_U32(ctx, 31, 0x27A400u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A400u; }
        if (ctx->pc != 0x27A400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A400u; }
        if (ctx->pc != 0x27A400u) { return; }
    }
    ctx->pc = 0x27A400u;
label_27a400:
    // 0x27a400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a404:
    // 0x27a404: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27a404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27a408: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x27A408u;
    SET_GPR_U32(ctx, 31, 0x27A410u);
    ctx->pc = 0x27A40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A408u;
            // 0x27a40c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A410u; }
        if (ctx->pc != 0x27A410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A410u; }
        if (ctx->pc != 0x27A410u) { return; }
    }
    ctx->pc = 0x27A410u;
label_27a410:
    // 0x27a410: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A410u;
    {
        const bool branch_taken_0x27a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A410u;
            // 0x27a414: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a410) {
            ctx->pc = 0x27A420u;
            goto label_27a420;
        }
    }
    ctx->pc = 0x27A418u;
    // 0x27a418: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27A418u;
    {
        const bool branch_taken_0x27a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A418u;
            // 0x27a41c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a418) {
            ctx->pc = 0x27A488u;
            goto label_27a488;
        }
    }
    ctx->pc = 0x27A420u;
label_27a420:
    // 0x27a420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a424: 0xc04e748  jal         func_139D20
    ctx->pc = 0x27A424u;
    SET_GPR_U32(ctx, 31, 0x27A42Cu);
    ctx->pc = 0x27A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A424u;
            // 0x27a428: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A42Cu; }
        if (ctx->pc != 0x27A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A42Cu; }
        if (ctx->pc != 0x27A42Cu) { return; }
    }
    ctx->pc = 0x27A42Cu;
label_27a42c:
    // 0x27a42c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x27a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x27a430: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x27A430u;
    SET_GPR_U32(ctx, 31, 0x27A438u);
    ctx->pc = 0x27A434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A430u;
            // 0x27a434: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A438u; }
        if (ctx->pc != 0x27A438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A438u; }
        if (ctx->pc != 0x27A438u) { return; }
    }
    ctx->pc = 0x27A438u;
label_27a438:
    // 0x27a438: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A438u;
    {
        const bool branch_taken_0x27a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A438u;
            // 0x27a43c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a438) {
            ctx->pc = 0x27A448u;
            goto label_27a448;
        }
    }
    ctx->pc = 0x27A440u;
    // 0x27a440: 0xc04e640  jal         func_139900
    ctx->pc = 0x27A440u;
    SET_GPR_U32(ctx, 31, 0x27A448u);
    ctx->pc = 0x27A444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A440u;
            // 0x27a444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A448u; }
        if (ctx->pc != 0x27A448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A448u; }
        if (ctx->pc != 0x27A448u) { return; }
    }
    ctx->pc = 0x27A448u;
label_27a448:
    // 0x27a448: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A448u;
    {
        const bool branch_taken_0x27a448 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A448u;
            // 0x27a44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a448) {
            ctx->pc = 0x27A458u;
            goto label_27a458;
        }
    }
    ctx->pc = 0x27A450u;
    // 0x27a450: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27A450u;
    {
        const bool branch_taken_0x27a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A450u;
            // 0x27a454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a450) {
            ctx->pc = 0x27A488u;
            goto label_27a488;
        }
    }
    ctx->pc = 0x27A458u;
label_27a458:
    // 0x27a458: 0xc04e704  jal         func_139C10
    ctx->pc = 0x27A458u;
    SET_GPR_U32(ctx, 31, 0x27A460u);
    ctx->pc = 0x27A45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A458u;
            // 0x27a45c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A460u; }
        if (ctx->pc != 0x27A460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A460u; }
        if (ctx->pc != 0x27A460u) { return; }
    }
    ctx->pc = 0x27A460u;
label_27a460:
    // 0x27a460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27a464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a468: 0xc04e64c  jal         func_139930
    ctx->pc = 0x27A468u;
    SET_GPR_U32(ctx, 31, 0x27A470u);
    ctx->pc = 0x27A46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A468u;
            // 0x27a46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139930u;
    if (runtime->hasFunction(0x139930u)) {
        auto targetFn = runtime->lookupFunction(0x139930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A470u; }
        if (ctx->pc != 0x27A470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeapMem__9mgCMemoryFP1i_0x139930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A470u; }
        if (ctx->pc != 0x27A470u) { return; }
    }
    ctx->pc = 0x27A470u;
label_27a470:
    // 0x27a470: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x27a470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x27a474: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x27a474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x27a478: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a47c: 0xc0b7fc4  jal         func_2DFF10
    ctx->pc = 0x27A47Cu;
    SET_GPR_U32(ctx, 31, 0x27A484u);
    ctx->pc = 0x27A480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A47Cu;
            // 0x27a480: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF10u;
    if (runtime->hasFunction(0x2DFF10u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A484u; }
        if (ctx->pc != 0x27A484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWorkBuffer__16CEffectScriptManFP9mgCMemory_0x2dff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A484u; }
        if (ctx->pc != 0x27A484u) { return; }
    }
    ctx->pc = 0x27A484u;
label_27a484:
    // 0x27a484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a488:
    // 0x27a488: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a48c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27a48cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a490: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a49c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A49Cu;
            // 0x27a4a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A4A4u;
}
