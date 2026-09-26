#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __NUM__FP9SPI_STACKi
// Address: 0x181c20 - 0x181c48
void ps2___NUM__FP9SPI_STACKi_0x181c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___NUM__FP9SPI_STACKi_0x181c20");
#endif

    switch (ctx->pc) {
        case 0x181c30u: goto label_181c30;
        default: break;
    }

    ctx->pc = 0x181c20u;

    // 0x181c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x181c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181c28: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x181C28u;
    SET_GPR_U32(ctx, 31, 0x181C30u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C30u; }
        if (ctx->pc != 0x181C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181C30u; }
        if (ctx->pc != 0x181C30u) { return; }
    }
    ctx->pc = 0x181C30u;
label_181c30:
    // 0x181c30: 0x8f838a5c  lw          $v1, -0x75A4($gp)
    ctx->pc = 0x181c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937180)));
    // 0x181c34: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x181c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x181c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181c40: 0x3e00008  jr          $ra
    ctx->pc = 0x181C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181C40u;
            // 0x181c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181C48u;
}
