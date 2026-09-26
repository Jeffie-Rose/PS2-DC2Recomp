#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_FUNCP__FP12RS_STACKDATAi
// Address: 0x275740 - 0x275894
void ps2__EOH_SYNC_FUNCP__FP12RS_STACKDATAi_0x275740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_FUNCP__FP12RS_STACKDATAi_0x275740");
#endif

    switch (ctx->pc) {
        case 0x275768u: goto label_275768;
        case 0x275784u: goto label_275784;
        case 0x2757b0u: goto label_2757b0;
        case 0x2757bcu: goto label_2757bc;
        case 0x2757c8u: goto label_2757c8;
        case 0x2757e0u: goto label_2757e0;
        case 0x2757f0u: goto label_2757f0;
        case 0x2757fcu: goto label_2757fc;
        case 0x275810u: goto label_275810;
        case 0x275824u: goto label_275824;
        case 0x27583cu: goto label_27583c;
        case 0x27584cu: goto label_27584c;
        case 0x275870u: goto label_275870;
        default: break;
    }

    ctx->pc = 0x275740u;

    // 0x275740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x275740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x275744: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x275744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x275748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x275748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27574c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x275750: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x275750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x275758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27575c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27575cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x275760: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x275760u;
    SET_GPR_U32(ctx, 31, 0x275768u);
    ctx->pc = 0x275764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275760u;
            // 0x275764: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275768u; }
        if (ctx->pc != 0x275768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275768u; }
        if (ctx->pc != 0x275768u) { return; }
    }
    ctx->pc = 0x275768u;
label_275768:
    // 0x275768: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x275768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27576c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27576Cu;
    {
        const bool branch_taken_0x27576c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x275770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27576Cu;
            // 0x275770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27576c) {
            ctx->pc = 0x27577Cu;
            goto label_27577c;
        }
    }
    ctx->pc = 0x275774u;
    // 0x275774: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x275774u;
    {
        const bool branch_taken_0x275774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275774u;
            // 0x275778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275774) {
            ctx->pc = 0x275878u;
            goto label_275878;
        }
    }
    ctx->pc = 0x27577Cu;
label_27577c:
    // 0x27577c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27577Cu;
    SET_GPR_U32(ctx, 31, 0x275784u);
    ctx->pc = 0x275780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27577Cu;
            // 0x275780: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275784u; }
        if (ctx->pc != 0x275784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275784u; }
        if (ctx->pc != 0x275784u) { return; }
    }
    ctx->pc = 0x275784u;
label_275784:
    // 0x275784: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x275784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x275788: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x275788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27578c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275790: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x275790u;
    {
        const bool branch_taken_0x275790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x275794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275790u;
            // 0x275794: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275790) {
            ctx->pc = 0x2757E8u;
            goto label_2757e8;
        }
    }
    ctx->pc = 0x275798u;
    // 0x275798: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275798u;
    {
        const bool branch_taken_0x275798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27579Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275798u;
            // 0x27579c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275798) {
            ctx->pc = 0x2757A8u;
            goto label_2757a8;
        }
    }
    ctx->pc = 0x2757A0u;
    // 0x2757a0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2757A0u;
    {
        const bool branch_taken_0x2757a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2757a0) {
            ctx->pc = 0x275850u;
            goto label_275850;
        }
    }
    ctx->pc = 0x2757A8u;
label_2757a8:
    // 0x2757a8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2757A8u;
    SET_GPR_U32(ctx, 31, 0x2757B0u);
    ctx->pc = 0x2757ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757A8u;
            // 0x2757ac: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757B0u; }
        if (ctx->pc != 0x2757B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757B0u; }
        if (ctx->pc != 0x2757B0u) { return; }
    }
    ctx->pc = 0x2757B0u;
label_2757b0:
    // 0x2757b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2757b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757b4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2757B4u;
    SET_GPR_U32(ctx, 31, 0x2757BCu);
    ctx->pc = 0x2757B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757B4u;
            // 0x2757b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757BCu; }
        if (ctx->pc != 0x2757BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757BCu; }
        if (ctx->pc != 0x2757BCu) { return; }
    }
    ctx->pc = 0x2757BCu;
label_2757bc:
    // 0x2757bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2757bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757c0: 0xc057530  jal         func_15D4C0
    ctx->pc = 0x2757C0u;
    SET_GPR_U32(ctx, 31, 0x2757C8u);
    ctx->pc = 0x2757C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757C0u;
            // 0x2757c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757C8u; }
        if (ctx->pc != 0x2757C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757C8u; }
        if (ctx->pc != 0x2757C8u) { return; }
    }
    ctx->pc = 0x2757C8u;
label_2757c8:
    // 0x2757c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2757C8u;
    {
        const bool branch_taken_0x2757c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2757CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2757C8u;
            // 0x2757cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757c8) {
            ctx->pc = 0x2757D8u;
            goto label_2757d8;
        }
    }
    ctx->pc = 0x2757D0u;
    // 0x2757d0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2757D0u;
    {
        const bool branch_taken_0x2757d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2757D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2757D0u;
            // 0x2757d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757d0) {
            ctx->pc = 0x275878u;
            goto label_275878;
        }
    }
    ctx->pc = 0x2757D8u;
label_2757d8:
    // 0x2757d8: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x2757D8u;
    SET_GPR_U32(ctx, 31, 0x2757E0u);
    ctx->pc = 0x2757DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757D8u;
            // 0x2757dc: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757E0u; }
        if (ctx->pc != 0x2757E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757E0u; }
        if (ctx->pc != 0x2757E0u) { return; }
    }
    ctx->pc = 0x2757E0u;
label_2757e0:
    // 0x2757e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2757E0u;
    {
        const bool branch_taken_0x2757e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2757E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2757E0u;
            // 0x2757e4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757e0) {
            ctx->pc = 0x275850u;
            goto label_275850;
        }
    }
    ctx->pc = 0x2757E8u;
label_2757e8:
    // 0x2757e8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2757E8u;
    SET_GPR_U32(ctx, 31, 0x2757F0u);
    ctx->pc = 0x2757ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757E8u;
            // 0x2757ec: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757F0u; }
        if (ctx->pc != 0x2757F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757F0u; }
        if (ctx->pc != 0x2757F0u) { return; }
    }
    ctx->pc = 0x2757F0u;
label_2757f0:
    // 0x2757f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2757f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757f4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x2757F4u;
    SET_GPR_U32(ctx, 31, 0x2757FCu);
    ctx->pc = 0x2757F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757F4u;
            // 0x2757f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757FCu; }
        if (ctx->pc != 0x2757FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757FCu; }
        if (ctx->pc != 0x2757FCu) { return; }
    }
    ctx->pc = 0x2757FCu;
label_2757fc:
    // 0x2757fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2757fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x275800: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x275800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275808: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x275808u;
    SET_GPR_U32(ctx, 31, 0x275810u);
    ctx->pc = 0x27580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275808u;
            // 0x27580c: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275810u; }
        if (ctx->pc != 0x275810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275810u; }
        if (ctx->pc != 0x275810u) { return; }
    }
    ctx->pc = 0x275810u;
label_275810:
    // 0x275810: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x275810u;
    {
        const bool branch_taken_0x275810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275810u;
            // 0x275814: 0x26440cb0  addiu       $a0, $s2, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275810) {
            ctx->pc = 0x275844u;
            goto label_275844;
        }
    }
    ctx->pc = 0x275818u;
    // 0x275818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27581c: 0xc057508  jal         func_15D420
    ctx->pc = 0x27581Cu;
    SET_GPR_U32(ctx, 31, 0x275824u);
    ctx->pc = 0x275820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27581Cu;
            // 0x275820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275824u; }
        if (ctx->pc != 0x275824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275824u; }
        if (ctx->pc != 0x275824u) { return; }
    }
    ctx->pc = 0x275824u;
label_275824:
    // 0x275824: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275824u;
    {
        const bool branch_taken_0x275824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275824u;
            // 0x275828: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275824) {
            ctx->pc = 0x275834u;
            goto label_275834;
        }
    }
    ctx->pc = 0x27582Cu;
    // 0x27582c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27582Cu;
    {
        const bool branch_taken_0x27582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27582Cu;
            // 0x275830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27582c) {
            ctx->pc = 0x275878u;
            goto label_275878;
        }
    }
    ctx->pc = 0x275834u;
label_275834:
    // 0x275834: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x275834u;
    SET_GPR_U32(ctx, 31, 0x27583Cu);
    ctx->pc = 0x275838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275834u;
            // 0x275838: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27583Cu; }
        if (ctx->pc != 0x27583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27583Cu; }
        if (ctx->pc != 0x27583Cu) { return; }
    }
    ctx->pc = 0x27583Cu;
label_27583c:
    // 0x27583c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27583Cu;
    {
        const bool branch_taken_0x27583c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27583Cu;
            // 0x275840: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27583c) {
            ctx->pc = 0x275850u;
            goto label_275850;
        }
    }
    ctx->pc = 0x275844u;
label_275844:
    // 0x275844: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x275844u;
    SET_GPR_U32(ctx, 31, 0x27584Cu);
    ctx->pc = 0x275848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275844u;
            // 0x275848: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27584Cu; }
        if (ctx->pc != 0x27584Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27584Cu; }
        if (ctx->pc != 0x27584Cu) { return; }
    }
    ctx->pc = 0x27584Cu;
label_27584c:
    // 0x27584c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27584cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275850:
    // 0x275850: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x275850u;
    {
        const bool branch_taken_0x275850 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x275854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275850u;
            // 0x275854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275850) {
            ctx->pc = 0x275878u;
            goto label_275878;
        }
    }
    ctx->pc = 0x275858u;
    // 0x275858: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x27585c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275860: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x275860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275864: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x275864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275868: 0xc0976d0  jal         func_25DB40
    ctx->pc = 0x275868u;
    SET_GPR_U32(ctx, 31, 0x275870u);
    ctx->pc = 0x27586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275868u;
            // 0x27586c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DB40u;
    if (runtime->hasFunction(0x25DB40u)) {
        auto targetFn = runtime->lookupFunction(0x25DB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275870u; }
        if (ctx->pc != 0x275870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP10CFuncPoint_0x25db40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275870u; }
        if (ctx->pc != 0x275870u) { return; }
    }
    ctx->pc = 0x275870u;
label_275870:
    // 0x275870: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x275870u;
    {
        const bool branch_taken_0x275870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275870) {
            ctx->pc = 0x275878u;
            goto label_275878;
        }
    }
    ctx->pc = 0x275878u;
label_275878:
    // 0x275878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x275878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27587c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27587cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x275880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x275884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27588c: 0x3e00008  jr          $ra
    ctx->pc = 0x27588Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27588Cu;
            // 0x275890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275894u;
}
