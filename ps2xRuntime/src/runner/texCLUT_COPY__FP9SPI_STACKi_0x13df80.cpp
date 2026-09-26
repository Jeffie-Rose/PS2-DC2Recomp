#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texCLUT_COPY__FP9SPI_STACKi
// Address: 0x13df80 - 0x13dfac
void texCLUT_COPY__FP9SPI_STACKi_0x13df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texCLUT_COPY__FP9SPI_STACKi_0x13df80");
#endif

    switch (ctx->pc) {
        case 0x13df90u: goto label_13df90;
        default: break;
    }

    ctx->pc = 0x13df80u;

    // 0x13df80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13df84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13df88: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13DF88u;
    SET_GPR_U32(ctx, 31, 0x13DF90u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF90u; }
        if (ctx->pc != 0x13DF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DF90u; }
        if (ctx->pc != 0x13DF90u) { return; }
    }
    ctx->pc = 0x13DF90u;
label_13df90:
    // 0x13df90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13df90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13df94: 0xa0220e73  sb          $v0, 0xE73($at)
    ctx->pc = 0x13df94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3699), (uint8_t)GPR_U32(ctx, 2));
    // 0x13df98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13df9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13df9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dfa0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13dfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DFACu;
}
