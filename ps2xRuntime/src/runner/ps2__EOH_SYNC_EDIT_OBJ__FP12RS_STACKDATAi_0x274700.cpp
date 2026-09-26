#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_EDIT_OBJ__FP12RS_STACKDATAi
// Address: 0x274700 - 0x2748e4
void ps2__EOH_SYNC_EDIT_OBJ__FP12RS_STACKDATAi_0x274700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_EDIT_OBJ__FP12RS_STACKDATAi_0x274700");
#endif

    switch (ctx->pc) {
        case 0x27474cu: goto label_27474c;
        case 0x27475cu: goto label_27475c;
        case 0x274788u: goto label_274788;
        case 0x274794u: goto label_274794;
        case 0x2747a4u: goto label_2747a4;
        case 0x2747b0u: goto label_2747b0;
        case 0x274804u: goto label_274804;
        case 0x274818u: goto label_274818;
        case 0x274824u: goto label_274824;
        case 0x274858u: goto label_274858;
        case 0x274870u: goto label_274870;
        case 0x27488cu: goto label_27488c;
        case 0x2748b0u: goto label_2748b0;
        default: break;
    }

    ctx->pc = 0x274700u;

    // 0x274700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x274700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x274704: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x274704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x274708: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27470c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x274710: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274714: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x274714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x274718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27471c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274720: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x274720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x274724: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274724u;
    {
        const bool branch_taken_0x274724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274724u;
            // 0x274728: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274724) {
            ctx->pc = 0x274738u;
            goto label_274738;
        }
    }
    ctx->pc = 0x27472Cu;
    // 0x27472c: 0x2a410005  slti        $at, $s2, 0x5
    ctx->pc = 0x27472cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x274730: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x274730u;
    {
        const bool branch_taken_0x274730 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x274730) {
            ctx->pc = 0x274740u;
            goto label_274740;
        }
    }
    ctx->pc = 0x274738u;
label_274738:
    // 0x274738: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x274738u;
    {
        const bool branch_taken_0x274738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27473Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274738u;
            // 0x27473c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274738) {
            ctx->pc = 0x2748C4u;
            goto label_2748c4;
        }
    }
    ctx->pc = 0x274740u;
label_274740:
    // 0x274740: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x274740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x274744: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x274744u;
    SET_GPR_U32(ctx, 31, 0x27474Cu);
    ctx->pc = 0x274748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274744u;
            // 0x274748: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27474Cu; }
        if (ctx->pc != 0x27474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27474Cu; }
        if (ctx->pc != 0x27474Cu) { return; }
    }
    ctx->pc = 0x27474Cu;
label_27474c:
    // 0x27474c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274750: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x274750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274754: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274754u;
    SET_GPR_U32(ctx, 31, 0x27475Cu);
    ctx->pc = 0x274758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274754u;
            // 0x274758: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27475Cu; }
        if (ctx->pc != 0x27475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27475Cu; }
        if (ctx->pc != 0x27475Cu) { return; }
    }
    ctx->pc = 0x27475Cu;
label_27475c:
    // 0x27475c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x274760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274768: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x274768u;
    {
        const bool branch_taken_0x274768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274768u;
            // 0x27476c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274768) {
            ctx->pc = 0x27479Cu;
            goto label_27479c;
        }
    }
    ctx->pc = 0x274770u;
    // 0x274770: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274770u;
    {
        const bool branch_taken_0x274770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274770u;
            // 0x274774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274770) {
            ctx->pc = 0x274780u;
            goto label_274780;
        }
    }
    ctx->pc = 0x274778u;
    // 0x274778: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x274778u;
    {
        const bool branch_taken_0x274778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274778) {
            ctx->pc = 0x2747B4u;
            goto label_2747b4;
        }
    }
    ctx->pc = 0x274780u;
label_274780:
    // 0x274780: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274780u;
    SET_GPR_U32(ctx, 31, 0x274788u);
    ctx->pc = 0x274784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274780u;
            // 0x274784: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274788u; }
        if (ctx->pc != 0x274788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274788u; }
        if (ctx->pc != 0x274788u) { return; }
    }
    ctx->pc = 0x274788u;
label_274788:
    // 0x274788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x274788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27478c: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x27478Cu;
    SET_GPR_U32(ctx, 31, 0x274794u);
    ctx->pc = 0x274790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27478Cu;
            // 0x274790: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274794u; }
        if (ctx->pc != 0x274794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274794u; }
        if (ctx->pc != 0x274794u) { return; }
    }
    ctx->pc = 0x274794u;
label_274794:
    // 0x274794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274794u;
    {
        const bool branch_taken_0x274794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274794u;
            // 0x274798: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274794) {
            ctx->pc = 0x2747B4u;
            goto label_2747b4;
        }
    }
    ctx->pc = 0x27479Cu;
label_27479c:
    // 0x27479c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27479Cu;
    SET_GPR_U32(ctx, 31, 0x2747A4u);
    ctx->pc = 0x2747A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27479Cu;
            // 0x2747a0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747A4u; }
        if (ctx->pc != 0x2747A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747A4u; }
        if (ctx->pc != 0x2747A4u) { return; }
    }
    ctx->pc = 0x2747A4u;
label_2747a4:
    // 0x2747a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2747a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747a8: 0xc06c328  jal         func_1B0CA0
    ctx->pc = 0x2747A8u;
    SET_GPR_U32(ctx, 31, 0x2747B0u);
    ctx->pc = 0x2747ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2747A8u;
            // 0x2747ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0CA0u;
    if (runtime->hasFunction(0x1B0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747B0u; }
        if (ctx->pc != 0x2747B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPc_0x1b0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747B0u; }
        if (ctx->pc != 0x2747B0u) { return; }
    }
    ctx->pc = 0x2747B0u;
label_2747b0:
    // 0x2747b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2747b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2747b4:
    // 0x2747b4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2747B4u;
    {
        const bool branch_taken_0x2747b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2747B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2747B4u;
            // 0x2747b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747b4) {
            ctx->pc = 0x2747C4u;
            goto label_2747c4;
        }
    }
    ctx->pc = 0x2747BCu;
    // 0x2747bc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2747BCu;
    {
        const bool branch_taken_0x2747bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2747BCu;
            // 0x2747c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747bc) {
            ctx->pc = 0x2748C4u;
            goto label_2748c4;
        }
    }
    ctx->pc = 0x2747C4u;
label_2747c4:
    // 0x2747c4: 0x12420011  beq         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2747C4u;
    {
        const bool branch_taken_0x2747c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2747C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2747C4u;
            // 0x2747c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747c4) {
            ctx->pc = 0x27480Cu;
            goto label_27480c;
        }
    }
    ctx->pc = 0x2747CCu;
    // 0x2747cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2747ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2747d0: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2747D0u;
    {
        const bool branch_taken_0x2747d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2747D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2747D0u;
            // 0x2747d4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747d0) {
            ctx->pc = 0x274810u;
            goto label_274810;
        }
    }
    ctx->pc = 0x2747D8u;
    // 0x2747d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2747d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2747dc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2747DCu;
    {
        const bool branch_taken_0x2747dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2747E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2747DCu;
            // 0x2747e0: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747dc) {
            ctx->pc = 0x2747ECu;
            goto label_2747ec;
        }
    }
    ctx->pc = 0x2747E4u;
    // 0x2747e4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2747E4u;
    {
        const bool branch_taken_0x2747e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2747E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2747E4u;
            // 0x2747e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2747e4) {
            ctx->pc = 0x2748B8u;
            goto label_2748b8;
        }
    }
    ctx->pc = 0x2747ECu;
label_2747ec:
    // 0x2747ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2747ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2747f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2747f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2747f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2747f8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2747f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2747fc: 0xc097690  jal         func_25DA40
    ctx->pc = 0x2747FCu;
    SET_GPR_U32(ctx, 31, 0x274804u);
    ctx->pc = 0x274800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2747FCu;
            // 0x274800: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA40u;
    if (runtime->hasFunction(0x25DA40u)) {
        auto targetFn = runtime->lookupFunction(0x25DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274804u; }
        if (ctx->pc != 0x274804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP7CObjecti_0x25da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274804u; }
        if (ctx->pc != 0x274804u) { return; }
    }
    ctx->pc = 0x274804u;
label_274804:
    // 0x274804: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x274804u;
    {
        const bool branch_taken_0x274804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274804u;
            // 0x274808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274804) {
            ctx->pc = 0x2748C4u;
            goto label_2748c4;
        }
    }
    ctx->pc = 0x27480Cu;
label_27480c:
    // 0x27480c: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x27480cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_274810:
    // 0x274810: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274810u;
    SET_GPR_U32(ctx, 31, 0x274818u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274818u; }
        if (ctx->pc != 0x274818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274818u; }
        if (ctx->pc != 0x274818u) { return; }
    }
    ctx->pc = 0x274818u;
label_274818:
    // 0x274818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x274818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27481c: 0xc059924  jal         func_166490
    ctx->pc = 0x27481Cu;
    SET_GPR_U32(ctx, 31, 0x274824u);
    ctx->pc = 0x274820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27481Cu;
            // 0x274820: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274824u; }
        if (ctx->pc != 0x274824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274824u; }
        if (ctx->pc != 0x274824u) { return; }
    }
    ctx->pc = 0x274824u;
label_274824:
    // 0x274824: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274824u;
    {
        const bool branch_taken_0x274824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274824u;
            // 0x274828: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274824) {
            ctx->pc = 0x274834u;
            goto label_274834;
        }
    }
    ctx->pc = 0x27482Cu;
    // 0x27482c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x27482Cu;
    {
        const bool branch_taken_0x27482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27482Cu;
            // 0x274830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27482c) {
            ctx->pc = 0x2748C4u;
            goto label_2748c4;
        }
    }
    ctx->pc = 0x274834u;
label_274834:
    // 0x274834: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274838: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274838u;
    {
        const bool branch_taken_0x274838 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x27483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274838u;
            // 0x27483c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274838) {
            ctx->pc = 0x274860u;
            goto label_274860;
        }
    }
    ctx->pc = 0x274840u;
    // 0x274840: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274848: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x274848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x27484c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274850: 0xc097690  jal         func_25DA40
    ctx->pc = 0x274850u;
    SET_GPR_U32(ctx, 31, 0x274858u);
    ctx->pc = 0x274854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274850u;
            // 0x274854: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA40u;
    if (runtime->hasFunction(0x25DA40u)) {
        auto targetFn = runtime->lookupFunction(0x25DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274858u; }
        if (ctx->pc != 0x274858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP7CObjecti_0x25da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274858u; }
        if (ctx->pc != 0x274858u) { return; }
    }
    ctx->pc = 0x274858u;
label_274858:
    // 0x274858: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x274858u;
    {
        const bool branch_taken_0x274858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274858) {
            ctx->pc = 0x2748C0u;
            goto label_2748c0;
        }
    }
    ctx->pc = 0x274860u;
label_274860:
    // 0x274860: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x274860u;
    {
        const bool branch_taken_0x274860 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x274864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274860u;
            // 0x274864: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274860) {
            ctx->pc = 0x2748C0u;
            goto label_2748c0;
        }
    }
    ctx->pc = 0x274868u;
    // 0x274868: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274868u;
    SET_GPR_U32(ctx, 31, 0x274870u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274870u; }
        if (ctx->pc != 0x274870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274870u; }
        if (ctx->pc != 0x274870u) { return; }
    }
    ctx->pc = 0x274870u;
label_274870:
    // 0x274870: 0x8ce40070  lw          $a0, 0x70($a3)
    ctx->pc = 0x274870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x274874: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274874u;
    {
        const bool branch_taken_0x274874 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x274878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274874u;
            // 0x274878: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274874) {
            ctx->pc = 0x274884u;
            goto label_274884;
        }
    }
    ctx->pc = 0x27487Cu;
    // 0x27487c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27487Cu;
    {
        const bool branch_taken_0x27487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27487Cu;
            // 0x274880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27487c) {
            ctx->pc = 0x2748C4u;
            goto label_2748c4;
        }
    }
    ctx->pc = 0x274884u;
label_274884:
    // 0x274884: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x274884u;
    SET_GPR_U32(ctx, 31, 0x27488Cu);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27488Cu; }
        if (ctx->pc != 0x27488Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27488Cu; }
        if (ctx->pc != 0x27488Cu) { return; }
    }
    ctx->pc = 0x27488Cu;
label_27488c:
    // 0x27488c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27488Cu;
    {
        const bool branch_taken_0x27488c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27488Cu;
            // 0x274890: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27488c) {
            ctx->pc = 0x27489Cu;
            goto label_27489c;
        }
    }
    ctx->pc = 0x274894u;
    // 0x274894: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274894u;
    {
        const bool branch_taken_0x274894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274894u;
            // 0x274898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274894) {
            ctx->pc = 0x2748C4u;
            goto label_2748c4;
        }
    }
    ctx->pc = 0x27489Cu;
label_27489c:
    // 0x27489c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27489cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2748a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748a4: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2748a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2748a8: 0xc0976c0  jal         func_25DB00
    ctx->pc = 0x2748A8u;
    SET_GPR_U32(ctx, 31, 0x2748B0u);
    ctx->pc = 0x2748ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2748A8u;
            // 0x2748ac: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DB00u;
    if (runtime->hasFunction(0x25DB00u)) {
        auto targetFn = runtime->lookupFunction(0x25DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2748B0u; }
        if (ctx->pc != 0x2748B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP8mgCFrame_0x25db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2748B0u; }
        if (ctx->pc != 0x2748B0u) { return; }
    }
    ctx->pc = 0x2748B0u;
label_2748b0:
    // 0x2748b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2748B0u;
    {
        const bool branch_taken_0x2748b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2748b0) {
            ctx->pc = 0x2748C0u;
            goto label_2748c0;
        }
    }
    ctx->pc = 0x2748B8u;
label_2748b8:
    // 0x2748b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2748B8u;
    {
        const bool branch_taken_0x2748b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2748BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2748B8u;
            // 0x2748bc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748b8) {
            ctx->pc = 0x2748C8u;
            goto label_2748c8;
        }
    }
    ctx->pc = 0x2748C0u;
label_2748c0:
    // 0x2748c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2748c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2748c4:
    // 0x2748c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2748c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2748c8:
    // 0x2748c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2748c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2748cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2748ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2748d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2748d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2748d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2748d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2748d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2748d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2748dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2748DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2748E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2748DCu;
            // 0x2748e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2748E4u;
}
