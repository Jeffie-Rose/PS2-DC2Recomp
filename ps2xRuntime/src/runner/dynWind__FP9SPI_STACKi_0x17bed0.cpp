#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynWind__FP9SPI_STACKi
// Address: 0x17bed0 - 0x17bef8
void dynWind__FP9SPI_STACKi_0x17bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynWind__FP9SPI_STACKi_0x17bed0");
#endif

    switch (ctx->pc) {
        case 0x17bee0u: goto label_17bee0;
        default: break;
    }

    ctx->pc = 0x17bed0u;

    // 0x17bed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bed8: 0xc05190c  jal         func_146430
    ctx->pc = 0x17BED8u;
    SET_GPR_U32(ctx, 31, 0x17BEE0u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEE0u; }
        if (ctx->pc != 0x17BEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEE0u; }
        if (ctx->pc != 0x17BEE0u) { return; }
    }
    ctx->pc = 0x17BEE0u;
label_17bee0:
    // 0x17bee0: 0x8f838a10  lw          $v1, -0x75F0($gp)
    ctx->pc = 0x17bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17bee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bee8: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x17bee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x17beec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17beecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEF0u;
            // 0x17bef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BEF8u;
}
