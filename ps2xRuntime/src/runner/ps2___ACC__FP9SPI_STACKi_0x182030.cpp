#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ACC__FP9SPI_STACKi
// Address: 0x182030 - 0x182084
void ps2___ACC__FP9SPI_STACKi_0x182030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ACC__FP9SPI_STACKi_0x182030");
#endif

    switch (ctx->pc) {
        case 0x182044u: goto label_182044;
        case 0x182058u: goto label_182058;
        case 0x182068u: goto label_182068;
        default: break;
    }

    ctx->pc = 0x182030u;

    // 0x182030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18203c: 0xc05190c  jal         func_146430
    ctx->pc = 0x18203Cu;
    SET_GPR_U32(ctx, 31, 0x182044u);
    ctx->pc = 0x182040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18203Cu;
            // 0x182040: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182044u; }
        if (ctx->pc != 0x182044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182044u; }
        if (ctx->pc != 0x182044u) { return; }
    }
    ctx->pc = 0x182044u;
label_182044:
    // 0x182044: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18204c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x18204cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x182050: 0xc05190c  jal         func_146430
    ctx->pc = 0x182050u;
    SET_GPR_U32(ctx, 31, 0x182058u);
    ctx->pc = 0x182054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182050u;
            // 0x182054: 0xe44000c0  swc1        $f0, 0xC0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182058u; }
        if (ctx->pc != 0x182058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182058u; }
        if (ctx->pc != 0x182058u) { return; }
    }
    ctx->pc = 0x182058u;
label_182058:
    // 0x182058: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18205c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182060: 0xc05190c  jal         func_146430
    ctx->pc = 0x182060u;
    SET_GPR_U32(ctx, 31, 0x182068u);
    ctx->pc = 0x182064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182060u;
            // 0x182064: 0xe44000c4  swc1        $f0, 0xC4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182068u; }
        if (ctx->pc != 0x182068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182068u; }
        if (ctx->pc != 0x182068u) { return; }
    }
    ctx->pc = 0x182068u;
label_182068:
    // 0x182068: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x18206c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182070: 0xe46000c8  swc1        $f0, 0xC8($v1)
    ctx->pc = 0x182070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 200), bits); }
    // 0x182074: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182078: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18207c: 0x3e00008  jr          $ra
    ctx->pc = 0x18207Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18207Cu;
            // 0x182080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182084u;
}
