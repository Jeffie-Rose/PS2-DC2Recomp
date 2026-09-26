#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPARTS_POS__FP9SPI_STACKi
// Address: 0x162c80 - 0x162ca8
void mapPARTS_POS__FP9SPI_STACKi_0x162c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPARTS_POS__FP9SPI_STACKi_0x162c80");
#endif

    switch (ctx->pc) {
        case 0x162c98u: goto label_162c98;
        default: break;
    }

    ctx->pc = 0x162c80u;

    // 0x162c80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x162c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162c84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162c88: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x162c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x162c8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x162c90: 0xc051928  jal         func_1464A0
    ctx->pc = 0x162C90u;
    SET_GPR_U32(ctx, 31, 0x162C98u);
    ctx->pc = 0x162C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162C90u;
            // 0x162c94: 0x248404a0  addiu       $a0, $a0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C98u; }
        if (ctx->pc != 0x162C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162C98u; }
        if (ctx->pc != 0x162C98u) { return; }
    }
    ctx->pc = 0x162C98u;
label_162c98:
    // 0x162c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x162CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162CA0u;
            // 0x162ca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162CA8u;
}
