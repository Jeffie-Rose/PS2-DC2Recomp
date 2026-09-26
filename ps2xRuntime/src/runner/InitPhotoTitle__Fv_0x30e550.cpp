#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPhotoTitle__Fv
// Address: 0x30e550 - 0x30e560
void InitPhotoTitle__Fv_0x30e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPhotoTitle__Fv_0x30e550");
#endif

    ctx->pc = 0x30e550u;

    // 0x30e550: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30e550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30e554: 0xaf80a23c  sw          $zero, -0x5DC4($gp)
    ctx->pc = 0x30e554u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943292), GPR_U32(ctx, 0));
    // 0x30e558: 0x3e00008  jr          $ra
    ctx->pc = 0x30E558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E558u;
            // 0x30e55c: 0xa020dea0  sb          $zero, -0x2160($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294958752), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E560u;
}
