#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __POS__FP9SPI_STACKi
// Address: 0x181e10 - 0x181e64
void ps2___POS__FP9SPI_STACKi_0x181e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___POS__FP9SPI_STACKi_0x181e10");
#endif

    switch (ctx->pc) {
        case 0x181e24u: goto label_181e24;
        case 0x181e38u: goto label_181e38;
        case 0x181e48u: goto label_181e48;
        default: break;
    }

    ctx->pc = 0x181e10u;

    // 0x181e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181e1c: 0xc05190c  jal         func_146430
    ctx->pc = 0x181E1Cu;
    SET_GPR_U32(ctx, 31, 0x181E24u);
    ctx->pc = 0x181E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181E1Cu;
            // 0x181e20: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E24u; }
        if (ctx->pc != 0x181E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E24u; }
        if (ctx->pc != 0x181E24u) { return; }
    }
    ctx->pc = 0x181E24u;
label_181e24:
    // 0x181e24: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e2c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181e30: 0xc05190c  jal         func_146430
    ctx->pc = 0x181E30u;
    SET_GPR_U32(ctx, 31, 0x181E38u);
    ctx->pc = 0x181E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181E30u;
            // 0x181e34: 0xe4400070  swc1        $f0, 0x70($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E38u; }
        if (ctx->pc != 0x181E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E38u; }
        if (ctx->pc != 0x181E38u) { return; }
    }
    ctx->pc = 0x181E38u;
label_181e38:
    // 0x181e38: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181e40: 0xc05190c  jal         func_146430
    ctx->pc = 0x181E40u;
    SET_GPR_U32(ctx, 31, 0x181E48u);
    ctx->pc = 0x181E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181E40u;
            // 0x181e44: 0xe4400074  swc1        $f0, 0x74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E48u; }
        if (ctx->pc != 0x181E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181E48u; }
        if (ctx->pc != 0x181E48u) { return; }
    }
    ctx->pc = 0x181E48u;
label_181e48:
    // 0x181e48: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181e4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181e50: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x181e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x181e54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x181E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181E5Cu;
            // 0x181e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181E64u;
}
