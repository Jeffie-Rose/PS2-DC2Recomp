#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEventItem__5CShopFv
// Address: 0x291500 - 0x291838
void CheckEventItem__5CShopFv_0x291500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEventItem__5CShopFv_0x291500");
#endif

    switch (ctx->pc) {
        case 0x291518u: goto label_291518;
        case 0x29153cu: goto label_29153c;
        case 0x29154cu: goto label_29154c;
        case 0x291568u: goto label_291568;
        case 0x29157cu: goto label_29157c;
        case 0x2915a4u: goto label_2915a4;
        case 0x2915b8u: goto label_2915b8;
        case 0x2915dcu: goto label_2915dc;
        case 0x2915f0u: goto label_2915f0;
        case 0x291650u: goto label_291650;
        case 0x291674u: goto label_291674;
        case 0x291688u: goto label_291688;
        case 0x2916acu: goto label_2916ac;
        case 0x2916c0u: goto label_2916c0;
        case 0x2916e4u: goto label_2916e4;
        case 0x2916f8u: goto label_2916f8;
        case 0x29170cu: goto label_29170c;
        case 0x291720u: goto label_291720;
        case 0x291758u: goto label_291758;
        case 0x29178cu: goto label_29178c;
        case 0x2917a4u: goto label_2917a4;
        case 0x2917b0u: goto label_2917b0;
        case 0x2917f0u: goto label_2917f0;
        default: break;
    }

    ctx->pc = 0x291500u;

    // 0x291500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29150c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29150cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291510: 0xc064220  jal         func_190880
    ctx->pc = 0x291510u;
    SET_GPR_U32(ctx, 31, 0x291518u);
    ctx->pc = 0x291514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291510u;
            // 0x291514: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291518u; }
        if (ctx->pc != 0x291518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291518u; }
        if (ctx->pc != 0x291518u) { return; }
    }
    ctx->pc = 0x291518u;
label_291518:
    // 0x291518: 0x8784983c  lh          $a0, -0x67C4($gp)
    ctx->pc = 0x291518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940732)));
    // 0x29151c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x29151cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x291520: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x291520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x291524: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x291524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x291528: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x291528u;
    {
        const bool branch_taken_0x291528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x29152Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291528u;
            // 0x29152c: 0x418021  addu        $s0, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291528) {
            ctx->pc = 0x291544u;
            goto label_291544;
        }
    }
    ctx->pc = 0x291530u;
    // 0x291530: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x291530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x291534: 0xc0a44bc  jal         func_2912F0
    ctx->pc = 0x291534u;
    SET_GPR_U32(ctx, 31, 0x29153Cu);
    ctx->pc = 0x291538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291534u;
            // 0x291538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2912F0u;
    if (runtime->hasFunction(0x2912F0u)) {
        auto targetFn = runtime->lookupFunction(0x2912F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29153Cu; }
        if (ctx->pc != 0x29153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDonyShopLineUp__FPiPi_0x2912f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29153Cu; }
        if (ctx->pc != 0x29153Cu) { return; }
    }
    ctx->pc = 0x29153Cu;
label_29153c:
    // 0x29153c: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x29153Cu;
    {
        const bool branch_taken_0x29153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29153Cu;
            // 0x291540: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29153c) {
            ctx->pc = 0x291824u;
            goto label_291824;
        }
    }
    ctx->pc = 0x291544u;
label_291544:
    // 0x291544: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x291544u;
    {
        const bool branch_taken_0x291544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291544u;
            // 0x291548: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291544) {
            ctx->pc = 0x29180Cu;
            goto label_29180c;
        }
    }
    ctx->pc = 0x29154Cu;
label_29154c:
    // 0x29154c: 0x24020173  addiu       $v0, $zero, 0x173
    ctx->pc = 0x29154cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x291550: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x291550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x291554: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x291554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x291558: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x291558u;
    {
        const bool branch_taken_0x291558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29155Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291558u;
            // 0x29155c: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291558) {
            ctx->pc = 0x29157Cu;
            goto label_29157c;
        }
    }
    ctx->pc = 0x291560u;
    // 0x291560: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x291560u;
    SET_GPR_U32(ctx, 31, 0x291568u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291568u; }
        if (ctx->pc != 0x291568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291568u; }
        if (ctx->pc != 0x291568u) { return; }
    }
    ctx->pc = 0x291568u;
label_291568:
    // 0x291568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291568u;
    {
        const bool branch_taken_0x291568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29156Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291568u;
            // 0x29156c: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291568) {
            ctx->pc = 0x29157Cu;
            goto label_29157c;
        }
    }
    ctx->pc = 0x291570u;
    // 0x291570: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x291570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x291574: 0xc094400  jal         func_251000
    ctx->pc = 0x291574u;
    SET_GPR_U32(ctx, 31, 0x29157Cu);
    ctx->pc = 0x291578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291574u;
            // 0x291578: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29157Cu; }
        if (ctx->pc != 0x29157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29157Cu; }
        if (ctx->pc != 0x29157Cu) { return; }
    }
    ctx->pc = 0x29157Cu;
label_29157c:
    // 0x29157c: 0x0  nop
    ctx->pc = 0x29157cu;
    // NOP
    // 0x291580: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x291580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x291584: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x291584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x291588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29158c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29158cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x291590: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x291590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x291594: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x291594u;
    {
        const bool branch_taken_0x291594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x291598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291594u;
            // 0x291598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291594) {
            ctx->pc = 0x2915B8u;
            goto label_2915b8;
        }
    }
    ctx->pc = 0x29159Cu;
    // 0x29159c: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x29159Cu;
    SET_GPR_U32(ctx, 31, 0x2915A4u);
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915A4u; }
        if (ctx->pc != 0x2915A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915A4u; }
        if (ctx->pc != 0x2915A4u) { return; }
    }
    ctx->pc = 0x2915A4u;
label_2915a4:
    // 0x2915a4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2915A4u;
    {
        const bool branch_taken_0x2915a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2915A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915A4u;
            // 0x2915a8: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915a4) {
            ctx->pc = 0x2915B8u;
            goto label_2915b8;
        }
    }
    ctx->pc = 0x2915ACu;
    // 0x2915ac: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2915acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2915b0: 0xc094400  jal         func_251000
    ctx->pc = 0x2915B0u;
    SET_GPR_U32(ctx, 31, 0x2915B8u);
    ctx->pc = 0x2915B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2915B0u;
            // 0x2915b4: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915B8u; }
        if (ctx->pc != 0x2915B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915B8u; }
        if (ctx->pc != 0x2915B8u) { return; }
    }
    ctx->pc = 0x2915B8u;
label_2915b8:
    // 0x2915b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2915b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2915bc: 0x240201a6  addiu       $v0, $zero, 0x1A6
    ctx->pc = 0x2915bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 422));
    // 0x2915c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2915c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2915c4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2915c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2915c8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2915c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2915cc: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2915CCu;
    {
        const bool branch_taken_0x2915cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2915D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915CCu;
            // 0x2915d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915cc) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x2915D4u;
    // 0x2915d4: 0xc067130  jal         func_19C4C0
    ctx->pc = 0x2915D4u;
    SET_GPR_U32(ctx, 31, 0x2915DCu);
    ctx->pc = 0x19C4C0u;
    if (runtime->hasFunction(0x19C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915DCu; }
        if (ctx->pc != 0x2915DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVoiceUnit__16CUserDataManagerFv_0x19c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915DCu; }
        if (ctx->pc != 0x2915DCu) { return; }
    }
    ctx->pc = 0x2915DCu;
label_2915dc:
    // 0x2915dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2915DCu;
    {
        const bool branch_taken_0x2915dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2915E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2915DCu;
            // 0x2915e0: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2915dc) {
            ctx->pc = 0x2915FCu;
            goto label_2915fc;
        }
    }
    ctx->pc = 0x2915E4u;
    // 0x2915e4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2915e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2915e8: 0xc094400  jal         func_251000
    ctx->pc = 0x2915E8u;
    SET_GPR_U32(ctx, 31, 0x2915F0u);
    ctx->pc = 0x2915ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2915E8u;
            // 0x2915ec: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915F0u; }
        if (ctx->pc != 0x2915F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2915F0u; }
        if (ctx->pc != 0x2915F0u) { return; }
    }
    ctx->pc = 0x2915F0u;
label_2915f0:
    // 0x2915f0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2915f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2915f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2915f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2915f8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2915f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_2915fc:
    // 0x2915fc: 0x0  nop
    ctx->pc = 0x2915fcu;
    // NOP
    // 0x291600: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x291600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x291604: 0x240201a7  addiu       $v0, $zero, 0x1A7
    ctx->pc = 0x291604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
    // 0x291608: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x291608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29160c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x29160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x291610: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x291610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x291614: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x291614u;
    {
        const bool branch_taken_0x291614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x291614) {
            ctx->pc = 0x291650u;
            goto label_291650;
        }
    }
    ctx->pc = 0x29161Cu;
    // 0x29161c: 0x8e230208  lw          $v1, 0x208($s1)
    ctx->pc = 0x29161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x291620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x291620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x291624: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x291624u;
    {
        const bool branch_taken_0x291624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x291628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291624u;
            // 0x291628: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291624) {
            ctx->pc = 0x291640u;
            goto label_291640;
        }
    }
    ctx->pc = 0x29162Cu;
    // 0x29162c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x29162cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x291630: 0x84224dc0  lh          $v0, 0x4DC0($at)
    ctx->pc = 0x291630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19904)));
    // 0x291634: 0x28420015  slti        $v0, $v0, 0x15
    ctx->pc = 0x291634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x291638: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x291638u;
    {
        const bool branch_taken_0x291638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291638) {
            ctx->pc = 0x291650u;
            goto label_291650;
        }
    }
    ctx->pc = 0x291640u;
label_291640:
    // 0x291640: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x291640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x291644: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x291644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x291648: 0xc094400  jal         func_251000
    ctx->pc = 0x291648u;
    SET_GPR_U32(ctx, 31, 0x291650u);
    ctx->pc = 0x29164Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291648u;
            // 0x29164c: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291650u; }
        if (ctx->pc != 0x291650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291650u; }
        if (ctx->pc != 0x291650u) { return; }
    }
    ctx->pc = 0x291650u;
label_291650:
    // 0x291650: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x291650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x291654: 0x24050163  addiu       $a1, $zero, 0x163
    ctx->pc = 0x291654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
    // 0x291658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29165c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29165cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x291660: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x291660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x291664: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x291664u;
    {
        const bool branch_taken_0x291664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x291668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291664u;
            // 0x291668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291664) {
            ctx->pc = 0x291688u;
            goto label_291688;
        }
    }
    ctx->pc = 0x29166Cu;
    // 0x29166c: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x29166Cu;
    SET_GPR_U32(ctx, 31, 0x291674u);
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291674u; }
        if (ctx->pc != 0x291674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291674u; }
        if (ctx->pc != 0x291674u) { return; }
    }
    ctx->pc = 0x291674u;
label_291674:
    // 0x291674: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291674u;
    {
        const bool branch_taken_0x291674 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x291678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291674u;
            // 0x291678: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291674) {
            ctx->pc = 0x291688u;
            goto label_291688;
        }
    }
    ctx->pc = 0x29167Cu;
    // 0x29167c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x29167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x291680: 0xc094400  jal         func_251000
    ctx->pc = 0x291680u;
    SET_GPR_U32(ctx, 31, 0x291688u);
    ctx->pc = 0x291684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291680u;
            // 0x291684: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291688u; }
        if (ctx->pc != 0x291688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291688u; }
        if (ctx->pc != 0x291688u) { return; }
    }
    ctx->pc = 0x291688u;
label_291688:
    // 0x291688: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x291688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x29168c: 0x2405012f  addiu       $a1, $zero, 0x12F
    ctx->pc = 0x29168cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x291690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291694: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x291694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x291698: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x291698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29169c: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29169Cu;
    {
        const bool branch_taken_0x29169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2916A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29169Cu;
            // 0x2916a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29169c) {
            ctx->pc = 0x2916C0u;
            goto label_2916c0;
        }
    }
    ctx->pc = 0x2916A4u;
    // 0x2916a4: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x2916A4u;
    SET_GPR_U32(ctx, 31, 0x2916ACu);
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916ACu; }
        if (ctx->pc != 0x2916ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916ACu; }
        if (ctx->pc != 0x2916ACu) { return; }
    }
    ctx->pc = 0x2916ACu;
label_2916ac:
    // 0x2916ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2916ACu;
    {
        const bool branch_taken_0x2916ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2916B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916ACu;
            // 0x2916b0: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916ac) {
            ctx->pc = 0x2916C0u;
            goto label_2916c0;
        }
    }
    ctx->pc = 0x2916B4u;
    // 0x2916b4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2916b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2916b8: 0xc094400  jal         func_251000
    ctx->pc = 0x2916B8u;
    SET_GPR_U32(ctx, 31, 0x2916C0u);
    ctx->pc = 0x2916BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2916B8u;
            // 0x2916bc: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916C0u; }
        if (ctx->pc != 0x2916C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916C0u; }
        if (ctx->pc != 0x2916C0u) { return; }
    }
    ctx->pc = 0x2916C0u;
label_2916c0:
    // 0x2916c0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2916c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2916c4: 0x24050166  addiu       $a1, $zero, 0x166
    ctx->pc = 0x2916c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x2916c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2916c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2916cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2916ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2916d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2916d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2916d4: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2916D4u;
    {
        const bool branch_taken_0x2916d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2916D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916D4u;
            // 0x2916d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916d4) {
            ctx->pc = 0x2916F8u;
            goto label_2916f8;
        }
    }
    ctx->pc = 0x2916DCu;
    // 0x2916dc: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x2916DCu;
    SET_GPR_U32(ctx, 31, 0x2916E4u);
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916E4u; }
        if (ctx->pc != 0x2916E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916E4u; }
        if (ctx->pc != 0x2916E4u) { return; }
    }
    ctx->pc = 0x2916E4u;
label_2916e4:
    // 0x2916e4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2916E4u;
    {
        const bool branch_taken_0x2916e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2916E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2916E4u;
            // 0x2916e8: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2916e4) {
            ctx->pc = 0x2916F8u;
            goto label_2916f8;
        }
    }
    ctx->pc = 0x2916ECu;
    // 0x2916ec: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2916ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2916f0: 0xc094400  jal         func_251000
    ctx->pc = 0x2916F0u;
    SET_GPR_U32(ctx, 31, 0x2916F8u);
    ctx->pc = 0x2916F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2916F0u;
            // 0x2916f4: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916F8u; }
        if (ctx->pc != 0x2916F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2916F8u; }
        if (ctx->pc != 0x2916F8u) { return; }
    }
    ctx->pc = 0x2916F8u;
label_2916f8:
    // 0x2916f8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x2916f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2916fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2916fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x291700: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x291700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x291704: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x291704u;
    SET_GPR_U32(ctx, 31, 0x29170Cu);
    ctx->pc = 0x291708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291704u;
            // 0x291708: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29170Cu; }
        if (ctx->pc != 0x29170Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29170Cu; }
        if (ctx->pc != 0x29170Cu) { return; }
    }
    ctx->pc = 0x29170Cu;
label_29170c:
    // 0x29170c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x29170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x291710: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x291710u;
    {
        const bool branch_taken_0x291710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x291710) {
            ctx->pc = 0x291764u;
            goto label_291764;
        }
    }
    ctx->pc = 0x291718u;
    // 0x291718: 0xc0a4534  jal         func_2914D0
    ctx->pc = 0x291718u;
    SET_GPR_U32(ctx, 31, 0x291720u);
    ctx->pc = 0x2914D0u;
    if (runtime->hasFunction(0x2914D0u)) {
        auto targetFn = runtime->lookupFunction(0x2914D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291720u; }
        if (ctx->pc != 0x291720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRobotCore__Fv_0x2914d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291720u; }
        if (ctx->pc != 0x291720u) { return; }
    }
    ctx->pc = 0x291720u;
label_291720:
    // 0x291720: 0x284300f6  slti        $v1, $v0, 0xF6
    ctx->pc = 0x291720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)246) ? 1 : 0);
    // 0x291724: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x291724u;
    {
        const bool branch_taken_0x291724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291724u;
            // 0x291728: 0x284100fc  slti        $at, $v0, 0xFC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)252) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291724) {
            ctx->pc = 0x291748u;
            goto label_291748;
        }
    }
    ctx->pc = 0x29172Cu;
    // 0x29172c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x29172Cu;
    {
        const bool branch_taken_0x29172c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x291730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29172Cu;
            // 0x291730: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29172c) {
            ctx->pc = 0x291748u;
            goto label_291748;
        }
    }
    ctx->pc = 0x291734u;
    // 0x291734: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x291734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x291738: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x291738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29173c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x29173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x291740: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291740u;
    {
        const bool branch_taken_0x291740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291740u;
            // 0x291744: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291740) {
            ctx->pc = 0x291764u;
            goto label_291764;
        }
    }
    ctx->pc = 0x291748u;
label_291748:
    // 0x291748: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x291748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x29174c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x29174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x291750: 0xc094400  jal         func_251000
    ctx->pc = 0x291750u;
    SET_GPR_U32(ctx, 31, 0x291758u);
    ctx->pc = 0x291754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291750u;
            // 0x291754: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291758u; }
        if (ctx->pc != 0x291758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291758u; }
        if (ctx->pc != 0x291758u) { return; }
    }
    ctx->pc = 0x291758u;
label_291758:
    // 0x291758: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x291758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x29175c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x291760: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x291760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_291764:
    // 0x291764: 0x0  nop
    ctx->pc = 0x291764u;
    // NOP
    // 0x291768: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x291768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x29176c: 0x240201a8  addiu       $v0, $zero, 0x1A8
    ctx->pc = 0x29176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x291770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x291770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x291774: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x291774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x291778: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x291778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29177c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29177Cu;
    {
        const bool branch_taken_0x29177c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x291780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29177Cu;
            // 0x291780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29177c) {
            ctx->pc = 0x2917A4u;
            goto label_2917a4;
        }
    }
    ctx->pc = 0x291784u;
    // 0x291784: 0xc0670bc  jal         func_19C2F0
    ctx->pc = 0x291784u;
    SET_GPR_U32(ctx, 31, 0x29178Cu);
    ctx->pc = 0x291788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291784u;
            // 0x291788: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2F0u;
    if (runtime->hasFunction(0x19C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29178Cu; }
        if (ctx->pc != 0x29178Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtr__16CUserDataManagerFi_0x19c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29178Cu; }
        if (ctx->pc != 0x29178Cu) { return; }
    }
    ctx->pc = 0x29178Cu;
label_29178c:
    // 0x29178c: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x29178cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x291790: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291790u;
    {
        const bool branch_taken_0x291790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291790u;
            // 0x291794: 0x27a4003c  addiu       $a0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291790) {
            ctx->pc = 0x2917A4u;
            goto label_2917a4;
        }
    }
    ctx->pc = 0x291798u;
    // 0x291798: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x291798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x29179c: 0xc094400  jal         func_251000
    ctx->pc = 0x29179Cu;
    SET_GPR_U32(ctx, 31, 0x2917A4u);
    ctx->pc = 0x2917A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29179Cu;
            // 0x2917a0: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2917A4u; }
        if (ctx->pc != 0x2917A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2917A4u; }
        if (ctx->pc != 0x2917A4u) { return; }
    }
    ctx->pc = 0x2917A4u;
label_2917a4:
    // 0x2917a4: 0x0  nop
    ctx->pc = 0x2917a4u;
    // NOP
    // 0x2917a8: 0xc0c6adc  jal         func_31AB70
    ctx->pc = 0x2917A8u;
    SET_GPR_U32(ctx, 31, 0x2917B0u);
    ctx->pc = 0x2917ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2917A8u;
            // 0x2917ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AB70u;
    if (runtime->hasFunction(0x31AB70u)) {
        auto targetFn = runtime->lookupFunction(0x31AB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2917B0u; }
        if (ctx->pc != 0x2917B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestRequestStatus__Fi_0x31ab70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2917B0u; }
        if (ctx->pc != 0x2917B0u) { return; }
    }
    ctx->pc = 0x2917B0u;
label_2917b0:
    // 0x2917b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2917b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2917b4: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2917B4u;
    {
        const bool branch_taken_0x2917b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2917b4) {
            ctx->pc = 0x2917FCu;
            goto label_2917fc;
        }
    }
    ctx->pc = 0x2917BCu;
    // 0x2917bc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2917bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2917c0: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x2917c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2917c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2917c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2917c8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2917c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2917cc: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2917ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2917d0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2917D0u;
    {
        const bool branch_taken_0x2917d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2917D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2917D0u;
            // 0x2917d4: 0x240300ca  addiu       $v1, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2917d0) {
            ctx->pc = 0x2917E0u;
            goto label_2917e0;
        }
    }
    ctx->pc = 0x2917D8u;
    // 0x2917d8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2917D8u;
    {
        const bool branch_taken_0x2917d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2917d8) {
            ctx->pc = 0x2917FCu;
            goto label_2917fc;
        }
    }
    ctx->pc = 0x2917E0u;
label_2917e0:
    // 0x2917e0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2917e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2917e4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x2917e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2917e8: 0xc094400  jal         func_251000
    ctx->pc = 0x2917E8u;
    SET_GPR_U32(ctx, 31, 0x2917F0u);
    ctx->pc = 0x2917ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2917E8u;
            // 0x2917ec: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2917F0u; }
        if (ctx->pc != 0x2917F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2917F0u; }
        if (ctx->pc != 0x2917F0u) { return; }
    }
    ctx->pc = 0x2917F0u;
label_2917f0:
    // 0x2917f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x2917f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2917f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2917f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2917f8: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2917f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_2917fc:
    // 0x2917fc: 0x0  nop
    ctx->pc = 0x2917fcu;
    // NOP
    // 0x291800: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x291800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x291804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x291804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x291808: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x291808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_29180c:
    // 0x29180c: 0x0  nop
    ctx->pc = 0x29180cu;
    // NOP
    // 0x291810: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x291810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x291814: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x291814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x291818: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x291818u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29181c: 0x1460ff4b  bnez        $v1, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x29181Cu;
    {
        const bool branch_taken_0x29181c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29181Cu;
            // 0x291820: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29181c) {
            ctx->pc = 0x29154Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29154c;
        }
    }
    ctx->pc = 0x291824u;
label_291824:
    // 0x291824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x291824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29182c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29182cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291830: 0x3e00008  jr          $ra
    ctx->pc = 0x291830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291830u;
            // 0x291834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291838u;
}
