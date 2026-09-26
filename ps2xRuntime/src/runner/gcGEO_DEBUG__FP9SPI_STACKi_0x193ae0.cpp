#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcGEO_DEBUG__FP9SPI_STACKi
// Address: 0x193ae0 - 0x193af0
void gcGEO_DEBUG__FP9SPI_STACKi_0x193ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcGEO_DEBUG__FP9SPI_STACKi_0x193ae0");
#endif

    ctx->pc = 0x193ae0u;

    // 0x193ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ae4: 0x3c01003e  lui         $at, 0x3E
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)62 << 16));
    // 0x193ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x193AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AE8u;
            // 0x193aec: 0xac228078  sw          $v0, -0x7F88($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294934648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193AF0u;
}
