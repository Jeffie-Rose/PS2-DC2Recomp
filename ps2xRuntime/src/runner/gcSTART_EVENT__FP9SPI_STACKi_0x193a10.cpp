#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcSTART_EVENT__FP9SPI_STACKi
// Address: 0x193a10 - 0x193a34
void gcSTART_EVENT__FP9SPI_STACKi_0x193a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcSTART_EVENT__FP9SPI_STACKi_0x193a10");
#endif

    switch (ctx->pc) {
        case 0x193a20u: goto label_193a20;
        default: break;
    }

    ctx->pc = 0x193a10u;

    // 0x193a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193a18: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x193A18u;
    SET_GPR_U32(ctx, 31, 0x193A20u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A20u; }
        if (ctx->pc != 0x193A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A20u; }
        if (ctx->pc != 0x193A20u) { return; }
    }
    ctx->pc = 0x193A20u;
label_193a20:
    // 0x193a20: 0xaf828acc  sw          $v0, -0x7534($gp)
    ctx->pc = 0x193a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937292), GPR_U32(ctx, 2));
    // 0x193a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193a28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x193a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x193A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193A2Cu;
            // 0x193a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193A34u;
}
