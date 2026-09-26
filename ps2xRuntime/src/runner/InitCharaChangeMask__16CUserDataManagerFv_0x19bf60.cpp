#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitCharaChangeMask__16CUserDataManagerFv
// Address: 0x19bf60 - 0x19bf74
void InitCharaChangeMask__16CUserDataManagerFv_0x19bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitCharaChangeMask__16CUserDataManagerFv_0x19bf60");
#endif

    ctx->pc = 0x19bf60u;

    // 0x19bf60: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x19bf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x19bf64: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x19bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x19bf68: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x19bf68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x19bf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF6Cu;
            // 0x19bf70: 0xa0234d94  sb          $v1, 0x4D94($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19860), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BF74u;
}
