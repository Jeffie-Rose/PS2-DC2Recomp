#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __MOVE_P1__FP9SPI_STACKi
// Address: 0x1821d0 - 0x182224
void ps2___MOVE_P1__FP9SPI_STACKi_0x1821d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___MOVE_P1__FP9SPI_STACKi_0x1821d0");
#endif

    switch (ctx->pc) {
        case 0x1821e4u: goto label_1821e4;
        case 0x1821f8u: goto label_1821f8;
        case 0x182208u: goto label_182208;
        default: break;
    }

    ctx->pc = 0x1821d0u;

    // 0x1821d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1821d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1821d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1821d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1821d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1821dc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1821DCu;
    SET_GPR_U32(ctx, 31, 0x1821E4u);
    ctx->pc = 0x1821E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821DCu;
            // 0x1821e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821E4u; }
        if (ctx->pc != 0x1821E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821E4u; }
        if (ctx->pc != 0x1821E4u) { return; }
    }
    ctx->pc = 0x1821E4u;
label_1821e4:
    // 0x1821e4: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1821e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1821e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821ec: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1821ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1821f0: 0xc05190c  jal         func_146430
    ctx->pc = 0x1821F0u;
    SET_GPR_U32(ctx, 31, 0x1821F8u);
    ctx->pc = 0x1821F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1821F0u;
            // 0x1821f4: 0xe44000f0  swc1        $f0, 0xF0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821F8u; }
        if (ctx->pc != 0x1821F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1821F8u; }
        if (ctx->pc != 0x1821F8u) { return; }
    }
    ctx->pc = 0x1821F8u;
label_1821f8:
    // 0x1821f8: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x1821f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x1821fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1821fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182200: 0xc05190c  jal         func_146430
    ctx->pc = 0x182200u;
    SET_GPR_U32(ctx, 31, 0x182208u);
    ctx->pc = 0x182204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182200u;
            // 0x182204: 0xe44000f4  swc1        $f0, 0xF4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182208u; }
        if (ctx->pc != 0x182208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182208u; }
        if (ctx->pc != 0x182208u) { return; }
    }
    ctx->pc = 0x182208u;
label_182208:
    // 0x182208: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18220c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182210: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x182210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x182214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18221c: 0x3e00008  jr          $ra
    ctx->pc = 0x18221Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18221Cu;
            // 0x182220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182224u;
}
