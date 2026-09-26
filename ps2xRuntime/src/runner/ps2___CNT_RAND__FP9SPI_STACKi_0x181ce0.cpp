#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __CNT_RAND__FP9SPI_STACKi
// Address: 0x181ce0 - 0x181d34
void ps2___CNT_RAND__FP9SPI_STACKi_0x181ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___CNT_RAND__FP9SPI_STACKi_0x181ce0");
#endif

    switch (ctx->pc) {
        case 0x181cf4u: goto label_181cf4;
        case 0x181d08u: goto label_181d08;
        case 0x181d18u: goto label_181d18;
        default: break;
    }

    ctx->pc = 0x181ce0u;

    // 0x181ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181cec: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181CECu;
    SET_GPR_U32(ctx, 31, 0x181CF4u);
    ctx->pc = 0x181CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181CECu;
            // 0x181cf0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CF4u; }
        if (ctx->pc != 0x181CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CF4u; }
        if (ctx->pc != 0x181CF4u) { return; }
    }
    ctx->pc = 0x181CF4u;
label_181cf4:
    // 0x181cf4: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181cfc: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x181cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x181d00: 0xc05190c  jal         func_146430
    ctx->pc = 0x181D00u;
    SET_GPR_U32(ctx, 31, 0x181D08u);
    ctx->pc = 0x181D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D00u;
            // 0x181d04: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D08u; }
        if (ctx->pc != 0x181D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D08u; }
        if (ctx->pc != 0x181D08u) { return; }
    }
    ctx->pc = 0x181D08u;
label_181d08:
    // 0x181d08: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x181d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181d10: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181D10u;
    SET_GPR_U32(ctx, 31, 0x181D18u);
    ctx->pc = 0x181D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181D10u;
            // 0x181d14: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D18u; }
        if (ctx->pc != 0x181D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181D18u; }
        if (ctx->pc != 0x181D18u) { return; }
    }
    ctx->pc = 0x181D18u;
label_181d18:
    // 0x181d18: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181d1c: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x181d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x181d20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x181D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181D2Cu;
            // 0x181d30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181D34u;
}
