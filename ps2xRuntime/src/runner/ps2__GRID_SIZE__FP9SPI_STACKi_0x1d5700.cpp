#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GRID_SIZE__FP9SPI_STACKi
// Address: 0x1d5700 - 0x1d5748
void ps2__GRID_SIZE__FP9SPI_STACKi_0x1d5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GRID_SIZE__FP9SPI_STACKi_0x1d5700");
#endif

    switch (ctx->pc) {
        case 0x1d5718u: goto label_1d5718;
        case 0x1d5724u: goto label_1d5724;
        default: break;
    }

    ctx->pc = 0x1d5700u;

    // 0x1d5700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5708: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d570c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1d570cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d5710: 0xc05190c  jal         func_146430
    ctx->pc = 0x1D5710u;
    SET_GPR_U32(ctx, 31, 0x1D5718u);
    ctx->pc = 0x1D5714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5710u;
            // 0x1d5714: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5718u; }
        if (ctx->pc != 0x1D5718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5718u; }
        if (ctx->pc != 0x1D5718u) { return; }
    }
    ctx->pc = 0x1D5718u;
label_1d5718:
    // 0x1d5718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d571c: 0xc05190c  jal         func_146430
    ctx->pc = 0x1D571Cu;
    SET_GPR_U32(ctx, 31, 0x1D5724u);
    ctx->pc = 0x1D5720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D571Cu;
            // 0x1d5720: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5724u; }
        if (ctx->pc != 0x1D5724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5724u; }
        if (ctx->pc != 0x1D5724u) { return; }
    }
    ctx->pc = 0x1D5724u;
label_1d5724:
    // 0x1d5724: 0x8f838e48  lw          $v1, -0x71B8($gp)
    ctx->pc = 0x1d5724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938184)));
    // 0x1d5728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d572c: 0xe47401bc  swc1        $f20, 0x1BC($v1)
    ctx->pc = 0x1d572cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x1d5730: 0xe46001c0  swc1        $f0, 0x1C0($v1)
    ctx->pc = 0x1d5730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 448), bits); }
    // 0x1d5734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5738: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d573c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d573cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5740: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5740u;
            // 0x1d5744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5748u;
}
