#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckStatusError__Fv
// Address: 0x1d3b10 - 0x1d3d08
void CheckStatusError__Fv_0x1d3b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckStatusError__Fv_0x1d3b10");
#endif

    switch (ctx->pc) {
        case 0x1d3b3cu: goto label_1d3b3c;
        case 0x1d3b44u: goto label_1d3b44;
        case 0x1d3b54u: goto label_1d3b54;
        case 0x1d3b60u: goto label_1d3b60;
        case 0x1d3b6cu: goto label_1d3b6c;
        case 0x1d3b88u: goto label_1d3b88;
        case 0x1d3bc0u: goto label_1d3bc0;
        case 0x1d3be4u: goto label_1d3be4;
        case 0x1d3c40u: goto label_1d3c40;
        case 0x1d3c70u: goto label_1d3c70;
        case 0x1d3ca0u: goto label_1d3ca0;
        case 0x1d3cd0u: goto label_1d3cd0;
        case 0x1d3cdcu: goto label_1d3cdc;
        default: break;
    }

    ctx->pc = 0x1d3b10u;

    // 0x1d3b10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d3b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d3b14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d3b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d3b1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3b20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3b24: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3b28: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1D3B28u;
    {
        const bool branch_taken_0x1d3b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B28u;
            // 0x1d3b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3b28) {
            ctx->pc = 0x1D3CF0u;
            goto label_1d3cf0;
        }
    }
    ctx->pc = 0x1D3B30u;
    // 0x1d3b30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b34: 0xc05d420  jal         func_175080
    ctx->pc = 0x1D3B34u;
    SET_GPR_U32(ctx, 31, 0x1D3B3Cu);
    ctx->pc = 0x1D3B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B34u;
            // 0x1d3b38: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B3Cu; }
        if (ctx->pc != 0x1D3B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B3Cu; }
        if (ctx->pc != 0x1D3B3Cu) { return; }
    }
    ctx->pc = 0x1D3B3Cu;
label_1d3b3c:
    // 0x1d3b3c: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1D3B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3B44u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B44u; }
        if (ctx->pc != 0x1D3B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B44u; }
        if (ctx->pc != 0x1D3B44u) { return; }
    }
    ctx->pc = 0x1D3B44u;
label_1d3b44:
    // 0x1d3b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b48: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x1d3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1d3b4c: 0xc068234  jal         func_1A08D0
    ctx->pc = 0x1D3B4Cu;
    SET_GPR_U32(ctx, 31, 0x1D3B54u);
    ctx->pc = 0x1D3B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B4Cu;
            // 0x1d3b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A08D0u;
    if (runtime->hasFunction(0x1A08D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A08D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B54u; }
        if (ctx->pc != 0x1D3B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StatusParamStep__16CBattleCharaInfoFPi_0x1a08d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B54u; }
        if (ctx->pc != 0x1D3B54u) { return; }
    }
    ctx->pc = 0x1D3B54u;
label_1d3b54:
    // 0x1d3b54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d3b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b58: 0xc068140  jal         func_1A0500
    ctx->pc = 0x1D3B58u;
    SET_GPR_U32(ctx, 31, 0x1D3B60u);
    ctx->pc = 0x1D3B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B58u;
            // 0x1d3b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B60u; }
        if (ctx->pc != 0x1D3B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B60u; }
        if (ctx->pc != 0x1D3B60u) { return; }
    }
    ctx->pc = 0x1D3B60u;
label_1d3b60:
    // 0x1d3b60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b64: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x1D3B64u;
    SET_GPR_U32(ctx, 31, 0x1D3B6Cu);
    ctx->pc = 0x1D3B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B64u;
            // 0x1d3b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B6Cu; }
        if (ctx->pc != 0x1D3B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B6Cu; }
        if (ctx->pc != 0x1D3B6Cu) { return; }
    }
    ctx->pc = 0x1D3B6Cu;
label_1d3b6c:
    // 0x1d3b6c: 0x18400060  blez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1D3B6Cu;
    {
        const bool branch_taken_0x1d3b6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d3b6c) {
            ctx->pc = 0x1D3CF0u;
            goto label_1d3cf0;
        }
    }
    ctx->pc = 0x1D3B74u;
    // 0x1d3b74: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b80: 0xc05d420  jal         func_175080
    ctx->pc = 0x1D3B80u;
    SET_GPR_U32(ctx, 31, 0x1D3B88u);
    ctx->pc = 0x1D3B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B80u;
            // 0x1d3b84: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B88u; }
        if (ctx->pc != 0x1D3B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B88u; }
        if (ctx->pc != 0x1D3B88u) { return; }
    }
    ctx->pc = 0x1D3B88u;
label_1d3b88:
    // 0x1d3b88: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3b8c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1d3b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3b90: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1d3b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1d3b94: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d3b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3b98: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1d3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1d3b9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d3b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d3ba0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3BA0u;
    {
        const bool branch_taken_0x1d3ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BA0u;
            // 0x1d3ba4: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ba0) {
            ctx->pc = 0x1D3BE4u;
            goto label_1d3be4;
        }
    }
    ctx->pc = 0x1D3BA8u;
    // 0x1d3ba8: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x1d3ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d3bac: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1d3bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1d3bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bb4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1d3bb8: 0xc072bf0  jal         func_1CAFC0
    ctx->pc = 0x1D3BB8u;
    SET_GPR_U32(ctx, 31, 0x1D3BC0u);
    ctx->pc = 0x1D3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BB8u;
            // 0x1d3bbc: 0x2484ff60  addiu       $a0, $a0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAFC0u;
    if (runtime->hasFunction(0x1CAFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1CAFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BC0u; }
        if (ctx->pc != 0x1D3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__13CDamageScore2Fiif_0x1cafc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BC0u; }
        if (ctx->pc != 0x1D3BC0u) { return; }
    }
    ctx->pc = 0x1D3BC0u;
label_1d3bc0:
    // 0x1d3bc0: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3bc4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1d3bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d3bc8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1d3bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d3bcc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d3bccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bd0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d3bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3bd4: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x1d3bd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d3bd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3bd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3bdc: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D3BDCu;
    SET_GPR_U32(ctx, 31, 0x1D3BE4u);
    ctx->pc = 0x1D3BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3BDCu;
            // 0x1d3be0: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BE4u; }
        if (ctx->pc != 0x1D3BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3BE4u; }
        if (ctx->pc != 0x1D3BE4u) { return; }
    }
    ctx->pc = 0x1D3BE4u;
label_1d3be4:
    // 0x1d3be4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d3be8: 0x8c22f6f4  lw          $v0, -0x90C($at)
    ctx->pc = 0x1d3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964980)));
    // 0x1d3bec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3bf0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d3bf4: 0xac22f6f4  sw          $v0, -0x90C($at)
    ctx->pc = 0x1d3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964980), GPR_U32(ctx, 2));
    // 0x1d3bf8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d3bfc: 0x8c22f6f4  lw          $v0, -0x90C($at)
    ctx->pc = 0x1d3bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964980)));
    // 0x1d3c00: 0x2842002d  slti        $v0, $v0, 0x2D
    ctx->pc = 0x1d3c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1d3c04: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D3C04u;
    {
        const bool branch_taken_0x1d3c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C04u;
            // 0x1d3c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c04) {
            ctx->pc = 0x1D3CD4u;
            goto label_1d3cd4;
        }
    }
    ctx->pc = 0x1D3C0Cu;
    // 0x1d3c0c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d3c10: 0x32220010  andi        $v0, $s1, 0x10
    ctx->pc = 0x1d3c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
    // 0x1d3c14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3C14u;
    {
        const bool branch_taken_0x1d3c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C14u;
            // 0x1d3c18: 0xac20f6f4  sw          $zero, -0x90C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c14) {
            ctx->pc = 0x1D3C40u;
            goto label_1d3c40;
        }
    }
    ctx->pc = 0x1D3C1Cu;
    // 0x1d3c1c: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3c20: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1d3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d3c24: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1d3c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1d3c28: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1d3c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d3c2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d3c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c30: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x1d3c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d3c34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3c34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c38: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D3C38u;
    SET_GPR_U32(ctx, 31, 0x1D3C40u);
    ctx->pc = 0x1D3C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C38u;
            // 0x1d3c3c: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C40u; }
        if (ctx->pc != 0x1D3C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C40u; }
        if (ctx->pc != 0x1D3C40u) { return; }
    }
    ctx->pc = 0x1D3C40u;
label_1d3c40:
    // 0x1d3c40: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1d3c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1d3c44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3C44u;
    {
        const bool branch_taken_0x1d3c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C44u;
            // 0x1d3c48: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c44) {
            ctx->pc = 0x1D3C74u;
            goto label_1d3c74;
        }
    }
    ctx->pc = 0x1D3C4Cu;
    // 0x1d3c4c: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3c50: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1d3c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d3c54: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d3c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d3c58: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d3c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c5c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d3c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c60: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x1d3c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d3c64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3c64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c68: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D3C68u;
    SET_GPR_U32(ctx, 31, 0x1D3C70u);
    ctx->pc = 0x1D3C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C68u;
            // 0x1d3c6c: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C70u; }
        if (ctx->pc != 0x1D3C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3C70u; }
        if (ctx->pc != 0x1D3C70u) { return; }
    }
    ctx->pc = 0x1D3C70u;
label_1d3c70:
    // 0x1d3c70: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x1d3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_1d3c74:
    // 0x1d3c74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3C74u;
    {
        const bool branch_taken_0x1d3c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C74u;
            // 0x1d3c78: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c74) {
            ctx->pc = 0x1D3CA4u;
            goto label_1d3ca4;
        }
    }
    ctx->pc = 0x1D3C7Cu;
    // 0x1d3c7c: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3c80: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d3c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d3c84: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1d3c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1d3c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d3c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c90: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x1d3c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d3c94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3c94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c98: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D3C98u;
    SET_GPR_U32(ctx, 31, 0x1D3CA0u);
    ctx->pc = 0x1D3C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3C98u;
            // 0x1d3c9c: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CA0u; }
        if (ctx->pc != 0x1D3CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CA0u; }
        if (ctx->pc != 0x1D3CA0u) { return; }
    }
    ctx->pc = 0x1D3CA0u;
label_1d3ca0:
    // 0x1d3ca0: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x1d3ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_1d3ca4:
    // 0x1d3ca4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3CA4u;
    {
        const bool branch_taken_0x1d3ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ca4) {
            ctx->pc = 0x1D3CD0u;
            goto label_1d3cd0;
        }
    }
    ctx->pc = 0x1D3CACu;
    // 0x1d3cac: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3cb0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1d3cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d3cb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d3cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cb8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d3cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d3cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3cc0: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1d3cc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cc8: 0xc070488  jal         func_1C1220
    ctx->pc = 0x1D3CC8u;
    SET_GPR_U32(ctx, 31, 0x1D3CD0u);
    ctx->pc = 0x1D3CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3CC8u;
            // 0x1d3ccc: 0x24440734  addiu       $a0, $v0, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1844));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CD0u; }
        if (ctx->pc != 0x1D3CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CD0u; }
        if (ctx->pc != 0x1D3CD0u) { return; }
    }
    ctx->pc = 0x1D3CD0u;
label_1d3cd0:
    // 0x1d3cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3cd4:
    // 0x1d3cd4: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x1D3CD4u;
    SET_GPR_U32(ctx, 31, 0x1D3CDCu);
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CDCu; }
        if (ctx->pc != 0x1D3CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3CDCu; }
        if (ctx->pc != 0x1D3CDCu) { return; }
    }
    ctx->pc = 0x1D3CDCu;
label_1d3cdc:
    // 0x1d3cdc: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3CDCu;
    {
        const bool branch_taken_0x1d3cdc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d3cdc) {
            ctx->pc = 0x1D3CF0u;
            goto label_1d3cf0;
        }
    }
    ctx->pc = 0x1D3CE4u;
    // 0x1d3ce4: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d3ce8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3cec: 0xac640bdc  sw          $a0, 0xBDC($v1)
    ctx->pc = 0x1d3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3036), GPR_U32(ctx, 4));
label_1d3cf0:
    // 0x1d3cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d3cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3cf4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3cfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3D00u;
            // 0x1d3d04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3D08u;
}
