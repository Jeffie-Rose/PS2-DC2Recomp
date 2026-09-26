#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FLOOR_START__FP9SPI_STACKi
// Address: 0x28dde0 - 0x28de10
void ps2__FLOOR_START__FP9SPI_STACKi_0x28dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FLOOR_START__FP9SPI_STACKi_0x28dde0");
#endif

    switch (ctx->pc) {
        case 0x28ddf0u: goto label_28ddf0;
        default: break;
    }

    ctx->pc = 0x28dde0u;

    // 0x28dde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28dde4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28dde8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DDE8u;
    SET_GPR_U32(ctx, 31, 0x28DDF0u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DDF0u; }
        if (ctx->pc != 0x28DDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DDF0u; }
        if (ctx->pc != 0x28DDF0u) { return; }
    }
    ctx->pc = 0x28DDF0u;
label_28ddf0:
    // 0x28ddf0: 0x8f83982c  lw          $v1, -0x67D4($gp)
    ctx->pc = 0x28ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28ddf4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x28ddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x28ddf8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28ddf8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28ddfc: 0xac22a408  sw          $v0, -0x5BF8($at)
    ctx->pc = 0x28ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943752), GPR_U32(ctx, 2));
    // 0x28de00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28de00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28de04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28de08: 0x3e00008  jr          $ra
    ctx->pc = 0x28DE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE08u;
            // 0x28de0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DE10u;
}
