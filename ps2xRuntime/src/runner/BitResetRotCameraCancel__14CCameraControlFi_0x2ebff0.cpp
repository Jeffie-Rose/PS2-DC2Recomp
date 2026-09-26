#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BitResetRotCameraCancel__14CCameraControlFi
// Address: 0x2ebff0 - 0x2ec004
void BitResetRotCameraCancel__14CCameraControlFi_0x2ebff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BitResetRotCameraCancel__14CCameraControlFi_0x2ebff0");
#endif

    ctx->pc = 0x2ebff0u;

    // 0x2ebff0: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x2ebff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2ebff4: 0xa02827  not         $a1, $a1
    ctx->pc = 0x2ebff4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2ebff8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2ebff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ebffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBFFCu;
            // 0x2ec000: 0xac8300c4  sw          $v1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC004u;
}
