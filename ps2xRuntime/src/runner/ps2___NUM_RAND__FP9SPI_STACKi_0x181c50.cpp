#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __NUM_RAND__FP9SPI_STACKi
// Address: 0x181c50 - 0x181ca4
void ps2___NUM_RAND__FP9SPI_STACKi_0x181c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___NUM_RAND__FP9SPI_STACKi_0x181c50");
#endif

    switch (ctx->pc) {
        case 0x181c64u: goto label_181c64;
        case 0x181c78u: goto label_181c78;
        case 0x181c88u: goto label_181c88;
        default: break;
    }

    ctx->pc = 0x181c50u;

    // 0x181c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181c5c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181C5Cu;
    SET_GPR_U32(ctx, 31, 0x181C64u);
    ctx->pc = 0x181C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C5Cu;
            // 0x181c60: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C64u; }
        if (ctx->pc != 0x181C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C64u; }
        if (ctx->pc != 0x181C64u) { return; }
    }
    ctx->pc = 0x181C64u;
label_181c64:
    // 0x181c64: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c6c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181c70: 0xc05190c  jal         func_146430
    ctx->pc = 0x181C70u;
    SET_GPR_U32(ctx, 31, 0x181C78u);
    ctx->pc = 0x181C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C70u;
            // 0x181c74: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C78u; }
        if (ctx->pc != 0x181C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C78u; }
        if (ctx->pc != 0x181C78u) { return; }
    }
    ctx->pc = 0x181C78u;
label_181c78:
    // 0x181c78: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181c80: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181C80u;
    SET_GPR_U32(ctx, 31, 0x181C88u);
    ctx->pc = 0x181C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181C80u;
            // 0x181c84: 0xe440002c  swc1        $f0, 0x2C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C88u; }
        if (ctx->pc != 0x181C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C88u; }
        if (ctx->pc != 0x181C88u) { return; }
    }
    ctx->pc = 0x181C88u;
label_181c88:
    // 0x181c88: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181c8c: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x181c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x181c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x181C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C9Cu;
            // 0x181ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181CA4u;
}
