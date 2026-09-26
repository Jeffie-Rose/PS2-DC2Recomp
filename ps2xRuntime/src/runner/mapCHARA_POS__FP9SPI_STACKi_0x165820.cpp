#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapCHARA_POS__FP9SPI_STACKi
// Address: 0x165820 - 0x165848
void mapCHARA_POS__FP9SPI_STACKi_0x165820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapCHARA_POS__FP9SPI_STACKi_0x165820");
#endif

    switch (ctx->pc) {
        case 0x165838u: goto label_165838;
        default: break;
    }

    ctx->pc = 0x165820u;

    // 0x165820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165824: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x165824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16582c: 0x8f82895c  lw          $v0, -0x76A4($gp)
    ctx->pc = 0x16582cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165830: 0xc051928  jal         func_1464A0
    ctx->pc = 0x165830u;
    SET_GPR_U32(ctx, 31, 0x165838u);
    ctx->pc = 0x165834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165830u;
            // 0x165834: 0x244400b0  addiu       $a0, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165838u; }
        if (ctx->pc != 0x165838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165838u; }
        if (ctx->pc != 0x165838u) { return; }
    }
    ctx->pc = 0x165838u;
label_165838:
    // 0x165838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16583c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165840: 0x3e00008  jr          $ra
    ctx->pc = 0x165840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165840u;
            // 0x165844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165848u;
}
