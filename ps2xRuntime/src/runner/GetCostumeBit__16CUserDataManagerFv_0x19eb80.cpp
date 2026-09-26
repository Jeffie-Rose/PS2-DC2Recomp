#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCostumeBit__16CUserDataManagerFv
// Address: 0x19eb80 - 0x19eb90
void GetCostumeBit__16CUserDataManagerFv_0x19eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCostumeBit__16CUserDataManagerFv_0x19eb80");
#endif

    ctx->pc = 0x19eb80u;

    // 0x19eb80: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19eb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19eb84: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19eb84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19eb88: 0x3e00008  jr          $ra
    ctx->pc = 0x19EB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EB88u;
            // 0x19eb8c: 0xdc225598  ld          $v0, 0x5598($at) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 21912)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EB90u;
}
