#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynGRAVITY__FP9SPI_STACKi
// Address: 0x17be70 - 0x17bea0
void dynGRAVITY__FP9SPI_STACKi_0x17be70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynGRAVITY__FP9SPI_STACKi_0x17be70");
#endif

    switch (ctx->pc) {
        case 0x17be88u: goto label_17be88;
        default: break;
    }

    ctx->pc = 0x17be70u;

    // 0x17be70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17be70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17be74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17be74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17be78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17be7c: 0x8f828a10  lw          $v0, -0x75F0($gp)
    ctx->pc = 0x17be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17be80: 0xc051928  jal         func_1464A0
    ctx->pc = 0x17BE80u;
    SET_GPR_U32(ctx, 31, 0x17BE88u);
    ctx->pc = 0x17BE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE80u;
            // 0x17be84: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE88u; }
        if (ctx->pc != 0x17BE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BE88u; }
        if (ctx->pc != 0x17BE88u) { return; }
    }
    ctx->pc = 0x17BE88u;
label_17be88:
    // 0x17be88: 0x8f838a10  lw          $v1, -0x75F0($gp)
    ctx->pc = 0x17be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17be8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17be90: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x17be90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
    // 0x17be94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be98: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BE98u;
            // 0x17be9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BEA0u;
}
