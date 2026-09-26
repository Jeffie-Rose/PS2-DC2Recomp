#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsEnablePhotoMenu__Fv
// Address: 0x30e690 - 0x30e6a0
void IsEnablePhotoMenu__Fv_0x30e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsEnablePhotoMenu__Fv_0x30e690");
#endif

    ctx->pc = 0x30e690u;

    // 0x30e690: 0x8f82a220  lw          $v0, -0x5DE0($gp)
    ctx->pc = 0x30e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30e694: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x30e694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x30e698: 0x3e00008  jr          $ra
    ctx->pc = 0x30E698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E698u;
            // 0x30e69c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E6A0u;
}
