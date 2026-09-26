#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __COUNT__FP9SPI_STACKi
// Address: 0x181cb0 - 0x181cd8
void ps2___COUNT__FP9SPI_STACKi_0x181cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___COUNT__FP9SPI_STACKi_0x181cb0");
#endif

    switch (ctx->pc) {
        case 0x181cc0u: goto label_181cc0;
        default: break;
    }

    ctx->pc = 0x181cb0u;

    // 0x181cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181cb8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181CB8u;
    SET_GPR_U32(ctx, 31, 0x181CC0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CC0u; }
        if (ctx->pc != 0x181CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181CC0u; }
        if (ctx->pc != 0x181CC0u) { return; }
    }
    ctx->pc = 0x181CC0u;
label_181cc0:
    // 0x181cc0: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181cc4: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x181cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x181cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x181CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181CD0u;
            // 0x181cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181CD8u;
}
