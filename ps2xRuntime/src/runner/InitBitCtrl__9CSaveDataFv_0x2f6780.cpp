#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitBitCtrl__9CSaveDataFv
// Address: 0x2f6780 - 0x2f6790
void InitBitCtrl__9CSaveDataFv_0x2f6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitBitCtrl__9CSaveDataFv_0x2f6780");
#endif

    ctx->pc = 0x2f6780u;

    // 0x2f6780: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6784: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6784u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6788: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6788u;
            // 0x2f678c: 0xa02043c8  sb          $zero, 0x43C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 17352), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6790u;
}
