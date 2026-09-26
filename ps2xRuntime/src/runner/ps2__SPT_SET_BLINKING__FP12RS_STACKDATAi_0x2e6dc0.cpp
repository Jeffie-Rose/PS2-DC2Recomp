#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_BLINKING__FP12RS_STACKDATAi
// Address: 0x2e6dc0 - 0x2e6eb8
void ps2__SPT_SET_BLINKING__FP12RS_STACKDATAi_0x2e6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_BLINKING__FP12RS_STACKDATAi_0x2e6dc0");
#endif

    switch (ctx->pc) {
        case 0x2e6decu: goto label_2e6dec;
        case 0x2e6dfcu: goto label_2e6dfc;
        case 0x2e6e0cu: goto label_2e6e0c;
        case 0x2e6e1cu: goto label_2e6e1c;
        case 0x2e6e2cu: goto label_2e6e2c;
        case 0x2e6e3cu: goto label_2e6e3c;
        case 0x2e6e50u: goto label_2e6e50;
        case 0x2e6e5cu: goto label_2e6e5c;
        case 0x2e6e64u: goto label_2e6e64;
        default: break;
    }

    ctx->pc = 0x2e6dc0u;

    // 0x2e6dc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e6dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e6dc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6dc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e6dcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6dd0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6dd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6dd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e6ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e6de0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e6de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6de4: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6DE4u;
    SET_GPR_U32(ctx, 31, 0x2E6DECu);
    ctx->pc = 0x2E6DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6DE4u;
            // 0x2e6de8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DECu; }
        if (ctx->pc != 0x2E6DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DECu; }
        if (ctx->pc != 0x2E6DECu) { return; }
    }
    ctx->pc = 0x2E6DECu;
label_2e6dec:
    // 0x2e6dec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6df0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6df4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6DF4u;
    SET_GPR_U32(ctx, 31, 0x2E6DFCu);
    ctx->pc = 0x2E6DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6DF4u;
            // 0x2e6df8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DFCu; }
        if (ctx->pc != 0x2E6DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6DFCu; }
        if (ctx->pc != 0x2E6DFCu) { return; }
    }
    ctx->pc = 0x2E6DFCu;
label_2e6dfc:
    // 0x2e6dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e00: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e6e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e6e04: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6E04u;
    SET_GPR_U32(ctx, 31, 0x2E6E0Cu);
    ctx->pc = 0x2E6E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E04u;
            // 0x2e6e08: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E0Cu; }
        if (ctx->pc != 0x2E6E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E0Cu; }
        if (ctx->pc != 0x2E6E0Cu) { return; }
    }
    ctx->pc = 0x2E6E0Cu;
label_2e6e0c:
    // 0x2e6e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e10: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e6e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e6e14: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6E14u;
    SET_GPR_U32(ctx, 31, 0x2E6E1Cu);
    ctx->pc = 0x2E6E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E14u;
            // 0x2e6e18: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E1Cu; }
        if (ctx->pc != 0x2E6E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E1Cu; }
        if (ctx->pc != 0x2E6E1Cu) { return; }
    }
    ctx->pc = 0x2E6E1Cu;
label_2e6e1c:
    // 0x2e6e1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e20: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2e6e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e6e24: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6E24u;
    SET_GPR_U32(ctx, 31, 0x2E6E2Cu);
    ctx->pc = 0x2E6E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E24u;
            // 0x2e6e28: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E2Cu; }
        if (ctx->pc != 0x2E6E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E2Cu; }
        if (ctx->pc != 0x2E6E2Cu) { return; }
    }
    ctx->pc = 0x2E6E2Cu;
label_2e6e2c:
    // 0x2e6e2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6e30: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e6e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e6e34: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6E34u;
    SET_GPR_U32(ctx, 31, 0x2E6E3Cu);
    ctx->pc = 0x2E6E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E34u;
            // 0x2e6e38: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E3Cu; }
        if (ctx->pc != 0x2E6E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E3Cu; }
        if (ctx->pc != 0x2E6E3Cu) { return; }
    }
    ctx->pc = 0x2E6E3Cu;
label_2e6e3c:
    // 0x2e6e3c: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x2e6e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e6e40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6E40u;
    {
        const bool branch_taken_0x2e6e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E40u;
            // 0x2e6e44: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e40) {
            ctx->pc = 0x2E6E54u;
            goto label_2e6e54;
        }
    }
    ctx->pc = 0x2E6E48u;
    // 0x2e6e48: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6E48u;
    SET_GPR_U32(ctx, 31, 0x2E6E50u);
    ctx->pc = 0x2E6E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E48u;
            // 0x2e6e4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E50u; }
        if (ctx->pc != 0x2E6E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E50u; }
        if (ctx->pc != 0x2E6E50u) { return; }
    }
    ctx->pc = 0x2E6E50u;
label_2e6e50:
    // 0x2e6e50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e54:
    // 0x2e6e54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E6E54u;
    {
        const bool branch_taken_0x2e6e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E54u;
            // 0x2e6e58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e54) {
            ctx->pc = 0x2E6E88u;
            goto label_2e6e88;
        }
    }
    ctx->pc = 0x2E6E5Cu;
label_2e6e5c:
    // 0x2e6e5c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6E5Cu;
    SET_GPR_U32(ctx, 31, 0x2E6E64u);
    ctx->pc = 0x2E6E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E5Cu;
            // 0x2e6e60: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E64u; }
        if (ctx->pc != 0x2E6E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6E64u; }
        if (ctx->pc != 0x2E6E64u) { return; }
    }
    ctx->pc = 0x2E6E64u;
label_2e6e64:
    // 0x2e6e64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6E64u;
    {
        const bool branch_taken_0x2e6e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E64u;
            // 0x2e6e68: 0x27a30060  addiu       $v1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e64) {
            ctx->pc = 0x2E6E74u;
            goto label_2e6e74;
        }
    }
    ctx->pc = 0x2E6E6Cu;
    // 0x2e6e6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6E6Cu;
    {
        const bool branch_taken_0x2e6e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E6Cu;
            // 0x2e6e70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e6c) {
            ctx->pc = 0x2E6E98u;
            goto label_2e6e98;
        }
    }
    ctx->pc = 0x2E6E74u;
label_2e6e74:
    // 0x2e6e74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6e78: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e6e78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6e7c: 0x7c4300f0  sq          $v1, 0xF0($v0)
    ctx->pc = 0x2e6e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 240), GPR_VEC(ctx, 3));
    // 0x2e6e80: 0xe4540100  swc1        $f20, 0x100($v0)
    ctx->pc = 0x2e6e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x2e6e84: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x2e6e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_2e6e88:
    // 0x2e6e88: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6e8c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e6e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6e90: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E6E90u;
    {
        const bool branch_taken_0x2e6e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6E90u;
            // 0x2e6e94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e90) {
            ctx->pc = 0x2E6E5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6e5c;
        }
    }
    ctx->pc = 0x2E6E98u;
label_2e6e98:
    // 0x2e6e98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e6e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6e9c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6ea0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6ea4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6ea8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6eac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6EB0u;
            // 0x2e6eb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6EB8u;
}
