#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DIST_VECTOR__FP12RS_STACKDATAi
// Address: 0x1e0e00 - 0x1e0e68
void ps2__GET_DIST_VECTOR__FP12RS_STACKDATAi_0x1e0e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DIST_VECTOR__FP12RS_STACKDATAi_0x1e0e00");
#endif

    switch (ctx->pc) {
        case 0x1e0e14u: goto label_1e0e14;
        case 0x1e0e24u: goto label_1e0e24;
        case 0x1e0e34u: goto label_1e0e34;
        case 0x1e0e48u: goto label_1e0e48;
        case 0x1e0e54u: goto label_1e0e54;
        default: break;
    }

    ctx->pc = 0x1e0e00u;

    // 0x1e0e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0e04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0e0c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E14u);
    ctx->pc = 0x1E0E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E0Cu;
            // 0x1e0e10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E14u; }
        if (ctx->pc != 0x1E0E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E14u; }
        if (ctx->pc != 0x1E0E14u) { return; }
    }
    ctx->pc = 0x1E0E14u;
label_1e0e14:
    // 0x1e0e14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e18: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e0e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e0e1c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E24u);
    ctx->pc = 0x1E0E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E1Cu;
            // 0x1e0e20: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E24u; }
        if (ctx->pc != 0x1E0E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E24u; }
        if (ctx->pc != 0x1E0E24u) { return; }
    }
    ctx->pc = 0x1E0E24u;
label_1e0e24:
    // 0x1e0e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e28: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e0e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e0e2c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E34u);
    ctx->pc = 0x1E0E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E2Cu;
            // 0x1e0e30: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E34u; }
        if (ctx->pc != 0x1E0E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E34u; }
        if (ctx->pc != 0x1E0E34u) { return; }
    }
    ctx->pc = 0x1E0E34u;
label_1e0e34:
    // 0x1e0e34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0e38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e0e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e0e3c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e0e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e0e40: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1E0E40u;
    SET_GPR_U32(ctx, 31, 0x1E0E48u);
    ctx->pc = 0x1E0E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E40u;
            // 0x1e0e44: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E48u; }
        if (ctx->pc != 0x1E0E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E48u; }
        if (ctx->pc != 0x1E0E48u) { return; }
    }
    ctx->pc = 0x1E0E48u;
label_1e0e48:
    // 0x1e0e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e4c: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E0E4Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E54u);
    ctx->pc = 0x1E0E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E4Cu;
            // 0x1e0e50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E54u; }
        if (ctx->pc != 0x1E0E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E54u; }
        if (ctx->pc != 0x1E0E54u) { return; }
    }
    ctx->pc = 0x1E0E54u;
label_1e0e54:
    // 0x1e0e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0e5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E60u;
            // 0x1e0e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0E68u;
}
