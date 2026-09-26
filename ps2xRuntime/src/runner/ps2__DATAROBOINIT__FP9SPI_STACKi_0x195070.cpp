#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAROBOINIT__FP9SPI_STACKi
// Address: 0x195070 - 0x1950a4
void ps2__DATAROBOINIT__FP9SPI_STACKi_0x195070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAROBOINIT__FP9SPI_STACKi_0x195070");
#endif

    switch (ctx->pc) {
        case 0x195080u: goto label_195080;
        default: break;
    }

    ctx->pc = 0x195070u;

    // 0x195070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195078: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195078u;
    SET_GPR_U32(ctx, 31, 0x195080u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195080u; }
        if (ctx->pc != 0x195080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195080u; }
        if (ctx->pc != 0x195080u) { return; }
    }
    ctx->pc = 0x195080u;
label_195080:
    // 0x195080: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x195080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x195084: 0xa422959c  sh          $v0, -0x6A64($at)
    ctx->pc = 0x195084u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294940060), (uint16_t)GPR_U32(ctx, 2));
    // 0x195088: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x195088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19508c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19508cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195090: 0x8c239588  lw          $v1, -0x6A78($at)
    ctx->pc = 0x195090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940040)));
    // 0x195094: 0xaf838b70  sw          $v1, -0x7490($gp)
    ctx->pc = 0x195094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937456), GPR_U32(ctx, 3));
    // 0x195098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19509c: 0x3e00008  jr          $ra
    ctx->pc = 0x19509Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1950A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19509Cu;
            // 0x1950a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1950A4u;
}
