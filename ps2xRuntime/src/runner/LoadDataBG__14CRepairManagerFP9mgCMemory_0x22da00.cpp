#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadDataBG__14CRepairManagerFP9mgCMemory
// Address: 0x22da00 - 0x22dabc
void LoadDataBG__14CRepairManagerFP9mgCMemory_0x22da00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadDataBG__14CRepairManagerFP9mgCMemory_0x22da00");
#endif

    switch (ctx->pc) {
        case 0x22da40u: goto label_22da40;
        case 0x22da5cu: goto label_22da5c;
        case 0x22da70u: goto label_22da70;
        case 0x22da90u: goto label_22da90;
        case 0x22daa0u: goto label_22daa0;
        default: break;
    }

    ctx->pc = 0x22da00u;

    // 0x22da00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22da00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22da04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22da04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22da08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22da08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22da0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22da0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22da10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22da10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da14: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22da14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22da18: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x22da18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x22da1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DA1Cu;
    {
        const bool branch_taken_0x22da1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA1Cu;
            // 0x22da20: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da1c) {
            ctx->pc = 0x22DA30u;
            goto label_22da30;
        }
    }
    ctx->pc = 0x22DA24u;
    // 0x22da24: 0x8e2301ac  lw          $v1, 0x1AC($s1)
    ctx->pc = 0x22da24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x22da28: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x22DA28u;
    {
        const bool branch_taken_0x22da28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22da28) {
            ctx->pc = 0x22DAA8u;
            goto label_22daa8;
        }
    }
    ctx->pc = 0x22DA30u;
label_22da30:
    // 0x22da30: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x22da30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x22da34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22da34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da38: 0xc04e780  jal         func_139E00
    ctx->pc = 0x22DA38u;
    SET_GPR_U32(ctx, 31, 0x22DA40u);
    ctx->pc = 0x22DA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA38u;
            // 0x22da3c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA40u; }
        if (ctx->pc != 0x22DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA40u; }
        if (ctx->pc != 0x22DA40u) { return; }
    }
    ctx->pc = 0x22DA40u;
label_22da40:
    // 0x22da40: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x22da40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x22da44: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x22da44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x22da48: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x22da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x22da4c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22da50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22da54: 0xc052330  jal         func_148CC0
    ctx->pc = 0x22DA54u;
    SET_GPR_U32(ctx, 31, 0x22DA5Cu);
    ctx->pc = 0x22DA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA54u;
            // 0x22da58: 0xae2201ac  sw          $v0, 0x1AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA5Cu; }
        if (ctx->pc != 0x22DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA5Cu; }
        if (ctx->pc != 0x22DA5Cu) { return; }
    }
    ctx->pc = 0x22DA5Cu;
label_22da5c:
    // 0x22da5c: 0x8e2501ac  lw          $a1, 0x1AC($s1)
    ctx->pc = 0x22da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x22da60: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x22da60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x22da64: 0x2484a6e0  addiu       $a0, $a0, -0x5920
    ctx->pc = 0x22da64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944480));
    // 0x22da68: 0xc05224c  jal         func_148930
    ctx->pc = 0x22DA68u;
    SET_GPR_U32(ctx, 31, 0x22DA70u);
    ctx->pc = 0x22DA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA68u;
            // 0x22da6c: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA70u; }
        if (ctx->pc != 0x22DA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA70u; }
        if (ctx->pc != 0x22DA70u) { return; }
    }
    ctx->pc = 0x22DA70u;
label_22da70:
    // 0x22da70: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x22da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x22da74: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x22da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x22da78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DA78u;
    {
        const bool branch_taken_0x22da78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA78u;
            // 0x22da7c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22da78) {
            ctx->pc = 0x22DA88u;
            goto label_22da88;
        }
    }
    ctx->pc = 0x22DA80u;
    // 0x22da80: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x22da80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x22da84: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x22da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22da88:
    // 0x22da88: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22DA88u;
    SET_GPR_U32(ctx, 31, 0x22DA90u);
    ctx->pc = 0x22DA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA88u;
            // 0x22da8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA90u; }
        if (ctx->pc != 0x22DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DA90u; }
        if (ctx->pc != 0x22DA90u) { return; }
    }
    ctx->pc = 0x22DA90u;
label_22da90:
    // 0x22da90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22da90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22da94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22da98: 0xc08b63c  jal         func_22D8F0
    ctx->pc = 0x22DA98u;
    SET_GPR_U32(ctx, 31, 0x22DAA0u);
    ctx->pc = 0x22DA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DA98u;
            // 0x22da9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D8F0u;
    if (runtime->hasFunction(0x22D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DAA0u; }
        if (ctx->pc != 0x22DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__14CRepairManagerFP9mgCMemoryi_0x22d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DAA0u; }
        if (ctx->pc != 0x22DAA0u) { return; }
    }
    ctx->pc = 0x22DAA0u;
label_22daa0:
    // 0x22daa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22daa4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x22daa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_22daa8:
    // 0x22daa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22daa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22daac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22daacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22dab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dab4: 0x3e00008  jr          $ra
    ctx->pc = 0x22DAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DAB4u;
            // 0x22dab8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DABCu;
}
