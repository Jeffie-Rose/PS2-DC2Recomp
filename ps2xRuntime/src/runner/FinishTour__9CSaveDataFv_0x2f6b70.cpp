#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FinishTour__9CSaveDataFv
// Address: 0x2f6b70 - 0x2f6bac
void FinishTour__9CSaveDataFv_0x2f6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FinishTour__9CSaveDataFv_0x2f6b70");
#endif

    ctx->pc = 0x2f6b70u;

    // 0x2f6b70: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6b74: 0x8c851a14  lw          $a1, 0x1A14($a0)
    ctx->pc = 0x2f6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6676)));
    // 0x2f6b78: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b7c: 0x8c2343dc  lw          $v1, 0x43DC($at)
    ctx->pc = 0x2f6b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x2f6b80: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6b84: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2f6b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f6b88: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b8c: 0xac2343d4  sw          $v1, 0x43D4($at)
    ctx->pc = 0x2f6b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17364), GPR_U32(ctx, 3));
    // 0x2f6b90: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6b94: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6b94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6b98: 0xa42043d8  sh          $zero, 0x43D8($at)
    ctx->pc = 0x2f6b98u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17368), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f6b9c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6ba0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6BA4u;
            // 0x2f6ba8: 0xa02043db  sb          $zero, 0x43DB($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 17371), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6BACu;
}
