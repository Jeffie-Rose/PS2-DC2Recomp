#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCostumeBit__16CUserDataManagerFUl
// Address: 0x19eb70 - 0x19eb80
void SetCostumeBit__16CUserDataManagerFUl_0x19eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCostumeBit__16CUserDataManagerFUl_0x19eb70");
#endif

    ctx->pc = 0x19eb70u;

    // 0x19eb70: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19eb74: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19eb74u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19eb78: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB78u;
            // 0x19eb7c: 0xfc255598  sd          $a1, 0x5598($at) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 1), 21912), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EB80u;
}
