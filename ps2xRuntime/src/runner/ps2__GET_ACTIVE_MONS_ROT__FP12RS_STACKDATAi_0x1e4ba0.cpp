#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_MONS_ROT__FP12RS_STACKDATAi
// Address: 0x1e4ba0 - 0x1e4c38
void ps2__GET_ACTIVE_MONS_ROT__FP12RS_STACKDATAi_0x1e4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_MONS_ROT__FP12RS_STACKDATAi_0x1e4ba0");
#endif

    switch (ctx->pc) {
        case 0x1e4ba0u: goto label_1e4ba0;
        case 0x1e4ba4u: goto label_1e4ba4;
        case 0x1e4ba8u: goto label_1e4ba8;
        case 0x1e4bacu: goto label_1e4bac;
        case 0x1e4bb0u: goto label_1e4bb0;
        case 0x1e4bb4u: goto label_1e4bb4;
        case 0x1e4bb8u: goto label_1e4bb8;
        case 0x1e4bbcu: goto label_1e4bbc;
        case 0x1e4bc0u: goto label_1e4bc0;
        case 0x1e4bc4u: goto label_1e4bc4;
        case 0x1e4bc8u: goto label_1e4bc8;
        case 0x1e4bccu: goto label_1e4bcc;
        case 0x1e4bd0u: goto label_1e4bd0;
        case 0x1e4bd4u: goto label_1e4bd4;
        case 0x1e4bd8u: goto label_1e4bd8;
        case 0x1e4bdcu: goto label_1e4bdc;
        case 0x1e4be0u: goto label_1e4be0;
        case 0x1e4be4u: goto label_1e4be4;
        case 0x1e4be8u: goto label_1e4be8;
        case 0x1e4becu: goto label_1e4bec;
        case 0x1e4bf0u: goto label_1e4bf0;
        case 0x1e4bf4u: goto label_1e4bf4;
        case 0x1e4bf8u: goto label_1e4bf8;
        case 0x1e4bfcu: goto label_1e4bfc;
        case 0x1e4c00u: goto label_1e4c00;
        case 0x1e4c04u: goto label_1e4c04;
        case 0x1e4c08u: goto label_1e4c08;
        case 0x1e4c0cu: goto label_1e4c0c;
        case 0x1e4c10u: goto label_1e4c10;
        case 0x1e4c14u: goto label_1e4c14;
        case 0x1e4c18u: goto label_1e4c18;
        case 0x1e4c1cu: goto label_1e4c1c;
        case 0x1e4c20u: goto label_1e4c20;
        case 0x1e4c24u: goto label_1e4c24;
        case 0x1e4c28u: goto label_1e4c28;
        case 0x1e4c2cu: goto label_1e4c2c;
        case 0x1e4c30u: goto label_1e4c30;
        case 0x1e4c34u: goto label_1e4c34;
        default: break;
    }

    ctx->pc = 0x1e4ba0u;

label_1e4ba0:
    // 0x1e4ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4ba4:
    // 0x1e4ba4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e4ba8:
    // 0x1e4ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e4ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e4bac:
    // 0x1e4bac: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_1e4bb0:
    if (ctx->pc == 0x1E4BB0u) {
        ctx->pc = 0x1E4BB0u;
            // 0x1e4bb0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1E4BB4u;
        goto label_1e4bb4;
    }
    ctx->pc = 0x1E4BACu;
    {
        const bool branch_taken_0x1e4bac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BACu;
            // 0x1e4bb0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bac) {
            ctx->pc = 0x1E4BBCu;
            goto label_1e4bbc;
        }
    }
    ctx->pc = 0x1E4BB4u;
label_1e4bb4:
    // 0x1e4bb4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1e4bb8:
    if (ctx->pc == 0x1E4BB8u) {
        ctx->pc = 0x1E4BB8u;
            // 0x1e4bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BBCu;
        goto label_1e4bbc;
    }
    ctx->pc = 0x1E4BB4u;
    {
        const bool branch_taken_0x1e4bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BB4u;
            // 0x1e4bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bb4) {
            ctx->pc = 0x1E4C28u;
            goto label_1e4c28;
        }
    }
    ctx->pc = 0x1E4BBCu;
label_1e4bbc:
    // 0x1e4bbc: 0xc07819c  jal         func_1E0670
label_1e4bc0:
    if (ctx->pc == 0x1E4BC0u) {
        ctx->pc = 0x1E4BC0u;
            // 0x1e4bc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4BC4u;
        goto label_1e4bc4;
    }
    ctx->pc = 0x1E4BBCu;
    SET_GPR_U32(ctx, 31, 0x1E4BC4u);
    ctx->pc = 0x1E4BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BBCu;
            // 0x1e4bc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BC4u; }
        if (ctx->pc != 0x1E4BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BC4u; }
        if (ctx->pc != 0x1E4BC4u) { return; }
    }
    ctx->pc = 0x1E4BC4u;
label_1e4bc4:
    // 0x1e4bc4: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e4bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e4bc8:
    // 0x1e4bc8: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1e4bcc:
    // 0x1e4bcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4bd0:
    // 0x1e4bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4bd4:
    // 0x1e4bd4: 0x8c440484  lw          $a0, 0x484($v0)
    ctx->pc = 0x1e4bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
label_1e4bd8:
    // 0x1e4bd8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1e4bdc:
    if (ctx->pc == 0x1E4BDCu) {
        ctx->pc = 0x1E4BDCu;
            // 0x1e4bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BE0u;
        goto label_1e4be0;
    }
    ctx->pc = 0x1E4BD8u;
    {
        const bool branch_taken_0x1e4bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BD8u;
            // 0x1e4bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bd8) {
            ctx->pc = 0x1E4BE8u;
            goto label_1e4be8;
        }
    }
    ctx->pc = 0x1E4BE0u;
label_1e4be0:
    // 0x1e4be0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1e4be4:
    if (ctx->pc == 0x1E4BE4u) {
        ctx->pc = 0x1E4BE4u;
            // 0x1e4be4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1E4BE8u;
        goto label_1e4be8;
    }
    ctx->pc = 0x1E4BE0u;
    {
        const bool branch_taken_0x1e4be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BE0u;
            // 0x1e4be4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4be0) {
            ctx->pc = 0x1E4C2Cu;
            goto label_1e4c2c;
        }
    }
    ctx->pc = 0x1E4BE8u;
label_1e4be8:
    // 0x1e4be8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4bec:
    // 0x1e4bec: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1e4becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1e4bf0:
    // 0x1e4bf0: 0x320f809  jalr        $t9
label_1e4bf4:
    if (ctx->pc == 0x1E4BF4u) {
        ctx->pc = 0x1E4BF4u;
            // 0x1e4bf4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E4BF8u;
        goto label_1e4bf8;
    }
    ctx->pc = 0x1E4BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4BF8u);
        ctx->pc = 0x1E4BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BF0u;
            // 0x1e4bf4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E4BF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BF8u; }
            if (ctx->pc != 0x1E4BF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E4BF8u;
label_1e4bf8:
    // 0x1e4bf8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e4bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4bfc:
    // 0x1e4bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4c00:
    // 0x1e4c00: 0xc0781c4  jal         func_1E0710
label_1e4c04:
    if (ctx->pc == 0x1E4C04u) {
        ctx->pc = 0x1E4C04u;
            // 0x1e4c04: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4C08u;
        goto label_1e4c08;
    }
    ctx->pc = 0x1E4C00u;
    SET_GPR_U32(ctx, 31, 0x1E4C08u);
    ctx->pc = 0x1E4C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C00u;
            // 0x1e4c04: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C08u; }
        if (ctx->pc != 0x1E4C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C08u; }
        if (ctx->pc != 0x1E4C08u) { return; }
    }
    ctx->pc = 0x1E4C08u;
label_1e4c08:
    // 0x1e4c08: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4c0c:
    // 0x1e4c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4c10:
    // 0x1e4c10: 0xc0781c4  jal         func_1E0710
label_1e4c14:
    if (ctx->pc == 0x1E4C14u) {
        ctx->pc = 0x1E4C14u;
            // 0x1e4c14: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4C18u;
        goto label_1e4c18;
    }
    ctx->pc = 0x1E4C10u;
    SET_GPR_U32(ctx, 31, 0x1E4C18u);
    ctx->pc = 0x1E4C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C10u;
            // 0x1e4c14: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C18u; }
        if (ctx->pc != 0x1E4C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C18u; }
        if (ctx->pc != 0x1E4C18u) { return; }
    }
    ctx->pc = 0x1E4C18u;
label_1e4c18:
    // 0x1e4c18: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e4c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4c1c:
    // 0x1e4c1c: 0xc0781c4  jal         func_1E0710
label_1e4c20:
    if (ctx->pc == 0x1E4C20u) {
        ctx->pc = 0x1E4C20u;
            // 0x1e4c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4C24u;
        goto label_1e4c24;
    }
    ctx->pc = 0x1E4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1E4C24u);
    ctx->pc = 0x1E4C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C1Cu;
            // 0x1e4c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C24u; }
        if (ctx->pc != 0x1E4C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4C24u; }
        if (ctx->pc != 0x1E4C24u) { return; }
    }
    ctx->pc = 0x1E4C24u;
label_1e4c24:
    // 0x1e4c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4c28:
    // 0x1e4c28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4c2c:
    // 0x1e4c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4c30:
    // 0x1e4c30: 0x3e00008  jr          $ra
label_1e4c34:
    if (ctx->pc == 0x1E4C34u) {
        ctx->pc = 0x1E4C34u;
            // 0x1e4c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4C38u;
        goto label_fallthrough_0x1e4c30;
    }
    ctx->pc = 0x1E4C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C30u;
            // 0x1e4c34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4c30:
    ctx->pc = 0x1E4C38u;
}
