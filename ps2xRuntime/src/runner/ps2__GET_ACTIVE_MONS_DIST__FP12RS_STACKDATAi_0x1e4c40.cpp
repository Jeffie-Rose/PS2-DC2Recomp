#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_MONS_DIST__FP12RS_STACKDATAi
// Address: 0x1e4c40 - 0x1e4ce4
void ps2__GET_ACTIVE_MONS_DIST__FP12RS_STACKDATAi_0x1e4c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_MONS_DIST__FP12RS_STACKDATAi_0x1e4c40");
#endif

    switch (ctx->pc) {
        case 0x1e4c40u: goto label_1e4c40;
        case 0x1e4c44u: goto label_1e4c44;
        case 0x1e4c48u: goto label_1e4c48;
        case 0x1e4c4cu: goto label_1e4c4c;
        case 0x1e4c50u: goto label_1e4c50;
        case 0x1e4c54u: goto label_1e4c54;
        case 0x1e4c58u: goto label_1e4c58;
        case 0x1e4c5cu: goto label_1e4c5c;
        case 0x1e4c60u: goto label_1e4c60;
        case 0x1e4c64u: goto label_1e4c64;
        case 0x1e4c68u: goto label_1e4c68;
        case 0x1e4c6cu: goto label_1e4c6c;
        case 0x1e4c70u: goto label_1e4c70;
        case 0x1e4c74u: goto label_1e4c74;
        case 0x1e4c78u: goto label_1e4c78;
        case 0x1e4c7cu: goto label_1e4c7c;
        case 0x1e4c80u: goto label_1e4c80;
        case 0x1e4c84u: goto label_1e4c84;
        case 0x1e4c88u: goto label_1e4c88;
        case 0x1e4c8cu: goto label_1e4c8c;
        case 0x1e4c90u: goto label_1e4c90;
        case 0x1e4c94u: goto label_1e4c94;
        case 0x1e4c98u: goto label_1e4c98;
        case 0x1e4c9cu: goto label_1e4c9c;
        case 0x1e4ca0u: goto label_1e4ca0;
        case 0x1e4ca4u: goto label_1e4ca4;
        case 0x1e4ca8u: goto label_1e4ca8;
        case 0x1e4cacu: goto label_1e4cac;
        case 0x1e4cb0u: goto label_1e4cb0;
        case 0x1e4cb4u: goto label_1e4cb4;
        case 0x1e4cb8u: goto label_1e4cb8;
        case 0x1e4cbcu: goto label_1e4cbc;
        case 0x1e4cc0u: goto label_1e4cc0;
        case 0x1e4cc4u: goto label_1e4cc4;
        case 0x1e4cc8u: goto label_1e4cc8;
        case 0x1e4cccu: goto label_1e4ccc;
        case 0x1e4cd0u: goto label_1e4cd0;
        case 0x1e4cd4u: goto label_1e4cd4;
        case 0x1e4cd8u: goto label_1e4cd8;
        case 0x1e4cdcu: goto label_1e4cdc;
        case 0x1e4ce0u: goto label_1e4ce0;
        default: break;
    }

    ctx->pc = 0x1e4c40u;

label_1e4c40:
    // 0x1e4c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e4c44:
    // 0x1e4c44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e4c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e4c48:
    // 0x1e4c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e4c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e4c4c:
    // 0x1e4c4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4c50:
    // 0x1e4c50: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4c54:
    if (ctx->pc == 0x1E4C54u) {
        ctx->pc = 0x1E4C54u;
            // 0x1e4c54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E4C58u;
        goto label_1e4c58;
    }
    ctx->pc = 0x1E4C50u;
    {
        const bool branch_taken_0x1e4c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C50u;
            // 0x1e4c54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c50) {
            ctx->pc = 0x1E4C60u;
            goto label_1e4c60;
        }
    }
    ctx->pc = 0x1E4C58u;
label_1e4c58:
    // 0x1e4c58: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e4c5c:
    if (ctx->pc == 0x1E4C5Cu) {
        ctx->pc = 0x1E4C5Cu;
            // 0x1e4c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C60u;
        goto label_1e4c60;
    }
    ctx->pc = 0x1E4C58u;
    {
        const bool branch_taken_0x1e4c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C58u;
            // 0x1e4c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c58) {
            ctx->pc = 0x1E4CD0u;
            goto label_1e4cd0;
        }
    }
    ctx->pc = 0x1E4C60u;
label_1e4c60:
    // 0x1e4c60: 0xc07819c  jal         func_1E0670
label_1e4c64:
    if (ctx->pc == 0x1E4C64u) {
        ctx->pc = 0x1E4C64u;
            // 0x1e4c64: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4C68u;
        goto label_1e4c68;
    }
    ctx->pc = 0x1E4C60u;
    SET_GPR_U32(ctx, 31, 0x1E4C68u);
    ctx->pc = 0x1E4C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C60u;
            // 0x1e4c64: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C68u; }
        if (ctx->pc != 0x1E4C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C68u; }
        if (ctx->pc != 0x1E4C68u) { return; }
    }
    ctx->pc = 0x1E4C68u;
label_1e4c68:
    // 0x1e4c68: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e4c6c:
    // 0x1e4c6c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1e4c70:
    // 0x1e4c70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4c74:
    // 0x1e4c74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4c78:
    // 0x1e4c78: 0x8c510484  lw          $s1, 0x484($v0)
    ctx->pc = 0x1e4c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1e4c7c:
    // 0x1e4c7c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1e4c80:
    if (ctx->pc == 0x1E4C80u) {
        ctx->pc = 0x1E4C80u;
            // 0x1e4c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C84u;
        goto label_1e4c84;
    }
    ctx->pc = 0x1E4C7Cu;
    {
        const bool branch_taken_0x1e4c7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C7Cu;
            // 0x1e4c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c7c) {
            ctx->pc = 0x1E4C8Cu;
            goto label_1e4c8c;
        }
    }
    ctx->pc = 0x1E4C84u;
label_1e4c84:
    // 0x1e4c84: 0x10000013  b           . + 4 + (0x13 << 2)
label_1e4c88:
    if (ctx->pc == 0x1E4C88u) {
        ctx->pc = 0x1E4C88u;
            // 0x1e4c88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E4C8Cu;
        goto label_1e4c8c;
    }
    ctx->pc = 0x1E4C84u;
    {
        const bool branch_taken_0x1e4c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C84u;
            // 0x1e4c88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4c84) {
            ctx->pc = 0x1E4CD4u;
            goto label_1e4cd4;
        }
    }
    ctx->pc = 0x1E4C8Cu;
label_1e4c8c:
    // 0x1e4c8c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e4c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4c90:
    // 0x1e4c90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4c90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4c94:
    // 0x1e4c94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4c94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4c98:
    // 0x1e4c98: 0x320f809  jalr        $t9
label_1e4c9c:
    if (ctx->pc == 0x1E4C9Cu) {
        ctx->pc = 0x1E4C9Cu;
            // 0x1e4c9c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4CA0u;
        goto label_1e4ca0;
    }
    ctx->pc = 0x1E4C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4CA0u);
        ctx->pc = 0x1E4C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C98u;
            // 0x1e4c9c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4CA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CA0u; }
            if (ctx->pc != 0x1E4CA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4CA0u;
label_1e4ca0:
    // 0x1e4ca0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1e4ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1e4ca4:
    // 0x1e4ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4ca8:
    // 0x1e4ca8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e4ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e4cac:
    // 0x1e4cac: 0x320f809  jalr        $t9
label_1e4cb0:
    if (ctx->pc == 0x1E4CB0u) {
        ctx->pc = 0x1E4CB0u;
            // 0x1e4cb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E4CB4u;
        goto label_1e4cb4;
    }
    ctx->pc = 0x1E4CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4CB4u);
        ctx->pc = 0x1E4CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CACu;
            // 0x1e4cb0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CB4u; }
            if (ctx->pc != 0x1E4CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4CB4u;
label_1e4cb4:
    // 0x1e4cb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e4cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e4cb8:
    // 0x1e4cb8: 0xc04c018  jal         func_130060
label_1e4cbc:
    if (ctx->pc == 0x1E4CBCu) {
        ctx->pc = 0x1E4CBCu;
            // 0x1e4cbc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4CC0u;
        goto label_1e4cc0;
    }
    ctx->pc = 0x1E4CB8u;
    SET_GPR_U32(ctx, 31, 0x1E4CC0u);
    ctx->pc = 0x1E4CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CB8u;
            // 0x1e4cbc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CC0u; }
        if (ctx->pc != 0x1E4CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CC0u; }
        if (ctx->pc != 0x1E4CC0u) { return; }
    }
    ctx->pc = 0x1E4CC0u;
label_1e4cc0:
    // 0x1e4cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4cc4:
    // 0x1e4cc4: 0xc0781c4  jal         func_1E0710
label_1e4cc8:
    if (ctx->pc == 0x1E4CC8u) {
        ctx->pc = 0x1E4CC8u;
            // 0x1e4cc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4CCCu;
        goto label_1e4ccc;
    }
    ctx->pc = 0x1E4CC4u;
    SET_GPR_U32(ctx, 31, 0x1E4CCCu);
    ctx->pc = 0x1E4CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CC4u;
            // 0x1e4cc8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CCCu; }
        if (ctx->pc != 0x1E4CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4CCCu; }
        if (ctx->pc != 0x1E4CCCu) { return; }
    }
    ctx->pc = 0x1E4CCCu;
label_1e4ccc:
    // 0x1e4ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4cd0:
    // 0x1e4cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e4cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4cd4:
    // 0x1e4cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e4cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4cd8:
    // 0x1e4cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4cdc:
    // 0x1e4cdc: 0x3e00008  jr          $ra
label_1e4ce0:
    if (ctx->pc == 0x1E4CE0u) {
        ctx->pc = 0x1E4CE0u;
            // 0x1e4ce0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E4CE4u;
        goto label_fallthrough_0x1e4cdc;
    }
    ctx->pc = 0x1E4CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4CDCu;
            // 0x1e4ce0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4cdc:
    ctx->pc = 0x1E4CE4u;
}
