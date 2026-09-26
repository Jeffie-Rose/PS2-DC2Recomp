#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EquipDirect__13CMenuItemInfoFiP13CGameDataUsedRi
// Address: 0x2409c0 - 0x240c78
void EquipDirect__13CMenuItemInfoFiP13CGameDataUsedRi_0x2409c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EquipDirect__13CMenuItemInfoFiP13CGameDataUsedRi_0x2409c0");
#endif

    switch (ctx->pc) {
        case 0x240a00u: goto label_240a00;
        case 0x240a10u: goto label_240a10;
        case 0x240a20u: goto label_240a20;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a4cu: goto label_240a4c;
        case 0x240becu: goto label_240bec;
        case 0x240c4cu: goto label_240c4c;
        default: break;
    }

    ctx->pc = 0x2409c0u;

    // 0x2409c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2409c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2409c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2409c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2409c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2409c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2409cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2409ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2409d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2409d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2409d4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2409d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2409d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2409dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2409dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2409e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2409e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2409e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2409e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2409e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2409ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2409ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409f0: 0x84d30002  lh          $s3, 0x2($a2)
    ctx->pc = 0x2409f0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2409f4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2409f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2409f8: 0xc0657b0  jal         func_195EC0
    ctx->pc = 0x2409F8u;
    SET_GPR_U32(ctx, 31, 0x240A00u);
    ctx->pc = 0x2409FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2409F8u;
            // 0x2409fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A00u; }
        if (ctx->pc != 0x240A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A00u; }
        if (ctx->pc != 0x240A00u) { return; }
    }
    ctx->pc = 0x240A00u;
label_240a00:
    // 0x240a00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x240a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a04: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x240a04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a08: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x240A08u;
    SET_GPR_U32(ctx, 31, 0x240A10u);
    ctx->pc = 0x240A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240A08u;
            // 0x240a0c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A10u; }
        if (ctx->pc != 0x240A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A10u; }
        if (ctx->pc != 0x240A10u) { return; }
    }
    ctx->pc = 0x240A10u;
label_240a10:
    // 0x240a10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x240A10u;
    {
        const bool branch_taken_0x240a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A10u;
            // 0x240a14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a10) {
            ctx->pc = 0x240A34u;
            goto label_240a34;
        }
    }
    ctx->pc = 0x240A18u;
    // 0x240a18: 0xc08e94c  jal         func_23A530
    ctx->pc = 0x240A18u;
    SET_GPR_U32(ctx, 31, 0x240A20u);
    ctx->pc = 0x23A530u;
    if (runtime->hasFunction(0x23A530u)) {
        auto targetFn = runtime->lookupFunction(0x23A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A20u; }
        if (ctx->pc != 0x240A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishCondition__Fv_0x23a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A20u; }
        if (ctx->pc != 0x240A20u) { return; }
    }
    ctx->pc = 0x240A20u;
label_240a20:
    // 0x240a20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240A20u;
    {
        const bool branch_taken_0x240a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A20u;
            // 0x240a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a20) {
            ctx->pc = 0x240A30u;
            goto label_240a30;
        }
    }
    ctx->pc = 0x240A28u;
    // 0x240a28: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x240A28u;
    {
        const bool branch_taken_0x240a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A28u;
            // 0x240a2c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a28) {
            ctx->pc = 0x240C54u;
            goto label_240c54;
        }
    }
    ctx->pc = 0x240A30u;
label_240a30:
    // 0x240a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x240a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_240a34:
    // 0x240a34: 0xc06847c  jal         func_1A11F0
    ctx->pc = 0x240A34u;
    SET_GPR_U32(ctx, 31, 0x240A3Cu);
    ctx->pc = 0x240A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240A34u;
            // 0x240a38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A11F0u;
    if (runtime->hasFunction(0x1A11F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A3Cu; }
        if (ctx->pc != 0x240A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsItemtypeWhoisEquip__FiPi_0x1a11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A3Cu; }
        if (ctx->pc != 0x240A3Cu) { return; }
    }
    ctx->pc = 0x240A3Cu;
label_240a3c:
    // 0x240a3c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x240a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x240a40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x240a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a44: 0xc0670b0  jal         func_19C2C0
    ctx->pc = 0x240A44u;
    SET_GPR_U32(ctx, 31, 0x240A4Cu);
    ctx->pc = 0x240A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240A44u;
            // 0x240a48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A4Cu; }
        if (ctx->pc != 0x240A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240A4Cu; }
        if (ctx->pc != 0x240A4Cu) { return; }
    }
    ctx->pc = 0x240A4Cu;
label_240a4c:
    // 0x240a4c: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x240a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x240a50: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x240A50u;
    {
        const bool branch_taken_0x240a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A50u;
            // 0x240a54: 0x30430008  andi        $v1, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a50) {
            ctx->pc = 0x240A6Cu;
            goto label_240a6c;
        }
    }
    ctx->pc = 0x240A58u;
    // 0x240a58: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x240A58u;
    {
        const bool branch_taken_0x240a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240a58) {
            ctx->pc = 0x240A6Cu;
            goto label_240a6c;
        }
    }
    ctx->pc = 0x240A60u;
    // 0x240a60: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x240a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x240a64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240A64u;
    {
        const bool branch_taken_0x240a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240a64) {
            ctx->pc = 0x240A74u;
            goto label_240a74;
        }
    }
    ctx->pc = 0x240A6Cu;
label_240a6c:
    // 0x240a6c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x240A6Cu;
    {
        const bool branch_taken_0x240a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A6Cu;
            // 0x240a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a6c) {
            ctx->pc = 0x240C50u;
            goto label_240c50;
        }
    }
    ctx->pc = 0x240A74u;
label_240a74:
    // 0x240a74: 0x86450110  lh          $a1, 0x110($s2)
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x240a78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x240a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x240a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a80: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240A80u;
    {
        const bool branch_taken_0x240a80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x240A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A80u;
            // 0x240a84: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a80) {
            ctx->pc = 0x240A98u;
            goto label_240a98;
        }
    }
    ctx->pc = 0x240A88u;
    // 0x240a88: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x240a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x240a8c: 0x16c40003  bne         $s6, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240A8Cu;
    {
        const bool branch_taken_0x240a8c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x240A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A8Cu;
            // 0x240a90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a8c) {
            ctx->pc = 0x240A9Cu;
            goto label_240a9c;
        }
    }
    ctx->pc = 0x240A94u;
    // 0x240a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240a98:
    // 0x240a98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_240a9c:
    // 0x240a9c: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240A9Cu;
    {
        const bool branch_taken_0x240a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x240AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240A9Cu;
            // 0x240aa0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a9c) {
            ctx->pc = 0x240AB0u;
            goto label_240ab0;
        }
    }
    ctx->pc = 0x240AA4u;
    // 0x240aa4: 0x16c40002  bne         $s6, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240AA4u;
    {
        const bool branch_taken_0x240aa4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x240aa4) {
            ctx->pc = 0x240AB0u;
            goto label_240ab0;
        }
    }
    ctx->pc = 0x240AACu;
    // 0x240aac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240ab0:
    // 0x240ab0: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x240AB0u;
    {
        const bool branch_taken_0x240ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x240ab0) {
            ctx->pc = 0x240AC4u;
            goto label_240ac4;
        }
    }
    ctx->pc = 0x240AB8u;
    // 0x240ab8: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x240AB8u;
    {
        const bool branch_taken_0x240ab8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x240ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240AB8u;
            // 0x240abc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ab8) {
            ctx->pc = 0x240AC4u;
            goto label_240ac4;
        }
    }
    ctx->pc = 0x240AC0u;
    // 0x240ac0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x240ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_240ac4:
    // 0x240ac4: 0x86450110  lh          $a1, 0x110($s2)
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x240ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240acc: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240ACCu;
    {
        const bool branch_taken_0x240acc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x240acc) {
            ctx->pc = 0x240AE0u;
            goto label_240ae0;
        }
    }
    ctx->pc = 0x240AD4u;
    // 0x240ad4: 0x12640002  beq         $s3, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240AD4u;
    {
        const bool branch_taken_0x240ad4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x240AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240AD4u;
            // 0x240ad8: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ad4) {
            ctx->pc = 0x240AE0u;
            goto label_240ae0;
        }
    }
    ctx->pc = 0x240ADCu;
    // 0x240adc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x240adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_240ae0:
    // 0x240ae0: 0x86450110  lh          $a1, 0x110($s2)
    ctx->pc = 0x240ae0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x240ae4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x240ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240ae8: 0x14a40010  bne         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x240AE8u;
    {
        const bool branch_taken_0x240ae8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x240AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240AE8u;
            // 0x240aec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ae8) {
            ctx->pc = 0x240B2Cu;
            goto label_240b2c;
        }
    }
    ctx->pc = 0x240AF0u;
    // 0x240af0: 0x12640004  beq         $s3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x240AF0u;
    {
        const bool branch_taken_0x240af0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x240AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240AF0u;
            // 0x240af4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240af0) {
            ctx->pc = 0x240B04u;
            goto label_240b04;
        }
    }
    ctx->pc = 0x240AF8u;
    // 0x240af8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x240af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x240afc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x240afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x240b00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240b04:
    // 0x240b04: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240B04u;
    {
        const bool branch_taken_0x240b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x240B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B04u;
            // 0x240b08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b04) {
            ctx->pc = 0x240B1Cu;
            goto label_240b1c;
        }
    }
    ctx->pc = 0x240B0Cu;
    // 0x240b0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x240b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240b10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x240b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b14: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x240b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x240b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240b1c:
    // 0x240b1c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240B1Cu;
    {
        const bool branch_taken_0x240b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x240B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B1Cu;
            // 0x240b20: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b1c) {
            ctx->pc = 0x240B2Cu;
            goto label_240b2c;
        }
    }
    ctx->pc = 0x240B24u;
    // 0x240b24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x240b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b28: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x240b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_240b2c:
    // 0x240b2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x240b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x240b30: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240B30u;
    {
        const bool branch_taken_0x240b30 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x240B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B30u;
            // 0x240b34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b30) {
            ctx->pc = 0x240B40u;
            goto label_240b40;
        }
    }
    ctx->pc = 0x240B38u;
    // 0x240b38: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x240B38u;
    {
        const bool branch_taken_0x240b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B38u;
            // 0x240b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b38) {
            ctx->pc = 0x240C50u;
            goto label_240c50;
        }
    }
    ctx->pc = 0x240B40u;
label_240b40:
    // 0x240b40: 0x27b2008a  addiu       $s2, $sp, 0x8A
    ctx->pc = 0x240b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 138));
    // 0x240b44: 0xa6470000  sh          $a3, 0x0($s2)
    ctx->pc = 0x240b44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x240b48: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x240b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x240b4c: 0xa7a4008c  sh          $a0, 0x8C($sp)
    ctx->pc = 0x240b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 140), (uint16_t)GPR_U32(ctx, 4));
    // 0x240b50: 0xa7b5008e  sh          $s5, 0x8E($sp)
    ctx->pc = 0x240b50u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 142), (uint16_t)GPR_U32(ctx, 21));
    // 0x240b54: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x240B54u;
    {
        const bool branch_taken_0x240b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B54u;
            // 0x240b58: 0xa7a00088  sh          $zero, 0x88($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b54) {
            ctx->pc = 0x240BD4u;
            goto label_240bd4;
        }
    }
    ctx->pc = 0x240B5Cu;
    // 0x240b5c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x240b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x240b60: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x240b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x240b64: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x240b68: 0x2484d8c0  addiu       $a0, $a0, -0x2740
    ctx->pc = 0x240b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
    // 0x240b6c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x240b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x240b70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x240b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240b74: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x240b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x240b78: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x240b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x240b7c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x240b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x240b80: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x240b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x240b84: 0xa6470000  sh          $a3, 0x0($s2)
    ctx->pc = 0x240b84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x240b88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x240b88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x240b8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x240b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x240b90: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x240B90u;
    {
        const bool branch_taken_0x240b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x240B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240B90u;
            // 0x240b94: 0x24940170  addiu       $s4, $a0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240b90) {
            ctx->pc = 0x240BB0u;
            goto label_240bb0;
        }
    }
    ctx->pc = 0x240B98u;
    // 0x240b98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x240b9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240ba0: 0x8c24d8c0  lw          $a0, -0x2740($at)
    ctx->pc = 0x240ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x240ba4: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x240ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x240ba8: 0x24940320  addiu       $s4, $a0, 0x320
    ctx->pc = 0x240ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    // 0x240bac: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x240bacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_240bb0:
    // 0x240bb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240bb4: 0x1464001f  bne         $v1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x240BB4u;
    {
        const bool branch_taken_0x240bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x240BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BB4u;
            // 0x240bb8: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bb4) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240BBCu;
    // 0x240bbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240bc0: 0x8c23d8c0  lw          $v1, -0x2740($at)
    ctx->pc = 0x240bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x240bc4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x240bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x240bc8: 0x24740248  addiu       $s4, $v1, 0x248
    ctx->pc = 0x240bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 584));
    // 0x240bcc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x240BCCu;
    {
        const bool branch_taken_0x240bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BCCu;
            // 0x240bd0: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bcc) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240BD4u;
label_240bd4:
    // 0x240bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240bd8: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x240BD8u;
    {
        const bool branch_taken_0x240bd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x240bd8) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240BE0u;
    // 0x240be0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x240be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240be4: 0xc08e9a0  jal         func_23A680
    ctx->pc = 0x240BE4u;
    SET_GPR_U32(ctx, 31, 0x240BECu);
    ctx->pc = 0x240BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240BE4u;
            // 0x240be8: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A680u;
    if (runtime->hasFunction(0x23A680u)) {
        auto targetFn = runtime->lookupFunction(0x23A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BECu; }
        if (ctx->pc != 0x240BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEnableChangeRoboParts__FP13CGameDataUsed_0x23a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240BECu; }
        if (ctx->pc != 0x240BECu) { return; }
    }
    ctx->pc = 0x240BECu;
label_240bec:
    // 0x240bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240bf0: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x240BF0u;
    {
        const bool branch_taken_0x240bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x240BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240BF0u;
            // 0x240bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240bf0) {
            ctx->pc = 0x240C2Cu;
            goto label_240c2c;
        }
    }
    ctx->pc = 0x240BF8u;
    // 0x240bf8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x240bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x240bfc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x240c00: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x240c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x240c04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240c08: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x240c08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x240c0c: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x240c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x240c10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x240c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x240c14: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x240c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x240c18: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x240c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x240c1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240c20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x240c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x240C24u;
    {
        const bool branch_taken_0x240c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C24u;
            // 0x240c28: 0x24540030  addiu       $s4, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240c24) {
            ctx->pc = 0x240C34u;
            goto label_240c34;
        }
    }
    ctx->pc = 0x240C2Cu;
label_240c2c:
    // 0x240c2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x240C2Cu;
    {
        const bool branch_taken_0x240c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240c2c) {
            ctx->pc = 0x240C50u;
            goto label_240c50;
        }
    }
    ctx->pc = 0x240C34u;
label_240c34:
    // 0x240c34: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x240c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240c38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x240c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240c3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x240c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240c40: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x240c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x240c44: 0xc08f9ac  jal         func_23E6B0
    ctx->pc = 0x240C44u;
    SET_GPR_U32(ctx, 31, 0x240C4Cu);
    ctx->pc = 0x240C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240C44u;
            // 0x240c48: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E6B0u;
    if (runtime->hasFunction(0x23E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C4Cu; }
        if (ctx->pc != 0x240C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240C4Cu; }
        if (ctx->pc != 0x240C4Cu) { return; }
    }
    ctx->pc = 0x240C4Cu;
label_240c4c:
    // 0x240c4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x240c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_240c50:
    // 0x240c50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x240c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_240c54:
    // 0x240c54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x240c54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x240c58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x240c58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x240c5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x240c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x240c60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x240c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240c64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240c68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240c68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240c70: 0x3e00008  jr          $ra
    ctx->pc = 0x240C70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240C70u;
            // 0x240c74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240C78u;
}
