#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AllocEffect__15BattleEffectManFiP9mgCMemoryi
// Address: 0x1c4df0 - 0x1c5898
void AllocEffect__15BattleEffectManFiP9mgCMemoryi_0x1c4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocEffect__15BattleEffectManFiP9mgCMemoryi_0x1c4df0");
#endif

    switch (ctx->pc) {
        case 0x1c4e7cu: goto label_1c4e7c;
        case 0x1c4e88u: goto label_1c4e88;
        case 0x1c4eb8u: goto label_1c4eb8;
        case 0x1c4ed0u: goto label_1c4ed0;
        case 0x1c4eecu: goto label_1c4eec;
        case 0x1c4f3cu: goto label_1c4f3c;
        case 0x1c50b8u: goto label_1c50b8;
        case 0x1c5118u: goto label_1c5118;
        case 0x1c5128u: goto label_1c5128;
        case 0x1c5140u: goto label_1c5140;
        case 0x1c5178u: goto label_1c5178;
        case 0x1c5214u: goto label_1c5214;
        case 0x1c5270u: goto label_1c5270;
        case 0x1c527cu: goto label_1c527c;
        case 0x1c52a4u: goto label_1c52a4;
        case 0x1c52b4u: goto label_1c52b4;
        case 0x1c52d0u: goto label_1c52d0;
        case 0x1c5310u: goto label_1c5310;
        case 0x1c54a4u: goto label_1c54a4;
        case 0x1c551cu: goto label_1c551c;
        case 0x1c5528u: goto label_1c5528;
        case 0x1c5550u: goto label_1c5550;
        case 0x1c5560u: goto label_1c5560;
        case 0x1c5578u: goto label_1c5578;
        case 0x1c5594u: goto label_1c5594;
        case 0x1c55a4u: goto label_1c55a4;
        case 0x1c55dcu: goto label_1c55dc;
        case 0x1c5660u: goto label_1c5660;
        case 0x1c5680u: goto label_1c5680;
        case 0x1c569cu: goto label_1c569c;
        case 0x1c56ccu: goto label_1c56cc;
        case 0x1c56d8u: goto label_1c56d8;
        case 0x1c5700u: goto label_1c5700;
        case 0x1c5838u: goto label_1c5838;
        default: break;
    }

    ctx->pc = 0x1c4df0u;

    // 0x1c4df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c4df4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c4df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c4df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c4dfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c4e00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c4e04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c4e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e14: 0x10a20205  beq         $a1, $v0, . + 4 + (0x205 << 2)
    ctx->pc = 0x1C4E14u;
    {
        const bool branch_taken_0x1c4e14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E14u;
            // 0x1c4e18: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e14) {
            ctx->pc = 0x1C562Cu;
            goto label_1c562c;
        }
    }
    ctx->pc = 0x1C4E1Cu;
    // 0x1c4e1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4e20: 0x10a201b1  beq         $a1, $v0, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x1C4E20u;
    {
        const bool branch_taken_0x1c4e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E20u;
            // 0x1c4e24: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e20) {
            ctx->pc = 0x1C54E8u;
            goto label_1c54e8;
        }
    }
    ctx->pc = 0x1C4E28u;
    // 0x1c4e28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4e2c: 0x10a20103  beq         $a1, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x1C4E2Cu;
    {
        const bool branch_taken_0x1c4e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E2Cu;
            // 0x1c4e30: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e2c) {
            ctx->pc = 0x1C523Cu;
            goto label_1c523c;
        }
    }
    ctx->pc = 0x1C4E34u;
    // 0x1c4e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4e38: 0x10a200af  beq         $a1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1C4E38u;
    {
        const bool branch_taken_0x1c4e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E38u;
            // 0x1c4e3c: 0x101980  sll         $v1, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e38) {
            ctx->pc = 0x1C50F8u;
            goto label_1c50f8;
        }
    }
    ctx->pc = 0x1C4E40u;
    // 0x1c4e40: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4E40u;
    {
        const bool branch_taken_0x1c4e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E40u;
            // 0x1c4e44: 0x101940  sll         $v1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e40) {
            ctx->pc = 0x1C4E50u;
            goto label_1c4e50;
        }
    }
    ctx->pc = 0x1C4E48u;
    // 0x1c4e48: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x1C4E48u;
    {
        const bool branch_taken_0x1c4e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E48u;
            // 0x1c4e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e48) {
            ctx->pc = 0x1C5870u;
            goto label_1c5870;
        }
    }
    ctx->pc = 0x1C4E50u;
label_1c4e50:
    // 0x1c4e50: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x1c4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1c4e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4e58: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1c4e58u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c4e5c: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1c4e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1c4e60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4E60u;
    {
        const bool branch_taken_0x1c4e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E60u;
            // 0x1c4e64: 0x121102  srl         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e60) {
            ctx->pc = 0x1C4E70u;
            goto label_1c4e70;
        }
    }
    ctx->pc = 0x1C4E68u;
    // 0x1c4e68: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x1c4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1c4e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4e70:
    // 0x1c4e70: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c4e74: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C4E74u;
    SET_GPR_U32(ctx, 31, 0x1C4E7Cu);
    ctx->pc = 0x1C4E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E74u;
            // 0x1c4e78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E7Cu; }
        if (ctx->pc != 0x1C4E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E7Cu; }
        if (ctx->pc != 0x1C4E7Cu) { return; }
    }
    ctx->pc = 0x1C4E7Cu;
label_1c4e7c:
    // 0x1c4e7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e80: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C4E80u;
    SET_GPR_U32(ctx, 31, 0x1C4E88u);
    ctx->pc = 0x1C4E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E80u;
            // 0x1c4e84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E88u; }
        if (ctx->pc != 0x1C4E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E88u; }
        if (ctx->pc != 0x1C4E88u) { return; }
    }
    ctx->pc = 0x1C4E88u;
label_1c4e88:
    // 0x1c4e88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1c4e8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1c4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c4e90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c4e94: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1c4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c4e98: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1c4e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1c4e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4E9Cu;
    {
        const bool branch_taken_0x1c4e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E9Cu;
            // 0x1c4ea0: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e9c) {
            ctx->pc = 0x1C4EACu;
            goto label_1c4eac;
        }
    }
    ctx->pc = 0x1C4EA4u;
    // 0x1c4ea4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1c4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1c4ea8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c4eac:
    // 0x1c4eac: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c4eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c4eb0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C4EB0u;
    SET_GPR_U32(ctx, 31, 0x1C4EB8u);
    ctx->pc = 0x1C4EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EB0u;
            // 0x1c4eb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EB8u; }
        if (ctx->pc != 0x1C4EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EB8u; }
        if (ctx->pc != 0x1C4EB8u) { return; }
    }
    ctx->pc = 0x1C4EB8u;
label_1c4eb8:
    // 0x1c4eb8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1c4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1c4ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ec0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1c4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c4ec4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c4ec8: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C4EC8u;
    SET_GPR_U32(ctx, 31, 0x1C4ED0u);
    ctx->pc = 0x1C4ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EC8u;
            // 0x1c4ecc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4ED0u; }
        if (ctx->pc != 0x1C4ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4ED0u; }
        if (ctx->pc != 0x1C4ED0u) { return; }
    }
    ctx->pc = 0x1C4ED0u;
label_1c4ed0:
    // 0x1c4ed0: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1c4ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1c4ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c4ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ed8: 0x24a55990  addiu       $a1, $a1, 0x5990
    ctx->pc = 0x1c4ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
    // 0x1c4edc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4edcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ee0: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1c4ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c4ee4: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1C4EE4u;
    SET_GPR_U32(ctx, 31, 0x1C4EECu);
    ctx->pc = 0x1C4EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EE4u;
            // 0x1c4ee8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EECu; }
        if (ctx->pc != 0x1C4EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4EECu; }
        if (ctx->pc != 0x1C4EECu) { return; }
    }
    ctx->pc = 0x1C4EECu;
label_1c4eec:
    // 0x1c4eec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1c4eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1c4ef0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c4ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1c4ef4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4EF8u;
    {
        const bool branch_taken_0x1c4ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EF8u;
            // 0x1c4efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ef8) {
            ctx->pc = 0x1C4F10u;
            goto label_1c4f10;
        }
    }
    ctx->pc = 0x1C4F00u;
    // 0x1c4f00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c4f04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4F04u;
    {
        const bool branch_taken_0x1c4f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F04u;
            // 0x1c4f08: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f04) {
            ctx->pc = 0x1C4F18u;
            goto label_1c4f18;
        }
    }
    ctx->pc = 0x1C4F0Cu;
    // 0x1c4f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c4f10:
    // 0x1c4f10: 0x1000025b  b           . + 4 + (0x25B << 2)
    ctx->pc = 0x1C4F10u;
    {
        const bool branch_taken_0x1c4f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F10u;
            // 0x1c4f14: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f10) {
            ctx->pc = 0x1C5880u;
            goto label_1c5880;
        }
    }
    ctx->pc = 0x1C4F18u;
label_1c4f18:
    // 0x1c4f18: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x1c4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x1c4f1c: 0x10200256  beqz        $at, . + 4 + (0x256 << 2)
    ctx->pc = 0x1C4F1Cu;
    {
        const bool branch_taken_0x1c4f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F1Cu;
            // 0x1c4f20: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f1c) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C4F24u;
    // 0x1c4f24: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x1c4f24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c4f28: 0x14200058  bnez        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x1C4F28u;
    {
        const bool branch_taken_0x1c4f28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F28u;
            // 0x1c4f2c: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f28) {
            ctx->pc = 0x1C508Cu;
            goto label_1c508c;
        }
    }
    ctx->pc = 0x1C4F30u;
    // 0x1c4f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f38: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c4f3c:
    // 0x1c4f3c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c4f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4f40: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c4f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c4f44: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c4f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c4f48: 0x64382a  slt         $a3, $v1, $a0
    ctx->pc = 0x1c4f48u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c4f4c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c4f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c4f50: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c4f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c4f54: 0xad280020  sw          $t0, 0x20($t1)
    ctx->pc = 0x1c4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 8));
    // 0x1c4f58: 0xad22002c  sw          $v0, 0x2C($t1)
    ctx->pc = 0x1c4f58u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 44), GPR_U32(ctx, 2));
    // 0x1c4f5c: 0xad200028  sw          $zero, 0x28($t1)
    ctx->pc = 0x1c4f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 0));
    // 0x1c4f60: 0xad200024  sw          $zero, 0x24($t1)
    ctx->pc = 0x1c4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
    // 0x1c4f64: 0xad200044  sw          $zero, 0x44($t1)
    ctx->pc = 0x1c4f64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 0));
    // 0x1c4f68: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c4f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c4f6c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c4f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4f70: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c4f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c4f74: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c4f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c4f78: 0x25080a00  addiu       $t0, $t0, 0xA00
    ctx->pc = 0x1c4f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2560));
    // 0x1c4f7c: 0xad280080  sw          $t0, 0x80($t1)
    ctx->pc = 0x1c4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 8));
    // 0x1c4f80: 0xad22008c  sw          $v0, 0x8C($t1)
    ctx->pc = 0x1c4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 2));
    // 0x1c4f84: 0xad200088  sw          $zero, 0x88($t1)
    ctx->pc = 0x1c4f84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 136), GPR_U32(ctx, 0));
    // 0x1c4f88: 0xad200084  sw          $zero, 0x84($t1)
    ctx->pc = 0x1c4f88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 0));
    // 0x1c4f8c: 0xad2000a4  sw          $zero, 0xA4($t1)
    ctx->pc = 0x1c4f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 164), GPR_U32(ctx, 0));
    // 0x1c4f90: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c4f90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c4f94: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c4f94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4f98: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c4f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c4f9c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c4f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c4fa0: 0x25081400  addiu       $t0, $t0, 0x1400
    ctx->pc = 0x1c4fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5120));
    // 0x1c4fa4: 0xad2800e0  sw          $t0, 0xE0($t1)
    ctx->pc = 0x1c4fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 224), GPR_U32(ctx, 8));
    // 0x1c4fa8: 0xad2200ec  sw          $v0, 0xEC($t1)
    ctx->pc = 0x1c4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 236), GPR_U32(ctx, 2));
    // 0x1c4fac: 0xad2000e8  sw          $zero, 0xE8($t1)
    ctx->pc = 0x1c4facu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
    // 0x1c4fb0: 0xad2000e4  sw          $zero, 0xE4($t1)
    ctx->pc = 0x1c4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 228), GPR_U32(ctx, 0));
    // 0x1c4fb4: 0xad200104  sw          $zero, 0x104($t1)
    ctx->pc = 0x1c4fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 260), GPR_U32(ctx, 0));
    // 0x1c4fb8: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c4fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c4fbc: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c4fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4fc0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c4fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c4fc4: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c4fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c4fc8: 0x25081e00  addiu       $t0, $t0, 0x1E00
    ctx->pc = 0x1c4fc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7680));
    // 0x1c4fcc: 0xad280140  sw          $t0, 0x140($t1)
    ctx->pc = 0x1c4fccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 320), GPR_U32(ctx, 8));
    // 0x1c4fd0: 0xad22014c  sw          $v0, 0x14C($t1)
    ctx->pc = 0x1c4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 332), GPR_U32(ctx, 2));
    // 0x1c4fd4: 0xad200148  sw          $zero, 0x148($t1)
    ctx->pc = 0x1c4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 328), GPR_U32(ctx, 0));
    // 0x1c4fd8: 0xad200144  sw          $zero, 0x144($t1)
    ctx->pc = 0x1c4fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 324), GPR_U32(ctx, 0));
    // 0x1c4fdc: 0xad200164  sw          $zero, 0x164($t1)
    ctx->pc = 0x1c4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 356), GPR_U32(ctx, 0));
    // 0x1c4fe0: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c4fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c4fe4: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c4fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4fe8: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c4fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c4fec: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c4fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c4ff0: 0x25082800  addiu       $t0, $t0, 0x2800
    ctx->pc = 0x1c4ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10240));
    // 0x1c4ff4: 0xad2801a0  sw          $t0, 0x1A0($t1)
    ctx->pc = 0x1c4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 416), GPR_U32(ctx, 8));
    // 0x1c4ff8: 0xad2201ac  sw          $v0, 0x1AC($t1)
    ctx->pc = 0x1c4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 428), GPR_U32(ctx, 2));
    // 0x1c4ffc: 0xad2001a8  sw          $zero, 0x1A8($t1)
    ctx->pc = 0x1c4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 424), GPR_U32(ctx, 0));
    // 0x1c5000: 0xad2001a4  sw          $zero, 0x1A4($t1)
    ctx->pc = 0x1c5000u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 420), GPR_U32(ctx, 0));
    // 0x1c5004: 0xad2001c4  sw          $zero, 0x1C4($t1)
    ctx->pc = 0x1c5004u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 452), GPR_U32(ctx, 0));
    // 0x1c5008: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c5008u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c500c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c500cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5010: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c5010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c5014: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c5014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c5018: 0x25083200  addiu       $t0, $t0, 0x3200
    ctx->pc = 0x1c5018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12800));
    // 0x1c501c: 0xad280200  sw          $t0, 0x200($t1)
    ctx->pc = 0x1c501cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 512), GPR_U32(ctx, 8));
    // 0x1c5020: 0xad22020c  sw          $v0, 0x20C($t1)
    ctx->pc = 0x1c5020u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 524), GPR_U32(ctx, 2));
    // 0x1c5024: 0xad200208  sw          $zero, 0x208($t1)
    ctx->pc = 0x1c5024u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 520), GPR_U32(ctx, 0));
    // 0x1c5028: 0xad200204  sw          $zero, 0x204($t1)
    ctx->pc = 0x1c5028u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 516), GPR_U32(ctx, 0));
    // 0x1c502c: 0xad200224  sw          $zero, 0x224($t1)
    ctx->pc = 0x1c502cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 548), GPR_U32(ctx, 0));
    // 0x1c5030: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c5030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c5034: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c5034u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5038: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c5038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c503c: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c503cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c5040: 0x25083c00  addiu       $t0, $t0, 0x3C00
    ctx->pc = 0x1c5040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15360));
    // 0x1c5044: 0xad280260  sw          $t0, 0x260($t1)
    ctx->pc = 0x1c5044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 608), GPR_U32(ctx, 8));
    // 0x1c5048: 0xad22026c  sw          $v0, 0x26C($t1)
    ctx->pc = 0x1c5048u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 620), GPR_U32(ctx, 2));
    // 0x1c504c: 0xad200268  sw          $zero, 0x268($t1)
    ctx->pc = 0x1c504cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 616), GPR_U32(ctx, 0));
    // 0x1c5050: 0xad200264  sw          $zero, 0x264($t1)
    ctx->pc = 0x1c5050u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 612), GPR_U32(ctx, 0));
    // 0x1c5054: 0xad200284  sw          $zero, 0x284($t1)
    ctx->pc = 0x1c5054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 644), GPR_U32(ctx, 0));
    // 0x1c5058: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1c5058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c505c: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1c505cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5060: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c5060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c5064: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c5064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c5068: 0x25084600  addiu       $t0, $t0, 0x4600
    ctx->pc = 0x1c5068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17920));
    // 0x1c506c: 0xad2802c0  sw          $t0, 0x2C0($t1)
    ctx->pc = 0x1c506cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 704), GPR_U32(ctx, 8));
    // 0x1c5070: 0x24a50300  addiu       $a1, $a1, 0x300
    ctx->pc = 0x1c5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x1c5074: 0xad2202cc  sw          $v0, 0x2CC($t1)
    ctx->pc = 0x1c5074u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 716), GPR_U32(ctx, 2));
    // 0x1c5078: 0x24c65000  addiu       $a2, $a2, 0x5000
    ctx->pc = 0x1c5078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20480));
    // 0x1c507c: 0xad2002c8  sw          $zero, 0x2C8($t1)
    ctx->pc = 0x1c507cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 712), GPR_U32(ctx, 0));
    // 0x1c5080: 0xad2002c4  sw          $zero, 0x2C4($t1)
    ctx->pc = 0x1c5080u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 708), GPR_U32(ctx, 0));
    // 0x1c5084: 0x14e0ffad  bnez        $a3, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1C5084u;
    {
        const bool branch_taken_0x1c5084 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5084u;
            // 0x1c5088: 0xad2002e4  sw          $zero, 0x2E4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5084) {
            ctx->pc = 0x1C4F3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4f3c;
        }
    }
    ctx->pc = 0x1C508Cu;
label_1c508c:
    // 0x1c508c: 0x0  nop
    ctx->pc = 0x1c508cu;
    // NOP
    // 0x1c5090: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1c5090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c5094: 0x102001f9  beqz        $at, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x1C5094u;
    {
        const bool branch_taken_0x1c5094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5094u;
            // 0x1c5098: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5094) {
            ctx->pc = 0x1C587Cu;
            goto label_1c587c;
        }
    }
    ctx->pc = 0x1C509Cu;
    // 0x1c509c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1c509cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c50a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c50a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1c50a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c50a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c50ac: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x1c50acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1c50b0: 0x24240  sll         $t0, $v0, 9
    ctx->pc = 0x1c50b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x1c50b4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1c50b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c50b8:
    // 0x1c50b8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1c50b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c50bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c50c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1c50c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c50c4: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1c50c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c50c8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1c50c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c50cc: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1c50ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c50d0: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x1c50d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1c50d4: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x1c50d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
    // 0x1c50d8: 0x25080a00  addiu       $t0, $t0, 0xA00
    ctx->pc = 0x1c50d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2560));
    // 0x1c50dc: 0xacc4002c  sw          $a0, 0x2C($a2)
    ctx->pc = 0x1c50dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 4));
    // 0x1c50e0: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x1c50e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x1c50e4: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1c50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1c50e8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C50E8u;
    {
        const bool branch_taken_0x1c50e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C50ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50E8u;
            // 0x1c50ec: 0xacc00044  sw          $zero, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50e8) {
            ctx->pc = 0x1C50B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c50b8;
        }
    }
    ctx->pc = 0x1C50F0u;
    // 0x1c50f0: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x1C50F0u;
    {
        const bool branch_taken_0x1c50f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c50f0) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C50F8u;
label_1c50f8:
    // 0x1c50f8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1c50f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1c50fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C50FCu;
    {
        const bool branch_taken_0x1c50fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C50FCu;
            // 0x1c5100: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50fc) {
            ctx->pc = 0x1C510Cu;
            goto label_1c510c;
        }
    }
    ctx->pc = 0x1C5104u;
    // 0x1c5104: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1c5104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1c5108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c510c:
    // 0x1c510c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c5110: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C5110u;
    SET_GPR_U32(ctx, 31, 0x1C5118u);
    ctx->pc = 0x1C5114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5110u;
            // 0x1c5114: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5118u; }
        if (ctx->pc != 0x1C5118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5118u; }
        if (ctx->pc != 0x1C5118u) { return; }
    }
    ctx->pc = 0x1C5118u;
label_1c5118:
    // 0x1c5118: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1c5118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1c511c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c511cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5120: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C5120u;
    SET_GPR_U32(ctx, 31, 0x1C5128u);
    ctx->pc = 0x1C5124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5120u;
            // 0x1c5124: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5128u; }
        if (ctx->pc != 0x1C5128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5128u; }
        if (ctx->pc != 0x1C5128u) { return; }
    }
    ctx->pc = 0x1C5128u;
label_1c5128:
    // 0x1c5128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c512c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5134: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1c5134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c5138: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1C5138u;
    SET_GPR_U32(ctx, 31, 0x1C5140u);
    ctx->pc = 0x1C513Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5138u;
            // 0x1c513c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5140u; }
        if (ctx->pc != 0x1C5140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5140u; }
        if (ctx->pc != 0x1C5140u) { return; }
    }
    ctx->pc = 0x1C5140u;
label_1c5140:
    // 0x1c5140: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1c5140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1c5144: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c5144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1c5148: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c514c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C514Cu;
    {
        const bool branch_taken_0x1c514c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C514Cu;
            // 0x1c5150: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c514c) {
            ctx->pc = 0x1C515Cu;
            goto label_1c515c;
        }
    }
    ctx->pc = 0x1C5154u;
    // 0x1c5154: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x1C5154u;
    {
        const bool branch_taken_0x1c5154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5154u;
            // 0x1c5158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5154) {
            ctx->pc = 0x1C587Cu;
            goto label_1c587c;
        }
    }
    ctx->pc = 0x1C515Cu;
label_1c515c:
    // 0x1c515c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x1c515cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x1c5160: 0x102001c5  beqz        $at, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x1C5160u;
    {
        const bool branch_taken_0x1c5160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5160u;
            // 0x1c5164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5160) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C5168u;
    // 0x1c5168: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x1c5168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c516c: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C516Cu;
    {
        const bool branch_taken_0x1c516c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C516Cu;
            // 0x1c5170: 0x2605fff8  addiu       $a1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c516c) {
            ctx->pc = 0x1C5208u;
            goto label_1c5208;
        }
    }
    ctx->pc = 0x1C5174u;
    // 0x1c5174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5178:
    // 0x1c5178: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c5178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c517c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c5180: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1c5180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c5184: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c5184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c5188: 0xa4600030  sh          $zero, 0x30($v1)
    ctx->pc = 0x1c5188u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c518c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c518cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1c5190: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c5194: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c5194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c5198: 0xa4600070  sh          $zero, 0x70($v1)
    ctx->pc = 0x1c5198u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c519c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x1c519cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x1c51a0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c51a4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c51a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c51a8: 0xa46000b0  sh          $zero, 0xB0($v1)
    ctx->pc = 0x1c51a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 176), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c51ac: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x1c51acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x1c51b0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c51b4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c51b8: 0xa46000f0  sh          $zero, 0xF0($v1)
    ctx->pc = 0x1c51b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 240), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c51bc: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x1c51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
    // 0x1c51c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c51c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c51c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c51c8: 0xa4600130  sh          $zero, 0x130($v1)
    ctx->pc = 0x1c51c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c51cc: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x1c51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
    // 0x1c51d0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c51d4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c51d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c51d8: 0xa4600170  sh          $zero, 0x170($v1)
    ctx->pc = 0x1c51d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 368), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c51dc: 0xac600140  sw          $zero, 0x140($v1)
    ctx->pc = 0x1c51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 0));
    // 0x1c51e0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c51e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c51e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c51e8: 0xa46001b0  sh          $zero, 0x1B0($v1)
    ctx->pc = 0x1c51e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 432), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c51ec: 0xac600180  sw          $zero, 0x180($v1)
    ctx->pc = 0x1c51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 0));
    // 0x1c51f0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c51f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c51f8: 0xa46001f0  sh          $zero, 0x1F0($v1)
    ctx->pc = 0x1c51f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 496), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c51fc: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x1c51fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x1c5200: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C5200u;
    {
        const bool branch_taken_0x1c5200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5200u;
            // 0x1c5204: 0xac6001c0  sw          $zero, 0x1C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5200) {
            ctx->pc = 0x1C5178u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5178;
        }
    }
    ctx->pc = 0x1C5208u;
label_1c5208:
    // 0x1c5208: 0x90082a  slt         $at, $a0, $s0
    ctx->pc = 0x1c5208u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c520c: 0x1020019a  beqz        $at, . + 4 + (0x19A << 2)
    ctx->pc = 0x1C520Cu;
    {
        const bool branch_taken_0x1c520c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C520Cu;
            // 0x1c5210: 0x42980  sll         $a1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c520c) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C5214u;
label_1c5214:
    // 0x1c5214: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1c5214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c5218: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c5218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c521c: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x1c521cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c5220: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c5224: 0xa4600030  sh          $zero, 0x30($v1)
    ctx->pc = 0x1c5224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c5228: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x1c5228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1c522c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C522Cu;
    {
        const bool branch_taken_0x1c522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C522Cu;
            // 0x1c5230: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c522c) {
            ctx->pc = 0x1C5214u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5214;
        }
    }
    ctx->pc = 0x1C5234u;
    // 0x1c5234: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x1C5234u;
    {
        const bool branch_taken_0x1c5234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5234) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C523Cu;
label_1c523c:
    // 0x1c523c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5240: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c5240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c5244: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c5244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c5248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c524c: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1c524cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5250: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1c5250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1c5254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5254u;
    {
        const bool branch_taken_0x1c5254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5254u;
            // 0x1c5258: 0x121102  srl         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5254) {
            ctx->pc = 0x1C5264u;
            goto label_1c5264;
        }
    }
    ctx->pc = 0x1C525Cu;
    // 0x1c525c: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x1c525cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1c5260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5264:
    // 0x1c5264: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c5264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c5268: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C5268u;
    SET_GPR_U32(ctx, 31, 0x1C5270u);
    ctx->pc = 0x1C526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5268u;
            // 0x1c526c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5270u; }
        if (ctx->pc != 0x1C5270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5270u; }
        if (ctx->pc != 0x1C5270u) { return; }
    }
    ctx->pc = 0x1C5270u;
label_1c5270:
    // 0x1c5270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c5270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5274: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C5274u;
    SET_GPR_U32(ctx, 31, 0x1C527Cu);
    ctx->pc = 0x1C5278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5274u;
            // 0x1c5278: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C527Cu; }
        if (ctx->pc != 0x1C527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C527Cu; }
        if (ctx->pc != 0x1C527Cu) { return; }
    }
    ctx->pc = 0x1C527Cu;
label_1c527c:
    // 0x1c527c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1c527cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1c5280: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x1c5280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1c5284: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1c5284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1c5288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5288u;
    {
        const bool branch_taken_0x1c5288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C528Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5288u;
            // 0x1c528c: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5288) {
            ctx->pc = 0x1C5298u;
            goto label_1c5298;
        }
    }
    ctx->pc = 0x1C5290u;
    // 0x1c5290: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1c5290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1c5294: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5298:
    // 0x1c5298: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c5298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c529c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C529Cu;
    SET_GPR_U32(ctx, 31, 0x1C52A4u);
    ctx->pc = 0x1C52A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C529Cu;
            // 0x1c52a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52A4u; }
        if (ctx->pc != 0x1C52A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52A4u; }
        if (ctx->pc != 0x1C52A4u) { return; }
    }
    ctx->pc = 0x1C52A4u;
label_1c52a4:
    // 0x1c52a4: 0x1019c0  sll         $v1, $s0, 7
    ctx->pc = 0x1c52a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x1c52a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c52a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52ac: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C52ACu;
    SET_GPR_U32(ctx, 31, 0x1C52B4u);
    ctx->pc = 0x1C52B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52ACu;
            // 0x1c52b0: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52B4u; }
        if (ctx->pc != 0x1C52B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52B4u; }
        if (ctx->pc != 0x1C52B4u) { return; }
    }
    ctx->pc = 0x1C52B4u;
label_1c52b4:
    // 0x1c52b4: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1c52b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1c52b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52bc: 0x24a55940  addiu       $a1, $a1, 0x5940
    ctx->pc = 0x1c52bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22848));
    // 0x1c52c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c52c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52c4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1c52c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c52c8: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1C52C8u;
    SET_GPR_U32(ctx, 31, 0x1C52D0u);
    ctx->pc = 0x1C52CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52C8u;
            // 0x1c52cc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52D0u; }
        if (ctx->pc != 0x1C52D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C52D0u; }
        if (ctx->pc != 0x1C52D0u) { return; }
    }
    ctx->pc = 0x1C52D0u;
label_1c52d0:
    // 0x1c52d0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1c52d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1c52d4: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1c52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1c52d8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1c52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c52dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C52DCu;
    {
        const bool branch_taken_0x1c52dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C52E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52DCu;
            // 0x1c52e0: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52dc) {
            ctx->pc = 0x1C52ECu;
            goto label_1c52ec;
        }
    }
    ctx->pc = 0x1C52E4u;
    // 0x1c52e4: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x1C52E4u;
    {
        const bool branch_taken_0x1c52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52E4u;
            // 0x1c52e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52e4) {
            ctx->pc = 0x1C587Cu;
            goto label_1c587c;
        }
    }
    ctx->pc = 0x1C52ECu;
label_1c52ec:
    // 0x1c52ec: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x1c52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x1c52f0: 0x10200161  beqz        $at, . + 4 + (0x161 << 2)
    ctx->pc = 0x1C52F0u;
    {
        const bool branch_taken_0x1c52f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52F0u;
            // 0x1c52f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52f0) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C52F8u;
    // 0x1c52f8: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x1c52f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c52fc: 0x14200060  bnez        $at, . + 4 + (0x60 << 2)
    ctx->pc = 0x1C52FCu;
    {
        const bool branch_taken_0x1c52fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C52FCu;
            // 0x1c5300: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52fc) {
            ctx->pc = 0x1C5480u;
            goto label_1c5480;
        }
    }
    ctx->pc = 0x1C5304u;
    // 0x1c5304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c530c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c530cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c5310:
    // 0x1c5310: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c5310u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c5314: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1c5314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1c5318: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c5318u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c531c: 0x64382a  slt         $a3, $v1, $a0
    ctx->pc = 0x1c531cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c5320: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c5324: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c5324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c5328: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x1c5328u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1c532c: 0xad090070  sw          $t1, 0x70($t0)
    ctx->pc = 0x1c532cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 9));
    // 0x1c5330: 0xad020074  sw          $v0, 0x74($t0)
    ctx->pc = 0x1c5330u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 116), GPR_U32(ctx, 2));
    // 0x1c5334: 0xad000034  sw          $zero, 0x34($t0)
    ctx->pc = 0x1c5334u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 0));
    // 0x1c5338: 0xad00007c  sw          $zero, 0x7C($t0)
    ctx->pc = 0x1c5338u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
    // 0x1c533c: 0xad000078  sw          $zero, 0x78($t0)
    ctx->pc = 0x1c533cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 0));
    // 0x1c5340: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c5340u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c5344: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c5344u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c5348: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c5348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c534c: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c534cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c5350: 0x25290640  addiu       $t1, $t1, 0x640
    ctx->pc = 0x1c5350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1600));
    // 0x1c5354: 0xad000080  sw          $zero, 0x80($t0)
    ctx->pc = 0x1c5354u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 0));
    // 0x1c5358: 0xad0900f0  sw          $t1, 0xF0($t0)
    ctx->pc = 0x1c5358u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 240), GPR_U32(ctx, 9));
    // 0x1c535c: 0xad0200f4  sw          $v0, 0xF4($t0)
    ctx->pc = 0x1c535cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 244), GPR_U32(ctx, 2));
    // 0x1c5360: 0xad0000b4  sw          $zero, 0xB4($t0)
    ctx->pc = 0x1c5360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 180), GPR_U32(ctx, 0));
    // 0x1c5364: 0xad0000fc  sw          $zero, 0xFC($t0)
    ctx->pc = 0x1c5364u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 252), GPR_U32(ctx, 0));
    // 0x1c5368: 0xad0000f8  sw          $zero, 0xF8($t0)
    ctx->pc = 0x1c5368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 248), GPR_U32(ctx, 0));
    // 0x1c536c: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c536cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c5370: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c5370u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c5374: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c5374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c5378: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c5378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c537c: 0x25290c80  addiu       $t1, $t1, 0xC80
    ctx->pc = 0x1c537cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3200));
    // 0x1c5380: 0xad000100  sw          $zero, 0x100($t0)
    ctx->pc = 0x1c5380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 256), GPR_U32(ctx, 0));
    // 0x1c5384: 0xad090170  sw          $t1, 0x170($t0)
    ctx->pc = 0x1c5384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 368), GPR_U32(ctx, 9));
    // 0x1c5388: 0xad020174  sw          $v0, 0x174($t0)
    ctx->pc = 0x1c5388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 372), GPR_U32(ctx, 2));
    // 0x1c538c: 0xad000134  sw          $zero, 0x134($t0)
    ctx->pc = 0x1c538cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 308), GPR_U32(ctx, 0));
    // 0x1c5390: 0xad00017c  sw          $zero, 0x17C($t0)
    ctx->pc = 0x1c5390u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 380), GPR_U32(ctx, 0));
    // 0x1c5394: 0xad000178  sw          $zero, 0x178($t0)
    ctx->pc = 0x1c5394u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 376), GPR_U32(ctx, 0));
    // 0x1c5398: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c5398u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c539c: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c539cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c53a0: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c53a4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c53a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c53a8: 0x252912c0  addiu       $t1, $t1, 0x12C0
    ctx->pc = 0x1c53a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4800));
    // 0x1c53ac: 0xad000180  sw          $zero, 0x180($t0)
    ctx->pc = 0x1c53acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 384), GPR_U32(ctx, 0));
    // 0x1c53b0: 0xad0901f0  sw          $t1, 0x1F0($t0)
    ctx->pc = 0x1c53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 496), GPR_U32(ctx, 9));
    // 0x1c53b4: 0xad0201f4  sw          $v0, 0x1F4($t0)
    ctx->pc = 0x1c53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 500), GPR_U32(ctx, 2));
    // 0x1c53b8: 0xad0001b4  sw          $zero, 0x1B4($t0)
    ctx->pc = 0x1c53b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 436), GPR_U32(ctx, 0));
    // 0x1c53bc: 0xad0001fc  sw          $zero, 0x1FC($t0)
    ctx->pc = 0x1c53bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 508), GPR_U32(ctx, 0));
    // 0x1c53c0: 0xad0001f8  sw          $zero, 0x1F8($t0)
    ctx->pc = 0x1c53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 504), GPR_U32(ctx, 0));
    // 0x1c53c4: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c53c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c53c8: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c53c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c53cc: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c53ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c53d0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c53d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c53d4: 0x25291900  addiu       $t1, $t1, 0x1900
    ctx->pc = 0x1c53d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6400));
    // 0x1c53d8: 0xad000200  sw          $zero, 0x200($t0)
    ctx->pc = 0x1c53d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 512), GPR_U32(ctx, 0));
    // 0x1c53dc: 0xad090270  sw          $t1, 0x270($t0)
    ctx->pc = 0x1c53dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 624), GPR_U32(ctx, 9));
    // 0x1c53e0: 0xad020274  sw          $v0, 0x274($t0)
    ctx->pc = 0x1c53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 628), GPR_U32(ctx, 2));
    // 0x1c53e4: 0xad000234  sw          $zero, 0x234($t0)
    ctx->pc = 0x1c53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 564), GPR_U32(ctx, 0));
    // 0x1c53e8: 0xad00027c  sw          $zero, 0x27C($t0)
    ctx->pc = 0x1c53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 636), GPR_U32(ctx, 0));
    // 0x1c53ec: 0xad000278  sw          $zero, 0x278($t0)
    ctx->pc = 0x1c53ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 632), GPR_U32(ctx, 0));
    // 0x1c53f0: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c53f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c53f4: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c53f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c53f8: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c53f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c53fc: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c53fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c5400: 0x25291f40  addiu       $t1, $t1, 0x1F40
    ctx->pc = 0x1c5400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8000));
    // 0x1c5404: 0xad000280  sw          $zero, 0x280($t0)
    ctx->pc = 0x1c5404u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 640), GPR_U32(ctx, 0));
    // 0x1c5408: 0xad0902f0  sw          $t1, 0x2F0($t0)
    ctx->pc = 0x1c5408u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 752), GPR_U32(ctx, 9));
    // 0x1c540c: 0xad0202f4  sw          $v0, 0x2F4($t0)
    ctx->pc = 0x1c540cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 756), GPR_U32(ctx, 2));
    // 0x1c5410: 0xad0002b4  sw          $zero, 0x2B4($t0)
    ctx->pc = 0x1c5410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 692), GPR_U32(ctx, 0));
    // 0x1c5414: 0xad0002fc  sw          $zero, 0x2FC($t0)
    ctx->pc = 0x1c5414u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 764), GPR_U32(ctx, 0));
    // 0x1c5418: 0xad0002f8  sw          $zero, 0x2F8($t0)
    ctx->pc = 0x1c5418u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 760), GPR_U32(ctx, 0));
    // 0x1c541c: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c541cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c5420: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c5420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c5424: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c5424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c5428: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c542c: 0x25292580  addiu       $t1, $t1, 0x2580
    ctx->pc = 0x1c542cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9600));
    // 0x1c5430: 0xad000300  sw          $zero, 0x300($t0)
    ctx->pc = 0x1c5430u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 768), GPR_U32(ctx, 0));
    // 0x1c5434: 0xad090370  sw          $t1, 0x370($t0)
    ctx->pc = 0x1c5434u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 880), GPR_U32(ctx, 9));
    // 0x1c5438: 0xad020374  sw          $v0, 0x374($t0)
    ctx->pc = 0x1c5438u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 884), GPR_U32(ctx, 2));
    // 0x1c543c: 0xad000334  sw          $zero, 0x334($t0)
    ctx->pc = 0x1c543cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 820), GPR_U32(ctx, 0));
    // 0x1c5440: 0xad00037c  sw          $zero, 0x37C($t0)
    ctx->pc = 0x1c5440u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 892), GPR_U32(ctx, 0));
    // 0x1c5444: 0xad000378  sw          $zero, 0x378($t0)
    ctx->pc = 0x1c5444u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 888), GPR_U32(ctx, 0));
    // 0x1c5448: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x1c5448u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c544c: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1c544cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c5450: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x1c5450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1c5454: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1c5454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1c5458: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1c5458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1c545c: 0xad000380  sw          $zero, 0x380($t0)
    ctx->pc = 0x1c545cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 896), GPR_U32(ctx, 0));
    // 0x1c5460: 0x24a53200  addiu       $a1, $a1, 0x3200
    ctx->pc = 0x1c5460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12800));
    // 0x1c5464: 0xad0903f0  sw          $t1, 0x3F0($t0)
    ctx->pc = 0x1c5464u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1008), GPR_U32(ctx, 9));
    // 0x1c5468: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x1c5468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x1c546c: 0xad0203f4  sw          $v0, 0x3F4($t0)
    ctx->pc = 0x1c546cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1012), GPR_U32(ctx, 2));
    // 0x1c5470: 0xad0003b4  sw          $zero, 0x3B4($t0)
    ctx->pc = 0x1c5470u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 948), GPR_U32(ctx, 0));
    // 0x1c5474: 0xad0003fc  sw          $zero, 0x3FC($t0)
    ctx->pc = 0x1c5474u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1020), GPR_U32(ctx, 0));
    // 0x1c5478: 0x14e0ffa5  bnez        $a3, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1C5478u;
    {
        const bool branch_taken_0x1c5478 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5478u;
            // 0x1c547c: 0xad0003f8  sw          $zero, 0x3F8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5478) {
            ctx->pc = 0x1C5310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5310;
        }
    }
    ctx->pc = 0x1C5480u;
label_1c5480:
    // 0x1c5480: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x1c5480u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c5484: 0x102000fc  beqz        $at, . + 4 + (0xFC << 2)
    ctx->pc = 0x1C5484u;
    {
        const bool branch_taken_0x1c5484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5484u;
            // 0x1c5488: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5484) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C548Cu;
    // 0x1c548c: 0x341c0  sll         $t0, $v1, 7
    ctx->pc = 0x1c548cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1c5490: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c5490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5494: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1c5494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c5498: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c5498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c549c: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x1c549cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1c54a0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c54a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c54a4:
    // 0x1c54a4: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x1c54a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c54a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c54ac: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1c54acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c54b0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1c54b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c54b4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x1c54b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1c54b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1c54b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1c54bc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1c54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1c54c0: 0xaca60070  sw          $a2, 0x70($a1)
    ctx->pc = 0x1c54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 6));
    // 0x1c54c4: 0x24e70640  addiu       $a3, $a3, 0x640
    ctx->pc = 0x1c54c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
    // 0x1c54c8: 0xaca40074  sw          $a0, 0x74($a1)
    ctx->pc = 0x1c54c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 4));
    // 0x1c54cc: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x1c54ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x1c54d0: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x1c54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x1c54d4: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x1c54d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
    // 0x1c54d8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C54D8u;
    {
        const bool branch_taken_0x1c54d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C54DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C54D8u;
            // 0x1c54dc: 0xaca00078  sw          $zero, 0x78($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c54d8) {
            ctx->pc = 0x1C54A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c54a4;
        }
    }
    ctx->pc = 0x1C54E0u;
    // 0x1c54e0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x1C54E0u;
    {
        const bool branch_taken_0x1c54e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c54e0) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C54E8u;
label_1c54e8:
    // 0x1c54e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c54ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c54f0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1c54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1c54f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c54f8: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1c54f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c54fc: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1c54fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1c5500: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5500u;
    {
        const bool branch_taken_0x1c5500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5500u;
            // 0x1c5504: 0x121102  srl         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5500) {
            ctx->pc = 0x1C5510u;
            goto label_1c5510;
        }
    }
    ctx->pc = 0x1C5508u;
    // 0x1c5508: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x1c5508u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1c550c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5510:
    // 0x1c5510: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c5510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c5514: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C5514u;
    SET_GPR_U32(ctx, 31, 0x1C551Cu);
    ctx->pc = 0x1C5518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5514u;
            // 0x1c5518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C551Cu; }
        if (ctx->pc != 0x1C551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C551Cu; }
        if (ctx->pc != 0x1C551Cu) { return; }
    }
    ctx->pc = 0x1C551Cu;
label_1c551c:
    // 0x1c551c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5520: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C5520u;
    SET_GPR_U32(ctx, 31, 0x1C5528u);
    ctx->pc = 0x1C5524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5520u;
            // 0x1c5524: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5528u; }
        if (ctx->pc != 0x1C5528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5528u; }
        if (ctx->pc != 0x1C5528u) { return; }
    }
    ctx->pc = 0x1C5528u;
label_1c5528:
    // 0x1c5528: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1c5528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x1c552c: 0x109180  sll         $s2, $s0, 6
    ctx->pc = 0x1c552cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1c5530: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1c5530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1c5534: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5534u;
    {
        const bool branch_taken_0x1c5534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5534u;
            // 0x1c5538: 0x121102  srl         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5534) {
            ctx->pc = 0x1C5544u;
            goto label_1c5544;
        }
    }
    ctx->pc = 0x1C553Cu;
    // 0x1c553c: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x1c553cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1c5540: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5544:
    // 0x1c5544: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c5544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c5548: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C5548u;
    SET_GPR_U32(ctx, 31, 0x1C5550u);
    ctx->pc = 0x1C554Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5548u;
            // 0x1c554c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5550u; }
        if (ctx->pc != 0x1C5550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5550u; }
        if (ctx->pc != 0x1C5550u) { return; }
    }
    ctx->pc = 0x1C5550u;
label_1c5550:
    // 0x1c5550: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1c5550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1c5554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c5554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5558: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C5558u;
    SET_GPR_U32(ctx, 31, 0x1C5560u);
    ctx->pc = 0x1C555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5558u;
            // 0x1c555c: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5560u; }
        if (ctx->pc != 0x1C5560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5560u; }
        if (ctx->pc != 0x1C5560u) { return; }
    }
    ctx->pc = 0x1C5560u;
label_1c5560:
    // 0x1c5560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c5568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c556c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1c556cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c5570: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1C5570u;
    SET_GPR_U32(ctx, 31, 0x1C5578u);
    ctx->pc = 0x1C5574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5570u;
            // 0x1c5574: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5578u; }
        if (ctx->pc != 0x1C5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5578u; }
        if (ctx->pc != 0x1C5578u) { return; }
    }
    ctx->pc = 0x1C5578u;
label_1c5578:
    // 0x1c5578: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1c5578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1c557c: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x1c557cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c5580: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1c5580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c5584: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1c5584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c5588: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1c5588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c558c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1C558Cu;
    SET_GPR_U32(ctx, 31, 0x1C5594u);
    ctx->pc = 0x1C5590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C558Cu;
            // 0x1c5590: 0x23200  sll         $a2, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5594u; }
        if (ctx->pc != 0x1C5594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5594u; }
        if (ctx->pc != 0x1C5594u) { return; }
    }
    ctx->pc = 0x1C5594u;
label_1c5594:
    // 0x1c5594: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x1c5594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c5598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c5598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c559c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1C559Cu;
    SET_GPR_U32(ctx, 31, 0x1C55A4u);
    ctx->pc = 0x1C55A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C559Cu;
            // 0x1c55a0: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55A4u; }
        if (ctx->pc != 0x1C55A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C55A4u; }
        if (ctx->pc != 0x1C55A4u) { return; }
    }
    ctx->pc = 0x1C55A4u;
label_1c55a4:
    // 0x1c55a4: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1c55a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x1c55a8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1c55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c55ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C55ACu;
    {
        const bool branch_taken_0x1c55ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C55B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55ACu;
            // 0x1c55b0: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55ac) {
            ctx->pc = 0x1C55BCu;
            goto label_1c55bc;
        }
    }
    ctx->pc = 0x1C55B4u;
    // 0x1c55b4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1C55B4u;
    {
        const bool branch_taken_0x1c55b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55B4u;
            // 0x1c55b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55b4) {
            ctx->pc = 0x1C587Cu;
            goto label_1c587c;
        }
    }
    ctx->pc = 0x1C55BCu;
label_1c55bc:
    // 0x1c55bc: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x1c55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x1c55c0: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
    ctx->pc = 0x1C55C0u;
    {
        const bool branch_taken_0x1c55c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C55C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C55C0u;
            // 0x1c55c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c55c0) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C55C8u;
    // 0x1c55c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c55c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c55ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c55d0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1c55d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c55d4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1c55d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1c55d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1c55dc:
    // 0x1c55dc: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x1c55dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1c55e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c55e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c55e4: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1c55e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c55e8: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x1c55e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c55ec: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x1c55ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1c55f0: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1c55f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1c55f4: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x1c55f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x1c55f8: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1c55f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
    // 0x1c55fc: 0x254a0f00  addiu       $t2, $t2, 0xF00
    ctx->pc = 0x1c55fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3840));
    // 0x1c5600: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x1c5600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x1c5604: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1c5604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x1c5608: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x1c5608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x1c560c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x1c560cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x1c5610: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1c5610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x1c5614: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x1c5614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x1c5618: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x1c5618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x1c561c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C561Cu;
    {
        const bool branch_taken_0x1c561c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C561Cu;
            // 0x1c5620: 0xace0002c  sw          $zero, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c561c) {
            ctx->pc = 0x1C55DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c55dc;
        }
    }
    ctx->pc = 0x1C5624u;
    // 0x1c5624: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1C5624u;
    {
        const bool branch_taken_0x1c5624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5624) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C562Cu;
label_1c562c:
    // 0x1c562c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1c562cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c5630: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1c5630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c5634: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c5634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c5638: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c563c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1c563cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c5640: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1c5640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1c5644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5644u;
    {
        const bool branch_taken_0x1c5644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5644u;
            // 0x1c5648: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5644) {
            ctx->pc = 0x1C5654u;
            goto label_1c5654;
        }
    }
    ctx->pc = 0x1C564Cu;
    // 0x1c564c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1c564cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1c5650: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c5650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c5654:
    // 0x1c5654: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c5654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c5658: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C5658u;
    SET_GPR_U32(ctx, 31, 0x1C5660u);
    ctx->pc = 0x1C565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5658u;
            // 0x1c565c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5660u; }
        if (ctx->pc != 0x1C5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5660u; }
        if (ctx->pc != 0x1C5660u) { return; }
    }
    ctx->pc = 0x1C5660u;
label_1c5660:
    // 0x1c5660: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1c5660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1c5664: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c5664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5668: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1c5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c566c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c566cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c5670: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c5670u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5674: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c5674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1c5678: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C5678u;
    SET_GPR_U32(ctx, 31, 0x1C5680u);
    ctx->pc = 0x1C567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5678u;
            // 0x1c567c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5680u; }
        if (ctx->pc != 0x1C5680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5680u; }
        if (ctx->pc != 0x1C5680u) { return; }
    }
    ctx->pc = 0x1C5680u;
label_1c5680:
    // 0x1c5680: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1c5680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1c5684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5688: 0x24a558a0  addiu       $a1, $a1, 0x58A0
    ctx->pc = 0x1c5688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22688));
    // 0x1c568c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5690: 0x24070660  addiu       $a3, $zero, 0x660
    ctx->pc = 0x1c5690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
    // 0x1c5694: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x1C5694u;
    SET_GPR_U32(ctx, 31, 0x1C569Cu);
    ctx->pc = 0x1C5698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5694u;
            // 0x1c5698: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C569Cu; }
        if (ctx->pc != 0x1C569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C569Cu; }
        if (ctx->pc != 0x1C569Cu) { return; }
    }
    ctx->pc = 0x1C569Cu;
label_1c569c:
    // 0x1c569c: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1c569cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1c56a0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1c56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1c56a4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1c56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c56a8: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x1c56a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c56ac: 0x3242000f  andi        $v0, $s2, 0xF
    ctx->pc = 0x1c56acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15);
    // 0x1c56b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C56B0u;
    {
        const bool branch_taken_0x1c56b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56B0u;
            // 0x1c56b4: 0x121102  srl         $v0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56b0) {
            ctx->pc = 0x1C56C0u;
            goto label_1c56c0;
        }
    }
    ctx->pc = 0x1C56B8u;
    // 0x1c56b8: 0x121102  srl         $v0, $s2, 4
    ctx->pc = 0x1c56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
    // 0x1c56bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c56bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c56c0:
    // 0x1c56c0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1c56c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1c56c4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1C56C4u;
    SET_GPR_U32(ctx, 31, 0x1C56CCu);
    ctx->pc = 0x1C56C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56C4u;
            // 0x1c56c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56CCu; }
        if (ctx->pc != 0x1C56CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56CCu; }
        if (ctx->pc != 0x1C56CCu) { return; }
    }
    ctx->pc = 0x1C56CCu;
label_1c56cc:
    // 0x1c56cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56d0: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1C56D0u;
    SET_GPR_U32(ctx, 31, 0x1C56D8u);
    ctx->pc = 0x1C56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56D0u;
            // 0x1c56d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56D8u; }
        if (ctx->pc != 0x1C56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C56D8u; }
        if (ctx->pc != 0x1C56D8u) { return; }
    }
    ctx->pc = 0x1C56D8u;
label_1c56d8:
    // 0x1c56d8: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1c56d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1c56dc: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x1c56dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c56e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c56e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56e4: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x1C56E4u;
    {
        const bool branch_taken_0x1c56e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C56E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56E4u;
            // 0x1c56e8: 0xae300044  sw          $s0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56e4) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C56ECu;
    // 0x1c56ec: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x1c56ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c56f0: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x1C56F0u;
    {
        const bool branch_taken_0x1c56f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C56F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C56F0u;
            // 0x1c56f4: 0x2603fff8  addiu       $v1, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c56f0) {
            ctx->pc = 0x1C5810u;
            goto label_1c5810;
        }
    }
    ctx->pc = 0x1C56F8u;
    // 0x1c56f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c56f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c56fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c56fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c5700:
    // 0x1c5700: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c5700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c5704: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1c5704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c5708: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c5708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c570c: 0x43302a  slt         $a2, $v0, $v1
    ctx->pc = 0x1c570cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c5710: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c5710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c5714: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c5714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c5718: 0xad070018  sw          $a3, 0x18($t0)
    ctx->pc = 0x1c5718u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 7));
    // 0x1c571c: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x1c571cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1c5720: 0xa1000008  sb          $zero, 0x8($t0)
    ctx->pc = 0x1c5720u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5724: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c5724u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c5728: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c5728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c572c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c572cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c5730: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c5730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c5734: 0x24e70660  addiu       $a3, $a3, 0x660
    ctx->pc = 0x1c5734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1632));
    // 0x1c5738: 0xad070034  sw          $a3, 0x34($t0)
    ctx->pc = 0x1c5738u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 7));
    // 0x1c573c: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x1c573cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x1c5740: 0xa1000024  sb          $zero, 0x24($t0)
    ctx->pc = 0x1c5740u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5744: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c5744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c5748: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c5748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c574c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c574cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c5750: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c5750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c5754: 0x24e70cc0  addiu       $a3, $a3, 0xCC0
    ctx->pc = 0x1c5754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3264));
    // 0x1c5758: 0xad070050  sw          $a3, 0x50($t0)
    ctx->pc = 0x1c5758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 7));
    // 0x1c575c: 0xad00003c  sw          $zero, 0x3C($t0)
    ctx->pc = 0x1c575cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x1c5760: 0xa1000040  sb          $zero, 0x40($t0)
    ctx->pc = 0x1c5760u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5764: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c5764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c5768: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c5768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c576c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c576cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c5770: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c5770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c5774: 0x24e71320  addiu       $a3, $a3, 0x1320
    ctx->pc = 0x1c5774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4896));
    // 0x1c5778: 0xad07006c  sw          $a3, 0x6C($t0)
    ctx->pc = 0x1c5778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 7));
    // 0x1c577c: 0xad000058  sw          $zero, 0x58($t0)
    ctx->pc = 0x1c577cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 0));
    // 0x1c5780: 0xa100005c  sb          $zero, 0x5C($t0)
    ctx->pc = 0x1c5780u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5784: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c5784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c5788: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c5788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c578c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c578cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c5790: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c5790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c5794: 0x24e71980  addiu       $a3, $a3, 0x1980
    ctx->pc = 0x1c5794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6528));
    // 0x1c5798: 0xad070088  sw          $a3, 0x88($t0)
    ctx->pc = 0x1c5798u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 136), GPR_U32(ctx, 7));
    // 0x1c579c: 0xad000074  sw          $zero, 0x74($t0)
    ctx->pc = 0x1c579cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 116), GPR_U32(ctx, 0));
    // 0x1c57a0: 0xa1000078  sb          $zero, 0x78($t0)
    ctx->pc = 0x1c57a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c57a4: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c57a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c57a8: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c57a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c57ac: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c57acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c57b0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c57b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c57b4: 0x24e71fe0  addiu       $a3, $a3, 0x1FE0
    ctx->pc = 0x1c57b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8160));
    // 0x1c57b8: 0xad0700a4  sw          $a3, 0xA4($t0)
    ctx->pc = 0x1c57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 7));
    // 0x1c57bc: 0xad000090  sw          $zero, 0x90($t0)
    ctx->pc = 0x1c57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 0));
    // 0x1c57c0: 0xa1000094  sb          $zero, 0x94($t0)
    ctx->pc = 0x1c57c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c57c4: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c57c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c57c8: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c57c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c57cc: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c57ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c57d0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c57d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c57d4: 0x24e72640  addiu       $a3, $a3, 0x2640
    ctx->pc = 0x1c57d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9792));
    // 0x1c57d8: 0xad0700c0  sw          $a3, 0xC0($t0)
    ctx->pc = 0x1c57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 192), GPR_U32(ctx, 7));
    // 0x1c57dc: 0xad0000ac  sw          $zero, 0xAC($t0)
    ctx->pc = 0x1c57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 172), GPR_U32(ctx, 0));
    // 0x1c57e0: 0xa10000b0  sb          $zero, 0xB0($t0)
    ctx->pc = 0x1c57e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c57e4: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x1c57e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c57e8: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x1c57e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c57ec: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1c57ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c57f0: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x1c57f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1c57f4: 0x24e72ca0  addiu       $a3, $a3, 0x2CA0
    ctx->pc = 0x1c57f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11424));
    // 0x1c57f8: 0xad0700dc  sw          $a3, 0xDC($t0)
    ctx->pc = 0x1c57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 220), GPR_U32(ctx, 7));
    // 0x1c57fc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x1c57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1c5800: 0xad0000c8  sw          $zero, 0xC8($t0)
    ctx->pc = 0x1c5800u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 200), GPR_U32(ctx, 0));
    // 0x1c5804: 0x24a53300  addiu       $a1, $a1, 0x3300
    ctx->pc = 0x1c5804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13056));
    // 0x1c5808: 0x14c0ffbd  bnez        $a2, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1C5808u;
    {
        const bool branch_taken_0x1c5808 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5808u;
            // 0x1c580c: 0xa10000cc  sb          $zero, 0xCC($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 204), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5808) {
            ctx->pc = 0x1C5700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5700;
        }
    }
    ctx->pc = 0x1C5810u;
label_1c5810:
    // 0x1c5810: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1c5810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c5814: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C5814u;
    {
        const bool branch_taken_0x1c5814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5814u;
            // 0x1c5818: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5814) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C581Cu;
    // 0x1c581c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1c581cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c5820: 0x822823  subu        $a1, $a0, $v0
    ctx->pc = 0x1c5820u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c5824: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1c5824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5828: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1c5828u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c582c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c582cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c5830: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1c5830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c5834: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x1c5834u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1c5838:
    // 0x1c5838: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1c5838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1c583c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5840: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x1c5840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1c5844: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x1c5844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1c5848: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1c5848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1c584c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c584cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c5850: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x1c5850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x1c5854: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x1c5854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x1c5858: 0x24e70660  addiu       $a3, $a3, 0x660
    ctx->pc = 0x1c5858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1632));
    // 0x1c585c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1c585cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1c5860: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C5860u;
    {
        const bool branch_taken_0x1c5860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5860u;
            // 0x1c5864: 0xa0a00008  sb          $zero, 0x8($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5860) {
            ctx->pc = 0x1C5838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5838;
        }
    }
    ctx->pc = 0x1C5868u;
    // 0x1c5868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5868u;
    {
        const bool branch_taken_0x1c5868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5868) {
            ctx->pc = 0x1C5878u;
            goto label_1c5878;
        }
    }
    ctx->pc = 0x1C5870u;
label_1c5870:
    // 0x1c5870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5870u;
    {
        const bool branch_taken_0x1c5870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5870) {
            ctx->pc = 0x1C587Cu;
            goto label_1c587c;
        }
    }
    ctx->pc = 0x1C5878u;
label_1c5878:
    // 0x1c5878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c587c:
    // 0x1c587c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c587cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c5880:
    // 0x1c5880: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c5880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c5888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c588c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c588cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5890: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5890u;
            // 0x1c5894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5898u;
}
