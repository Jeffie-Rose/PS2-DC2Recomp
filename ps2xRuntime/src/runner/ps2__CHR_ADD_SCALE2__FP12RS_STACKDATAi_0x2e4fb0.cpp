#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHR_ADD_SCALE2__FP12RS_STACKDATAi
// Address: 0x2e4fb0 - 0x2e5050
void ps2__CHR_ADD_SCALE2__FP12RS_STACKDATAi_0x2e4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHR_ADD_SCALE2__FP12RS_STACKDATAi_0x2e4fb0");
#endif

    switch (ctx->pc) {
        case 0x2e4fb0u: goto label_2e4fb0;
        case 0x2e4fb4u: goto label_2e4fb4;
        case 0x2e4fb8u: goto label_2e4fb8;
        case 0x2e4fbcu: goto label_2e4fbc;
        case 0x2e4fc0u: goto label_2e4fc0;
        case 0x2e4fc4u: goto label_2e4fc4;
        case 0x2e4fc8u: goto label_2e4fc8;
        case 0x2e4fccu: goto label_2e4fcc;
        case 0x2e4fd0u: goto label_2e4fd0;
        case 0x2e4fd4u: goto label_2e4fd4;
        case 0x2e4fd8u: goto label_2e4fd8;
        case 0x2e4fdcu: goto label_2e4fdc;
        case 0x2e4fe0u: goto label_2e4fe0;
        case 0x2e4fe4u: goto label_2e4fe4;
        case 0x2e4fe8u: goto label_2e4fe8;
        case 0x2e4fecu: goto label_2e4fec;
        case 0x2e4ff0u: goto label_2e4ff0;
        case 0x2e4ff4u: goto label_2e4ff4;
        case 0x2e4ff8u: goto label_2e4ff8;
        case 0x2e4ffcu: goto label_2e4ffc;
        case 0x2e5000u: goto label_2e5000;
        case 0x2e5004u: goto label_2e5004;
        case 0x2e5008u: goto label_2e5008;
        case 0x2e500cu: goto label_2e500c;
        case 0x2e5010u: goto label_2e5010;
        case 0x2e5014u: goto label_2e5014;
        case 0x2e5018u: goto label_2e5018;
        case 0x2e501cu: goto label_2e501c;
        case 0x2e5020u: goto label_2e5020;
        case 0x2e5024u: goto label_2e5024;
        case 0x2e5028u: goto label_2e5028;
        case 0x2e502cu: goto label_2e502c;
        case 0x2e5030u: goto label_2e5030;
        case 0x2e5034u: goto label_2e5034;
        case 0x2e5038u: goto label_2e5038;
        case 0x2e503cu: goto label_2e503c;
        case 0x2e5040u: goto label_2e5040;
        case 0x2e5044u: goto label_2e5044;
        case 0x2e5048u: goto label_2e5048;
        case 0x2e504cu: goto label_2e504c;
        default: break;
    }

    ctx->pc = 0x2e4fb0u;

label_2e4fb0:
    // 0x2e4fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e4fb4:
    // 0x2e4fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e4fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e4fb8:
    // 0x2e4fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e4fbc:
    // 0x2e4fbc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2e4fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2e4fc0:
    // 0x2e4fc0: 0xc0b8ca0  jal         func_2E3280
label_2e4fc4:
    if (ctx->pc == 0x2E4FC4u) {
        ctx->pc = 0x2E4FC4u;
            // 0x2e4fc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2E4FC8u;
        goto label_2e4fc8;
    }
    ctx->pc = 0x2E4FC0u;
    SET_GPR_U32(ctx, 31, 0x2E4FC8u);
    ctx->pc = 0x2E4FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FC0u;
            // 0x2e4fc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4FC8u; }
        if (ctx->pc != 0x2E4FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4FC8u; }
        if (ctx->pc != 0x2E4FC8u) { return; }
    }
    ctx->pc = 0x2E4FC8u;
label_2e4fc8:
    // 0x2e4fc8: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x2e4fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e4fcc:
    // 0x2e4fcc: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4fd0:
    // 0x2e4fd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4fd4:
    // 0x2e4fd4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2e4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4fd8:
    // 0x2e4fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e4fdc:
    if (ctx->pc == 0x2E4FDCu) {
        ctx->pc = 0x2E4FDCu;
            // 0x2e4fdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FE0u;
        goto label_2e4fe0;
    }
    ctx->pc = 0x2E4FD8u;
    {
        const bool branch_taken_0x2e4fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FD8u;
            // 0x2e4fdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fd8) {
            ctx->pc = 0x2E4FE8u;
            goto label_2e4fe8;
        }
    }
    ctx->pc = 0x2E4FE0u;
label_2e4fe0:
    // 0x2e4fe0: 0x10000016  b           . + 4 + (0x16 << 2)
label_2e4fe4:
    if (ctx->pc == 0x2E4FE4u) {
        ctx->pc = 0x2E4FE4u;
            // 0x2e4fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FE8u;
        goto label_2e4fe8;
    }
    ctx->pc = 0x2E4FE0u;
    {
        const bool branch_taken_0x2e4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FE0u;
            // 0x2e4fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fe0) {
            ctx->pc = 0x2E503Cu;
            goto label_2e503c;
        }
    }
    ctx->pc = 0x2E4FE8u;
label_2e4fe8:
    // 0x2e4fe8: 0xc0b8cbc  jal         func_2E32F0
label_2e4fec:
    if (ctx->pc == 0x2E4FECu) {
        ctx->pc = 0x2E4FECu;
            // 0x2e4fec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E4FF0u;
        goto label_2e4ff0;
    }
    ctx->pc = 0x2E4FE8u;
    SET_GPR_U32(ctx, 31, 0x2E4FF0u);
    ctx->pc = 0x2E4FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4FE8u;
            // 0x2e4fec: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4FF0u; }
        if (ctx->pc != 0x2E4FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4FF0u; }
        if (ctx->pc != 0x2E4FF0u) { return; }
    }
    ctx->pc = 0x2E4FF0u;
label_2e4ff0:
    // 0x2e4ff0: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e4ff4:
    // 0x2e4ff4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e4ff8:
    // 0x2e4ff8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e4ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e4ffc:
    // 0x2e4ffc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e4ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e5000:
    // 0x2e5000: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2e5000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2e5004:
    // 0x2e5004: 0x320f809  jalr        $t9
label_2e5008:
    if (ctx->pc == 0x2E5008u) {
        ctx->pc = 0x2E5008u;
            // 0x2e5008: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E500Cu;
        goto label_2e500c;
    }
    ctx->pc = 0x2E5004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E500Cu);
        ctx->pc = 0x2E5008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5004u;
            // 0x2e5008: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E500Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E500Cu; }
            if (ctx->pc != 0x2E500Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E500Cu;
label_2e500c:
    // 0x2e500c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2e500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e5010:
    // 0x2e5010: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e5010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e5014:
    // 0x2e5014: 0xc041c38  jal         func_1070E0
label_2e5018:
    if (ctx->pc == 0x2E5018u) {
        ctx->pc = 0x2E5018u;
            // 0x2e5018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E501Cu;
        goto label_2e501c;
    }
    ctx->pc = 0x2E5014u;
    SET_GPR_U32(ctx, 31, 0x2E501Cu);
    ctx->pc = 0x2E5018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5014u;
            // 0x2e5018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E501Cu; }
        if (ctx->pc != 0x2E501Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E501Cu; }
        if (ctx->pc != 0x2E501Cu) { return; }
    }
    ctx->pc = 0x2E501Cu;
label_2e501c:
    // 0x2e501c: 0x8f829ed0  lw          $v0, -0x6130($gp)
    ctx->pc = 0x2e501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
label_2e5020:
    // 0x2e5020: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2e5020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e5024:
    // 0x2e5024: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2e5024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e5028:
    // 0x2e5028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e5028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e502c:
    // 0x2e502c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x2e502cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2e5030:
    // 0x2e5030: 0x320f809  jalr        $t9
label_2e5034:
    if (ctx->pc == 0x2E5034u) {
        ctx->pc = 0x2E5034u;
            // 0x2e5034: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2E5038u;
        goto label_2e5038;
    }
    ctx->pc = 0x2E5030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5038u);
        ctx->pc = 0x2E5034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5030u;
            // 0x2e5034: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5038u; }
            if (ctx->pc != 0x2E5038u) { return; }
        }
        }
    }
    ctx->pc = 0x2E5038u;
label_2e5038:
    // 0x2e5038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e503c:
    // 0x2e503c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e503cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5040:
    // 0x2e5040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5044:
    // 0x2e5044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5048:
    // 0x2e5048: 0x3e00008  jr          $ra
label_2e504c:
    if (ctx->pc == 0x2E504Cu) {
        ctx->pc = 0x2E504Cu;
            // 0x2e504c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E5050u;
        goto label_fallthrough_0x2e5048;
    }
    ctx->pc = 0x2E5048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5048u;
            // 0x2e504c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e5048:
    ctx->pc = 0x2E5050u;
}
