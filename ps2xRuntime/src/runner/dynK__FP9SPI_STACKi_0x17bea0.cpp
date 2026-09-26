#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynK__FP9SPI_STACKi
// Address: 0x17bea0 - 0x17bec8
void dynK__FP9SPI_STACKi_0x17bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynK__FP9SPI_STACKi_0x17bea0");
#endif

    switch (ctx->pc) {
        case 0x17beb0u: goto label_17beb0;
        default: break;
    }

    ctx->pc = 0x17bea0u;

    // 0x17bea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bea8: 0xc05190c  jal         func_146430
    ctx->pc = 0x17BEA8u;
    SET_GPR_U32(ctx, 31, 0x17BEB0u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEB0u; }
        if (ctx->pc != 0x17BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEB0u; }
        if (ctx->pc != 0x17BEB0u) { return; }
    }
    ctx->pc = 0x17BEB0u;
label_17beb0:
    // 0x17beb0: 0x8f838a10  lw          $v1, -0x75F0($gp)
    ctx->pc = 0x17beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17beb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17beb8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x17beb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x17bebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bec0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEC0u;
            // 0x17bec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BEC8u;
}
