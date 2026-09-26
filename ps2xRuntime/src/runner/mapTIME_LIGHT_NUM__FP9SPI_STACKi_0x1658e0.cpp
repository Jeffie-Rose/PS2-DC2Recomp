#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapTIME_LIGHT_NUM__FP9SPI_STACKi
// Address: 0x1658e0 - 0x165908
void mapTIME_LIGHT_NUM__FP9SPI_STACKi_0x1658e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapTIME_LIGHT_NUM__FP9SPI_STACKi_0x1658e0");
#endif

    switch (ctx->pc) {
        case 0x1658f0u: goto label_1658f0;
        default: break;
    }

    ctx->pc = 0x1658e0u;

    // 0x1658e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1658e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1658e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1658e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1658e8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1658E8u;
    SET_GPR_U32(ctx, 31, 0x1658F0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658F0u; }
        if (ctx->pc != 0x1658F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1658F0u; }
        if (ctx->pc != 0x1658F0u) { return; }
    }
    ctx->pc = 0x1658F0u;
label_1658f0:
    // 0x1658f0: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x1658f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x1658f4: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x1658f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
    // 0x1658f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1658f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1658fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1658fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165900: 0x3e00008  jr          $ra
    ctx->pc = 0x165900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165900u;
            // 0x165904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165908u;
}
