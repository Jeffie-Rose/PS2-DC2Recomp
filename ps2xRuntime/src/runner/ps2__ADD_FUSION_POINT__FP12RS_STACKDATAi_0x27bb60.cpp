#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ADD_FUSION_POINT__FP12RS_STACKDATAi
// Address: 0x27bb60 - 0x27bc2c
void ps2__ADD_FUSION_POINT__FP12RS_STACKDATAi_0x27bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ADD_FUSION_POINT__FP12RS_STACKDATAi_0x27bb60");
#endif

    switch (ctx->pc) {
        case 0x27bb80u: goto label_27bb80;
        case 0x27bb90u: goto label_27bb90;
        case 0x27bb9cu: goto label_27bb9c;
        case 0x27bbdcu: goto label_27bbdc;
        case 0x27bc0cu: goto label_27bc0c;
        default: break;
    }

    ctx->pc = 0x27bb60u;

    // 0x27bb60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27bb64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27bb68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27bb6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27bb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27bb70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27bb74: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27bb74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27bb78: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27BB78u;
    SET_GPR_U32(ctx, 31, 0x27BB80u);
    ctx->pc = 0x27BB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB78u;
            // 0x27bb7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB80u; }
        if (ctx->pc != 0x27BB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB80u; }
        if (ctx->pc != 0x27BB80u) { return; }
    }
    ctx->pc = 0x27BB80u;
label_27bb80:
    // 0x27bb80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27BB88u;
    SET_GPR_U32(ctx, 31, 0x27BB90u);
    ctx->pc = 0x27BB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB88u;
            // 0x27bb8c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB90u; }
        if (ctx->pc != 0x27BB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB90u; }
        if (ctx->pc != 0x27BB90u) { return; }
    }
    ctx->pc = 0x27BB90u;
label_27bb90:
    // 0x27bb90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bb94: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27BB94u;
    SET_GPR_U32(ctx, 31, 0x27BB9Cu);
    ctx->pc = 0x27BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB94u;
            // 0x27bb98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB9Cu; }
        if (ctx->pc != 0x27BB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BB9Cu; }
        if (ctx->pc != 0x27BB9Cu) { return; }
    }
    ctx->pc = 0x27BB9Cu;
label_27bb9c:
    // 0x27bb9c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BB9Cu;
    {
        const bool branch_taken_0x27bb9c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x27BBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BB9Cu;
            // 0x27bba0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bb9c) {
            ctx->pc = 0x27BBB0u;
            goto label_27bbb0;
        }
    }
    ctx->pc = 0x27BBA4u;
    // 0x27bba4: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x27bba4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27bba8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BBA8u;
    {
        const bool branch_taken_0x27bba8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bba8) {
            ctx->pc = 0x27BBB8u;
            goto label_27bbb8;
        }
    }
    ctx->pc = 0x27BBB0u;
label_27bbb0:
    // 0x27bbb0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x27BBB0u;
    {
        const bool branch_taken_0x27bbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBB0u;
            // 0x27bbb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbb0) {
            ctx->pc = 0x27BC10u;
            goto label_27bc10;
        }
    }
    ctx->pc = 0x27BBB8u;
label_27bbb8:
    // 0x27bbb8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27BBB8u;
    {
        const bool branch_taken_0x27bbb8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x27BBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBB8u;
            // 0x27bbbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbb8) {
            ctx->pc = 0x27BBCCu;
            goto label_27bbcc;
        }
    }
    ctx->pc = 0x27BBC0u;
    // 0x27bbc0: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x27bbc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27bbc4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BBC4u;
    {
        const bool branch_taken_0x27bbc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBC4u;
            // 0x27bbc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbc4) {
            ctx->pc = 0x27BBD4u;
            goto label_27bbd4;
        }
    }
    ctx->pc = 0x27BBCCu;
label_27bbcc:
    // 0x27bbcc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x27BBCCu;
    {
        const bool branch_taken_0x27bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBCCu;
            // 0x27bbd0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbcc) {
            ctx->pc = 0x27BC14u;
            goto label_27bc14;
        }
    }
    ctx->pc = 0x27BBD4u;
label_27bbd4:
    // 0x27bbd4: 0xc064220  jal         func_190880
    ctx->pc = 0x27BBD4u;
    SET_GPR_U32(ctx, 31, 0x27BBDCu);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBDCu; }
        if (ctx->pc != 0x27BBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BBDCu; }
        if (ctx->pc != 0x27BBDCu) { return; }
    }
    ctx->pc = 0x27BBDCu;
label_27bbdc:
    // 0x27bbdc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BBDCu;
    {
        const bool branch_taken_0x27bbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBDCu;
            // 0x27bbe0: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbdc) {
            ctx->pc = 0x27BBECu;
            goto label_27bbec;
        }
    }
    ctx->pc = 0x27BBE4u;
    // 0x27bbe4: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x27bbe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x27bbe8: 0x419821  addu        $s3, $v0, $at
    ctx->pc = 0x27bbe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_27bbec:
    // 0x27bbec: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BBECu;
    {
        const bool branch_taken_0x27bbec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBECu;
            // 0x27bbf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbec) {
            ctx->pc = 0x27BBFCu;
            goto label_27bbfc;
        }
    }
    ctx->pc = 0x27BBF4u;
    // 0x27bbf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27BBF4u;
    {
        const bool branch_taken_0x27bbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BBF4u;
            // 0x27bbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bbf4) {
            ctx->pc = 0x27BC10u;
            goto label_27bc10;
        }
    }
    ctx->pc = 0x27BBFCu;
label_27bbfc:
    // 0x27bbfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27bbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27bc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bc04: 0xc0675f4  jal         func_19D7D0
    ctx->pc = 0x27BC04u;
    SET_GPR_U32(ctx, 31, 0x27BC0Cu);
    ctx->pc = 0x27BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC04u;
            // 0x27bc08: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D7D0u;
    if (runtime->hasFunction(0x19D7D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC0Cu; }
        if (ctx->pc != 0x27BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFusionPoint__16CUserDataManagerFiii_0x19d7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BC0Cu; }
        if (ctx->pc != 0x27BC0Cu) { return; }
    }
    ctx->pc = 0x27BC0Cu;
label_27bc0c:
    // 0x27bc0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27bc10:
    // 0x27bc10: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27bc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27bc14:
    // 0x27bc14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27bc14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bc18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27bc18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bc1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27bc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bc20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27bc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bc24: 0x3e00008  jr          $ra
    ctx->pc = 0x27BC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BC24u;
            // 0x27bc28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BC2Cu;
}
