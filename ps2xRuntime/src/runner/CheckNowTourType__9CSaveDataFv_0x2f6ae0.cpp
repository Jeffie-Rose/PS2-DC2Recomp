#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNowTourType__9CSaveDataFv
// Address: 0x2f6ae0 - 0x2f6af0
void CheckNowTourType__9CSaveDataFv_0x2f6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNowTourType__9CSaveDataFv_0x2f6ae0");
#endif

    ctx->pc = 0x2f6ae0u;

    // 0x2f6ae0: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6ae4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6AE8u;
            // 0x2f6aec: 0x802243da  lb          $v0, 0x43DA($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 17370)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6AF0u;
}
