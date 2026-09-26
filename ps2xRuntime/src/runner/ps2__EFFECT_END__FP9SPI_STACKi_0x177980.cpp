#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EFFECT_END__FP9SPI_STACKi
// Address: 0x177980 - 0x1779a8
void ps2__EFFECT_END__FP9SPI_STACKi_0x177980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EFFECT_END__FP9SPI_STACKi_0x177980");
#endif

    ctx->pc = 0x177980u;

    // 0x177980: 0x8f828a00  lw          $v0, -0x7600($gp)
    ctx->pc = 0x177980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
    // 0x177984: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177984u;
    {
        const bool branch_taken_0x177984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177984u;
            // 0x177988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177984) {
            ctx->pc = 0x177994u;
            goto label_177994;
        }
    }
    ctx->pc = 0x17798Cu;
    // 0x17798c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17798Cu;
    {
        const bool branch_taken_0x17798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17798c) {
            ctx->pc = 0x1779A0u;
            goto label_1779a0;
        }
    }
    ctx->pc = 0x177994u;
label_177994:
    // 0x177994: 0xaf808a00  sw          $zero, -0x7600($gp)
    ctx->pc = 0x177994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937088), GPR_U32(ctx, 0));
    // 0x177998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17799c: 0xaf808a04  sw          $zero, -0x75FC($gp)
    ctx->pc = 0x17799cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937092), GPR_U32(ctx, 0));
label_1779a0:
    // 0x1779a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1779A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1779A8u;
}
