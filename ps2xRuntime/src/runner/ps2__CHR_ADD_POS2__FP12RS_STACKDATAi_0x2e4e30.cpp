#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_ADD_POS2__FP12RS_STACKDATAi
// Address: 0x2e4e30 - 0x2e4ed0
void ps2__CHR_ADD_POS2__FP12RS_STACKDATAi_0x2e4e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_ADD_POS2__FP12RS_STACKDATAi_0x2e4e30");
#endif

    switch (ctx->pc) {
        case 0x2e4e30u: goto label_2e4e30;
        case 0x2e4e34u: goto label_2e4e34;
        case 0x2e4e38u: goto label_2e4e38;
        case 0x2e4e3cu: goto label_2e4e3c;
        case 0x2e4e40u: goto label_2e4e40;
        case 0x2e4e44u: goto label_2e4e44;
        case 0x2e4e48u: goto label_2e4e48;
        case 0x2e4e4cu: goto label_2e4e4c;
        case 0x2e4e50u: goto label_2e4e50;
        case 0x2e4e54u: goto label_2e4e54;
        case 0x2e4e58u: goto label_2e4e58;
        case 0x2e4e5cu: goto label_2e4e5c;
        case 0x2e4e60u: goto label_2e4e60;
        case 0x2e4e64u: goto label_2e4e64;
        case 0x2e4e68u: goto label_2e4e68;
        case 0x2e4e6cu: goto label_2e4e6c;
        case 0x2e4e70u: goto label_2e4e70;
        case 0x2e4e74u: goto label_2e4e74;
        case 0x2e4e78u: goto label_2e4e78;
        case 0x2e4e7cu: goto label_2e4e7c;
        case 0x2e4e80u: goto label_2e4e80;
        case 0x2e4e84u: goto label_2e4e84;
        case 0x2e4e88u: goto label_2e4e88;
        case 0x2e4e8cu: goto label_2e4e8c;
        case 0x2e4e90u: goto label_2e4e90;
        case 0x2e4e94u: goto label_2e4e94;
        case 0x2e4e98u: goto label_2e4e98;
        case 0x2e4e9cu: goto label_2e4e9c;
        case 0x2e4ea0u: goto label_2e4ea0;
        case 0x2e4ea4u: goto label_2e4ea4;
        case 0x2e4ea8u: goto label_2e4ea8;
        case 0x2e4eacu: goto label_2e4eac;
        case 0x2e4eb0u: goto label_2e4eb0;
        case 0x2e4eb4u: goto label_2e4eb4;
        case 0x2e4eb8u: goto label_2e4eb8;
        case 0x2e4ebcu: goto label_2e4ebc;
        case 0x2e4ec0u: goto label_2e4ec0;
        case 0x2e4ec4u: goto label_2e4ec4;
        case 0x2e4ec8u: goto label_2e4ec8;
        case 0x2e4eccu: goto label_2e4ecc;
        default: break;
    }

    ctx->pc = 0x2e4e30u;

label_2e4e30:
    // 0x2e4e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e4e34:
    // 0x2e4e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e4e38:
    // 0x2e4e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e4e3c:
    // 0x2e4e3c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2e4e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2e4e40:
    // 0x2e4e40: 0xc0b8ca0  jal         func_2E3280
label_2e4e44:
    if (ctx->pc == 0x2E4E44u) {
        ctx->pc = 0x2E4E44u;
            // 0x2e4e44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2E4E48u;
        goto label_2e4e48;
    }
    ctx->pc = 0x2E4E40u;
    SET_GPR_U32(ctx, 31, 0x2E4E48u);
    ctx->pc = 0x2E4E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E40u;
            // 0x2e4e44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E48u; }
        if (ctx->pc != 0x2E4E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E48u; }
        if (ctx->pc != 0x2E4E48u) { return; }
    }
    ctx->pc = 0x2E4E48u;
label_2e4e48:
    // 0x2e4e48: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2e4e48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e4e4c:
    // 0x2e4e4c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4e50:
    // 0x2e4e50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4e54:
    // 0x2e4e54: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4e58:
    // 0x2e4e58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4e5c:
    if (ctx->pc == 0x2E4E5Cu) {
        ctx->pc = 0x2E4E5Cu;
            // 0x2e4e5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E60u;
        goto label_2e4e60;
    }
    ctx->pc = 0x2E4E58u;
    {
        const bool branch_taken_0x2e4e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E58u;
            // 0x2e4e5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e58) {
            ctx->pc = 0x2E4E68u;
            goto label_2e4e68;
        }
    }
    ctx->pc = 0x2E4E60u;
label_2e4e60:
    // 0x2e4e60: 0x10000016  b           . + 4 + (0x16 << 2)
label_2e4e64:
    if (ctx->pc == 0x2E4E64u) {
        ctx->pc = 0x2E4E64u;
            // 0x2e4e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E68u;
        goto label_2e4e68;
    }
    ctx->pc = 0x2E4E60u;
    {
        const bool branch_taken_0x2e4e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E60u;
            // 0x2e4e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e60) {
            ctx->pc = 0x2E4EBCu;
            goto label_2e4ebc;
        }
    }
    ctx->pc = 0x2E4E68u;
label_2e4e68:
    // 0x2e4e68: 0xc0b8cbc  jal         func_2E32F0
label_2e4e6c:
    if (ctx->pc == 0x2E4E6Cu) {
        ctx->pc = 0x2E4E6Cu;
            // 0x2e4e6c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4E70u;
        goto label_2e4e70;
    }
    ctx->pc = 0x2E4E68u;
    SET_GPR_U32(ctx, 31, 0x2E4E70u);
    ctx->pc = 0x2E4E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E68u;
            // 0x2e4e6c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E70u; }
        if (ctx->pc != 0x2E4E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E70u; }
        if (ctx->pc != 0x2E4E70u) { return; }
    }
    ctx->pc = 0x2E4E70u;
label_2e4e70:
    // 0x2e4e70: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4e74:
    // 0x2e4e74: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4e78:
    // 0x2e4e78: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4e7c:
    // 0x2e4e7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4e80:
    // 0x2e4e80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e4e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e4e84:
    // 0x2e4e84: 0x320f809  jalr        $t9
label_2e4e88:
    if (ctx->pc == 0x2E4E88u) {
        ctx->pc = 0x2E4E88u;
            // 0x2e4e88: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E4E8Cu;
        goto label_2e4e8c;
    }
    ctx->pc = 0x2E4E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4E8Cu);
        ctx->pc = 0x2E4E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E84u;
            // 0x2e4e88: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E8Cu; }
            if (ctx->pc != 0x2E4E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E4E8Cu;
label_2e4e8c:
    // 0x2e4e8c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e4e90:
    // 0x2e4e90: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e4e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e4e94:
    // 0x2e4e94: 0xc041c38  jal         func_1070E0
label_2e4e98:
    if (ctx->pc == 0x2E4E98u) {
        ctx->pc = 0x2E4E98u;
            // 0x2e4e98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E9Cu;
        goto label_2e4e9c;
    }
    ctx->pc = 0x2E4E94u;
    SET_GPR_U32(ctx, 31, 0x2E4E9Cu);
    ctx->pc = 0x2E4E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4E94u;
            // 0x2e4e98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E9Cu; }
        if (ctx->pc != 0x2E4E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4E9Cu; }
        if (ctx->pc != 0x2E4E9Cu) { return; }
    }
    ctx->pc = 0x2E4E9Cu;
label_2e4e9c:
    // 0x2e4e9c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4ea0:
    // 0x2e4ea0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4ea4:
    // 0x2e4ea4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4ea8:
    // 0x2e4ea8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e4eac:
    // 0x2e4eac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e4eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e4eb0:
    // 0x2e4eb0: 0x320f809  jalr        $t9
label_2e4eb4:
    if (ctx->pc == 0x2E4EB4u) {
        ctx->pc = 0x2E4EB4u;
            // 0x2e4eb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E4EB8u;
        goto label_2e4eb8;
    }
    ctx->pc = 0x2E4EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E4EB8u);
        ctx->pc = 0x2E4EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4EB0u;
            // 0x2e4eb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E4EB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E4EB8u; }
            if (ctx->pc != 0x2E4EB8u) { return; }
        }
        }
    }
    ctx->pc = 0x2E4EB8u;
label_2e4eb8:
    // 0x2e4eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4ebc:
    // 0x2e4ebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e4ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e4ec0:
    // 0x2e4ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e4ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e4ec4:
    // 0x2e4ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e4ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4ec8:
    // 0x2e4ec8: 0x3e00008  jr          $ra
label_2e4ecc:
    if (ctx->pc == 0x2E4ECCu) {
        ctx->pc = 0x2E4ECCu;
            // 0x2e4ecc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E4ED0u;
        goto label_fallthrough_0x2e4ec8;
    }
    ctx->pc = 0x2E4EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4EC8u;
            // 0x2e4ecc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e4ec8:
    ctx->pc = 0x2E4ED0u;
}
