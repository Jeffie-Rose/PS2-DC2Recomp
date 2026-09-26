#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_EFFECT_SCRIPT__FP12RS_STACKDATAi
// Address: 0x1e6c00 - 0x1e6d58
void ps2__LOAD_EFFECT_SCRIPT__FP12RS_STACKDATAi_0x1e6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_EFFECT_SCRIPT__FP12RS_STACKDATAi_0x1e6c00");
#endif

    switch (ctx->pc) {
        case 0x1e6c3cu: goto label_1e6c3c;
        case 0x1e6c68u: goto label_1e6c68;
        case 0x1e6c80u: goto label_1e6c80;
        case 0x1e6ca4u: goto label_1e6ca4;
        case 0x1e6cb4u: goto label_1e6cb4;
        case 0x1e6cccu: goto label_1e6ccc;
        case 0x1e6cf0u: goto label_1e6cf0;
        case 0x1e6d20u: goto label_1e6d20;
        case 0x1e6d30u: goto label_1e6d30;
        default: break;
    }

    ctx->pc = 0x1e6c00u;

    // 0x1e6c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e6c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e6c04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e6c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e6c08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e6c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e6c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e6c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e6c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e6c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e6c14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e6c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e6c1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e6c1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e6c24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6c28: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x1e6c2c: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1e6c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1e6c30: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e6c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e6c34: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x1E6C34u;
    SET_GPR_U32(ctx, 31, 0x1E6C3Cu);
    ctx->pc = 0x1E6C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C34u;
            // 0x1e6c38: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C3Cu; }
        if (ctx->pc != 0x1E6C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C3Cu; }
        if (ctx->pc != 0x1E6C3Cu) { return; }
    }
    ctx->pc = 0x1E6C3Cu;
label_1e6c3c:
    // 0x1e6c3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e6c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e6c40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e6c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e6c48: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E6C48u;
    {
        const bool branch_taken_0x1e6c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C48u;
            // 0x1e6c4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c48) {
            ctx->pc = 0x1E6CACu;
            goto label_1e6cac;
        }
    }
    ctx->pc = 0x1E6C50u;
    // 0x1e6c50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6C50u;
    {
        const bool branch_taken_0x1e6c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C50u;
            // 0x1e6c54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c50) {
            ctx->pc = 0x1E6C60u;
            goto label_1e6c60;
        }
    }
    ctx->pc = 0x1E6C58u;
    // 0x1e6c58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1E6C58u;
    {
        const bool branch_taken_0x1e6c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C58u;
            // 0x1e6c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c58) {
            ctx->pc = 0x1E6CF8u;
            goto label_1e6cf8;
        }
    }
    ctx->pc = 0x1E6C60u;
label_1e6c60:
    // 0x1e6c60: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6C60u;
    SET_GPR_U32(ctx, 31, 0x1E6C68u);
    ctx->pc = 0x1E6C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C60u;
            // 0x1e6c64: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C68u; }
        if (ctx->pc != 0x1E6C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C68u; }
        if (ctx->pc != 0x1E6C68u) { return; }
    }
    ctx->pc = 0x1E6C68u;
label_1e6c68:
    // 0x1e6c68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e6c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c6c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1e6c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e6c70: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6C70u;
    {
        const bool branch_taken_0x1e6c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C70u;
            // 0x1e6c74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c70) {
            ctx->pc = 0x1E6C84u;
            goto label_1e6c84;
        }
    }
    ctx->pc = 0x1E6C78u;
    // 0x1e6c78: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6C78u;
    SET_GPR_U32(ctx, 31, 0x1E6C80u);
    ctx->pc = 0x1E6C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C78u;
            // 0x1e6c7c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C80u; }
        if (ctx->pc != 0x1E6C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C80u; }
        if (ctx->pc != 0x1E6C80u) { return; }
    }
    ctx->pc = 0x1E6C80u;
label_1e6c80:
    // 0x1e6c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6c84:
    // 0x1e6c84: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6c88: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6c8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e6c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e6c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6c94: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e6c98: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6c9c: 0xc0b7fe8  jal         func_2DFFA0
    ctx->pc = 0x1E6C9Cu;
    SET_GPR_U32(ctx, 31, 0x1E6CA4u);
    ctx->pc = 0x1E6CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C9Cu;
            // 0x1e6ca0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFFA0u;
    if (runtime->hasFunction(0x2DFFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CA4u; }
        if (ctx->pc != 0x1E6CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFiP9mgCMemoryi_0x2dffa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CA4u; }
        if (ctx->pc != 0x1E6CA4u) { return; }
    }
    ctx->pc = 0x1E6CA4u;
label_1e6ca4:
    // 0x1e6ca4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E6CA4u;
    {
        const bool branch_taken_0x1e6ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CA4u;
            // 0x1e6ca8: 0x2a430003  slti        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ca4) {
            ctx->pc = 0x1E6D04u;
            goto label_1e6d04;
        }
    }
    ctx->pc = 0x1E6CACu;
label_1e6cac:
    // 0x1e6cac: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E6CACu;
    SET_GPR_U32(ctx, 31, 0x1E6CB4u);
    ctx->pc = 0x1E6CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CACu;
            // 0x1e6cb0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CB4u; }
        if (ctx->pc != 0x1E6CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CB4u; }
        if (ctx->pc != 0x1E6CB4u) { return; }
    }
    ctx->pc = 0x1E6CB4u;
label_1e6cb4:
    // 0x1e6cb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1e6cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6cb8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1e6cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e6cbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6CBCu;
    {
        const bool branch_taken_0x1e6cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CBCu;
            // 0x1e6cc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6cbc) {
            ctx->pc = 0x1E6CD0u;
            goto label_1e6cd0;
        }
    }
    ctx->pc = 0x1E6CC4u;
    // 0x1e6cc4: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E6CC4u;
    SET_GPR_U32(ctx, 31, 0x1E6CCCu);
    ctx->pc = 0x1E6CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CC4u;
            // 0x1e6cc8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CCCu; }
        if (ctx->pc != 0x1E6CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CCCu; }
        if (ctx->pc != 0x1E6CCCu) { return; }
    }
    ctx->pc = 0x1E6CCCu;
label_1e6ccc:
    // 0x1e6ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e6cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e6cd0:
    // 0x1e6cd0: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6cd4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6cd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e6cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6cdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e6cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6ce0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e6ce4: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6ce8: 0xc0b8040  jal         func_2E0100
    ctx->pc = 0x1E6CE8u;
    SET_GPR_U32(ctx, 31, 0x1E6CF0u);
    ctx->pc = 0x1E6CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CE8u;
            // 0x1e6cec: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CF0u; }
        if (ctx->pc != 0x1E6CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CF0u; }
        if (ctx->pc != 0x1E6CF0u) { return; }
    }
    ctx->pc = 0x1E6CF0u;
label_1e6cf0:
    // 0x1e6cf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6CF0u;
    {
        const bool branch_taken_0x1e6cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6cf0) {
            ctx->pc = 0x1E6D00u;
            goto label_1e6d00;
        }
    }
    ctx->pc = 0x1E6CF8u;
label_1e6cf8:
    // 0x1e6cf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6CF8u;
    {
        const bool branch_taken_0x1e6cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CF8u;
            // 0x1e6cfc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6cf8) {
            ctx->pc = 0x1E6D3Cu;
            goto label_1e6d3c;
        }
    }
    ctx->pc = 0x1E6D00u;
label_1e6d00:
    // 0x1e6d00: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1e6d00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e6d04:
    // 0x1e6d04: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E6D04u;
    {
        const bool branch_taken_0x1e6d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d04) {
            ctx->pc = 0x1E6D30u;
            goto label_1e6d30;
        }
    }
    ctx->pc = 0x1E6D0Cu;
    // 0x1e6d0c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6D0Cu;
    {
        const bool branch_taken_0x1e6d0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E6D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D0Cu;
            // 0x1e6d10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d0c) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6D14u;
    // 0x1e6d14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e6d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6d18: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E6D18u;
    SET_GPR_U32(ctx, 31, 0x1E6D20u);
    ctx->pc = 0x1E6D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D18u;
            // 0x1e6d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D20u; }
        if (ctx->pc != 0x1E6D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D20u; }
        if (ctx->pc != 0x1E6D20u) { return; }
    }
    ctx->pc = 0x1E6D20u;
label_1e6d20:
    // 0x1e6d20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E6D20u;
    {
        const bool branch_taken_0x1e6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D20u;
            // 0x1e6d24: 0x40102a  slt         $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6d20) {
            ctx->pc = 0x1E6D34u;
            goto label_1e6d34;
        }
    }
    ctx->pc = 0x1E6D28u;
label_1e6d28:
    // 0x1e6d28: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E6D28u;
    SET_GPR_U32(ctx, 31, 0x1E6D30u);
    ctx->pc = 0x1E6D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D28u;
            // 0x1e6d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D30u; }
        if (ctx->pc != 0x1E6D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D30u; }
        if (ctx->pc != 0x1E6D30u) { return; }
    }
    ctx->pc = 0x1E6D30u;
label_1e6d30:
    // 0x1e6d30: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1e6d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1e6d34:
    // 0x1e6d34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e6d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e6d38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e6d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e6d3c:
    // 0x1e6d3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e6d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e6d40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e6d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6d44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e6d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e6d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6d50: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D50u;
            // 0x1e6d54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6D58u;
}
