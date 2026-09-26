#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DATAFISHINIT__FP9SPI_STACKi
// Address: 0x195260 - 0x195294
void ps2__DATAFISHINIT__FP9SPI_STACKi_0x195260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DATAFISHINIT__FP9SPI_STACKi_0x195260");
#endif

    switch (ctx->pc) {
        case 0x195270u: goto label_195270;
        default: break;
    }

    ctx->pc = 0x195260u;

    // 0x195260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195268: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x195268u;
    SET_GPR_U32(ctx, 31, 0x195270u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195270u; }
        if (ctx->pc != 0x195270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195270u; }
        if (ctx->pc != 0x195270u) { return; }
    }
    ctx->pc = 0x195270u;
label_195270:
    // 0x195270: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x195270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x195274: 0xa422959e  sh          $v0, -0x6A62($at)
    ctx->pc = 0x195274u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294940062), (uint16_t)GPR_U32(ctx, 2));
    // 0x195278: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x195278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19527c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195280: 0x8c23958c  lw          $v1, -0x6A74($at)
    ctx->pc = 0x195280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294940044)));
    // 0x195284: 0xaf838b74  sw          $v1, -0x748C($gp)
    ctx->pc = 0x195284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937460), GPR_U32(ctx, 3));
    // 0x195288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19528c: 0x3e00008  jr          $ra
    ctx->pc = 0x19528Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19528Cu;
            // 0x195290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195294u;
}
