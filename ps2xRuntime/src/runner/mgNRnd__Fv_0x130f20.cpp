#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgNRnd__Fv
// Address: 0x130f20 - 0x130fac
void mgNRnd__Fv_0x130f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgNRnd__Fv_0x130f20");
#endif

    switch (ctx->pc) {
        case 0x130f30u: goto label_130f30;
        case 0x130f38u: goto label_130f38;
        case 0x130f40u: goto label_130f40;
        case 0x130f48u: goto label_130f48;
        case 0x130f50u: goto label_130f50;
        case 0x130f58u: goto label_130f58;
        case 0x130f60u: goto label_130f60;
        case 0x130f68u: goto label_130f68;
        case 0x130f70u: goto label_130f70;
        case 0x130f78u: goto label_130f78;
        case 0x130f80u: goto label_130f80;
        case 0x130f88u: goto label_130f88;
        default: break;
    }

    ctx->pc = 0x130f20u;

    // 0x130f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130f24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130f28: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F28u;
    SET_GPR_U32(ctx, 31, 0x130F30u);
    ctx->pc = 0x130F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F28u;
            // 0x130f2c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F30u; }
        if (ctx->pc != 0x130F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F30u; }
        if (ctx->pc != 0x130F30u) { return; }
    }
    ctx->pc = 0x130F30u;
label_130f30:
    // 0x130f30: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F30u;
    SET_GPR_U32(ctx, 31, 0x130F38u);
    ctx->pc = 0x130F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F30u;
            // 0x130f34: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F38u; }
        if (ctx->pc != 0x130F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F38u; }
        if (ctx->pc != 0x130F38u) { return; }
    }
    ctx->pc = 0x130F38u;
label_130f38:
    // 0x130f38: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F38u;
    SET_GPR_U32(ctx, 31, 0x130F40u);
    ctx->pc = 0x130F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F38u;
            // 0x130f3c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F40u; }
        if (ctx->pc != 0x130F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F40u; }
        if (ctx->pc != 0x130F40u) { return; }
    }
    ctx->pc = 0x130F40u;
label_130f40:
    // 0x130f40: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F40u;
    SET_GPR_U32(ctx, 31, 0x130F48u);
    ctx->pc = 0x130F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F40u;
            // 0x130f44: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F48u; }
        if (ctx->pc != 0x130F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F48u; }
        if (ctx->pc != 0x130F48u) { return; }
    }
    ctx->pc = 0x130F48u;
label_130f48:
    // 0x130f48: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F48u;
    SET_GPR_U32(ctx, 31, 0x130F50u);
    ctx->pc = 0x130F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F48u;
            // 0x130f4c: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F50u; }
        if (ctx->pc != 0x130F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F50u; }
        if (ctx->pc != 0x130F50u) { return; }
    }
    ctx->pc = 0x130F50u;
label_130f50:
    // 0x130f50: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F50u;
    SET_GPR_U32(ctx, 31, 0x130F58u);
    ctx->pc = 0x130F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F50u;
            // 0x130f54: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F58u; }
        if (ctx->pc != 0x130F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F58u; }
        if (ctx->pc != 0x130F58u) { return; }
    }
    ctx->pc = 0x130F58u;
label_130f58:
    // 0x130f58: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F58u;
    SET_GPR_U32(ctx, 31, 0x130F60u);
    ctx->pc = 0x130F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F58u;
            // 0x130f5c: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F60u; }
        if (ctx->pc != 0x130F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F60u; }
        if (ctx->pc != 0x130F60u) { return; }
    }
    ctx->pc = 0x130F60u;
label_130f60:
    // 0x130f60: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F60u;
    SET_GPR_U32(ctx, 31, 0x130F68u);
    ctx->pc = 0x130F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F60u;
            // 0x130f64: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F68u; }
        if (ctx->pc != 0x130F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F68u; }
        if (ctx->pc != 0x130F68u) { return; }
    }
    ctx->pc = 0x130F68u;
label_130f68:
    // 0x130f68: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F68u;
    SET_GPR_U32(ctx, 31, 0x130F70u);
    ctx->pc = 0x130F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F68u;
            // 0x130f6c: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F70u; }
        if (ctx->pc != 0x130F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F70u; }
        if (ctx->pc != 0x130F70u) { return; }
    }
    ctx->pc = 0x130F70u;
label_130f70:
    // 0x130f70: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F70u;
    SET_GPR_U32(ctx, 31, 0x130F78u);
    ctx->pc = 0x130F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F70u;
            // 0x130f74: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F78u; }
        if (ctx->pc != 0x130F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F78u; }
        if (ctx->pc != 0x130F78u) { return; }
    }
    ctx->pc = 0x130F78u;
label_130f78:
    // 0x130f78: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F78u;
    SET_GPR_U32(ctx, 31, 0x130F80u);
    ctx->pc = 0x130F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F78u;
            // 0x130f7c: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F80u; }
        if (ctx->pc != 0x130F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F80u; }
        if (ctx->pc != 0x130F80u) { return; }
    }
    ctx->pc = 0x130F80u;
label_130f80:
    // 0x130f80: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x130F80u;
    SET_GPR_U32(ctx, 31, 0x130F88u);
    ctx->pc = 0x130F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130F80u;
            // 0x130f84: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F88u; }
        if (ctx->pc != 0x130F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130F88u; }
        if (ctx->pc != 0x130F88u) { return; }
    }
    ctx->pc = 0x130F88u;
label_130f88:
    // 0x130f88: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x130f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x130f8c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x130f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x130f90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130f94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130f9c: 0x0  nop
    ctx->pc = 0x130f9cu;
    // NOP
    // 0x130fa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x130fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x130fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x130FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130FA4u;
            // 0x130fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130FACu;
}
