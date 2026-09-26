#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_TEXDATA_OFFSET__FP9SPI_STACKi
// Address: 0x251f30 - 0x251f58
void ps2__MENU_TEXDATA_OFFSET__FP9SPI_STACKi_0x251f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_TEXDATA_OFFSET__FP9SPI_STACKi_0x251f30");
#endif

    switch (ctx->pc) {
        case 0x251f40u: goto label_251f40;
        default: break;
    }

    ctx->pc = 0x251f30u;

    // 0x251f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x251f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x251f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x251f38: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251F38u;
    SET_GPR_U32(ctx, 31, 0x251F40u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F40u; }
        if (ctx->pc != 0x251F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F40u; }
        if (ctx->pc != 0x251F40u) { return; }
    }
    ctx->pc = 0x251F40u;
label_251f40:
    // 0x251f40: 0xa78297a4  sh          $v0, -0x685C($gp)
    ctx->pc = 0x251f40u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940580), (uint16_t)GPR_U32(ctx, 2));
    // 0x251f44: 0xa78097a8  sh          $zero, -0x6858($gp)
    ctx->pc = 0x251f44u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940584), (uint16_t)GPR_U32(ctx, 0));
    // 0x251f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x251f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251f50: 0x3e00008  jr          $ra
    ctx->pc = 0x251F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251F50u;
            // 0x251f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251F58u;
}
