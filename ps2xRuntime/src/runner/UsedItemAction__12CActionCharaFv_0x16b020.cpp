#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UsedItemAction__12CActionCharaFv
// Address: 0x16b020 - 0x16b1b4
void UsedItemAction__12CActionCharaFv_0x16b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UsedItemAction__12CActionCharaFv_0x16b020");
#endif

    switch (ctx->pc) {
        case 0x16b044u: goto label_16b044;
        case 0x16b054u: goto label_16b054;
        case 0x16b094u: goto label_16b094;
        case 0x16b0b8u: goto label_16b0b8;
        case 0x16b0d0u: goto label_16b0d0;
        case 0x16b11cu: goto label_16b11c;
        case 0x16b140u: goto label_16b140;
        case 0x16b158u: goto label_16b158;
        case 0x16b16cu: goto label_16b16c;
        case 0x16b184u: goto label_16b184;
        default: break;
    }

    ctx->pc = 0x16b020u;

    // 0x16b020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16b024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16b028: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16b02c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16b02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16b030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16b038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16b038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b03c: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x16B03Cu;
    SET_GPR_U32(ctx, 31, 0x16B044u);
    ctx->pc = 0x16B040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B03Cu;
            // 0x16b040: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B044u; }
        if (ctx->pc != 0x16B044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B044u; }
        if (ctx->pc != 0x16B044u) { return; }
    }
    ctx->pc = 0x16B044u;
label_16b044:
    // 0x16b044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b04c: 0xc067ce0  jal         func_19F380
    ctx->pc = 0x16B04Cu;
    SET_GPR_U32(ctx, 31, 0x16B054u);
    ctx->pc = 0x16B050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B04Cu;
            // 0x16b050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F380u;
    if (runtime->hasFunction(0x19F380u)) {
        auto targetFn = runtime->lookupFunction(0x19F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B054u; }
        if (ctx->pc != 0x16B054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveItemInfo__16CBattleCharaInfoFi_0x19f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B054u; }
        if (ctx->pc != 0x16B054u) { return; }
    }
    ctx->pc = 0x16B054u;
label_16b054:
    // 0x16b054: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x16b054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x16b058: 0x8c25f6ec  lw          $a1, -0x914($at)
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964972)));
    // 0x16b05c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x16b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16b060: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x16b060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16b064: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b068: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x16b068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b06c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b070: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x16b070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16b074: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b078: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B078u;
    {
        const bool branch_taken_0x16b078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x16b078) {
            ctx->pc = 0x16B088u;
            goto label_16b088;
        }
    }
    ctx->pc = 0x16B080u;
    // 0x16b080: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x16B080u;
    {
        const bool branch_taken_0x16b080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B080u;
            // 0x16b084: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b080) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B088u;
label_16b088:
    // 0x16b088: 0x86710002  lh          $s1, 0x2($s3)
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x16b08c: 0xc06570c  jal         func_195C30
    ctx->pc = 0x16B08Cu;
    SET_GPR_U32(ctx, 31, 0x16B094u);
    ctx->pc = 0x16B090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B08Cu;
            // 0x16b090: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C30u;
    if (runtime->hasFunction(0x195C30u)) {
        auto targetFn = runtime->lookupFunction(0x195C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B094u; }
        if (ctx->pc != 0x16B094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemInfoData__Fi_0x195c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B094u; }
        if (ctx->pc != 0x16B094u) { return; }
    }
    ctx->pc = 0x16B094u;
label_16b094:
    // 0x16b094: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16b094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b098: 0x1280003e  beqz        $s4, . + 4 + (0x3E << 2)
    ctx->pc = 0x16B098u;
    {
        const bool branch_taken_0x16b098 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B098u;
            // 0x16b09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b098) {
            ctx->pc = 0x16B194u;
            goto label_16b194;
        }
    }
    ctx->pc = 0x16B0A0u;
    // 0x16b0a0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x16b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16b0a4: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x16b0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x16b0a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16B0A8u;
    {
        const bool branch_taken_0x16b0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0A8u;
            // 0x16b0ac: 0x30620019  andi        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)25);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0a8) {
            ctx->pc = 0x16B0C0u;
            goto label_16b0c0;
        }
    }
    ctx->pc = 0x16B0B0u;
    // 0x16b0b0: 0xc05ac70  jal         func_16B1C0
    ctx->pc = 0x16B0B0u;
    SET_GPR_U32(ctx, 31, 0x16B0B8u);
    ctx->pc = 0x16B0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0B0u;
            // 0x16b0b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B1C0u;
    if (runtime->hasFunction(0x16B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x16B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0B8u; }
        if (ctx->pc != 0x16B0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryThrowItem__12CActionCharaFv_0x16b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0B8u; }
        if (ctx->pc != 0x16B0B8u) { return; }
    }
    ctx->pc = 0x16B0B8u;
label_16b0b8:
    // 0x16b0b8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x16B0B8u;
    {
        const bool branch_taken_0x16b0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0B8u;
            // 0x16b0bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0b8) {
            ctx->pc = 0x16B194u;
            goto label_16b194;
        }
    }
    ctx->pc = 0x16B0C0u;
label_16b0c0:
    // 0x16b0c0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x16B0C0u;
    {
        const bool branch_taken_0x16b0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0C0u;
            // 0x16b0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0c0) {
            ctx->pc = 0x16B190u;
            goto label_16b190;
        }
    }
    ctx->pc = 0x16B0C8u;
    // 0x16b0c8: 0xc067cec  jal         func_19F3B0
    ctx->pc = 0x16B0C8u;
    SET_GPR_U32(ctx, 31, 0x16B0D0u);
    ctx->pc = 0x16B0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0C8u;
            // 0x16b0cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3B0u;
    if (runtime->hasFunction(0x19F3B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0D0u; }
        if (ctx->pc != 0x16B0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseActiveItem__16CBattleCharaInfoFP13CGameDataUsed_0x19f3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0D0u; }
        if (ctx->pc != 0x16B0D0u) { return; }
    }
    ctx->pc = 0x16B0D0u;
label_16b0d0:
    // 0x16b0d0: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x16B0D0u;
    {
        const bool branch_taken_0x16b0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0D0u;
            // 0x16b0d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0d0) {
            ctx->pc = 0x16B188u;
            goto label_16b188;
        }
    }
    ctx->pc = 0x16B0D8u;
    // 0x16b0d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x16b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16b0dc: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x16b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x16b0e0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x16B0E0u;
    {
        const bool branch_taken_0x16b0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0E0u;
            // 0x16b0e4: 0x24020112  addiu       $v0, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0e0) {
            ctx->pc = 0x16B184u;
            goto label_16b184;
        }
    }
    ctx->pc = 0x16B0E8u;
    // 0x16b0e8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B0E8u;
    {
        const bool branch_taken_0x16b0e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0E8u;
            // 0x16b0ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0e8) {
            ctx->pc = 0x16B0F4u;
            goto label_16b0f4;
        }
    }
    ctx->pc = 0x16B0F0u;
    // 0x16b0f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16b0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b0f4:
    // 0x16b0f4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x16B0F4u;
    {
        const bool branch_taken_0x16b0f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0F4u;
            // 0x16b0f8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0f4) {
            ctx->pc = 0x16B120u;
            goto label_16b120;
        }
    }
    ctx->pc = 0x16B0FCu;
    // 0x16b0fc: 0x26440734  addiu       $a0, $s2, 0x734
    ctx->pc = 0x16b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1844));
    // 0x16b100: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x16b100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x16b104: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x16b104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x16b108: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x16b108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16b10c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16b10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b110: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x16b110u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16b114: 0xc070488  jal         func_1C1220
    ctx->pc = 0x16B114u;
    SET_GPR_U32(ctx, 31, 0x16B11Cu);
    ctx->pc = 0x16B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B114u;
            // 0x16b118: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B11Cu; }
        if (ctx->pc != 0x16B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B11Cu; }
        if (ctx->pc != 0x16B11Cu) { return; }
    }
    ctx->pc = 0x16B11Cu;
label_16b11c:
    // 0x16b11c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16b11cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b120:
    // 0x16b120: 0x16080007  bne         $s0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16B120u;
    {
        const bool branch_taken_0x16b120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        ctx->pc = 0x16B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B120u;
            // 0x16b124: 0x26440734  addiu       $a0, $s2, 0x734 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1844));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b120) {
            ctx->pc = 0x16B140u;
            goto label_16b140;
        }
    }
    ctx->pc = 0x16B128u;
    // 0x16b128: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x16b128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16b12c: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x16b12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x16b130: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x16b130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x16b134: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x16b134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16b138: 0xc070488  jal         func_1C1220
    ctx->pc = 0x16B138u;
    SET_GPR_U32(ctx, 31, 0x16B140u);
    ctx->pc = 0x16B13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B138u;
            // 0x16b13c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B140u; }
        if (ctx->pc != 0x16B140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B140u; }
        if (ctx->pc != 0x16B140u) { return; }
    }
    ctx->pc = 0x16B140u;
label_16b140:
    // 0x16b140: 0x8e4407dc  lw          $a0, 0x7DC($s2)
    ctx->pc = 0x16b140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2012)));
    // 0x16b144: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16b144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x16b148: 0x24a53540  addiu       $a1, $a1, 0x3540
    ctx->pc = 0x16b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13632));
    // 0x16b14c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b150: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x16B150u;
    SET_GPR_U32(ctx, 31, 0x16B158u);
    ctx->pc = 0x16B154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B150u;
            // 0x16b154: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B158u; }
        if (ctx->pc != 0x16B158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B158u; }
        if (ctx->pc != 0x16B158u) { return; }
    }
    ctx->pc = 0x16B158u;
label_16b158:
    // 0x16b158: 0x8e4407dc  lw          $a0, 0x7DC($s2)
    ctx->pc = 0x16b158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2012)));
    // 0x16b15c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16b15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b164: 0xc0b891c  jal         func_2E2470
    ctx->pc = 0x16B164u;
    SET_GPR_U32(ctx, 31, 0x16B16Cu);
    ctx->pc = 0x16B168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B164u;
            // 0x16b168: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B16Cu; }
        if (ctx->pc != 0x16B16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B16Cu; }
        if (ctx->pc != 0x16B16Cu) { return; }
    }
    ctx->pc = 0x16B16Cu;
label_16b16c:
    // 0x16b16c: 0x8e4407dc  lw          $a0, 0x7DC($s2)
    ctx->pc = 0x16b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2012)));
    // 0x16b170: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16b170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b178: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16b178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b17c: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x16B17Cu;
    SET_GPR_U32(ctx, 31, 0x16B184u);
    ctx->pc = 0x16B180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B17Cu;
            // 0x16b180: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B184u; }
        if (ctx->pc != 0x16B184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B184u; }
        if (ctx->pc != 0x16B184u) { return; }
    }
    ctx->pc = 0x16B184u;
label_16b184:
    // 0x16b184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b188:
    // 0x16b188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B188u;
    {
        const bool branch_taken_0x16b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b188) {
            ctx->pc = 0x16B194u;
            goto label_16b194;
        }
    }
    ctx->pc = 0x16B190u;
label_16b190:
    // 0x16b190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16b190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b194:
    // 0x16b194: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16b194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16b198:
    // 0x16b198: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16b198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b19c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b1a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b1a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b1a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x16B1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B1ACu;
            // 0x16b1b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B1B4u;
}
