#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ALPHA_RAND__FP9SPI_STACKi
// Address: 0x182720 - 0x182774
void ps2___ALPHA_RAND__FP9SPI_STACKi_0x182720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ALPHA_RAND__FP9SPI_STACKi_0x182720");
#endif

    switch (ctx->pc) {
        case 0x182734u: goto label_182734;
        case 0x182748u: goto label_182748;
        case 0x182758u: goto label_182758;
        default: break;
    }

    ctx->pc = 0x182720u;

    // 0x182720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18272c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x18272Cu;
    SET_GPR_U32(ctx, 31, 0x182734u);
    ctx->pc = 0x182730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18272Cu;
            // 0x182730: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182734u; }
        if (ctx->pc != 0x182734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182734u; }
        if (ctx->pc != 0x182734u) { return; }
    }
    ctx->pc = 0x182734u;
label_182734:
    // 0x182734: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18273c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18273cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182740: 0xc05190c  jal         func_146430
    ctx->pc = 0x182740u;
    SET_GPR_U32(ctx, 31, 0x182748u);
    ctx->pc = 0x182744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182740u;
            // 0x182744: 0xac620234  sw          $v0, 0x234($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182748u; }
        if (ctx->pc != 0x182748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182748u; }
        if (ctx->pc != 0x182748u) { return; }
    }
    ctx->pc = 0x182748u;
label_182748:
    // 0x182748: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18274c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18274cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182750: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x182750u;
    SET_GPR_U32(ctx, 31, 0x182758u);
    ctx->pc = 0x182754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182750u;
            // 0x182754: 0xe4400240  swc1        $f0, 0x240($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 576), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182758u; }
        if (ctx->pc != 0x182758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182758u; }
        if (ctx->pc != 0x182758u) { return; }
    }
    ctx->pc = 0x182758u;
label_182758:
    // 0x182758: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18275c: 0xac62024c  sw          $v0, 0x24C($v1)
    ctx->pc = 0x18275cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 588), GPR_U32(ctx, 2));
    // 0x182760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18276c: 0x3e00008  jr          $ra
    ctx->pc = 0x18276Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18276Cu;
            // 0x182770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182774u;
}
