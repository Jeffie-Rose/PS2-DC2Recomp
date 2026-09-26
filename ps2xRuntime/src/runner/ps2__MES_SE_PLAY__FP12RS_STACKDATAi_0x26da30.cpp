#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MES_SE_PLAY__FP12RS_STACKDATAi
// Address: 0x26da30 - 0x26dad4
void ps2__MES_SE_PLAY__FP12RS_STACKDATAi_0x26da30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MES_SE_PLAY__FP12RS_STACKDATAi_0x26da30");
#endif

    switch (ctx->pc) {
        case 0x26da40u: goto label_26da40;
        case 0x26da7cu: goto label_26da7c;
        case 0x26da94u: goto label_26da94;
        case 0x26daacu: goto label_26daac;
        case 0x26dac4u: goto label_26dac4;
        default: break;
    }

    ctx->pc = 0x26da30u;

    // 0x26da30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26da30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26da34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26da38: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26DA38u;
    SET_GPR_U32(ctx, 31, 0x26DA40u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA40u; }
        if (ctx->pc != 0x26DA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA40u; }
        if (ctx->pc != 0x26DA40u) { return; }
    }
    ctx->pc = 0x26DA40u;
label_26da40:
    // 0x26da40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26da40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26da44: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x26DA44u;
    {
        const bool branch_taken_0x26da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26DA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA44u;
            // 0x26da48: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da44) {
            ctx->pc = 0x26DAB4u;
            goto label_26dab4;
        }
    }
    ctx->pc = 0x26DA4Cu;
    // 0x26da4c: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x26DA4Cu;
    {
        const bool branch_taken_0x26da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26DA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA4Cu;
            // 0x26da50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da4c) {
            ctx->pc = 0x26DA9Cu;
            goto label_26da9c;
        }
    }
    ctx->pc = 0x26DA54u;
    // 0x26da54: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26DA54u;
    {
        const bool branch_taken_0x26da54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26da54) {
            ctx->pc = 0x26DA84u;
            goto label_26da84;
        }
    }
    ctx->pc = 0x26DA5Cu;
    // 0x26da5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DA5Cu;
    {
        const bool branch_taken_0x26da5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26da5c) {
            ctx->pc = 0x26DA6Cu;
            goto label_26da6c;
        }
    }
    ctx->pc = 0x26DA64u;
    // 0x26da64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26DA64u;
    {
        const bool branch_taken_0x26da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA64u;
            // 0x26da68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da64) {
            ctx->pc = 0x26DAC8u;
            goto label_26dac8;
        }
    }
    ctx->pc = 0x26DA6Cu;
label_26da6c:
    // 0x26da6c: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x26da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x26da70: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x26da70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x26da74: 0xc063818  jal         func_18E060
    ctx->pc = 0x26DA74u;
    SET_GPR_U32(ctx, 31, 0x26DA7Cu);
    ctx->pc = 0x26DA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA74u;
            // 0x26da78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA7Cu; }
        if (ctx->pc != 0x26DA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA7Cu; }
        if (ctx->pc != 0x26DA7Cu) { return; }
    }
    ctx->pc = 0x26DA7Cu;
label_26da7c:
    // 0x26da7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26DA7Cu;
    {
        const bool branch_taken_0x26da7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA7Cu;
            // 0x26da80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da7c) {
            ctx->pc = 0x26DAC8u;
            goto label_26dac8;
        }
    }
    ctx->pc = 0x26DA84u;
label_26da84:
    // 0x26da84: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x26da84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x26da88: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x26da88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x26da8c: 0xc063818  jal         func_18E060
    ctx->pc = 0x26DA8Cu;
    SET_GPR_U32(ctx, 31, 0x26DA94u);
    ctx->pc = 0x26DA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA8Cu;
            // 0x26da90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA94u; }
        if (ctx->pc != 0x26DA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA94u; }
        if (ctx->pc != 0x26DA94u) { return; }
    }
    ctx->pc = 0x26DA94u;
label_26da94:
    // 0x26da94: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26DA94u;
    {
        const bool branch_taken_0x26da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA94u;
            // 0x26da98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da94) {
            ctx->pc = 0x26DAC8u;
            goto label_26dac8;
        }
    }
    ctx->pc = 0x26DA9Cu;
label_26da9c:
    // 0x26da9c: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x26da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x26daa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26daa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26daa4: 0xc063818  jal         func_18E060
    ctx->pc = 0x26DAA4u;
    SET_GPR_U32(ctx, 31, 0x26DAACu);
    ctx->pc = 0x26DAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAA4u;
            // 0x26daa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAACu; }
        if (ctx->pc != 0x26DAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAACu; }
        if (ctx->pc != 0x26DAACu) { return; }
    }
    ctx->pc = 0x26DAACu;
label_26daac:
    // 0x26daac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26DAACu;
    {
        const bool branch_taken_0x26daac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAACu;
            // 0x26dab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26daac) {
            ctx->pc = 0x26DAC8u;
            goto label_26dac8;
        }
    }
    ctx->pc = 0x26DAB4u;
label_26dab4:
    // 0x26dab4: 0x8f848ac4  lw          $a0, -0x753C($gp)
    ctx->pc = 0x26dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937284)));
    // 0x26dab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dabc: 0xc063818  jal         func_18E060
    ctx->pc = 0x26DABCu;
    SET_GPR_U32(ctx, 31, 0x26DAC4u);
    ctx->pc = 0x26DAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DABCu;
            // 0x26dac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAC4u; }
        if (ctx->pc != 0x26DAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAC4u; }
        if (ctx->pc != 0x26DAC4u) { return; }
    }
    ctx->pc = 0x26DAC4u;
label_26dac4:
    // 0x26dac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26dac8:
    // 0x26dac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26dac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dacc: 0x3e00008  jr          $ra
    ctx->pc = 0x26DACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DACCu;
            // 0x26dad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DAD4u;
}
