#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __VELO_RAND__FP9SPI_STACKi
// Address: 0x181f50 - 0x181fcc
void ps2___VELO_RAND__FP9SPI_STACKi_0x181f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___VELO_RAND__FP9SPI_STACKi_0x181f50");
#endif

    switch (ctx->pc) {
        case 0x181f64u: goto label_181f64;
        case 0x181f78u: goto label_181f78;
        case 0x181f8cu: goto label_181f8c;
        case 0x181fa0u: goto label_181fa0;
        case 0x181fb0u: goto label_181fb0;
        default: break;
    }

    ctx->pc = 0x181f50u;

    // 0x181f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181f5c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181F5Cu;
    SET_GPR_U32(ctx, 31, 0x181F64u);
    ctx->pc = 0x181F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F5Cu;
            // 0x181f60: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F64u; }
        if (ctx->pc != 0x181F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F64u; }
        if (ctx->pc != 0x181F64u) { return; }
    }
    ctx->pc = 0x181F64u;
label_181f64:
    // 0x181f64: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f6c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181f70: 0xc05190c  jal         func_146430
    ctx->pc = 0x181F70u;
    SET_GPR_U32(ctx, 31, 0x181F78u);
    ctx->pc = 0x181F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F70u;
            // 0x181f74: 0xac620110  sw          $v0, 0x110($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F78u; }
        if (ctx->pc != 0x181F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F78u; }
        if (ctx->pc != 0x181F78u) { return; }
    }
    ctx->pc = 0x181F78u;
label_181f78:
    // 0x181f78: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f80: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181f84: 0xc05190c  jal         func_146430
    ctx->pc = 0x181F84u;
    SET_GPR_U32(ctx, 31, 0x181F8Cu);
    ctx->pc = 0x181F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F84u;
            // 0x181f88: 0xe4400120  swc1        $f0, 0x120($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F8Cu; }
        if (ctx->pc != 0x181F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F8Cu; }
        if (ctx->pc != 0x181F8Cu) { return; }
    }
    ctx->pc = 0x181F8Cu;
label_181f8c:
    // 0x181f8c: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f94: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181f98: 0xc05190c  jal         func_146430
    ctx->pc = 0x181F98u;
    SET_GPR_U32(ctx, 31, 0x181FA0u);
    ctx->pc = 0x181F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F98u;
            // 0x181f9c: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FA0u; }
        if (ctx->pc != 0x181FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FA0u; }
        if (ctx->pc != 0x181FA0u) { return; }
    }
    ctx->pc = 0x181FA0u;
label_181fa0:
    // 0x181fa0: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181fa8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181FA8u;
    SET_GPR_U32(ctx, 31, 0x181FB0u);
    ctx->pc = 0x181FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181FA8u;
            // 0x181fac: 0xe4400128  swc1        $f0, 0x128($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FB0u; }
        if (ctx->pc != 0x181FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181FB0u; }
        if (ctx->pc != 0x181FB0u) { return; }
    }
    ctx->pc = 0x181FB0u;
label_181fb0:
    // 0x181fb0: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181fb4: 0xac620160  sw          $v0, 0x160($v1)
    ctx->pc = 0x181fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 2));
    // 0x181fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181fc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181fc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x181FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181FC4u;
            // 0x181fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181FCCu;
}
