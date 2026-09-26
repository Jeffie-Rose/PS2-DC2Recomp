#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FUNC_POINT_GET_ROT__FP12RS_STACKDATAi
// Address: 0x27b8f0 - 0x27bab0
void ps2__FUNC_POINT_GET_ROT__FP12RS_STACKDATAi_0x27b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FUNC_POINT_GET_ROT__FP12RS_STACKDATAi_0x27b8f0");
#endif

    switch (ctx->pc) {
        case 0x27b920u: goto label_27b920;
        case 0x27b95cu: goto label_27b95c;
        case 0x27b96cu: goto label_27b96c;
        case 0x27b978u: goto label_27b978;
        case 0x27b990u: goto label_27b990;
        case 0x27b9a0u: goto label_27b9a0;
        case 0x27b9b0u: goto label_27b9b0;
        case 0x27b9c4u: goto label_27b9c4;
        case 0x27b9d8u: goto label_27b9d8;
        case 0x27b9f0u: goto label_27b9f0;
        case 0x27ba00u: goto label_27ba00;
        case 0x27ba48u: goto label_27ba48;
        case 0x27ba60u: goto label_27ba60;
        case 0x27ba70u: goto label_27ba70;
        case 0x27ba7cu: goto label_27ba7c;
        default: break;
    }

    ctx->pc = 0x27b8f0u;

    // 0x27b8f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27b8f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27b8f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27b8fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27b900: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b908: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27b908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b90c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b910: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27b910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b914: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27b918: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x27B918u;
    SET_GPR_U32(ctx, 31, 0x27B920u);
    ctx->pc = 0x27B91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B918u;
            // 0x27b91c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B920u; }
        if (ctx->pc != 0x27B920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B920u; }
        if (ctx->pc != 0x27B920u) { return; }
    }
    ctx->pc = 0x27B920u;
label_27b920:
    // 0x27b920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27b920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b924: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B924u;
    {
        const bool branch_taken_0x27b924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B924u;
            // 0x27b928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b924) {
            ctx->pc = 0x27B934u;
            goto label_27b934;
        }
    }
    ctx->pc = 0x27B92Cu;
    // 0x27b92c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x27B92Cu;
    {
        const bool branch_taken_0x27b92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B92Cu;
            // 0x27b930: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b92c) {
            ctx->pc = 0x27BA94u;
            goto label_27ba94;
        }
    }
    ctx->pc = 0x27B934u;
label_27b934:
    // 0x27b934: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x27b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27b938: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b93c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27B93Cu;
    {
        const bool branch_taken_0x27b93c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B93Cu;
            // 0x27b940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b93c) {
            ctx->pc = 0x27B998u;
            goto label_27b998;
        }
    }
    ctx->pc = 0x27B944u;
    // 0x27b944: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B944u;
    {
        const bool branch_taken_0x27b944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B944u;
            // 0x27b948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b944) {
            ctx->pc = 0x27B954u;
            goto label_27b954;
        }
    }
    ctx->pc = 0x27B94Cu;
    // 0x27b94c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x27B94Cu;
    {
        const bool branch_taken_0x27b94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b94c) {
            ctx->pc = 0x27BA04u;
            goto label_27ba04;
        }
    }
    ctx->pc = 0x27B954u;
label_27b954:
    // 0x27b954: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27B954u;
    SET_GPR_U32(ctx, 31, 0x27B95Cu);
    ctx->pc = 0x27B958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B954u;
            // 0x27b958: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B95Cu; }
        if (ctx->pc != 0x27B95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B95Cu; }
        if (ctx->pc != 0x27B95Cu) { return; }
    }
    ctx->pc = 0x27B95Cu;
label_27b95c:
    // 0x27b95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b964: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27B964u;
    SET_GPR_U32(ctx, 31, 0x27B96Cu);
    ctx->pc = 0x27B968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B964u;
            // 0x27b968: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B96Cu; }
        if (ctx->pc != 0x27B96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B96Cu; }
        if (ctx->pc != 0x27B96Cu) { return; }
    }
    ctx->pc = 0x27B96Cu;
label_27b96c:
    // 0x27b96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b970: 0xc057530  jal         func_15D4C0
    ctx->pc = 0x27B970u;
    SET_GPR_U32(ctx, 31, 0x27B978u);
    ctx->pc = 0x27B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B970u;
            // 0x27b974: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B978u; }
        if (ctx->pc != 0x27B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B978u; }
        if (ctx->pc != 0x27B978u) { return; }
    }
    ctx->pc = 0x27B978u;
label_27b978:
    // 0x27b978: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B978u;
    {
        const bool branch_taken_0x27b978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B978u;
            // 0x27b97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b978) {
            ctx->pc = 0x27B988u;
            goto label_27b988;
        }
    }
    ctx->pc = 0x27B980u;
    // 0x27b980: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x27B980u;
    {
        const bool branch_taken_0x27b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B980u;
            // 0x27b984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b980) {
            ctx->pc = 0x27BA90u;
            goto label_27ba90;
        }
    }
    ctx->pc = 0x27B988u;
label_27b988:
    // 0x27b988: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x27B988u;
    SET_GPR_U32(ctx, 31, 0x27B990u);
    ctx->pc = 0x27B98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B988u;
            // 0x27b98c: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B990u; }
        if (ctx->pc != 0x27B990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B990u; }
        if (ctx->pc != 0x27B990u) { return; }
    }
    ctx->pc = 0x27B990u;
label_27b990:
    // 0x27b990: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27B990u;
    {
        const bool branch_taken_0x27b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B990u;
            // 0x27b994: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b990) {
            ctx->pc = 0x27BA04u;
            goto label_27ba04;
        }
    }
    ctx->pc = 0x27B998u;
label_27b998:
    // 0x27b998: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27B998u;
    SET_GPR_U32(ctx, 31, 0x27B9A0u);
    ctx->pc = 0x27B99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B998u;
            // 0x27b99c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9A0u; }
        if (ctx->pc != 0x27B9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9A0u; }
        if (ctx->pc != 0x27B9A0u) { return; }
    }
    ctx->pc = 0x27B9A0u;
label_27b9a0:
    // 0x27b9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27b9a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9a8: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27B9A8u;
    SET_GPR_U32(ctx, 31, 0x27B9B0u);
    ctx->pc = 0x27B9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9A8u;
            // 0x27b9ac: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9B0u; }
        if (ctx->pc != 0x27B9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9B0u; }
        if (ctx->pc != 0x27B9B0u) { return; }
    }
    ctx->pc = 0x27B9B0u;
label_27b9b0:
    // 0x27b9b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x27b9b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27b9b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9bc: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x27B9BCu;
    SET_GPR_U32(ctx, 31, 0x27B9C4u);
    ctx->pc = 0x27B9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9BCu;
            // 0x27b9c0: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9C4u; }
        if (ctx->pc != 0x27B9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9C4u; }
        if (ctx->pc != 0x27B9C4u) { return; }
    }
    ctx->pc = 0x27B9C4u;
label_27b9c4:
    // 0x27b9c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27B9C4u;
    {
        const bool branch_taken_0x27b9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9C4u;
            // 0x27b9c8: 0x26040cb0  addiu       $a0, $s0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9c4) {
            ctx->pc = 0x27B9F8u;
            goto label_27b9f8;
        }
    }
    ctx->pc = 0x27B9CCu;
    // 0x27b9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b9d0: 0xc057508  jal         func_15D420
    ctx->pc = 0x27B9D0u;
    SET_GPR_U32(ctx, 31, 0x27B9D8u);
    ctx->pc = 0x27B9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9D0u;
            // 0x27b9d4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9D8u; }
        if (ctx->pc != 0x27B9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9D8u; }
        if (ctx->pc != 0x27B9D8u) { return; }
    }
    ctx->pc = 0x27B9D8u;
label_27b9d8:
    // 0x27b9d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B9D8u;
    {
        const bool branch_taken_0x27b9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9D8u;
            // 0x27b9dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9d8) {
            ctx->pc = 0x27B9E8u;
            goto label_27b9e8;
        }
    }
    ctx->pc = 0x27B9E0u;
    // 0x27b9e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27B9E0u;
    {
        const bool branch_taken_0x27b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9E0u;
            // 0x27b9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9e0) {
            ctx->pc = 0x27BA90u;
            goto label_27ba90;
        }
    }
    ctx->pc = 0x27B9E8u;
label_27b9e8:
    // 0x27b9e8: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x27B9E8u;
    SET_GPR_U32(ctx, 31, 0x27B9F0u);
    ctx->pc = 0x27B9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9E8u;
            // 0x27b9ec: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9F0u; }
        if (ctx->pc != 0x27B9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B9F0u; }
        if (ctx->pc != 0x27B9F0u) { return; }
    }
    ctx->pc = 0x27B9F0u;
label_27b9f0:
    // 0x27b9f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27B9F0u;
    {
        const bool branch_taken_0x27b9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9F0u;
            // 0x27b9f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b9f0) {
            ctx->pc = 0x27BA04u;
            goto label_27ba04;
        }
    }
    ctx->pc = 0x27B9F8u;
label_27b9f8:
    // 0x27b9f8: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x27B9F8u;
    SET_GPR_U32(ctx, 31, 0x27BA00u);
    ctx->pc = 0x27B9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B9F8u;
            // 0x27b9fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA00u; }
        if (ctx->pc != 0x27BA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA00u; }
        if (ctx->pc != 0x27BA00u) { return; }
    }
    ctx->pc = 0x27BA00u;
label_27ba00:
    // 0x27ba00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27ba00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ba04:
    // 0x27ba04: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BA04u;
    {
        const bool branch_taken_0x27ba04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA04u;
            // 0x27ba08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba04) {
            ctx->pc = 0x27BA14u;
            goto label_27ba14;
        }
    }
    ctx->pc = 0x27BA0Cu;
    // 0x27ba0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27BA0Cu;
    {
        const bool branch_taken_0x27ba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba0c) {
            ctx->pc = 0x27BA90u;
            goto label_27ba90;
        }
    }
    ctx->pc = 0x27BA14u;
label_27ba14:
    // 0x27ba14: 0x7a640190  lq          $a0, 0x190($s3)
    ctx->pc = 0x27ba14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x27ba18: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x27ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27ba1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27ba20: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27BA20u;
    {
        const bool branch_taken_0x27ba20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA20u;
            // 0x27ba24: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba20) {
            ctx->pc = 0x27BA50u;
            goto label_27ba50;
        }
    }
    ctx->pc = 0x27BA28u;
    // 0x27ba28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ba2c: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BA2Cu;
    {
        const bool branch_taken_0x27ba2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ba2c) {
            ctx->pc = 0x27BA3Cu;
            goto label_27ba3c;
        }
    }
    ctx->pc = 0x27BA34u;
    // 0x27ba34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x27BA34u;
    {
        const bool branch_taken_0x27ba34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA34u;
            // 0x27ba38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba34) {
            ctx->pc = 0x27BA84u;
            goto label_27ba84;
        }
    }
    ctx->pc = 0x27BA3Cu;
label_27ba3c:
    // 0x27ba3c: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x27ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ba40: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27BA40u;
    SET_GPR_U32(ctx, 31, 0x27BA48u);
    ctx->pc = 0x27BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA40u;
            // 0x27ba44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA48u; }
        if (ctx->pc != 0x27BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA48u; }
        if (ctx->pc != 0x27BA48u) { return; }
    }
    ctx->pc = 0x27BA48u;
label_27ba48:
    // 0x27ba48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27BA48u;
    {
        const bool branch_taken_0x27ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA48u;
            // 0x27ba4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ba48) {
            ctx->pc = 0x27BA90u;
            goto label_27ba90;
        }
    }
    ctx->pc = 0x27BA50u;
label_27ba50:
    // 0x27ba50: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x27ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ba54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ba54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba58: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27BA58u;
    SET_GPR_U32(ctx, 31, 0x27BA60u);
    ctx->pc = 0x27BA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA58u;
            // 0x27ba5c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA60u; }
        if (ctx->pc != 0x27BA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA60u; }
        if (ctx->pc != 0x27BA60u) { return; }
    }
    ctx->pc = 0x27BA60u;
label_27ba60:
    // 0x27ba60: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x27ba60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ba64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ba64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ba68: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27BA68u;
    SET_GPR_U32(ctx, 31, 0x27BA70u);
    ctx->pc = 0x27BA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA68u;
            // 0x27ba6c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA70u; }
        if (ctx->pc != 0x27BA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA70u; }
        if (ctx->pc != 0x27BA70u) { return; }
    }
    ctx->pc = 0x27BA70u;
label_27ba70:
    // 0x27ba70: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x27ba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ba74: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27BA74u;
    SET_GPR_U32(ctx, 31, 0x27BA7Cu);
    ctx->pc = 0x27BA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BA74u;
            // 0x27ba78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA7Cu; }
        if (ctx->pc != 0x27BA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BA7Cu; }
        if (ctx->pc != 0x27BA7Cu) { return; }
    }
    ctx->pc = 0x27BA7Cu;
label_27ba7c:
    // 0x27ba7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27BA7Cu;
    {
        const bool branch_taken_0x27ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba7c) {
            ctx->pc = 0x27BA8Cu;
            goto label_27ba8c;
        }
    }
    ctx->pc = 0x27BA84u;
label_27ba84:
    // 0x27ba84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27BA84u;
    {
        const bool branch_taken_0x27ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba84) {
            ctx->pc = 0x27BA90u;
            goto label_27ba90;
        }
    }
    ctx->pc = 0x27BA8Cu;
label_27ba8c:
    // 0x27ba8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ba90:
    // 0x27ba90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27ba94:
    // 0x27ba94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27ba94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ba98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27ba98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ba9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ba9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27baa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27baa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27baa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27baa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27baa8: 0x3e00008  jr          $ra
    ctx->pc = 0x27BAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BAA8u;
            // 0x27baac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BAB0u;
}
