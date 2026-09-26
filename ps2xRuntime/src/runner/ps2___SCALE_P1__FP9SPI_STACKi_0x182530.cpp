#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __SCALE_P1__FP9SPI_STACKi
// Address: 0x182530 - 0x182570
void ps2___SCALE_P1__FP9SPI_STACKi_0x182530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___SCALE_P1__FP9SPI_STACKi_0x182530");
#endif

    switch (ctx->pc) {
        case 0x182544u: goto label_182544;
        case 0x182554u: goto label_182554;
        default: break;
    }

    ctx->pc = 0x182530u;

    // 0x182530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18253c: 0xc05190c  jal         func_146430
    ctx->pc = 0x18253Cu;
    SET_GPR_U32(ctx, 31, 0x182544u);
    ctx->pc = 0x182540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18253Cu;
            // 0x182540: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182544u; }
        if (ctx->pc != 0x182544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182544u; }
        if (ctx->pc != 0x182544u) { return; }
    }
    ctx->pc = 0x182544u;
label_182544:
    // 0x182544: 0x8f828a5c  lw          $v0, -0x75A4($gp)
    ctx->pc = 0x182544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18254c: 0xc05190c  jal         func_146430
    ctx->pc = 0x18254Cu;
    SET_GPR_U32(ctx, 31, 0x182554u);
    ctx->pc = 0x182550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18254Cu;
            // 0x182550: 0xe44001a0  swc1        $f0, 0x1A0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182554u; }
        if (ctx->pc != 0x182554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182554u; }
        if (ctx->pc != 0x182554u) { return; }
    }
    ctx->pc = 0x182554u;
label_182554:
    // 0x182554: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x182554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x182558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18255c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x18255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x182560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182568: 0x3e00008  jr          $ra
    ctx->pc = 0x182568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18256Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182568u;
            // 0x18256c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182570u;
}
