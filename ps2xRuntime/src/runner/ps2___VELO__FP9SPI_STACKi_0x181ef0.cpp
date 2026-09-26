#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __VELO__FP9SPI_STACKi
// Address: 0x181ef0 - 0x181f44
void ps2___VELO__FP9SPI_STACKi_0x181ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___VELO__FP9SPI_STACKi_0x181ef0");
#endif

    switch (ctx->pc) {
        case 0x181f04u: goto label_181f04;
        case 0x181f18u: goto label_181f18;
        case 0x181f28u: goto label_181f28;
        default: break;
    }

    ctx->pc = 0x181ef0u;

    // 0x181ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181efc: 0xc05190c  jal         func_146430
    ctx->pc = 0x181EFCu;
    SET_GPR_U32(ctx, 31, 0x181F04u);
    ctx->pc = 0x181F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181EFCu;
            // 0x181f00: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F04u; }
        if (ctx->pc != 0x181F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F04u; }
        if (ctx->pc != 0x181F04u) { return; }
    }
    ctx->pc = 0x181F04u;
label_181f04:
    // 0x181f04: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f0c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181f10: 0xc05190c  jal         func_146430
    ctx->pc = 0x181F10u;
    SET_GPR_U32(ctx, 31, 0x181F18u);
    ctx->pc = 0x181F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F10u;
            // 0x181f14: 0xe44000b0  swc1        $f0, 0xB0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F18u; }
        if (ctx->pc != 0x181F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F18u; }
        if (ctx->pc != 0x181F18u) { return; }
    }
    ctx->pc = 0x181F18u;
label_181f18:
    // 0x181f18: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f20: 0xc05190c  jal         func_146430
    ctx->pc = 0x181F20u;
    SET_GPR_U32(ctx, 31, 0x181F28u);
    ctx->pc = 0x181F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181F20u;
            // 0x181f24: 0xe44000b4  swc1        $f0, 0xB4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F28u; }
        if (ctx->pc != 0x181F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181F28u; }
        if (ctx->pc != 0x181F28u) { return; }
    }
    ctx->pc = 0x181F28u;
label_181f28:
    // 0x181f28: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181f2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181f30: 0xe46000b8  swc1        $f0, 0xB8($v1)
    ctx->pc = 0x181f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 184), bits); }
    // 0x181f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x181F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181F3Cu;
            // 0x181f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181F44u;
}
