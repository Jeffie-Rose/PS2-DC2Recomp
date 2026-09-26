#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SCALE__FP9SPI_STACKi
// Address: 0x1823d0 - 0x182410
void ps2___SCALE__FP9SPI_STACKi_0x1823d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SCALE__FP9SPI_STACKi_0x1823d0");
#endif

    switch (ctx->pc) {
        case 0x1823e4u: goto label_1823e4;
        case 0x1823f4u: goto label_1823f4;
        default: break;
    }

    ctx->pc = 0x1823d0u;

    // 0x1823d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1823d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1823d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1823d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1823d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1823dc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1823DCu;
    SET_GPR_U32(ctx, 31, 0x1823E4u);
    ctx->pc = 0x1823E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1823DCu;
            // 0x1823e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823E4u; }
        if (ctx->pc != 0x1823E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823E4u; }
        if (ctx->pc != 0x1823E4u) { return; }
    }
    ctx->pc = 0x1823E4u;
label_1823e4:
    // 0x1823e4: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1823e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1823e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1823e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823ec: 0xc05190c  jal         func_146430
    ctx->pc = 0x1823ECu;
    SET_GPR_U32(ctx, 31, 0x1823F4u);
    ctx->pc = 0x1823F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1823ECu;
            // 0x1823f0: 0xe4400180  swc1        $f0, 0x180($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823F4u; }
        if (ctx->pc != 0x1823F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1823F4u; }
        if (ctx->pc != 0x1823F4u) { return; }
    }
    ctx->pc = 0x1823F4u;
label_1823f4:
    // 0x1823f4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x1823f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1823f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1823f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1823fc: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1823fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x182400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182408: 0x3e00008  jr          $ra
    ctx->pc = 0x182408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18240Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182408u;
            // 0x18240c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182410u;
}
