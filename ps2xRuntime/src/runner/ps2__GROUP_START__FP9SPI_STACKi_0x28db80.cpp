#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GROUP_START__FP9SPI_STACKi
// Address: 0x28db80 - 0x28dbb4
void ps2__GROUP_START__FP9SPI_STACKi_0x28db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GROUP_START__FP9SPI_STACKi_0x28db80");
#endif

    switch (ctx->pc) {
        case 0x28db90u: goto label_28db90;
        default: break;
    }

    ctx->pc = 0x28db80u;

    // 0x28db80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28db84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28db88: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x28DB88u;
    SET_GPR_U32(ctx, 31, 0x28DB90u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DB90u; }
        if (ctx->pc != 0x28DB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DB90u; }
        if (ctx->pc != 0x28DB90u) { return; }
    }
    ctx->pc = 0x28DB90u;
label_28db90:
    // 0x28db90: 0x8f83982c  lw          $v1, -0x67D4($gp)
    ctx->pc = 0x28db90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940716)));
    // 0x28db94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28db94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28db98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28db9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dba0: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28dba0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28dba4: 0xac242204  sw          $a0, 0x2204($at)
    ctx->pc = 0x28dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8708), GPR_U32(ctx, 4));
    // 0x28dba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28dba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dbac: 0x3e00008  jr          $ra
    ctx->pc = 0x28DBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DBACu;
            // 0x28dbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28DBB4u;
}
