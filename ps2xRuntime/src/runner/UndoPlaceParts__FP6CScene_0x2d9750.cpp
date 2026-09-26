#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UndoPlaceParts__FP6CScene
// Address: 0x2d9750 - 0x2d9868
void UndoPlaceParts__FP6CScene_0x2d9750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UndoPlaceParts__FP6CScene_0x2d9750");
#endif

    switch (ctx->pc) {
        case 0x2d9770u: goto label_2d9770;
        case 0x2d97a0u: goto label_2d97a0;
        case 0x2d97bcu: goto label_2d97bc;
        case 0x2d97d0u: goto label_2d97d0;
        case 0x2d97f0u: goto label_2d97f0;
        case 0x2d97f8u: goto label_2d97f8;
        case 0x2d9804u: goto label_2d9804;
        case 0x2d981cu: goto label_2d981c;
        case 0x2d9824u: goto label_2d9824;
        case 0x2d9840u: goto label_2d9840;
        default: break;
    }

    ctx->pc = 0x2d9750u;

    // 0x2d9750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d9754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d9758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d975c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9760: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9764: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x2d9764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2d9768: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2D9768u;
    SET_GPR_U32(ctx, 31, 0x2D9770u);
    ctx->pc = 0x2D976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9768u;
            // 0x2d976c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9770u; }
        if (ctx->pc != 0x2D9770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9770u; }
        if (ctx->pc != 0x2D9770u) { return; }
    }
    ctx->pc = 0x2D9770u;
label_2d9770:
    // 0x2d9770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9774: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9774u;
    {
        const bool branch_taken_0x2d9774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9774u;
            // 0x2d9778: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9774) {
            ctx->pc = 0x2D9780u;
            goto label_2d9780;
        }
    }
    ctx->pc = 0x2D977Cu;
    // 0x2d977c: 0xae230f64  sw          $v1, 0xF64($s1)
    ctx->pc = 0x2d977cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3940), GPR_U32(ctx, 3));
label_2d9780:
    // 0x2d9780: 0x8f849e0c  lw          $a0, -0x61F4($gp)
    ctx->pc = 0x2d9780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942220)));
    // 0x2d9784: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d9784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9788: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9788u;
    {
        const bool branch_taken_0x2d9788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9788u;
            // 0x2d978c: 0xaf809e2c  sw          $zero, -0x61D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9788) {
            ctx->pc = 0x2D9798u;
            goto label_2d9798;
        }
    }
    ctx->pc = 0x2D9790u;
    // 0x2d9790: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2D9790u;
    {
        const bool branch_taken_0x2d9790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d9790) {
            ctx->pc = 0x2D9850u;
            goto label_2d9850;
        }
    }
    ctx->pc = 0x2D9798u;
label_2d9798:
    // 0x2d9798: 0xc0b65c4  jal         func_2D9710
    ctx->pc = 0x2D9798u;
    SET_GPR_U32(ctx, 31, 0x2D97A0u);
    ctx->pc = 0x2D9710u;
    if (runtime->hasFunction(0x2D9710u)) {
        auto targetFn = runtime->lookupFunction(0x2D9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97A0u; }
        if (ctx->pc != 0x2D97A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUndoData__Fv_0x2d9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97A0u; }
        if (ctx->pc != 0x2D97A0u) { return; }
    }
    ctx->pc = 0x2D97A0u;
label_2d97a0:
    // 0x2d97a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d97a4: 0x460002a  bltz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D97A4u;
    {
        const bool branch_taken_0x2d97a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2D97A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97A4u;
            // 0x2d97a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97a4) {
            ctx->pc = 0x2D9850u;
            goto label_2d9850;
        }
    }
    ctx->pc = 0x2D97ACu;
    // 0x2d97ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d97acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d97b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d97b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97b4: 0xc0b6784  jal         func_2D9E10
    ctx->pc = 0x2D97B4u;
    SET_GPR_U32(ctx, 31, 0x2D97BCu);
    ctx->pc = 0x2D97B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97B4u;
            // 0x2d97b8: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E10u;
    if (runtime->hasFunction(0x2D9E10u)) {
        auto targetFn = runtime->lookupFunction(0x2D9E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97BCu; }
        if (ctx->pc != 0x2D97BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveEditParts__FP6CSceneiPf_0x2d9e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97BCu; }
        if (ctx->pc != 0x2D97BCu) { return; }
    }
    ctx->pc = 0x2D97BCu;
label_2d97bc:
    // 0x2d97bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d97c0: 0xaf829e24  sw          $v0, -0x61DC($gp)
    ctx->pc = 0x2d97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
    // 0x2d97c4: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2d97c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2d97c8: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x2D97C8u;
    SET_GPR_U32(ctx, 31, 0x2D97D0u);
    ctx->pc = 0x2D97CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97C8u;
            // 0x2d97cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97D0u; }
        if (ctx->pc != 0x2D97D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97D0u; }
        if (ctx->pc != 0x2D97D0u) { return; }
    }
    ctx->pc = 0x2D97D0u;
label_2d97d0:
    // 0x2d97d0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D97D0u;
    {
        const bool branch_taken_0x2d97d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D97D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97D0u;
            // 0x2d97d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97d0) {
            ctx->pc = 0x2D9848u;
            goto label_2d9848;
        }
    }
    ctx->pc = 0x2D97D8u;
    // 0x2d97d8: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x2d97d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d97dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d97dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97e0: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2d97e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2d97e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d97e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d97e8: 0xc0bb9dc  jal         func_2EE770
    ctx->pc = 0x2D97E8u;
    SET_GPR_U32(ctx, 31, 0x2D97F0u);
    ctx->pc = 0x2D97ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97E8u;
            // 0x2d97ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97F0u; }
        if (ctx->pc != 0x2D97F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97F0u; }
        if (ctx->pc != 0x2D97F0u) { return; }
    }
    ctx->pc = 0x2D97F0u;
label_2d97f0:
    // 0x2d97f0: 0xc064220  jal         func_190880
    ctx->pc = 0x2D97F0u;
    SET_GPR_U32(ctx, 31, 0x2D97F8u);
    ctx->pc = 0x2D97F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97F0u;
            // 0x2d97f4: 0x2429023  subu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97F8u; }
        if (ctx->pc != 0x2D97F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D97F8u; }
        if (ctx->pc != 0x2D97F8u) { return; }
    }
    ctx->pc = 0x2D97F8u;
label_2d97f8:
    // 0x2d97f8: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2d97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2d97fc: 0xc0bd978  jal         func_2F65E0
    ctx->pc = 0x2D97FCu;
    SET_GPR_U32(ctx, 31, 0x2D9804u);
    ctx->pc = 0x2D9800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D97FCu;
            // 0x2d9800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F65E0u;
    if (runtime->hasFunction(0x2F65E0u)) {
        auto targetFn = runtime->lookupFunction(0x2F65E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9804u; }
        if (ctx->pc != 0x2D9804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBuildPartsNum__9CSaveDataFi_0x2f65e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9804u; }
        if (ctx->pc != 0x2D9804u) { return; }
    }
    ctx->pc = 0x2D9804u;
label_2d9804:
    // 0x2d9804: 0x52082a  slt         $at, $v0, $s2
    ctx->pc = 0x2d9804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2d9808: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9808u;
    {
        const bool branch_taken_0x2d9808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9808) {
            ctx->pc = 0x2D9814u;
            goto label_2d9814;
        }
    }
    ctx->pc = 0x2D9810u;
    // 0x2d9810: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d9810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9814:
    // 0x2d9814: 0xc0beeb0  jal         func_2FBAC0
    ctx->pc = 0x2D9814u;
    SET_GPR_U32(ctx, 31, 0x2D981Cu);
    ctx->pc = 0x2D9818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9814u;
            // 0x2d9818: 0xaf929e28  sw          $s2, -0x61D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FBAC0u;
    if (runtime->hasFunction(0x2FBAC0u)) {
        auto targetFn = runtime->lookupFunction(0x2FBAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D981Cu; }
        if (ctx->pc != 0x2D981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceAnime__Fv_0x2fbac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D981Cu; }
        if (ctx->pc != 0x2D981Cu) { return; }
    }
    ctx->pc = 0x2D981Cu;
label_2d981c:
    // 0x2d981c: 0xc0beaf8  jal         func_2FABE0
    ctx->pc = 0x2D981Cu;
    SET_GPR_U32(ctx, 31, 0x2D9824u);
    ctx->pc = 0x2FABE0u;
    if (runtime->hasFunction(0x2FABE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9824u; }
        if (ctx->pc != 0x2D9824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditInitPlaceEffect__Fv_0x2fabe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9824u; }
        if (ctx->pc != 0x2D9824u) { return; }
    }
    ctx->pc = 0x2D9824u;
label_2d9824:
    // 0x2d9824: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x2d9824u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d9828: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2d9828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2d982c: 0x244288f0  addiu       $v0, $v0, -0x7710
    ctx->pc = 0x2d982cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936816));
    // 0x2d9830: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d9830u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d9834: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2d9834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d9838: 0xc06c3d4  jal         func_1B0F50
    ctx->pc = 0x2D9838u;
    SET_GPR_U32(ctx, 31, 0x2D9840u);
    ctx->pc = 0x2D983Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9838u;
            // 0x2d983c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9840u; }
        if (ctx->pc != 0x2D9840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9840u; }
        if (ctx->pc != 0x2D9840u) { return; }
    }
    ctx->pc = 0x2D9840u;
label_2d9840:
    // 0x2d9840: 0xaf829e64  sw          $v0, -0x619C($gp)
    ctx->pc = 0x2d9840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942308), GPR_U32(ctx, 2));
    // 0x2d9844: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d9844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d9848:
    // 0x2d9848: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d9848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2d984c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2d984cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2d9850:
    // 0x2d9850: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9854: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9854u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d985c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d985cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9860: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9860u;
            // 0x2d9864: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9868u;
}
