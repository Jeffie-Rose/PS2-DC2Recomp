#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texALPHA_BLEND__FP9SPI_STACKi
// Address: 0x13e070 - 0x13e0a4
void texALPHA_BLEND__FP9SPI_STACKi_0x13e070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texALPHA_BLEND__FP9SPI_STACKi_0x13e070");
#endif

    switch (ctx->pc) {
        case 0x13e088u: goto label_13e088;
        default: break;
    }

    ctx->pc = 0x13e070u;

    // 0x13e070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e078: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E078u;
    {
        const bool branch_taken_0x13e078 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x13e078) {
            ctx->pc = 0x13E090u;
            goto label_13e090;
        }
    }
    ctx->pc = 0x13E080u;
    // 0x13e080: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x13E080u;
    SET_GPR_U32(ctx, 31, 0x13E088u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E088u; }
        if (ctx->pc != 0x13E088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13E088u; }
        if (ctx->pc != 0x13E088u) { return; }
    }
    ctx->pc = 0x13E088u;
label_13e088:
    // 0x13e088: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13e088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13e08c: 0xa0220e9d  sb          $v0, 0xE9D($at)
    ctx->pc = 0x13e08cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3741), (uint8_t)GPR_U32(ctx, 2));
label_13e090:
    // 0x13e090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e098: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13e09c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E0A4u;
}
