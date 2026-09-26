#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitInterior__Fv
// Address: 0x2df5d0 - 0x2df5f0
void InitInterior__Fv_0x2df5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitInterior__Fv_0x2df5d0");
#endif

    ctx->pc = 0x2df5d0u;

    // 0x2df5d0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df5d4: 0xaf809ec0  sw          $zero, -0x6140($gp)
    ctx->pc = 0x2df5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942400), GPR_U32(ctx, 0));
    // 0x2df5d8: 0xa0208e10  sb          $zero, -0x71F0($at)
    ctx->pc = 0x2df5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938128), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df5dc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df5e0: 0xa0208e90  sb          $zero, -0x7170($at)
    ctx->pc = 0x2df5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938256), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df5e4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2df5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2df5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF5E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF5E8u;
            // 0x2df5ec: 0xa0208ed0  sb          $zero, -0x7130($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294938320), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF5F0u;
}
