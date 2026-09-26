#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DIST_VECTOR2__FP12RS_STACKDATAi
// Address: 0x1e0e70 - 0x1e0f14
void ps2__GET_DIST_VECTOR2__FP12RS_STACKDATAi_0x1e0e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DIST_VECTOR2__FP12RS_STACKDATAi_0x1e0e70");
#endif

    switch (ctx->pc) {
        case 0x1e0e84u: goto label_1e0e84;
        case 0x1e0e94u: goto label_1e0e94;
        case 0x1e0ea4u: goto label_1e0ea4;
        case 0x1e0ebcu: goto label_1e0ebc;
        case 0x1e0eccu: goto label_1e0ecc;
        case 0x1e0edcu: goto label_1e0edc;
        case 0x1e0ef4u: goto label_1e0ef4;
        case 0x1e0f00u: goto label_1e0f00;
        default: break;
    }

    ctx->pc = 0x1e0e70u;

    // 0x1e0e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e0e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e0e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0e7c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E84u);
    ctx->pc = 0x1E0E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E7Cu;
            // 0x1e0e80: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E84u; }
        if (ctx->pc != 0x1E0E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E84u; }
        if (ctx->pc != 0x1E0E84u) { return; }
    }
    ctx->pc = 0x1E0E84u;
label_1e0e84:
    // 0x1e0e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e88: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e0e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e0e8c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E94u);
    ctx->pc = 0x1E0E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E8Cu;
            // 0x1e0e90: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E94u; }
        if (ctx->pc != 0x1E0E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E94u; }
        if (ctx->pc != 0x1E0E94u) { return; }
    }
    ctx->pc = 0x1E0E94u;
label_1e0e94:
    // 0x1e0e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e98: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e0e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e0e9c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E0EA4u);
    ctx->pc = 0x1E0EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E9Cu;
            // 0x1e0ea0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EA4u; }
        if (ctx->pc != 0x1E0EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EA4u; }
        if (ctx->pc != 0x1E0EA4u) { return; }
    }
    ctx->pc = 0x1E0EA4u;
label_1e0ea4:
    // 0x1e0ea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0eac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e0eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e0eb0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1e0eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1e0eb4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0EB4u;
    SET_GPR_U32(ctx, 31, 0x1E0EBCu);
    ctx->pc = 0x1E0EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EB4u;
            // 0x1e0eb8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EBCu; }
        if (ctx->pc != 0x1E0EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EBCu; }
        if (ctx->pc != 0x1E0EBCu) { return; }
    }
    ctx->pc = 0x1E0EBCu;
label_1e0ebc:
    // 0x1e0ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ec0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e0ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e0ec4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0EC4u;
    SET_GPR_U32(ctx, 31, 0x1E0ECCu);
    ctx->pc = 0x1E0EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EC4u;
            // 0x1e0ec8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ECCu; }
        if (ctx->pc != 0x1E0ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ECCu; }
        if (ctx->pc != 0x1E0ECCu) { return; }
    }
    ctx->pc = 0x1E0ECCu;
label_1e0ecc:
    // 0x1e0ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ed0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e0ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e0ed4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0ED4u;
    SET_GPR_U32(ctx, 31, 0x1E0EDCu);
    ctx->pc = 0x1E0ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0ED4u;
            // 0x1e0ed8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EDCu; }
        if (ctx->pc != 0x1E0EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EDCu; }
        if (ctx->pc != 0x1E0EDCu) { return; }
    }
    ctx->pc = 0x1E0EDCu;
label_1e0edc:
    // 0x1e0edc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0ee0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e0ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0ee4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1e0ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1e0ee8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1e0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1e0eec: 0xc04c018  jal         func_130060
    ctx->pc = 0x1E0EECu;
    SET_GPR_U32(ctx, 31, 0x1E0EF4u);
    ctx->pc = 0x1E0EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EECu;
            // 0x1e0ef0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EF4u; }
        if (ctx->pc != 0x1E0EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EF4u; }
        if (ctx->pc != 0x1E0EF4u) { return; }
    }
    ctx->pc = 0x1E0EF4u;
label_1e0ef4:
    // 0x1e0ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ef8: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E0EF8u;
    SET_GPR_U32(ctx, 31, 0x1E0F00u);
    ctx->pc = 0x1E0EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EF8u;
            // 0x1e0efc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F00u; }
        if (ctx->pc != 0x1E0F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F00u; }
        if (ctx->pc != 0x1E0F00u) { return; }
    }
    ctx->pc = 0x1E0F00u;
label_1e0f00:
    // 0x1e0f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F0Cu;
            // 0x1e0f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0F14u;
}
