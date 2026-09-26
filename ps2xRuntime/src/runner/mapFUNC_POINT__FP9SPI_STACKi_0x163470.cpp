#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_POINT__FP9SPI_STACKi
// Address: 0x163470 - 0x163494
void mapFUNC_POINT__FP9SPI_STACKi_0x163470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_POINT__FP9SPI_STACKi_0x163470");
#endif

    switch (ctx->pc) {
        case 0x163480u: goto label_163480;
        default: break;
    }

    ctx->pc = 0x163470u;

    // 0x163470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163478: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163478u;
    SET_GPR_U32(ctx, 31, 0x163480u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163480u; }
        if (ctx->pc != 0x163480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163480u; }
        if (ctx->pc != 0x163480u) { return; }
    }
    ctx->pc = 0x163480u;
label_163480:
    // 0x163480: 0xaf80893c  sw          $zero, -0x76C4($gp)
    ctx->pc = 0x163480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
    // 0x163484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16348c: 0x3e00008  jr          $ra
    ctx->pc = 0x16348Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16348Cu;
            // 0x163490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163494u;
}
