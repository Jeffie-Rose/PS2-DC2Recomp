#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuDataSwap__FP13CGameDataUsedP13CGameDataUsedi
// Address: 0x23b900 - 0x23bc8c
void MenuDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x23b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x23b900");
#endif

    switch (ctx->pc) {
        case 0x23b960u: goto label_23b960;
        case 0x23b96cu: goto label_23b96c;
        case 0x23b984u: goto label_23b984;
        case 0x23b990u: goto label_23b990;
        case 0x23b9acu: goto label_23b9ac;
        case 0x23ba34u: goto label_23ba34;
        case 0x23ba48u: goto label_23ba48;
        case 0x23ba7cu: goto label_23ba7c;
        case 0x23ba8cu: goto label_23ba8c;
        case 0x23baa0u: goto label_23baa0;
        case 0x23bab4u: goto label_23bab4;
        case 0x23bac0u: goto label_23bac0;
        case 0x23bad0u: goto label_23bad0;
        case 0x23bae8u: goto label_23bae8;
        case 0x23baf8u: goto label_23baf8;
        case 0x23bb18u: goto label_23bb18;
        case 0x23bb20u: goto label_23bb20;
        case 0x23bb30u: goto label_23bb30;
        case 0x23bb40u: goto label_23bb40;
        case 0x23bb50u: goto label_23bb50;
        case 0x23bb64u: goto label_23bb64;
        case 0x23bb74u: goto label_23bb74;
        case 0x23bb8cu: goto label_23bb8c;
        case 0x23bb94u: goto label_23bb94;
        case 0x23bba4u: goto label_23bba4;
        case 0x23bbccu: goto label_23bbcc;
        case 0x23bbe0u: goto label_23bbe0;
        case 0x23bbf0u: goto label_23bbf0;
        case 0x23bc14u: goto label_23bc14;
        case 0x23bc58u: goto label_23bc58;
        default: break;
    }

    ctx->pc = 0x23b900u;

    // 0x23b900: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23b904: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x23b908: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x23b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x23b90c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23b910: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x23b910u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b914: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23b914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23b918: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23b918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23b91c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23b920: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23b924: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23b924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b92c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23b92cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b934: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B934u;
    {
        const bool branch_taken_0x23b934 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B934u;
            // 0x23b938: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b934) {
            ctx->pc = 0x23B944u;
            goto label_23b944;
        }
    }
    ctx->pc = 0x23B93Cu;
    // 0x23b93c: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B93Cu;
    {
        const bool branch_taken_0x23b93c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b93c) {
            ctx->pc = 0x23B94Cu;
            goto label_23b94c;
        }
    }
    ctx->pc = 0x23B944u;
label_23b944:
    // 0x23b944: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x23B944u;
    {
        const bool branch_taken_0x23b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B944u;
            // 0x23b948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b944) {
            ctx->pc = 0x23BC5Cu;
            goto label_23bc5c;
        }
    }
    ctx->pc = 0x23B94Cu;
label_23b94c:
    // 0x23b94c: 0x86970002  lh          $s7, 0x2($s4)
    ctx->pc = 0x23b94cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x23b950: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x23b950u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b954: 0x86720002  lh          $s2, 0x2($s3)
    ctx->pc = 0x23b954u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x23b958: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x23B958u;
    SET_GPR_U32(ctx, 31, 0x23B960u);
    ctx->pc = 0x23B95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B958u;
            // 0x23b95c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B960u; }
        if (ctx->pc != 0x23B960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B960u; }
        if (ctx->pc != 0x23B960u) { return; }
    }
    ctx->pc = 0x23B960u;
label_23b960:
    // 0x23b960: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x23b960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x23b964: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x23B964u;
    SET_GPR_U32(ctx, 31, 0x23B96Cu);
    ctx->pc = 0x23B968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B964u;
            // 0x23b968: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B96Cu; }
        if (ctx->pc != 0x23B96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B96Cu; }
        if (ctx->pc != 0x23B96Cu) { return; }
    }
    ctx->pc = 0x23B96Cu;
label_23b96c:
    // 0x23b96c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23b96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b970: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x23b970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x23b974: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x23b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x23b978: 0x86760000  lh          $s6, 0x0($s3)
    ctx->pc = 0x23b978u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x23b97c: 0xc065708  jal         func_195C20
    ctx->pc = 0x23B97Cu;
    SET_GPR_U32(ctx, 31, 0x23B984u);
    ctx->pc = 0x23B980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B97Cu;
            // 0x23b980: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B984u; }
        if (ctx->pc != 0x23B984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B984u; }
        if (ctx->pc != 0x23B984u) { return; }
    }
    ctx->pc = 0x23B984u;
label_23b984:
    // 0x23b984: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23b984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b988: 0xc065708  jal         func_195C20
    ctx->pc = 0x23B988u;
    SET_GPR_U32(ctx, 31, 0x23B990u);
    ctx->pc = 0x23B98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B988u;
            // 0x23b98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B990u; }
        if (ctx->pc != 0x23B990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B990u; }
        if (ctx->pc != 0x23B990u) { return; }
    }
    ctx->pc = 0x23B990u;
label_23b990:
    // 0x23b990: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x23b990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x23b994: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x23b994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23b998: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23b99c: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x23B99Cu;
    {
        const bool branch_taken_0x23b99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23B9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B99Cu;
            // 0x23b9a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b99c) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23B9A4u;
    // 0x23b9a4: 0xc066618  jal         func_199860
    ctx->pc = 0x23B9A4u;
    SET_GPR_U32(ctx, 31, 0x23B9ACu);
    ctx->pc = 0x199860u;
    if (runtime->hasFunction(0x199860u)) {
        auto targetFn = runtime->lookupFunction(0x199860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B9ACu; }
        if (ctx->pc != 0x23B9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNum__13CGameDataUsedFv_0x199860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B9ACu; }
        if (ctx->pc != 0x23B9ACu) { return; }
    }
    ctx->pc = 0x23B9ACu;
label_23b9ac:
    // 0x23b9ac: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x23b9acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23b9b0: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x23B9B0u;
    {
        const bool branch_taken_0x23b9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9b0) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23B9B8u;
    // 0x23b9b8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x23b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x23b9bc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x23B9BCu;
    {
        const bool branch_taken_0x23b9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9bc) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23B9C4u;
    // 0x23b9c4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x23b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23b9c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b9cc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x23B9CCu;
    {
        const bool branch_taken_0x23b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9CCu;
            // 0x23b9d0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9cc) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23B9D4u;
    // 0x23b9d4: 0x16c2000d  bne         $s6, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23B9D4u;
    {
        const bool branch_taken_0x23b9d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9D4u;
            // 0x23b9d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9d4) {
            ctx->pc = 0x23BA0Cu;
            goto label_23ba0c;
        }
    }
    ctx->pc = 0x23B9DCu;
    // 0x23b9dc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x23b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x23b9e0: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B9E0u;
    {
        const bool branch_taken_0x23b9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9E0u;
            // 0x23b9e4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e0) {
            ctx->pc = 0x23BA08u;
            goto label_23ba08;
        }
    }
    ctx->pc = 0x23B9E8u;
    // 0x23b9e8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B9E8u;
    {
        const bool branch_taken_0x23b9e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9E8u;
            // 0x23b9ec: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9e8) {
            ctx->pc = 0x23BA08u;
            goto label_23ba08;
        }
    }
    ctx->pc = 0x23B9F0u;
    // 0x23b9f0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B9F0u;
    {
        const bool branch_taken_0x23b9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9F0u;
            // 0x23b9f4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9f0) {
            ctx->pc = 0x23BA08u;
            goto label_23ba08;
        }
    }
    ctx->pc = 0x23B9F8u;
    // 0x23b9f8: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B9F8u;
    {
        const bool branch_taken_0x23b9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B9F8u;
            // 0x23b9fc: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b9f8) {
            ctx->pc = 0x23BA08u;
            goto label_23ba08;
        }
    }
    ctx->pc = 0x23BA00u;
    // 0x23ba00: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BA00u;
    {
        const bool branch_taken_0x23ba00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23BA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA00u;
            // 0x23ba04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba00) {
            ctx->pc = 0x23BA28u;
            goto label_23ba28;
        }
    }
    ctx->pc = 0x23BA08u;
label_23ba08:
    // 0x23ba08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23ba0c:
    // 0x23ba0c: 0x16c20011  bne         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23BA0Cu;
    {
        const bool branch_taken_0x23ba0c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x23BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA0Cu;
            // 0x23ba10: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba0c) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA14u;
    // 0x23ba14: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23BA14u;
    {
        const bool branch_taken_0x23ba14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA14u;
            // 0x23ba18: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba14) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA1Cu;
    // 0x23ba1c: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23BA1Cu;
    {
        const bool branch_taken_0x23ba1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ba1c) {
            ctx->pc = 0x23BA54u;
            goto label_23ba54;
        }
    }
    ctx->pc = 0x23BA24u;
    // 0x23ba24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ba28:
    // 0x23ba28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23ba28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba2c: 0xc06662c  jal         func_1998B0
    ctx->pc = 0x23BA2Cu;
    SET_GPR_U32(ctx, 31, 0x23BA34u);
    ctx->pc = 0x23BA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA2Cu;
            // 0x23ba30: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1998B0u;
    if (runtime->hasFunction(0x1998B0u)) {
        auto targetFn = runtime->lookupFunction(0x1998B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA34u; }
        if (ctx->pc != 0x23BA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGiftBoxItem__13CGameDataUsedFii_0x1998b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA34u; }
        if (ctx->pc != 0x23BA34u) { return; }
    }
    ctx->pc = 0x23BA34u;
label_23ba34:
    // 0x23ba34: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BA34u;
    {
        const bool branch_taken_0x23ba34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA34u;
            // 0x23ba38: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba34) {
            ctx->pc = 0x23BA4Cu;
            goto label_23ba4c;
        }
    }
    ctx->pc = 0x23BA3Cu;
    // 0x23ba3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ba3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba40: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x23BA40u;
    SET_GPR_U32(ctx, 31, 0x23BA48u);
    ctx->pc = 0x23BA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA40u;
            // 0x23ba44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA48u; }
        if (ctx->pc != 0x23BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA48u; }
        if (ctx->pc != 0x23BA48u) { return; }
    }
    ctx->pc = 0x23BA48u;
label_23ba48:
    // 0x23ba48: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x23ba48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23ba4c:
    // 0x23ba4c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x23BA4Cu;
    {
        const bool branch_taken_0x23ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ba4c) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BA54u;
label_23ba54:
    // 0x23ba54: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x23ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x23ba58: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x23ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x23ba5c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BA5Cu;
    {
        const bool branch_taken_0x23ba5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA5Cu;
            // 0x23ba60: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba5c) {
            ctx->pc = 0x23BA84u;
            goto label_23ba84;
        }
    }
    ctx->pc = 0x23BA64u;
    // 0x23ba64: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BA64u;
    {
        const bool branch_taken_0x23ba64 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ba64) {
            ctx->pc = 0x23BA84u;
            goto label_23ba84;
        }
    }
    ctx->pc = 0x23BA6Cu;
    // 0x23ba6c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23ba70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23ba70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba74: 0xc067738  jal         func_19DCE0
    ctx->pc = 0x23BA74u;
    SET_GPR_U32(ctx, 31, 0x23BA7Cu);
    ctx->pc = 0x23BA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA74u;
            // 0x23ba78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DCE0u;
    if (runtime->hasFunction(0x19DCE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA7Cu; }
        if (ctx->pc != 0x23BA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FishInAquarium__16CUserDataManagerFP13CGameDataUsedi_0x19dce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA7Cu; }
        if (ctx->pc != 0x23BA7Cu) { return; }
    }
    ctx->pc = 0x23BA7Cu;
label_23ba7c:
    // 0x23ba7c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x23BA7Cu;
    {
        const bool branch_taken_0x23ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA7Cu;
            // 0x23ba80: 0x24150007  addiu       $s5, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba7c) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BA84u;
label_23ba84:
    // 0x23ba84: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x23BA84u;
    SET_GPR_U32(ctx, 31, 0x23BA8Cu);
    ctx->pc = 0x23BA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA84u;
            // 0x23ba88: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA8Cu; }
        if (ctx->pc != 0x23BA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BA8Cu; }
        if (ctx->pc != 0x23BA8Cu) { return; }
    }
    ctx->pc = 0x23BA8Cu;
label_23ba8c:
    // 0x23ba8c: 0x16820014  bne         $s4, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23BA8Cu;
    {
        const bool branch_taken_0x23ba8c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA8Cu;
            // 0x23ba90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ba8c) {
            ctx->pc = 0x23BAE0u;
            goto label_23bae0;
        }
    }
    ctx->pc = 0x23BA94u;
    // 0x23ba94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23ba94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ba98: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23BA98u;
    SET_GPR_U32(ctx, 31, 0x23BAA0u);
    ctx->pc = 0x23BA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BA98u;
            // 0x23ba9c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAA0u; }
        if (ctx->pc != 0x23BAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAA0u; }
        if (ctx->pc != 0x23BAA0u) { return; }
    }
    ctx->pc = 0x23BAA0u;
label_23baa0:
    // 0x23baa0: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23BAA0u;
    {
        const bool branch_taken_0x23baa0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23BAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAA0u;
            // 0x23baa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23baa0) {
            ctx->pc = 0x23BAC8u;
            goto label_23bac8;
        }
    }
    ctx->pc = 0x23BAA8u;
    // 0x23baa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23baa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23baac: 0xc066724  jal         func_199C90
    ctx->pc = 0x23BAACu;
    SET_GPR_U32(ctx, 31, 0x23BAB4u);
    ctx->pc = 0x23BAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAACu;
            // 0x23bab0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199C90u;
    if (runtime->hasFunction(0x199C90u)) {
        auto targetFn = runtime->lookupFunction(0x199C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAB4u; }
        if (ctx->pc != 0x23BAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataItem__13CGameDataUsedFi_0x199c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAB4u; }
        if (ctx->pc != 0x23BAB4u) { return; }
    }
    ctx->pc = 0x23BAB4u;
label_23bab4:
    // 0x23bab4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bab8: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x23BAB8u;
    SET_GPR_U32(ctx, 31, 0x23BAC0u);
    ctx->pc = 0x23BABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAB8u;
            // 0x23babc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAC0u; }
        if (ctx->pc != 0x23BAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAC0u; }
        if (ctx->pc != 0x23BAC0u) { return; }
    }
    ctx->pc = 0x23BAC0u;
label_23bac0:
    // 0x23bac0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x23BAC0u;
    {
        const bool branch_taken_0x23bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bac0) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BAC8u;
label_23bac8:
    // 0x23bac8: 0xc0667d0  jal         func_199F40
    ctx->pc = 0x23BAC8u;
    SET_GPR_U32(ctx, 31, 0x23BAD0u);
    ctx->pc = 0x23BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAC8u;
            // 0x23bacc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199F40u;
    if (runtime->hasFunction(0x199F40u)) {
        auto targetFn = runtime->lookupFunction(0x199F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAD0u; }
        if (ctx->pc != 0x23BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataItem__13CGameDataUsedFP13CGameDataUsed_0x199f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAD0u; }
        if (ctx->pc != 0x23BAD0u) { return; }
    }
    ctx->pc = 0x23BAD0u;
label_23bad0:
    // 0x23bad0: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x23BAD0u;
    {
        const bool branch_taken_0x23bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bad0) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BAD8u;
    // 0x23bad8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x23BAD8u;
    {
        const bool branch_taken_0x23bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAD8u;
            // 0x23badc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bad8) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BAE0u;
label_23bae0:
    // 0x23bae0: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x23BAE0u;
    SET_GPR_U32(ctx, 31, 0x23BAE8u);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAE8u; }
        if (ctx->pc != 0x23BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAE8u; }
        if (ctx->pc != 0x23BAE8u) { return; }
    }
    ctx->pc = 0x23BAE8u;
label_23bae8:
    // 0x23bae8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23BAE8u;
    {
        const bool branch_taken_0x23bae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAE8u;
            // 0x23baec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bae8) {
            ctx->pc = 0x23BB5Cu;
            goto label_23bb5c;
        }
    }
    ctx->pc = 0x23BAF0u;
    // 0x23baf0: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23BAF0u;
    SET_GPR_U32(ctx, 31, 0x23BAF8u);
    ctx->pc = 0x23BAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BAF0u;
            // 0x23baf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAF8u; }
        if (ctx->pc != 0x23BAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BAF8u; }
        if (ctx->pc != 0x23BAF8u) { return; }
    }
    ctx->pc = 0x23BAF8u;
label_23baf8:
    // 0x23baf8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x23baf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23bafc: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x23BAFCu;
    {
        const bool branch_taken_0x23bafc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bafc) {
            ctx->pc = 0x23BB58u;
            goto label_23bb58;
        }
    }
    ctx->pc = 0x23BB04u;
    // 0x23bb04: 0x16c00014  bnez        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x23BB04u;
    {
        const bool branch_taken_0x23bb04 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB04u;
            // 0x23bb08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb04) {
            ctx->pc = 0x23BB58u;
            goto label_23bb58;
        }
    }
    ctx->pc = 0x23BB0Cu;
    // 0x23bb0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23bb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb10: 0xc049c18  jal         func_127060
    ctx->pc = 0x23BB10u;
    SET_GPR_U32(ctx, 31, 0x23BB18u);
    ctx->pc = 0x23BB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB10u;
            // 0x23bb14: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB18u; }
        if (ctx->pc != 0x23BB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB18u; }
        if (ctx->pc != 0x23BB18u) { return; }
    }
    ctx->pc = 0x23BB18u;
label_23bb18:
    // 0x23bb18: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23BB18u;
    SET_GPR_U32(ctx, 31, 0x23BB20u);
    ctx->pc = 0x23BB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB18u;
            // 0x23bb1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB20u; }
        if (ctx->pc != 0x23BB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB20u; }
        if (ctx->pc != 0x23BB20u) { return; }
    }
    ctx->pc = 0x23BB20u;
label_23bb20:
    // 0x23bb20: 0x22823  negu        $a1, $v0
    ctx->pc = 0x23bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x23bb24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb28: 0xc065cdc  jal         func_197370
    ctx->pc = 0x23BB28u;
    SET_GPR_U32(ctx, 31, 0x23BB30u);
    ctx->pc = 0x23BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB28u;
            // 0x23bb2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB30u; }
        if (ctx->pc != 0x23BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB30u; }
        if (ctx->pc != 0x23BB30u) { return; }
    }
    ctx->pc = 0x23BB30u;
label_23bb30:
    // 0x23bb30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb34: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb38: 0xc065cdc  jal         func_197370
    ctx->pc = 0x23BB38u;
    SET_GPR_U32(ctx, 31, 0x23BB40u);
    ctx->pc = 0x23BB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB38u;
            // 0x23bb3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB40u; }
        if (ctx->pc != 0x23BB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB40u; }
        if (ctx->pc != 0x23BB40u) { return; }
    }
    ctx->pc = 0x23BB40u;
label_23bb40:
    // 0x23bb40: 0x1e2823  negu        $a1, $fp
    ctx->pc = 0x23bb40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
    // 0x23bb44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23bb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bb48: 0xc065cdc  jal         func_197370
    ctx->pc = 0x23BB48u;
    SET_GPR_U32(ctx, 31, 0x23BB50u);
    ctx->pc = 0x23BB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB48u;
            // 0x23bb4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB50u; }
        if (ctx->pc != 0x23BB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB50u; }
        if (ctx->pc != 0x23BB50u) { return; }
    }
    ctx->pc = 0x23BB50u;
label_23bb50:
    // 0x23bb50: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x23BB50u;
    {
        const bool branch_taken_0x23bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bb50) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BB58u;
label_23bb58:
    // 0x23bb58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23bb5c:
    // 0x23bb5c: 0xc065c34  jal         func_1970D0
    ctx->pc = 0x23BB5Cu;
    SET_GPR_U32(ctx, 31, 0x23BB64u);
    ctx->pc = 0x1970D0u;
    if (runtime->hasFunction(0x1970D0u)) {
        auto targetFn = runtime->lookupFunction(0x1970D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB64u; }
        if (ctx->pc != 0x23BB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTypeEnableStack__13CGameDataUsedFv_0x1970d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB64u; }
        if (ctx->pc != 0x23BB64u) { return; }
    }
    ctx->pc = 0x23BB64u;
label_23bb64:
    // 0x23bb64: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23BB64u;
    {
        const bool branch_taken_0x23bb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB64u;
            // 0x23bb68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb64) {
            ctx->pc = 0x23BC00u;
            goto label_23bc00;
        }
    }
    ctx->pc = 0x23BB6Cu;
    // 0x23bb6c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23BB6Cu;
    SET_GPR_U32(ctx, 31, 0x23BB74u);
    ctx->pc = 0x23BB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB6Cu;
            // 0x23bb70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB74u; }
        if (ctx->pc != 0x23BB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB74u; }
        if (ctx->pc != 0x23BB74u) { return; }
    }
    ctx->pc = 0x23BB74u;
label_23bb74:
    // 0x23bb74: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x23BB74u;
    {
        const bool branch_taken_0x23bb74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23bb74) {
            ctx->pc = 0x23BBFCu;
            goto label_23bbfc;
        }
    }
    ctx->pc = 0x23BB7Cu;
    // 0x23bb7c: 0x16f2001f  bne         $s7, $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x23BB7Cu;
    {
        const bool branch_taken_0x23bb7c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 18));
        ctx->pc = 0x23BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB7Cu;
            // 0x23bb80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb7c) {
            ctx->pc = 0x23BBFCu;
            goto label_23bbfc;
        }
    }
    ctx->pc = 0x23BB84u;
    // 0x23bb84: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23BB84u;
    SET_GPR_U32(ctx, 31, 0x23BB8Cu);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB8Cu; }
        if (ctx->pc != 0x23BB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BB8Cu; }
        if (ctx->pc != 0x23BB8Cu) { return; }
    }
    ctx->pc = 0x23BB8Cu;
label_23bb8c:
    // 0x23bb8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23BB8Cu;
    {
        const bool branch_taken_0x23bb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB8Cu;
            // 0x23bb90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bb8c) {
            ctx->pc = 0x23BB98u;
            goto label_23bb98;
        }
    }
    ctx->pc = 0x23BB94u;
label_23bb94:
    // 0x23bb94: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x23bb94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23bb98:
    // 0x23bb98: 0x8630001e  lh          $s0, 0x1E($s1)
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x23bb9c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23BB9Cu;
    SET_GPR_U32(ctx, 31, 0x23BBA4u);
    ctx->pc = 0x23BBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BB9Cu;
            // 0x23bba0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBA4u; }
        if (ctx->pc != 0x23BBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBA4u; }
        if (ctx->pc != 0x23BBA4u) { return; }
    }
    ctx->pc = 0x23BBA4u;
label_23bba4:
    // 0x23bba4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x23bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23bba8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23bba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bbac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23BBACu;
    {
        const bool branch_taken_0x23bbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23bbac) {
            ctx->pc = 0x23BB94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23bb94;
        }
    }
    ctx->pc = 0x23BBB4u;
    // 0x23bbb4: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23BBB4u;
    {
        const bool branch_taken_0x23bbb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x23BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBB4u;
            // 0x23bbb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbb4) {
            ctx->pc = 0x23BBD4u;
            goto label_23bbd4;
        }
    }
    ctx->pc = 0x23BBBCu;
    // 0x23bbbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23bbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbc0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23bbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbc4: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x23BBC4u;
    SET_GPR_U32(ctx, 31, 0x23BBCCu);
    ctx->pc = 0x23BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBC4u;
            // 0x23bbc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBCCu; }
        if (ctx->pc != 0x23BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBCCu; }
        if (ctx->pc != 0x23BBCCu) { return; }
    }
    ctx->pc = 0x23BBCCu;
label_23bbcc:
    // 0x23bbcc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23BBCCu;
    {
        const bool branch_taken_0x23bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBCCu;
            // 0x23bbd0: 0x24150005  addiu       $s5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bbcc) {
            ctx->pc = 0x23BBF4u;
            goto label_23bbf4;
        }
    }
    ctx->pc = 0x23BBD4u;
label_23bbd4:
    // 0x23bbd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23bbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbd8: 0xc065cdc  jal         func_197370
    ctx->pc = 0x23BBD8u;
    SET_GPR_U32(ctx, 31, 0x23BBE0u);
    ctx->pc = 0x23BBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBD8u;
            // 0x23bbdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBE0u; }
        if (ctx->pc != 0x23BBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBE0u; }
        if (ctx->pc != 0x23BBE0u) { return; }
    }
    ctx->pc = 0x23BBE0u;
label_23bbe0:
    // 0x23bbe0: 0x122823  negu        $a1, $s2
    ctx->pc = 0x23bbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    // 0x23bbe4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23bbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bbe8: 0xc065cdc  jal         func_197370
    ctx->pc = 0x23BBE8u;
    SET_GPR_U32(ctx, 31, 0x23BBF0u);
    ctx->pc = 0x23BBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BBE8u;
            // 0x23bbec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197370u;
    if (runtime->hasFunction(0x197370u)) {
        auto targetFn = runtime->lookupFunction(0x197370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBF0u; }
        if (ctx->pc != 0x23BBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddNum__13CGameDataUsedFii_0x197370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BBF0u; }
        if (ctx->pc != 0x23BBF0u) { return; }
    }
    ctx->pc = 0x23BBF0u;
label_23bbf0:
    // 0x23bbf0: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x23bbf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23bbf4:
    // 0x23bbf4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23BBF4u;
    {
        const bool branch_taken_0x23bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbf4) {
            ctx->pc = 0x23BC50u;
            goto label_23bc50;
        }
    }
    ctx->pc = 0x23BBFCu;
label_23bbfc:
    // 0x23bbfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23bbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23bc00:
    // 0x23bc00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23bc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23bc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bc08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23bc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bc0c: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x23BC0Cu;
    SET_GPR_U32(ctx, 31, 0x23BC14u);
    ctx->pc = 0x23BC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC0Cu;
            // 0x23bc10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC14u; }
        if (ctx->pc != 0x23BC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC14u; }
        if (ctx->pc != 0x23BC14u) { return; }
    }
    ctx->pc = 0x23BC14u;
label_23bc14:
    // 0x23bc14: 0x1ae00002  blez        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x23BC14u;
    {
        const bool branch_taken_0x23bc14 = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x23bc14) {
            ctx->pc = 0x23BC20u;
            goto label_23bc20;
        }
    }
    ctx->pc = 0x23BC1Cu;
    // 0x23bc1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23bc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bc20:
    // 0x23bc20: 0x1a400002  blez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x23BC20u;
    {
        const bool branch_taken_0x23bc20 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x23BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC20u;
            // 0x23bc24: 0x27838384  addiu       $v1, $gp, -0x7C7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935428));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bc20) {
            ctx->pc = 0x23BC2Cu;
            goto label_23bc2c;
        }
    }
    ctx->pc = 0x23BC28u;
    // 0x23bc28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23bc28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23bc2c:
    // 0x23bc2c: 0x27a400cc  addiu       $a0, $sp, 0xCC
    ctx->pc = 0x23bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x23bc30: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23bc34: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x23bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x23bc38: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x23bc38u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23bc3c: 0x87838388  lh          $v1, -0x7C78($gp)
    ctx->pc = 0x23bc3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935432)));
    // 0x23bc40: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x23bc40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x23bc44: 0xa3a500cc  sb          $a1, 0xCC($sp)
    ctx->pc = 0x23bc44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 5));
    // 0x23bc48: 0x805500cc  lb          $s5, 0xCC($v0)
    ctx->pc = 0x23bc48u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x23bc4c: 0x0  nop
    ctx->pc = 0x23bc4cu;
    // NOP
label_23bc50:
    // 0x23bc50: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x23BC50u;
    SET_GPR_U32(ctx, 31, 0x23BC58u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC58u; }
        if (ctx->pc != 0x23BC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23BC58u; }
        if (ctx->pc != 0x23BC58u) { return; }
    }
    ctx->pc = 0x23BC58u;
label_23bc58:
    // 0x23bc58: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x23bc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23bc5c:
    // 0x23bc5c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23bc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23bc60: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x23bc60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23bc64: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23bc64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23bc68: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23bc68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23bc6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23bc6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23bc70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23bc70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23bc74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23bc74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23bc78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23bc78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bc7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23bc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bc80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23bc80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bc84: 0x3e00008  jr          $ra
    ctx->pc = 0x23BC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23BC84u;
            // 0x23bc88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23BC8Cu;
}
