#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapACTIVE_LIGHT_SET__FP9SPI_STACKi
// Address: 0x165230 - 0x165258
void mapACTIVE_LIGHT_SET__FP9SPI_STACKi_0x165230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapACTIVE_LIGHT_SET__FP9SPI_STACKi_0x165230");
#endif

    switch (ctx->pc) {
        case 0x165240u: goto label_165240;
        default: break;
    }

    ctx->pc = 0x165230u;

    // 0x165230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165238: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x165238u;
    SET_GPR_U32(ctx, 31, 0x165240u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165240u; }
        if (ctx->pc != 0x165240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165240u; }
        if (ctx->pc != 0x165240u) { return; }
    }
    ctx->pc = 0x165240u;
label_165240:
    // 0x165240: 0x8f83895c  lw          $v1, -0x76A4($gp)
    ctx->pc = 0x165240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165244: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x165244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
    // 0x165248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16524c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165250: 0x3e00008  jr          $ra
    ctx->pc = 0x165250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165250u;
            // 0x165254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165258u;
}
