#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelectInGiftBox__14CBaseMenuClassFii
// Address: 0x239a80 - 0x239c30
void SelectInGiftBox__14CBaseMenuClassFii_0x239a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelectInGiftBox__14CBaseMenuClassFii_0x239a80");
#endif

    switch (ctx->pc) {
        case 0x239b00u: goto label_239b00;
        case 0x239b3cu: goto label_239b3c;
        case 0x239b58u: goto label_239b58;
        case 0x239b70u: goto label_239b70;
        case 0x239b80u: goto label_239b80;
        case 0x239b88u: goto label_239b88;
        case 0x239b98u: goto label_239b98;
        case 0x239bb0u: goto label_239bb0;
        case 0x239bc0u: goto label_239bc0;
        case 0x239bc8u: goto label_239bc8;
        case 0x239bd8u: goto label_239bd8;
        case 0x239be8u: goto label_239be8;
        case 0x239c04u: goto label_239c04;
        case 0x239c14u: goto label_239c14;
        default: break;
    }

    ctx->pc = 0x239a80u;

    // 0x239a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239a84: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x239a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x239a88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x239a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x239a8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x239a90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x239a94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x239a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239a9c: 0x8f839368  lw          $v1, -0x6C98($gp)
    ctx->pc = 0x239a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239aa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239AA0u;
    {
        const bool branch_taken_0x239aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AA0u;
            // 0x239aa4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aa0) {
            ctx->pc = 0x239AB0u;
            goto label_239ab0;
        }
    }
    ctx->pc = 0x239AA8u;
    // 0x239aa8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x239aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x239aac: 0xaf829368  sw          $v0, -0x6C98($gp)
    ctx->pc = 0x239aacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939496), GPR_U32(ctx, 2));
label_239ab0:
    // 0x239ab0: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x239ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x239ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239AB4u;
    {
        const bool branch_taken_0x239ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239ab4) {
            ctx->pc = 0x239AC8u;
            goto label_239ac8;
        }
    }
    ctx->pc = 0x239ABCu;
    // 0x239abc: 0x8f829368  lw          $v0, -0x6C98($gp)
    ctx->pc = 0x239abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239ac0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239ac4: 0xaf829368  sw          $v0, -0x6C98($gp)
    ctx->pc = 0x239ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939496), GPR_U32(ctx, 2));
label_239ac8:
    // 0x239ac8: 0x8f829368  lw          $v0, -0x6C98($gp)
    ctx->pc = 0x239ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239acc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239ACCu;
    {
        const bool branch_taken_0x239acc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x239acc) {
            ctx->pc = 0x239AD8u;
            goto label_239ad8;
        }
    }
    ctx->pc = 0x239AD4u;
    // 0x239ad4: 0xaf809368  sw          $zero, -0x6C98($gp)
    ctx->pc = 0x239ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939496), GPR_U32(ctx, 0));
label_239ad8:
    // 0x239ad8: 0x8f829368  lw          $v0, -0x6C98($gp)
    ctx->pc = 0x239ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239adc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x239adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x239ae0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239AE0u;
    {
        const bool branch_taken_0x239ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AE0u;
            // 0x239ae4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ae0) {
            ctx->pc = 0x239AECu;
            goto label_239aec;
        }
    }
    ctx->pc = 0x239AE8u;
    // 0x239ae8: 0xaf829368  sw          $v0, -0x6C98($gp)
    ctx->pc = 0x239ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939496), GPR_U32(ctx, 2));
label_239aec:
    // 0x239aec: 0x8f829368  lw          $v0, -0x6C98($gp)
    ctx->pc = 0x239aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239af0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239AF0u;
    {
        const bool branch_taken_0x239af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AF0u;
            // 0x239af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239af0) {
            ctx->pc = 0x239B00u;
            goto label_239b00;
        }
    }
    ctx->pc = 0x239AF8u;
    // 0x239af8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239AF8u;
    SET_GPR_U32(ctx, 31, 0x239B00u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B00u; }
        if (ctx->pc != 0x239B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B00u; }
        if (ctx->pc != 0x239B00u) { return; }
    }
    ctx->pc = 0x239B00u;
label_239b00:
    // 0x239b00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x239b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x239b04: 0x1222003a  beq         $s1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x239B04u;
    {
        const bool branch_taken_0x239b04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x239B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B04u;
            // 0x239b08: 0x8e5000d4  lw          $s0, 0xD4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b04) {
            ctx->pc = 0x239BF0u;
            goto label_239bf0;
        }
    }
    ctx->pc = 0x239B0Cu;
    // 0x239b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239b10: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x239B10u;
    {
        const bool branch_taken_0x239b10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x239B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B10u;
            // 0x239b14: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b10) {
            ctx->pc = 0x239B30u;
            goto label_239b30;
        }
    }
    ctx->pc = 0x239B18u;
    // 0x239b18: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x239B18u;
    {
        const bool branch_taken_0x239b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x239B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B18u;
            // 0x239b1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b18) {
            ctx->pc = 0x239B30u;
            goto label_239b30;
        }
    }
    ctx->pc = 0x239B20u;
    // 0x239b20: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239B20u;
    {
        const bool branch_taken_0x239b20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x239b20) {
            ctx->pc = 0x239B30u;
            goto label_239b30;
        }
    }
    ctx->pc = 0x239B28u;
    // 0x239b28: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x239B28u;
    {
        const bool branch_taken_0x239b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B28u;
            // 0x239b2c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b28) {
            ctx->pc = 0x239C18u;
            goto label_239c18;
        }
    }
    ctx->pc = 0x239B30u;
label_239b30:
    // 0x239b30: 0x8f859368  lw          $a1, -0x6C98($gp)
    ctx->pc = 0x239b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239b34: 0xc066648  jal         func_199920
    ctx->pc = 0x239B34u;
    SET_GPR_U32(ctx, 31, 0x239B3Cu);
    ctx->pc = 0x239B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B34u;
            // 0x239b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B3Cu; }
        if (ctx->pc != 0x239B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B3Cu; }
        if (ctx->pc != 0x239B3Cu) { return; }
    }
    ctx->pc = 0x239B3Cu;
label_239b3c:
    // 0x239b3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b40: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x239b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x239b44: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x239B44u;
    {
        const bool branch_taken_0x239b44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B44u;
            // 0x239b48: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b44) {
            ctx->pc = 0x239BE0u;
            goto label_239be0;
        }
    }
    ctx->pc = 0x239B4Cu;
    // 0x239b4c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x239b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x239b50: 0xc067674  jal         func_19D9D0
    ctx->pc = 0x239B50u;
    SET_GPR_U32(ctx, 31, 0x239B58u);
    ctx->pc = 0x239B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B50u;
            // 0x239b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D9D0u;
    if (runtime->hasFunction(0x19D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B58u; }
        if (ctx->pc != 0x239B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFi_0x19d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B58u; }
        if (ctx->pc != 0x239B58u) { return; }
    }
    ctx->pc = 0x239B58u;
label_239b58:
    // 0x239b58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x239B58u;
    {
        const bool branch_taken_0x239b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b58) {
            ctx->pc = 0x239B90u;
            goto label_239b90;
        }
    }
    ctx->pc = 0x239B60u;
    // 0x239b60: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x239b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x239b64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b68: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x239B68u;
    SET_GPR_U32(ctx, 31, 0x239B70u);
    ctx->pc = 0x239B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B68u;
            // 0x239b6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B70u; }
        if (ctx->pc != 0x239B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B70u; }
        if (ctx->pc != 0x239B70u) { return; }
    }
    ctx->pc = 0x239B70u;
label_239b70:
    // 0x239b70: 0x8f869368  lw          $a2, -0x6C98($gp)
    ctx->pc = 0x239b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239b78: 0xc06662c  jal         func_1998B0
    ctx->pc = 0x239B78u;
    SET_GPR_U32(ctx, 31, 0x239B80u);
    ctx->pc = 0x239B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B78u;
            // 0x239b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1998B0u;
    if (runtime->hasFunction(0x1998B0u)) {
        auto targetFn = runtime->lookupFunction(0x1998B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B80u; }
        if (ctx->pc != 0x239B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGiftBoxItem__13CGameDataUsedFii_0x1998b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B80u; }
        if (ctx->pc != 0x239B80u) { return; }
    }
    ctx->pc = 0x239B80u;
label_239b80:
    // 0x239b80: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239B80u;
    SET_GPR_U32(ctx, 31, 0x239B88u);
    ctx->pc = 0x239B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B80u;
            // 0x239b84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B88u; }
        if (ctx->pc != 0x239B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B88u; }
        if (ctx->pc != 0x239B88u) { return; }
    }
    ctx->pc = 0x239B88u;
label_239b88:
    // 0x239b88: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x239B88u;
    {
        const bool branch_taken_0x239b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239b88) {
            ctx->pc = 0x239C14u;
            goto label_239c14;
        }
    }
    ctx->pc = 0x239B90u;
label_239b90:
    // 0x239b90: 0xc067660  jal         func_19D980
    ctx->pc = 0x239B90u;
    SET_GPR_U32(ctx, 31, 0x239B98u);
    ctx->pc = 0x239B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B90u;
            // 0x239b94: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D980u;
    if (runtime->hasFunction(0x19D980u)) {
        auto targetFn = runtime->lookupFunction(0x19D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B98u; }
        if (ctx->pc != 0x239B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFv_0x19d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B98u; }
        if (ctx->pc != 0x239B98u) { return; }
    }
    ctx->pc = 0x239B98u;
label_239b98:
    // 0x239b98: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x239B98u;
    {
        const bool branch_taken_0x239b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B98u;
            // 0x239b9c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b98) {
            ctx->pc = 0x239BD0u;
            goto label_239bd0;
        }
    }
    ctx->pc = 0x239BA0u;
    // 0x239ba0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x239ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x239ba4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ba8: 0xc067a78  jal         func_19E9E0
    ctx->pc = 0x239BA8u;
    SET_GPR_U32(ctx, 31, 0x239BB0u);
    ctx->pc = 0x239BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239BA8u;
            // 0x239bac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E9E0u;
    if (runtime->hasFunction(0x19E9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19E9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BB0u; }
        if (ctx->pc != 0x239BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__16CUserDataManagerFP13CGameDataUsedi_0x19e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BB0u; }
        if (ctx->pc != 0x239BB0u) { return; }
    }
    ctx->pc = 0x239BB0u;
label_239bb0:
    // 0x239bb0: 0x8f869368  lw          $a2, -0x6C98($gp)
    ctx->pc = 0x239bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939496)));
    // 0x239bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bb8: 0xc06662c  jal         func_1998B0
    ctx->pc = 0x239BB8u;
    SET_GPR_U32(ctx, 31, 0x239BC0u);
    ctx->pc = 0x239BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239BB8u;
            // 0x239bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1998B0u;
    if (runtime->hasFunction(0x1998B0u)) {
        auto targetFn = runtime->lookupFunction(0x1998B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BC0u; }
        if (ctx->pc != 0x239BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGiftBoxItem__13CGameDataUsedFii_0x1998b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BC0u; }
        if (ctx->pc != 0x239BC0u) { return; }
    }
    ctx->pc = 0x239BC0u;
label_239bc0:
    // 0x239bc0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239BC0u;
    SET_GPR_U32(ctx, 31, 0x239BC8u);
    ctx->pc = 0x239BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239BC0u;
            // 0x239bc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BC8u; }
        if (ctx->pc != 0x239BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BC8u; }
        if (ctx->pc != 0x239BC8u) { return; }
    }
    ctx->pc = 0x239BC8u;
label_239bc8:
    // 0x239bc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x239BC8u;
    {
        const bool branch_taken_0x239bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239bc8) {
            ctx->pc = 0x239C14u;
            goto label_239c14;
        }
    }
    ctx->pc = 0x239BD0u;
label_239bd0:
    // 0x239bd0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239BD0u;
    SET_GPR_U32(ctx, 31, 0x239BD8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BD8u; }
        if (ctx->pc != 0x239BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BD8u; }
        if (ctx->pc != 0x239BD8u) { return; }
    }
    ctx->pc = 0x239BD8u;
label_239bd8:
    // 0x239bd8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x239BD8u;
    {
        const bool branch_taken_0x239bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239bd8) {
            ctx->pc = 0x239C14u;
            goto label_239c14;
        }
    }
    ctx->pc = 0x239BE0u;
label_239be0:
    // 0x239be0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239BE0u;
    SET_GPR_U32(ctx, 31, 0x239BE8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BE8u; }
        if (ctx->pc != 0x239BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239BE8u; }
        if (ctx->pc != 0x239BE8u) { return; }
    }
    ctx->pc = 0x239BE8u;
label_239be8:
    // 0x239be8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x239BE8u;
    {
        const bool branch_taken_0x239be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239be8) {
            ctx->pc = 0x239C14u;
            goto label_239c14;
        }
    }
    ctx->pc = 0x239BF0u;
label_239bf0:
    // 0x239bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239bf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x239bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239bf8: 0xaf829368  sw          $v0, -0x6C98($gp)
    ctx->pc = 0x239bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939496), GPR_U32(ctx, 2));
    // 0x239bfc: 0xc08e768  jal         func_239DA0
    ctx->pc = 0x239BFCu;
    SET_GPR_U32(ctx, 31, 0x239C04u);
    ctx->pc = 0x239C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239BFCu;
            // 0x239c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239DA0u;
    if (runtime->hasFunction(0x239DA0u)) {
        auto targetFn = runtime->lookupFunction(0x239DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C04u; }
        if (ctx->pc != 0x239C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C04u; }
        if (ctx->pc != 0x239C04u) { return; }
    }
    ctx->pc = 0x239C04u;
label_239c04:
    // 0x239c04: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x239c04u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x239c08: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x239c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239c0c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239C0Cu;
    SET_GPR_U32(ctx, 31, 0x239C14u);
    ctx->pc = 0x239C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239C0Cu;
            // 0x239c10: 0xa380936c  sb          $zero, -0x6C94($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939500), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C14u; }
        if (ctx->pc != 0x239C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C14u; }
        if (ctx->pc != 0x239C14u) { return; }
    }
    ctx->pc = 0x239C14u;
label_239c14:
    // 0x239c14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x239c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239c18:
    // 0x239c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x239c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239c1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239c1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239c28: 0x3e00008  jr          $ra
    ctx->pc = 0x239C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239C28u;
            // 0x239c2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239C30u;
}
