#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SIZE__FP9SPI_STACKi
// Address: 0x181bb0 - 0x181bf0
void ps2___SIZE__FP9SPI_STACKi_0x181bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SIZE__FP9SPI_STACKi_0x181bb0");
#endif

    switch (ctx->pc) {
        case 0x181bc4u: goto label_181bc4;
        case 0x181bd4u: goto label_181bd4;
        default: break;
    }

    ctx->pc = 0x181bb0u;

    // 0x181bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181bbc: 0xc05190c  jal         func_146430
    ctx->pc = 0x181BBCu;
    SET_GPR_U32(ctx, 31, 0x181BC4u);
    ctx->pc = 0x181BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181BBCu;
            // 0x181bc0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BC4u; }
        if (ctx->pc != 0x181BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BC4u; }
        if (ctx->pc != 0x181BC4u) { return; }
    }
    ctx->pc = 0x181BC4u;
label_181bc4:
    // 0x181bc4: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bcc: 0xc05190c  jal         func_146430
    ctx->pc = 0x181BCCu;
    SET_GPR_U32(ctx, 31, 0x181BD4u);
    ctx->pc = 0x181BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181BCCu;
            // 0x181bd0: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BD4u; }
        if (ctx->pc != 0x181BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181BD4u; }
        if (ctx->pc != 0x181BD4u) { return; }
    }
    ctx->pc = 0x181BD4u;
label_181bd4:
    // 0x181bd4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181bd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181bdc: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x181bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x181be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181be8: 0x3e00008  jr          $ra
    ctx->pc = 0x181BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181BE8u;
            // 0x181bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181BF0u;
}
