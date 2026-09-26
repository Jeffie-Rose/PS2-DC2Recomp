#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DNG_CREATE_EFFECT__FP12RS_STACKDATAi
// Address: 0x27d9b0 - 0x27dae0
void ps2__DNG_CREATE_EFFECT__FP12RS_STACKDATAi_0x27d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DNG_CREATE_EFFECT__FP12RS_STACKDATAi_0x27d9b0");
#endif

    switch (ctx->pc) {
        case 0x27d9ccu: goto label_27d9cc;
        case 0x27d9e0u: goto label_27d9e0;
        case 0x27da14u: goto label_27da14;
        case 0x27da2cu: goto label_27da2c;
        case 0x27da38u: goto label_27da38;
        case 0x27da44u: goto label_27da44;
        case 0x27da5cu: goto label_27da5c;
        case 0x27da74u: goto label_27da74;
        case 0x27da84u: goto label_27da84;
        case 0x27da90u: goto label_27da90;
        case 0x27daa4u: goto label_27daa4;
        case 0x27dab8u: goto label_27dab8;
        default: break;
    }

    ctx->pc = 0x27d9b0u;

    // 0x27d9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27d9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27d9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d9c0: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27d9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27d9c4: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27D9C4u;
    SET_GPR_U32(ctx, 31, 0x27D9CCu);
    ctx->pc = 0x27D9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9C4u;
            // 0x27d9c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D9CCu; }
        if (ctx->pc != 0x27D9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D9CCu; }
        if (ctx->pc != 0x27D9CCu) { return; }
    }
    ctx->pc = 0x27D9CCu;
label_27d9cc:
    // 0x27d9cc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x27d9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x27d9d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27d9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d9d8: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x27D9D8u;
    SET_GPR_U32(ctx, 31, 0x27D9E0u);
    ctx->pc = 0x27D9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9D8u;
            // 0x27d9dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D9E0u; }
        if (ctx->pc != 0x27D9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D9E0u; }
        if (ctx->pc != 0x27D9E0u) { return; }
    }
    ctx->pc = 0x27D9E0u;
label_27d9e0:
    // 0x27d9e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27d9e4: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x27D9E4u;
    {
        const bool branch_taken_0x27d9e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9E4u;
            // 0x27d9e8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9e4) {
            ctx->pc = 0x27DA7Cu;
            goto label_27da7c;
        }
    }
    ctx->pc = 0x27D9ECu;
    // 0x27d9ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d9f0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27D9F0u;
    {
        const bool branch_taken_0x27d9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9F0u;
            // 0x27d9f4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9f0) {
            ctx->pc = 0x27DA30u;
            goto label_27da30;
        }
    }
    ctx->pc = 0x27D9F8u;
    // 0x27d9f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27d9fc: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D9FCu;
    {
        const bool branch_taken_0x27d9fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27DA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9FCu;
            // 0x27da00: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9fc) {
            ctx->pc = 0x27DA0Cu;
            goto label_27da0c;
        }
    }
    ctx->pc = 0x27DA04u;
    // 0x27da04: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x27DA04u;
    {
        const bool branch_taken_0x27da04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA04u;
            // 0x27da08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da04) {
            ctx->pc = 0x27DAC0u;
            goto label_27dac0;
        }
    }
    ctx->pc = 0x27DA0Cu;
label_27da0c:
    // 0x27da0c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27DA0Cu;
    SET_GPR_U32(ctx, 31, 0x27DA14u);
    ctx->pc = 0x27DA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA0Cu;
            // 0x27da10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA14u; }
        if (ctx->pc != 0x27DA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA14u; }
        if (ctx->pc != 0x27DA14u) { return; }
    }
    ctx->pc = 0x27DA14u;
label_27da14:
    // 0x27da14: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x27da14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x27da18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27da18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27da1c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27da20: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x27da20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da24: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x27DA24u;
    SET_GPR_U32(ctx, 31, 0x27DA2Cu);
    ctx->pc = 0x27DA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA24u;
            // 0x27da28: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA2Cu; }
        if (ctx->pc != 0x27DA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA2Cu; }
        if (ctx->pc != 0x27DA2Cu) { return; }
    }
    ctx->pc = 0x27DA2Cu;
label_27da2c:
    // 0x27da2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27da30:
    // 0x27da30: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27DA30u;
    SET_GPR_U32(ctx, 31, 0x27DA38u);
    ctx->pc = 0x27DA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA30u;
            // 0x27da34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA38u; }
        if (ctx->pc != 0x27DA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA38u; }
        if (ctx->pc != 0x27DA38u) { return; }
    }
    ctx->pc = 0x27DA38u;
label_27da38:
    // 0x27da38: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x27da38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x27da3c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27DA3Cu;
    SET_GPR_U32(ctx, 31, 0x27DA44u);
    ctx->pc = 0x27DA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA3Cu;
            // 0x27da40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA44u; }
        if (ctx->pc != 0x27DA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA44u; }
        if (ctx->pc != 0x27DA44u) { return; }
    }
    ctx->pc = 0x27DA44u;
label_27da44:
    // 0x27da44: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x27da44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x27da48: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27da48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27da4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27da4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da50: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27da54: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x27DA54u;
    SET_GPR_U32(ctx, 31, 0x27DA5Cu);
    ctx->pc = 0x27DA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA54u;
            // 0x27da58: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA5Cu; }
        if (ctx->pc != 0x27DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA5Cu; }
        if (ctx->pc != 0x27DA5Cu) { return; }
    }
    ctx->pc = 0x27DA5Cu;
label_27da5c:
    // 0x27da5c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x27da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x27da60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27da60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27da64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27da64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27da68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da6c: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x27DA6Cu;
    SET_GPR_U32(ctx, 31, 0x27DA74u);
    ctx->pc = 0x27DA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA6Cu;
            // 0x27da70: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA74u; }
        if (ctx->pc != 0x27DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA74u; }
        if (ctx->pc != 0x27DA74u) { return; }
    }
    ctx->pc = 0x27DA74u;
label_27da74:
    // 0x27da74: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x27DA74u;
    {
        const bool branch_taken_0x27da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA74u;
            // 0x27da78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da74) {
            ctx->pc = 0x27DACCu;
            goto label_27dacc;
        }
    }
    ctx->pc = 0x27DA7Cu;
label_27da7c:
    // 0x27da7c: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27DA7Cu;
    SET_GPR_U32(ctx, 31, 0x27DA84u);
    ctx->pc = 0x27DA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA7Cu;
            // 0x27da80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA84u; }
        if (ctx->pc != 0x27DA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA84u; }
        if (ctx->pc != 0x27DA84u) { return; }
    }
    ctx->pc = 0x27DA84u;
label_27da84:
    // 0x27da84: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x27da84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x27da88: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x27DA88u;
    SET_GPR_U32(ctx, 31, 0x27DA90u);
    ctx->pc = 0x27DA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA88u;
            // 0x27da8c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA90u; }
        if (ctx->pc != 0x27DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA90u; }
        if (ctx->pc != 0x27DA90u) { return; }
    }
    ctx->pc = 0x27DA90u;
label_27da90:
    // 0x27da90: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x27da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x27da94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27da94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27da98: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27da98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27da9c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x27DA9Cu;
    SET_GPR_U32(ctx, 31, 0x27DAA4u);
    ctx->pc = 0x27DAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA9Cu;
            // 0x27daa0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAA4u; }
        if (ctx->pc != 0x27DAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAA4u; }
        if (ctx->pc != 0x27DAA4u) { return; }
    }
    ctx->pc = 0x27DAA4u;
label_27daa4:
    // 0x27daa4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x27daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x27daa8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x27daa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27daac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27dab0: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x27DAB0u;
    SET_GPR_U32(ctx, 31, 0x27DAB8u);
    ctx->pc = 0x27DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DAB0u;
            // 0x27dab4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAB8u; }
        if (ctx->pc != 0x27DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAB8u; }
        if (ctx->pc != 0x27DAB8u) { return; }
    }
    ctx->pc = 0x27DAB8u;
label_27dab8:
    // 0x27dab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DAB8u;
    {
        const bool branch_taken_0x27dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dab8) {
            ctx->pc = 0x27DAC8u;
            goto label_27dac8;
        }
    }
    ctx->pc = 0x27DAC0u;
label_27dac0:
    // 0x27dac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27DAC0u;
    {
        const bool branch_taken_0x27dac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DAC0u;
            // 0x27dac4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dac0) {
            ctx->pc = 0x27DAD0u;
            goto label_27dad0;
        }
    }
    ctx->pc = 0x27DAC8u;
label_27dac8:
    // 0x27dac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27dacc:
    // 0x27dacc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27daccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27dad0:
    // 0x27dad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27dad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27dad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dad8: 0x3e00008  jr          $ra
    ctx->pc = 0x27DAD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DAD8u;
            // 0x27dadc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27DAE0u;
}
