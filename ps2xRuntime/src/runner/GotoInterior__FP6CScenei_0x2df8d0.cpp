#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GotoInterior__FP6CScenei
// Address: 0x2df8d0 - 0x2dfa24
void GotoInterior__FP6CScenei_0x2df8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GotoInterior__FP6CScenei_0x2df8d0");
#endif

    switch (ctx->pc) {
        case 0x2df8f8u: goto label_2df8f8;
        case 0x2df90cu: goto label_2df90c;
        case 0x2df91cu: goto label_2df91c;
        case 0x2df924u: goto label_2df924;
        case 0x2df934u: goto label_2df934;
        case 0x2df950u: goto label_2df950;
        case 0x2df964u: goto label_2df964;
        case 0x2df978u: goto label_2df978;
        case 0x2df984u: goto label_2df984;
        case 0x2df99cu: goto label_2df99c;
        case 0x2df9acu: goto label_2df9ac;
        case 0x2df9b8u: goto label_2df9b8;
        case 0x2df9c4u: goto label_2df9c4;
        case 0x2df9e0u: goto label_2df9e0;
        case 0x2df9fcu: goto label_2df9fc;
        default: break;
    }

    ctx->pc = 0x2df8d0u;

    // 0x2df8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2df8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2df8d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2df8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2df8d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2df8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2df8dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2df8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2df8e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2df8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8f0: 0xc0b49e8  jal         func_2D27A0
    ctx->pc = 0x2DF8F0u;
    SET_GPR_U32(ctx, 31, 0x2DF8F8u);
    ctx->pc = 0x2DF8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF8F0u;
            // 0x2df8f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8F8u; }
        if (ctx->pc != 0x2DF8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF8F8u; }
        if (ctx->pc != 0x2DF8F8u) { return; }
    }
    ctx->pc = 0x2DF8F8u;
label_2df8f8:
    // 0x2df8f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2df8f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df8fc: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x2DF8FCu;
    {
        const bool branch_taken_0x2df8fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df8fc) {
            ctx->pc = 0x2DFA0Cu;
            goto label_2dfa0c;
        }
    }
    ctx->pc = 0x2DF904u;
    // 0x2df904: 0xc0b7d7c  jal         func_2DF5F0
    ctx->pc = 0x2DF904u;
    SET_GPR_U32(ctx, 31, 0x2DF90Cu);
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF90Cu; }
        if (ctx->pc != 0x2DF90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF90Cu; }
        if (ctx->pc != 0x2DF90Cu) { return; }
    }
    ctx->pc = 0x2DF90Cu;
label_2df90c:
    // 0x2df90c: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2DF90Cu;
    {
        const bool branch_taken_0x2df90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df90c) {
            ctx->pc = 0x2DFA0Cu;
            goto label_2dfa0c;
        }
    }
    ctx->pc = 0x2DF914u;
    // 0x2df914: 0xc050bd0  jal         func_142F40
    ctx->pc = 0x2DF914u;
    SET_GPR_U32(ctx, 31, 0x2DF91Cu);
    ctx->pc = 0x142F40u;
    if (runtime->hasFunction(0x142F40u)) {
        auto targetFn = runtime->lookupFunction(0x142F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF91Cu; }
        if (ctx->pc != 0x2DF91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgWaitFrame__Fv_0x142f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF91Cu; }
        if (ctx->pc != 0x2DF91Cu) { return; }
    }
    ctx->pc = 0x2DF91Cu;
label_2df91c:
    // 0x2df91c: 0xc0b7d80  jal         func_2DF600
    ctx->pc = 0x2DF91Cu;
    SET_GPR_U32(ctx, 31, 0x2DF924u);
    ctx->pc = 0x2DF920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF91Cu;
            // 0x2df920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF600u;
    if (runtime->hasFunction(0x2DF600u)) {
        auto targetFn = runtime->lookupFunction(0x2DF600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF924u; }
        if (ctx->pc != 0x2DF924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveBeforeInterior__FP6CScene_0x2df600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF924u; }
        if (ctx->pc != 0x2DF924u) { return; }
    }
    ctx->pc = 0x2DF924u;
label_2df924:
    // 0x2df924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2df928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df92c: 0xc0b7c6c  jal         func_2DF1B0
    ctx->pc = 0x2DF92Cu;
    SET_GPR_U32(ctx, 31, 0x2DF934u);
    ctx->pc = 0x2DF930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF92Cu;
            // 0x2df930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1B0u;
    if (runtime->hasFunction(0x2DF1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF934u; }
        if (ctx->pc != 0x2DF934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubMap__FP6CSceneii_0x2df1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF934u; }
        if (ctx->pc != 0x2DF934u) { return; }
    }
    ctx->pc = 0x2DF934u;
label_2df934:
    // 0x2df934: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DF934u;
    {
        const bool branch_taken_0x2df934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF934u;
            // 0x2df938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df934) {
            ctx->pc = 0x2DF97Cu;
            goto label_2df97c;
        }
    }
    ctx->pc = 0x2DF93Cu;
    // 0x2df93c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df944: 0x8c268d70  lw          $a2, -0x7290($at)
    ctx->pc = 0x2df944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2df948: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2DF948u;
    SET_GPR_U32(ctx, 31, 0x2DF950u);
    ctx->pc = 0x2DF94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF948u;
            // 0x2df94c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF950u; }
        if (ctx->pc != 0x2DF950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF950u; }
        if (ctx->pc != 0x2DF950u) { return; }
    }
    ctx->pc = 0x2DF950u;
label_2df950:
    // 0x2df950: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df958: 0x8c268d50  lw          $a2, -0x72B0($at)
    ctx->pc = 0x2df958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
    // 0x2df95c: 0xc0a11c0  jal         func_284700
    ctx->pc = 0x2DF95Cu;
    SET_GPR_U32(ctx, 31, 0x2DF964u);
    ctx->pc = 0x2DF960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF95Cu;
            // 0x2df960: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF964u; }
        if (ctx->pc != 0x2DF964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF964u; }
        if (ctx->pc != 0x2DF964u) { return; }
    }
    ctx->pc = 0x2DF964u;
label_2df964:
    // 0x2df964: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df96c: 0x8c228d70  lw          $v0, -0x7290($at)
    ctx->pc = 0x2df96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
    // 0x2df970: 0xc0b7dbc  jal         func_2DF6F0
    ctx->pc = 0x2DF970u;
    SET_GPR_U32(ctx, 31, 0x2DF978u);
    ctx->pc = 0x2DF974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF970u;
            // 0x2df974: 0xae022e5c  sw          $v0, 0x2E5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF6F0u;
    if (runtime->hasFunction(0x2DF6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF978u; }
        if (ctx->pc != 0x2DF978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInteriorDoorPos__FP6CScene_0x2df6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF978u; }
        if (ctx->pc != 0x2DF978u) { return; }
    }
    ctx->pc = 0x2DF978u;
label_2df978:
    // 0x2df978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df97c:
    // 0x2df97c: 0xc0b49b8  jal         func_2D26E0
    ctx->pc = 0x2DF97Cu;
    SET_GPR_U32(ctx, 31, 0x2DF984u);
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF984u; }
        if (ctx->pc != 0x2DF984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF984u; }
        if (ctx->pc != 0x2DF984u) { return; }
    }
    ctx->pc = 0x2DF984u;
label_2df984:
    // 0x2df984: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2df984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df988: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF988u;
    {
        const bool branch_taken_0x2df988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DF98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF988u;
            // 0x2df98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df988) {
            ctx->pc = 0x2DF9A4u;
            goto label_2df9a4;
        }
    }
    ctx->pc = 0x2DF990u;
    // 0x2df990: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2df990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2df994: 0xc0b7cdc  jal         func_2DF370
    ctx->pc = 0x2DF994u;
    SET_GPR_U32(ctx, 31, 0x2DF99Cu);
    ctx->pc = 0x2DF998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF994u;
            // 0x2df998: 0x24840f78  addiu       $a0, $a0, 0xF78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF370u;
    if (runtime->hasFunction(0x2DF370u)) {
        auto targetFn = runtime->lookupFunction(0x2DF370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF99Cu; }
        if (ctx->pc != 0x2DF99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapScript__FPc_0x2df370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF99Cu; }
        if (ctx->pc != 0x2DF99Cu) { return; }
    }
    ctx->pc = 0x2DF99Cu;
label_2df99c:
    // 0x2df99c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DF99Cu;
    {
        const bool branch_taken_0x2df99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF99Cu;
            // 0x2df9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df99c) {
            ctx->pc = 0x2DF9B0u;
            goto label_2df9b0;
        }
    }
    ctx->pc = 0x2DF9A4u;
label_2df9a4:
    // 0x2df9a4: 0xc0b7cdc  jal         func_2DF370
    ctx->pc = 0x2DF9A4u;
    SET_GPR_U32(ctx, 31, 0x2DF9ACu);
    ctx->pc = 0x2DF370u;
    if (runtime->hasFunction(0x2DF370u)) {
        auto targetFn = runtime->lookupFunction(0x2DF370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9ACu; }
        if (ctx->pc != 0x2DF9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapScript__FPc_0x2df370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9ACu; }
        if (ctx->pc != 0x2DF9ACu) { return; }
    }
    ctx->pc = 0x2DF9ACu;
label_2df9ac:
    // 0x2df9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df9b0:
    // 0x2df9b0: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x2DF9B0u;
    SET_GPR_U32(ctx, 31, 0x2DF9B8u);
    ctx->pc = 0x2DF9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9B0u;
            // 0x2df9b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9B8u; }
        if (ctx->pc != 0x2DF9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9B8u; }
        if (ctx->pc != 0x2DF9B8u) { return; }
    }
    ctx->pc = 0x2DF9B8u;
label_2df9b8:
    // 0x2df9b8: 0x8f859eac  lw          $a1, -0x6154($gp)
    ctx->pc = 0x2df9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942380)));
    // 0x2df9bc: 0xc0a12d8  jal         func_284B60
    ctx->pc = 0x2DF9BCu;
    SET_GPR_U32(ctx, 31, 0x2DF9C4u);
    ctx->pc = 0x2DF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9BCu;
            // 0x2df9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9C4u; }
        if (ctx->pc != 0x2DF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9C4u; }
        if (ctx->pc != 0x2DF9C4u) { return; }
    }
    ctx->pc = 0x2DF9C4u;
label_2df9c4:
    // 0x2df9c4: 0x8f839eb4  lw          $v1, -0x614C($gp)
    ctx->pc = 0x2df9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942388)));
    // 0x2df9c8: 0x8f829eac  lw          $v0, -0x6154($gp)
    ctx->pc = 0x2df9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942380)));
    // 0x2df9cc: 0xaf839eb8  sw          $v1, -0x6148($gp)
    ctx->pc = 0x2df9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942392), GPR_U32(ctx, 3));
    // 0x2df9d0: 0xaf829eb4  sw          $v0, -0x614C($gp)
    ctx->pc = 0x2df9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942388), GPR_U32(ctx, 2));
    // 0x2df9d4: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x2df9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
    // 0x2df9d8: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2DF9D8u;
    SET_GPR_U32(ctx, 31, 0x2DF9E0u);
    ctx->pc = 0x2DF9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9D8u;
            // 0x2df9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9E0u; }
        if (ctx->pc != 0x2DF9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9E0u; }
        if (ctx->pc != 0x2DF9E0u) { return; }
    }
    ctx->pc = 0x2DF9E0u;
label_2df9e0:
    // 0x2df9e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF9E0u;
    {
        const bool branch_taken_0x2df9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9E0u;
            // 0x2df9e4: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df9e0) {
            ctx->pc = 0x2DF9F0u;
            goto label_2df9f0;
        }
    }
    ctx->pc = 0x2DF9E8u;
    // 0x2df9e8: 0xc6002f6c  lwc1        $f0, 0x2F6C($s0)
    ctx->pc = 0x2df9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df9ec: 0xe4400c88  swc1        $f0, 0xC88($v0)
    ctx->pc = 0x2df9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3208), bits); }
label_2df9f0:
    // 0x2df9f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2df9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df9f4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2DF9F4u;
    SET_GPR_U32(ctx, 31, 0x2DF9FCu);
    ctx->pc = 0x2DF9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF9F4u;
            // 0x2df9f8: 0x24848ed0  addiu       $a0, $a0, -0x7130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9FCu; }
        if (ctx->pc != 0x2DF9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF9FCu; }
        if (ctx->pc != 0x2DF9FCu) { return; }
    }
    ctx->pc = 0x2DF9FCu;
label_2df9fc:
    // 0x2df9fc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dfa00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dfa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dfa04: 0xa0208e90  sb          $zero, -0x7170($at)
    ctx->pc = 0x2dfa04u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfa08: 0xaf839ec0  sw          $v1, -0x6140($gp)
    ctx->pc = 0x2dfa08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942400), GPR_U32(ctx, 3));
label_2dfa0c:
    // 0x2dfa0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dfa0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dfa10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dfa10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfa14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dfa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfa18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dfa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFA1Cu;
            // 0x2dfa20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFA24u;
}
