#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCoord__8CColPrimFPfPff
// Address: 0x1b9e20 - 0x1b9ef4
void SetCoord__8CColPrimFPfPff_0x1b9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCoord__8CColPrimFPfPff_0x1b9e20");
#endif

    switch (ctx->pc) {
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e70u: goto label_1b9e70;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9e88u: goto label_1b9e88;
        case 0x1b9e94u: goto label_1b9e94;
        case 0x1b9ea8u: goto label_1b9ea8;
        case 0x1b9eb4u: goto label_1b9eb4;
        case 0x1b9ec0u: goto label_1b9ec0;
        case 0x1b9eccu: goto label_1b9ecc;
        default: break;
    }

    ctx->pc = 0x1b9e20u;

    // 0x1b9e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b9e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b9e24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9e28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b9e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b9e2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b9e30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b9e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b9e34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b9e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9e3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b9e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e40: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b9e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b9e44: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b9e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e48: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1b9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1b9e4c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1b9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x1b9e50: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1b9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1b9e54: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B9E54u;
    {
        const bool branch_taken_0x1b9e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E54u;
            // 0x1b9e58: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e54) {
            ctx->pc = 0x1B9E9Cu;
            goto label_1b9e9c;
        }
    }
    ctx->pc = 0x1B9E5Cu;
    // 0x1b9e5c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E64u);
    ctx->pc = 0x1B9E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E5Cu;
            // 0x1b9e60: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E64u; }
        if (ctx->pc != 0x1B9E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E64u; }
        if (ctx->pc != 0x1B9E64u) { return; }
    }
    ctx->pc = 0x1B9E64u;
label_1b9e64:
    // 0x1b9e64: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1b9e68: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9E68u;
    SET_GPR_U32(ctx, 31, 0x1B9E70u);
    ctx->pc = 0x1B9E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E68u;
            // 0x1b9e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E70u; }
        if (ctx->pc != 0x1B9E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E70u; }
        if (ctx->pc != 0x1B9E70u) { return; }
    }
    ctx->pc = 0x1B9E70u;
label_1b9e70:
    // 0x1b9e70: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1b9e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1b9e74: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9E74u;
    SET_GPR_U32(ctx, 31, 0x1B9E7Cu);
    ctx->pc = 0x1B9E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E74u;
            // 0x1b9e78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E7Cu; }
        if (ctx->pc != 0x1B9E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E7Cu; }
        if (ctx->pc != 0x1B9E7Cu) { return; }
    }
    ctx->pc = 0x1B9E7Cu;
label_1b9e7c:
    // 0x1b9e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e80: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9E80u;
    SET_GPR_U32(ctx, 31, 0x1B9E88u);
    ctx->pc = 0x1B9E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E80u;
            // 0x1b9e84: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E88u; }
        if (ctx->pc != 0x1B9E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E88u; }
        if (ctx->pc != 0x1B9E88u) { return; }
    }
    ctx->pc = 0x1B9E88u;
label_1b9e88:
    // 0x1b9e88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e8c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9E94u);
    ctx->pc = 0x1B9E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E8Cu;
            // 0x1b9e90: 0x264400b0  addiu       $a0, $s2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E94u; }
        if (ctx->pc != 0x1B9E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9E94u; }
        if (ctx->pc != 0x1B9E94u) { return; }
    }
    ctx->pc = 0x1B9E94u;
label_1b9e94:
    // 0x1b9e94: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1B9E94u;
    {
        const bool branch_taken_0x1b9e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9E94u;
            // 0x1b9e98: 0xe6540084  swc1        $f20, 0x84($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e94) {
            ctx->pc = 0x1B9ED0u;
            goto label_1b9ed0;
        }
    }
    ctx->pc = 0x1B9E9Cu;
label_1b9e9c:
    // 0x1b9e9c: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1b9e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1b9ea0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9EA0u;
    SET_GPR_U32(ctx, 31, 0x1B9EA8u);
    ctx->pc = 0x1B9EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EA0u;
            // 0x1b9ea4: 0x26450040  addiu       $a1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EA8u; }
        if (ctx->pc != 0x1B9EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EA8u; }
        if (ctx->pc != 0x1B9EA8u) { return; }
    }
    ctx->pc = 0x1B9EA8u;
label_1b9ea8:
    // 0x1b9ea8: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x1b9ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x1b9eac: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9EACu;
    SET_GPR_U32(ctx, 31, 0x1B9EB4u);
    ctx->pc = 0x1B9EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EACu;
            // 0x1b9eb0: 0x26450050  addiu       $a1, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EB4u; }
        if (ctx->pc != 0x1B9EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EB4u; }
        if (ctx->pc != 0x1B9EB4u) { return; }
    }
    ctx->pc = 0x1B9EB4u;
label_1b9eb4:
    // 0x1b9eb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9eb8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9EB8u;
    SET_GPR_U32(ctx, 31, 0x1B9EC0u);
    ctx->pc = 0x1B9EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EB8u;
            // 0x1b9ebc: 0x26440040  addiu       $a0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EC0u; }
        if (ctx->pc != 0x1B9EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9EC0u; }
        if (ctx->pc != 0x1B9EC0u) { return; }
    }
    ctx->pc = 0x1B9EC0u;
label_1b9ec0:
    // 0x1b9ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ec4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1B9EC4u;
    SET_GPR_U32(ctx, 31, 0x1B9ECCu);
    ctx->pc = 0x1B9EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EC4u;
            // 0x1b9ec8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ECCu; }
        if (ctx->pc != 0x1B9ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9ECCu; }
        if (ctx->pc != 0x1B9ECCu) { return; }
    }
    ctx->pc = 0x1B9ECCu;
label_1b9ecc:
    // 0x1b9ecc: 0xe6540084  swc1        $f20, 0x84($s2)
    ctx->pc = 0x1b9eccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
label_1b9ed0:
    // 0x1b9ed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9ed4: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1b9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x1b9ed8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b9ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9edc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9ee0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b9ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9ee4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b9ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9ee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9eec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9EECu;
            // 0x1b9ef0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9EF4u;
}
