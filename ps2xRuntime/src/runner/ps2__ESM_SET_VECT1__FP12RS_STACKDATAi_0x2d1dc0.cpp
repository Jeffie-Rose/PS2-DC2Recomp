#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VECT1__FP12RS_STACKDATAi
// Address: 0x2d1dc0 - 0x2d1e78
void ps2__ESM_SET_VECT1__FP12RS_STACKDATAi_0x2d1dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VECT1__FP12RS_STACKDATAi_0x2d1dc0");
#endif

    switch (ctx->pc) {
        case 0x2d1df0u: goto label_2d1df0;
        case 0x2d1e00u: goto label_2d1e00;
        case 0x2d1e10u: goto label_2d1e10;
        case 0x2d1e1cu: goto label_2d1e1c;
        case 0x2d1e44u: goto label_2d1e44;
        case 0x2d1e68u: goto label_2d1e68;
        default: break;
    }

    ctx->pc = 0x2d1dc0u;

    // 0x2d1dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d1dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d1dc4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d1dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d1dcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1dd0: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1dd4: 0x8c4207dc  lw          $v0, 0x7DC($v0)
    ctx->pc = 0x2d1dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1dd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1DD8u;
    {
        const bool branch_taken_0x2d1dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DD8u;
            // 0x2d1ddc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1dd8) {
            ctx->pc = 0x2D1DE8u;
            goto label_2d1de8;
        }
    }
    ctx->pc = 0x2D1DE0u;
    // 0x2d1de0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2D1DE0u;
    {
        const bool branch_taken_0x2d1de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DE0u;
            // 0x2d1de4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1de0) {
            ctx->pc = 0x2D1E68u;
            goto label_2d1e68;
        }
    }
    ctx->pc = 0x2D1DE8u;
label_2d1de8:
    // 0x2d1de8: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2D1DE8u;
    SET_GPR_U32(ctx, 31, 0x2D1DF0u);
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DF0u; }
        if (ctx->pc != 0x2D1DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1DF0u; }
        if (ctx->pc != 0x2D1DF0u) { return; }
    }
    ctx->pc = 0x2D1DF0u;
label_2d1df0:
    // 0x2d1df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1df4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2d1df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1df8: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D1DF8u;
    SET_GPR_U32(ctx, 31, 0x2D1E00u);
    ctx->pc = 0x2D1DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1DF8u;
            // 0x2d1dfc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E00u; }
        if (ctx->pc != 0x2D1E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E00u; }
        if (ctx->pc != 0x2D1E00u) { return; }
    }
    ctx->pc = 0x2D1E00u;
label_2d1e00:
    // 0x2d1e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e04: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2d1e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d1e08: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D1E08u;
    SET_GPR_U32(ctx, 31, 0x2D1E10u);
    ctx->pc = 0x2D1E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E08u;
            // 0x2d1e0c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E10u; }
        if (ctx->pc != 0x2D1E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E10u; }
        if (ctx->pc != 0x2D1E10u) { return; }
    }
    ctx->pc = 0x2D1E10u;
label_2d1e10:
    // 0x2d1e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e14: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2D1E14u;
    SET_GPR_U32(ctx, 31, 0x2D1E1Cu);
    ctx->pc = 0x2D1E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E14u;
            // 0x2d1e18: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E1Cu; }
        if (ctx->pc != 0x2D1E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E1Cu; }
        if (ctx->pc != 0x2D1E1Cu) { return; }
    }
    ctx->pc = 0x2D1E1Cu;
label_2d1e1c:
    // 0x2d1e1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2d1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2d1e20: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d1e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d1e24: 0x4e00009  bltz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1E24u;
    {
        const bool branch_taken_0x2d1e24 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2D1E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E24u;
            // 0x2d1e28: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e24) {
            ctx->pc = 0x2D1E4Cu;
            goto label_2d1e4c;
        }
    }
    ctx->pc = 0x2D1E2Cu;
    // 0x2d1e2c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1e30: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1e34: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1e38: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d1e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1e3c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D1E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D1E44u);
    ctx->pc = 0x2D1E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E3Cu;
            // 0x2d1e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E44u; }
        if (ctx->pc != 0x2D1E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E44u; }
        if (ctx->pc != 0x2D1E44u) { return; }
    }
    ctx->pc = 0x2D1E44u;
label_2d1e44:
    // 0x2d1e44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D1E44u;
    {
        const bool branch_taken_0x2d1e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1e44) {
            ctx->pc = 0x2D1E68u;
            goto label_2d1e68;
        }
    }
    ctx->pc = 0x2D1E4Cu;
label_2d1e4c:
    // 0x2d1e4c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d1e50: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d1e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d1e54: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d1e58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e5c: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d1e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d1e60: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D1E60u;
    SET_GPR_U32(ctx, 31, 0x2D1E68u);
    ctx->pc = 0x2D1E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E60u;
            // 0x2d1e64: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E68u; }
        if (ctx->pc != 0x2D1E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D1E68u; }
        if (ctx->pc != 0x2D1E68u) { return; }
    }
    ctx->pc = 0x2D1E68u;
label_2d1e68:
    // 0x2d1e68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d1e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1e6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1E70u;
            // 0x2d1e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1E78u;
}
