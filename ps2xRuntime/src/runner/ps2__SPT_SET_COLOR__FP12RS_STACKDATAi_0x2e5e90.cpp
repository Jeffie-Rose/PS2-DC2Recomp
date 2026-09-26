#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_COLOR__FP12RS_STACKDATAi
// Address: 0x2e5e90 - 0x2e5f6c
void ps2__SPT_SET_COLOR__FP12RS_STACKDATAi_0x2e5e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_COLOR__FP12RS_STACKDATAi_0x2e5e90");
#endif

    switch (ctx->pc) {
        case 0x2e5eb8u: goto label_2e5eb8;
        case 0x2e5ec8u: goto label_2e5ec8;
        case 0x2e5ed8u: goto label_2e5ed8;
        case 0x2e5ee8u: goto label_2e5ee8;
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5f0cu: goto label_2e5f0c;
        case 0x2e5f18u: goto label_2e5f18;
        case 0x2e5f20u: goto label_2e5f20;
        default: break;
    }

    ctx->pc = 0x2e5e90u;

    // 0x2e5e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5e94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5e98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e5e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5e9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5ea0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e5ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5ea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5ea8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5eb0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5EB0u;
    SET_GPR_U32(ctx, 31, 0x2E5EB8u);
    ctx->pc = 0x2E5EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EB0u;
            // 0x2e5eb4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EB8u; }
        if (ctx->pc != 0x2E5EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EB8u; }
        if (ctx->pc != 0x2E5EB8u) { return; }
    }
    ctx->pc = 0x2E5EB8u;
label_2e5eb8:
    // 0x2e5eb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ec0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5EC0u;
    SET_GPR_U32(ctx, 31, 0x2E5EC8u);
    ctx->pc = 0x2E5EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EC0u;
            // 0x2e5ec4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EC8u; }
        if (ctx->pc != 0x2E5EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EC8u; }
        if (ctx->pc != 0x2E5EC8u) { return; }
    }
    ctx->pc = 0x2E5EC8u;
label_2e5ec8:
    // 0x2e5ec8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ecc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e5eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e5ed0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5ED0u;
    SET_GPR_U32(ctx, 31, 0x2E5ED8u);
    ctx->pc = 0x2E5ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5ED0u;
            // 0x2e5ed4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5ED8u; }
        if (ctx->pc != 0x2E5ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5ED8u; }
        if (ctx->pc != 0x2E5ED8u) { return; }
    }
    ctx->pc = 0x2E5ED8u;
label_2e5ed8:
    // 0x2e5ed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5edc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e5edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e5ee0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5EE0u;
    SET_GPR_U32(ctx, 31, 0x2E5EE8u);
    ctx->pc = 0x2E5EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EE0u;
            // 0x2e5ee4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EE8u; }
        if (ctx->pc != 0x2E5EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EE8u; }
        if (ctx->pc != 0x2E5EE8u) { return; }
    }
    ctx->pc = 0x2E5EE8u;
label_2e5ee8:
    // 0x2e5ee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5eec: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e5eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e5ef0: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5EF0u;
    SET_GPR_U32(ctx, 31, 0x2E5EF8u);
    ctx->pc = 0x2E5EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EF0u;
            // 0x2e5ef4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EF8u; }
        if (ctx->pc != 0x2E5EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5EF8u; }
        if (ctx->pc != 0x2E5EF8u) { return; }
    }
    ctx->pc = 0x2E5EF8u;
label_2e5ef8:
    // 0x2e5ef8: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2e5ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e5efc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5EFCu;
    {
        const bool branch_taken_0x2e5efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5EFCu;
            // 0x2e5f00: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5efc) {
            ctx->pc = 0x2E5F10u;
            goto label_2e5f10;
        }
    }
    ctx->pc = 0x2E5F04u;
    // 0x2e5f04: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5F04u;
    SET_GPR_U32(ctx, 31, 0x2E5F0Cu);
    ctx->pc = 0x2E5F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F04u;
            // 0x2e5f08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F0Cu; }
        if (ctx->pc != 0x2E5F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F0Cu; }
        if (ctx->pc != 0x2E5F0Cu) { return; }
    }
    ctx->pc = 0x2E5F0Cu;
label_2e5f0c:
    // 0x2e5f0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5f10:
    // 0x2e5f10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5F10u;
    {
        const bool branch_taken_0x2e5f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F10u;
            // 0x2e5f14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f10) {
            ctx->pc = 0x2E5F3Cu;
            goto label_2e5f3c;
        }
    }
    ctx->pc = 0x2E5F18u;
label_2e5f18:
    // 0x2e5f18: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5F18u;
    SET_GPR_U32(ctx, 31, 0x2E5F20u);
    ctx->pc = 0x2E5F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F18u;
            // 0x2e5f1c: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F20u; }
        if (ctx->pc != 0x2E5F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5F20u; }
        if (ctx->pc != 0x2E5F20u) { return; }
    }
    ctx->pc = 0x2E5F20u;
label_2e5f20:
    // 0x2e5f20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5F20u;
    {
        const bool branch_taken_0x2e5f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F20u;
            // 0x2e5f24: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f20) {
            ctx->pc = 0x2E5F30u;
            goto label_2e5f30;
        }
    }
    ctx->pc = 0x2E5F28u;
    // 0x2e5f28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5F28u;
    {
        const bool branch_taken_0x2e5f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F28u;
            // 0x2e5f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f28) {
            ctx->pc = 0x2E5F50u;
            goto label_2e5f50;
        }
    }
    ctx->pc = 0x2E5F30u;
label_2e5f30:
    // 0x2e5f30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5f34: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e5f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5f38: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x2e5f38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
label_2e5f3c:
    // 0x2e5f3c: 0x0  nop
    ctx->pc = 0x2e5f3cu;
    // NOP
    // 0x2e5f40: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5f44: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e5f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5f48: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E5F48u;
    {
        const bool branch_taken_0x2e5f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F48u;
            // 0x2e5f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f48) {
            ctx->pc = 0x2E5F18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5f18;
        }
    }
    ctx->pc = 0x2E5F50u;
label_2e5f50:
    // 0x2e5f50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5f54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5f58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5f5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5f60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5f64: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5F64u;
            // 0x2e5f68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5F6Cu;
}
