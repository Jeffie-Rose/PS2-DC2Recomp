#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_EDIT_PARTS_POS__FP12RS_STACKDATAi
// Address: 0x2673b0 - 0x267480
void ps2__GET_EDIT_PARTS_POS__FP12RS_STACKDATAi_0x2673b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_EDIT_PARTS_POS__FP12RS_STACKDATAi_0x2673b0");
#endif

    switch (ctx->pc) {
        case 0x2673b0u: goto label_2673b0;
        case 0x2673b4u: goto label_2673b4;
        case 0x2673b8u: goto label_2673b8;
        case 0x2673bcu: goto label_2673bc;
        case 0x2673c0u: goto label_2673c0;
        case 0x2673c4u: goto label_2673c4;
        case 0x2673c8u: goto label_2673c8;
        case 0x2673ccu: goto label_2673cc;
        case 0x2673d0u: goto label_2673d0;
        case 0x2673d4u: goto label_2673d4;
        case 0x2673d8u: goto label_2673d8;
        case 0x2673dcu: goto label_2673dc;
        case 0x2673e0u: goto label_2673e0;
        case 0x2673e4u: goto label_2673e4;
        case 0x2673e8u: goto label_2673e8;
        case 0x2673ecu: goto label_2673ec;
        case 0x2673f0u: goto label_2673f0;
        case 0x2673f4u: goto label_2673f4;
        case 0x2673f8u: goto label_2673f8;
        case 0x2673fcu: goto label_2673fc;
        case 0x267400u: goto label_267400;
        case 0x267404u: goto label_267404;
        case 0x267408u: goto label_267408;
        case 0x26740cu: goto label_26740c;
        case 0x267410u: goto label_267410;
        case 0x267414u: goto label_267414;
        case 0x267418u: goto label_267418;
        case 0x26741cu: goto label_26741c;
        case 0x267420u: goto label_267420;
        case 0x267424u: goto label_267424;
        case 0x267428u: goto label_267428;
        case 0x26742cu: goto label_26742c;
        case 0x267430u: goto label_267430;
        case 0x267434u: goto label_267434;
        case 0x267438u: goto label_267438;
        case 0x26743cu: goto label_26743c;
        case 0x267440u: goto label_267440;
        case 0x267444u: goto label_267444;
        case 0x267448u: goto label_267448;
        case 0x26744cu: goto label_26744c;
        case 0x267450u: goto label_267450;
        case 0x267454u: goto label_267454;
        case 0x267458u: goto label_267458;
        case 0x26745cu: goto label_26745c;
        case 0x267460u: goto label_267460;
        case 0x267464u: goto label_267464;
        case 0x267468u: goto label_267468;
        case 0x26746cu: goto label_26746c;
        case 0x267470u: goto label_267470;
        case 0x267474u: goto label_267474;
        case 0x267478u: goto label_267478;
        case 0x26747cu: goto label_26747c;
        default: break;
    }

    ctx->pc = 0x2673b0u;

label_2673b0:
    // 0x2673b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2673b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2673b4:
    // 0x2673b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2673b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2673b8:
    // 0x2673b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2673b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2673bc:
    // 0x2673bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2673bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2673c0:
    // 0x2673c0: 0xc097e48  jal         func_25F920
label_2673c4:
    if (ctx->pc == 0x2673C4u) {
        ctx->pc = 0x2673C4u;
            // 0x2673c4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2673C8u;
        goto label_2673c8;
    }
    ctx->pc = 0x2673C0u;
    SET_GPR_U32(ctx, 31, 0x2673C8u);
    ctx->pc = 0x2673C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2673C0u;
            // 0x2673c4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673C8u; }
        if (ctx->pc != 0x2673C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673C8u; }
        if (ctx->pc != 0x2673C8u) { return; }
    }
    ctx->pc = 0x2673C8u;
label_2673c8:
    // 0x2673c8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2673c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_2673cc:
    // 0x2673cc: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2673ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
label_2673d0:
    // 0x2673d0: 0xc0a0f58  jal         func_283D60
label_2673d4:
    if (ctx->pc == 0x2673D4u) {
        ctx->pc = 0x2673D4u;
            // 0x2673d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2673D8u;
        goto label_2673d8;
    }
    ctx->pc = 0x2673D0u;
    SET_GPR_U32(ctx, 31, 0x2673D8u);
    ctx->pc = 0x2673D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2673D0u;
            // 0x2673d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673D8u; }
        if (ctx->pc != 0x2673D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673D8u; }
        if (ctx->pc != 0x2673D8u) { return; }
    }
    ctx->pc = 0x2673D8u;
label_2673d8:
    // 0x2673d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2673dc:
    if (ctx->pc == 0x2673DCu) {
        ctx->pc = 0x2673DCu;
            // 0x2673dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2673E0u;
        goto label_2673e0;
    }
    ctx->pc = 0x2673D8u;
    {
        const bool branch_taken_0x2673d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2673DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2673D8u;
            // 0x2673dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673d8) {
            ctx->pc = 0x2673E8u;
            goto label_2673e8;
        }
    }
    ctx->pc = 0x2673E0u;
label_2673e0:
    // 0x2673e0: 0x10000022  b           . + 4 + (0x22 << 2)
label_2673e4:
    if (ctx->pc == 0x2673E4u) {
        ctx->pc = 0x2673E4u;
            // 0x2673e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2673E8u;
        goto label_2673e8;
    }
    ctx->pc = 0x2673E0u;
    {
        const bool branch_taken_0x2673e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2673E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2673E0u;
            // 0x2673e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673e0) {
            ctx->pc = 0x26746Cu;
            goto label_26746c;
        }
    }
    ctx->pc = 0x2673E8u;
label_2673e8:
    // 0x2673e8: 0xc06c328  jal         func_1B0CA0
label_2673ec:
    if (ctx->pc == 0x2673ECu) {
        ctx->pc = 0x2673ECu;
            // 0x2673ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2673F0u;
        goto label_2673f0;
    }
    ctx->pc = 0x2673E8u;
    SET_GPR_U32(ctx, 31, 0x2673F0u);
    ctx->pc = 0x2673ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2673E8u;
            // 0x2673ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0CA0u;
    if (runtime->hasFunction(0x1B0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673F0u; }
        if (ctx->pc != 0x2673F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPc_0x1b0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2673F0u; }
        if (ctx->pc != 0x2673F0u) { return; }
    }
    ctx->pc = 0x2673F0u;
label_2673f0:
    // 0x2673f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2673f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2673f4:
    // 0x2673f4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2673f8:
    if (ctx->pc == 0x2673F8u) {
        ctx->pc = 0x2673F8u;
            // 0x2673f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2673FCu;
        goto label_2673fc;
    }
    ctx->pc = 0x2673F4u;
    {
        const bool branch_taken_0x2673f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2673F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2673F4u;
            // 0x2673f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673f4) {
            ctx->pc = 0x267404u;
            goto label_267404;
        }
    }
    ctx->pc = 0x2673FCu;
label_2673fc:
    // 0x2673fc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_267400:
    if (ctx->pc == 0x267400u) {
        ctx->pc = 0x267400u;
            // 0x267400: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x267404u;
        goto label_267404;
    }
    ctx->pc = 0x2673FCu;
    {
        const bool branch_taken_0x2673fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2673FCu;
            // 0x267400: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2673fc) {
            ctx->pc = 0x267470u;
            goto label_267470;
        }
    }
    ctx->pc = 0x267404u;
label_267404:
    // 0x267404: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x267404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_267408:
    // 0x267408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26740c:
    // 0x26740c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x26740cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_267410:
    // 0x267410: 0x320f809  jalr        $t9
label_267414:
    if (ctx->pc == 0x267414u) {
        ctx->pc = 0x267414u;
            // 0x267414: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x267418u;
        goto label_267418;
    }
    ctx->pc = 0x267410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x267418u);
        ctx->pc = 0x267414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267410u;
            // 0x267414: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x267418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x267418u; }
            if (ctx->pc != 0x267418u) { return; }
        }
        }
    }
    ctx->pc = 0x267418u;
label_267418:
    // 0x267418: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x267418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26741c:
    // 0x26741c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267420:
    // 0x267420: 0xc097e54  jal         func_25F950
label_267424:
    if (ctx->pc == 0x267424u) {
        ctx->pc = 0x267424u;
            // 0x267424: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x267428u;
        goto label_267428;
    }
    ctx->pc = 0x267420u;
    SET_GPR_U32(ctx, 31, 0x267428u);
    ctx->pc = 0x267424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267420u;
            // 0x267424: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267428u; }
        if (ctx->pc != 0x267428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267428u; }
        if (ctx->pc != 0x267428u) { return; }
    }
    ctx->pc = 0x267428u;
label_267428:
    // 0x267428: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x267428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26742c:
    // 0x26742c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267430:
    // 0x267430: 0xc097e54  jal         func_25F950
label_267434:
    if (ctx->pc == 0x267434u) {
        ctx->pc = 0x267434u;
            // 0x267434: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x267438u;
        goto label_267438;
    }
    ctx->pc = 0x267430u;
    SET_GPR_U32(ctx, 31, 0x267438u);
    ctx->pc = 0x267434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267430u;
            // 0x267434: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267438u; }
        if (ctx->pc != 0x267438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267438u; }
        if (ctx->pc != 0x267438u) { return; }
    }
    ctx->pc = 0x267438u;
label_267438:
    // 0x267438: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x267438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26743c:
    // 0x26743c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_267440:
    // 0x267440: 0xc097e54  jal         func_25F950
label_267444:
    if (ctx->pc == 0x267444u) {
        ctx->pc = 0x267444u;
            // 0x267444: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x267448u;
        goto label_267448;
    }
    ctx->pc = 0x267440u;
    SET_GPR_U32(ctx, 31, 0x267448u);
    ctx->pc = 0x267444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267440u;
            // 0x267444: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267448u; }
        if (ctx->pc != 0x267448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267448u; }
        if (ctx->pc != 0x267448u) { return; }
    }
    ctx->pc = 0x267448u;
label_267448:
    // 0x267448: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x267448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26744c:
    // 0x26744c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26744cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_267450:
    // 0x267450: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x267450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_267454:
    // 0x267454: 0x320f809  jalr        $t9
label_267458:
    if (ctx->pc == 0x267458u) {
        ctx->pc = 0x267458u;
            // 0x267458: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x26745Cu;
        goto label_26745c;
    }
    ctx->pc = 0x267454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26745Cu);
        ctx->pc = 0x267458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267454u;
            // 0x267458: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26745Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26745Cu; }
            if (ctx->pc != 0x26745Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26745Cu;
label_26745c:
    // 0x26745c: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x26745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_267460:
    // 0x267460: 0xc097e54  jal         func_25F950
label_267464:
    if (ctx->pc == 0x267464u) {
        ctx->pc = 0x267464u;
            // 0x267464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x267468u;
        goto label_267468;
    }
    ctx->pc = 0x267460u;
    SET_GPR_U32(ctx, 31, 0x267468u);
    ctx->pc = 0x267464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267460u;
            // 0x267464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267468u; }
        if (ctx->pc != 0x267468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267468u; }
        if (ctx->pc != 0x267468u) { return; }
    }
    ctx->pc = 0x267468u;
label_267468:
    // 0x267468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26746c:
    // 0x26746c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_267470:
    // 0x267470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_267474:
    // 0x267474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_267478:
    // 0x267478: 0x3e00008  jr          $ra
label_26747c:
    if (ctx->pc == 0x26747Cu) {
        ctx->pc = 0x26747Cu;
            // 0x26747c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x267480u;
        goto label_fallthrough_0x267478;
    }
    ctx->pc = 0x267478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267478u;
            // 0x26747c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x267478:
    ctx->pc = 0x267480u;
}
