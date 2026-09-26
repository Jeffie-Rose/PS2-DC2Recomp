#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: quest_END__FP9SPI_STACKi
// Address: 0x31a9a0 - 0x31a9b4
void quest_END__FP9SPI_STACKi_0x31a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("quest_END__FP9SPI_STACKi_0x31a9a0");
#endif

    ctx->pc = 0x31a9a0u;

    // 0x31a9a0: 0x8f83a388  lw          $v1, -0x5C78($gp)
    ctx->pc = 0x31a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943624)));
    // 0x31a9a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a9a8: 0x24630394  addiu       $v1, $v1, 0x394
    ctx->pc = 0x31a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 916));
    // 0x31a9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31A9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A9ACu;
            // 0x31a9b0: 0xaf83a388  sw          $v1, -0x5C78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A9B4u;
}
