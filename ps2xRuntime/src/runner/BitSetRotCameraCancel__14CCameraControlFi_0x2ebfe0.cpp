#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BitSetRotCameraCancel__14CCameraControlFi
// Address: 0x2ebfe0 - 0x2ebff0
void BitSetRotCameraCancel__14CCameraControlFi_0x2ebfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BitSetRotCameraCancel__14CCameraControlFi_0x2ebfe0");
#endif

    ctx->pc = 0x2ebfe0u;

    // 0x2ebfe0: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x2ebfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2ebfe4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ebfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ebfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBFE8u;
            // 0x2ebfec: 0xac8300c4  sw          $v1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBFF0u;
}
