#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VALUE__FP12RS_STACKDATAi
// Address: 0x1e6b20 - 0x1e6c00
void ps2__ESM_SET_VALUE__FP12RS_STACKDATAi_0x1e6b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VALUE__FP12RS_STACKDATAi_0x1e6b20");
#endif

    switch (ctx->pc) {
        case 0x1e6b48u: goto label_1e6b48;
        case 0x1e6b58u: goto label_1e6b58;
        case 0x1e6b84u: goto label_1e6b84;
        case 0x1e6ba8u: goto label_1e6ba8;
        case 0x1e6bb8u: goto label_1e6bb8;
        case 0x1e6bdcu: goto label_1e6bdc;
        default: break;
    }

    ctx->pc = 0x1e6b20u;

    // 0x1e6b20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e6b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e6b24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e6b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e6b28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6b2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6b38: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e6b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6b3c: 0x8c530670  lw          $s3, 0x670($v0)
    ctx->pc = 0x1e6b3cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1648)));
    // 0x1e6b40: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6B40u;
    SET_GPR_U32(ctx, 31, 0x1E6B48u);
    ctx->pc = 0x1E6B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B40u;
            // 0x1e6b44: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B48u; }
        if (ctx->pc != 0x1E6B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B48u; }
        if (ctx->pc != 0x1E6B48u) { return; }
    }
    ctx->pc = 0x1E6B48u;
label_1e6b48:
    // 0x1e6b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e6b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b50: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6B50u;
    SET_GPR_U32(ctx, 31, 0x1E6B58u);
    ctx->pc = 0x1E6B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B50u;
            // 0x1e6b54: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B58u; }
        if (ctx->pc != 0x1E6B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B58u; }
        if (ctx->pc != 0x1E6B58u) { return; }
    }
    ctx->pc = 0x1E6B58u;
label_1e6b58:
    // 0x1e6b58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e6b5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e6b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6b64: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E6B64u;
    {
        const bool branch_taken_0x1e6b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B64u;
            // 0x1e6b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b64) {
            ctx->pc = 0x1E6BB0u;
            goto label_1e6bb0;
        }
    }
    ctx->pc = 0x1E6B6Cu;
    // 0x1e6b6c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6B6Cu;
    {
        const bool branch_taken_0x1e6b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B6Cu;
            // 0x1e6b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b6c) {
            ctx->pc = 0x1E6B7Cu;
            goto label_1e6b7c;
        }
    }
    ctx->pc = 0x1E6B74u;
    // 0x1e6b74: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1E6B74u;
    {
        const bool branch_taken_0x1e6b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B74u;
            // 0x1e6b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6b74) {
            ctx->pc = 0x1E6BE4u;
            goto label_1e6be4;
        }
    }
    ctx->pc = 0x1E6B7Cu;
label_1e6b7c:
    // 0x1e6b7c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6B7Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B84u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B84u; }
        if (ctx->pc != 0x1E6B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B84u; }
        if (ctx->pc != 0x1E6B84u) { return; }
    }
    ctx->pc = 0x1E6B84u;
label_1e6b84:
    // 0x1e6b84: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6b88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e6b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b90: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1e6b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b94: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1e6b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6b98: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e6b9c: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6ba0: 0xc0b89c4  jal         func_2E2710
    ctx->pc = 0x1E6BA0u;
    SET_GPR_U32(ctx, 31, 0x1E6BA8u);
    ctx->pc = 0x1E6BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BA0u;
            // 0x1e6ba4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2710u;
    if (runtime->hasFunction(0x2E2710u)) {
        auto targetFn = runtime->lookupFunction(0x2E2710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BA8u; }
        if (ctx->pc != 0x1E6BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFiiii_0x2e2710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BA8u; }
        if (ctx->pc != 0x1E6BA8u) { return; }
    }
    ctx->pc = 0x1E6BA8u;
label_1e6ba8:
    // 0x1e6ba8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E6BA8u;
    {
        const bool branch_taken_0x1e6ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6ba8) {
            ctx->pc = 0x1E6BE4u;
            goto label_1e6be4;
        }
    }
    ctx->pc = 0x1E6BB0u;
label_1e6bb0:
    // 0x1e6bb0: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6BB0u;
    SET_GPR_U32(ctx, 31, 0x1E6BB8u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BB8u; }
        if (ctx->pc != 0x1E6BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BB8u; }
        if (ctx->pc != 0x1E6BB8u) { return; }
    }
    ctx->pc = 0x1E6BB8u;
label_1e6bb8:
    // 0x1e6bb8: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6bbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6bc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e6bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6bc4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e6bc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6bc8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1e6bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1e6bcc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e6bd0: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6bd4: 0xc0b89f0  jal         func_2E27C0
    ctx->pc = 0x1E6BD4u;
    SET_GPR_U32(ctx, 31, 0x1E6BDCu);
    ctx->pc = 0x1E6BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BD4u;
            // 0x1e6bd8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E27C0u;
    if (runtime->hasFunction(0x2E27C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E27C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BDCu; }
        if (ctx->pc != 0x1E6BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetValue__16CEffectScriptManFifii_0x2e27c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BDCu; }
        if (ctx->pc != 0x1E6BDCu) { return; }
    }
    ctx->pc = 0x1E6BDCu;
label_1e6bdc:
    // 0x1e6bdc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E6BDCu;
    {
        const bool branch_taken_0x1e6bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6bdc) {
            ctx->pc = 0x1E6BE4u;
            goto label_1e6be4;
        }
    }
    ctx->pc = 0x1E6BE4u;
label_1e6be4:
    // 0x1e6be4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e6be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6be8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BF8u;
            // 0x1e6bfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6C00u;
}
