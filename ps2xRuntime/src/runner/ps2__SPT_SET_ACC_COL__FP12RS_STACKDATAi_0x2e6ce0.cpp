#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_ACC_COL__FP12RS_STACKDATAi
// Address: 0x2e6ce0 - 0x2e6dbc
void ps2__SPT_SET_ACC_COL__FP12RS_STACKDATAi_0x2e6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_ACC_COL__FP12RS_STACKDATAi_0x2e6ce0");
#endif

    switch (ctx->pc) {
        case 0x2e6d08u: goto label_2e6d08;
        case 0x2e6d18u: goto label_2e6d18;
        case 0x2e6d28u: goto label_2e6d28;
        case 0x2e6d38u: goto label_2e6d38;
        case 0x2e6d48u: goto label_2e6d48;
        case 0x2e6d5cu: goto label_2e6d5c;
        case 0x2e6d68u: goto label_2e6d68;
        case 0x2e6d70u: goto label_2e6d70;
        default: break;
    }

    ctx->pc = 0x2e6ce0u;

    // 0x2e6ce0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6ce4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e6ce8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e6cec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6cf0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6cf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6d00: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6D00u;
    SET_GPR_U32(ctx, 31, 0x2E6D08u);
    ctx->pc = 0x2E6D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D00u;
            // 0x2e6d04: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D08u; }
        if (ctx->pc != 0x2E6D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D08u; }
        if (ctx->pc != 0x2E6D08u) { return; }
    }
    ctx->pc = 0x2E6D08u;
label_2e6d08:
    // 0x2e6d08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d10: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6D10u;
    SET_GPR_U32(ctx, 31, 0x2E6D18u);
    ctx->pc = 0x2E6D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D10u;
            // 0x2e6d14: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D18u; }
        if (ctx->pc != 0x2E6D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D18u; }
        if (ctx->pc != 0x2E6D18u) { return; }
    }
    ctx->pc = 0x2E6D18u;
label_2e6d18:
    // 0x2e6d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e6d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e6d20: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6D20u;
    SET_GPR_U32(ctx, 31, 0x2E6D28u);
    ctx->pc = 0x2E6D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D20u;
            // 0x2e6d24: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D28u; }
        if (ctx->pc != 0x2E6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D28u; }
        if (ctx->pc != 0x2E6D28u) { return; }
    }
    ctx->pc = 0x2E6D28u;
label_2e6d28:
    // 0x2e6d28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d2c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e6d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e6d30: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6D30u;
    SET_GPR_U32(ctx, 31, 0x2E6D38u);
    ctx->pc = 0x2E6D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D30u;
            // 0x2e6d34: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D38u; }
        if (ctx->pc != 0x2E6D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D38u; }
        if (ctx->pc != 0x2E6D38u) { return; }
    }
    ctx->pc = 0x2E6D38u;
label_2e6d38:
    // 0x2e6d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6d3c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e6d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e6d40: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6D40u;
    SET_GPR_U32(ctx, 31, 0x2E6D48u);
    ctx->pc = 0x2E6D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D40u;
            // 0x2e6d44: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D48u; }
        if (ctx->pc != 0x2E6D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D48u; }
        if (ctx->pc != 0x2E6D48u) { return; }
    }
    ctx->pc = 0x2E6D48u;
label_2e6d48:
    // 0x2e6d48: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2e6d48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e6d4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6D4Cu;
    {
        const bool branch_taken_0x2e6d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D4Cu;
            // 0x2e6d50: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d4c) {
            ctx->pc = 0x2E6D60u;
            goto label_2e6d60;
        }
    }
    ctx->pc = 0x2E6D54u;
    // 0x2e6d54: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6D54u;
    SET_GPR_U32(ctx, 31, 0x2E6D5Cu);
    ctx->pc = 0x2E6D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D54u;
            // 0x2e6d58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D5Cu; }
        if (ctx->pc != 0x2E6D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D5Cu; }
        if (ctx->pc != 0x2E6D5Cu) { return; }
    }
    ctx->pc = 0x2E6D5Cu;
label_2e6d5c:
    // 0x2e6d5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d60:
    // 0x2e6d60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6D60u;
    {
        const bool branch_taken_0x2e6d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D60u;
            // 0x2e6d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d60) {
            ctx->pc = 0x2E6D8Cu;
            goto label_2e6d8c;
        }
    }
    ctx->pc = 0x2E6D68u;
label_2e6d68:
    // 0x2e6d68: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6D68u;
    SET_GPR_U32(ctx, 31, 0x2E6D70u);
    ctx->pc = 0x2E6D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D68u;
            // 0x2e6d6c: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D70u; }
        if (ctx->pc != 0x2E6D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6D70u; }
        if (ctx->pc != 0x2E6D70u) { return; }
    }
    ctx->pc = 0x2E6D70u;
label_2e6d70:
    // 0x2e6d70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6D70u;
    {
        const bool branch_taken_0x2e6d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D70u;
            // 0x2e6d74: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d70) {
            ctx->pc = 0x2E6D80u;
            goto label_2e6d80;
        }
    }
    ctx->pc = 0x2E6D78u;
    // 0x2e6d78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6D78u;
    {
        const bool branch_taken_0x2e6d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D78u;
            // 0x2e6d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d78) {
            ctx->pc = 0x2E6DA0u;
            goto label_2e6da0;
        }
    }
    ctx->pc = 0x2E6D80u;
label_2e6d80:
    // 0x2e6d80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6d84: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e6d84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6d88: 0x7c430090  sq          $v1, 0x90($v0)
    ctx->pc = 0x2e6d88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 3));
label_2e6d8c:
    // 0x2e6d8c: 0x0  nop
    ctx->pc = 0x2e6d8cu;
    // NOP
    // 0x2e6d90: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6d94: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e6d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6d98: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E6D98u;
    {
        const bool branch_taken_0x2e6d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6D98u;
            // 0x2e6d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6d98) {
            ctx->pc = 0x2E6D68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6d68;
        }
    }
    ctx->pc = 0x2E6DA0u;
label_2e6da0:
    // 0x2e6da0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e6da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6da4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6da4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6da8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6dac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6db0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6db4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6DB4u;
            // 0x2e6db8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6DBCu;
}
