#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitNpcCameraReaction__Fv
// Address: 0x2f76c0 - 0x2f76d0
void InitNpcCameraReaction__Fv_0x2f76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitNpcCameraReaction__Fv_0x2f76c0");
#endif

    ctx->pc = 0x2f76c0u;

    // 0x2f76c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f76c4: 0xaf809f08  sw          $zero, -0x60F8($gp)
    ctx->pc = 0x2f76c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942472), GPR_U32(ctx, 0));
    // 0x2f76c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F76C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F76CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F76C8u;
            // 0x2f76cc: 0xaf839f04  sw          $v1, -0x60FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F76D0u;
}
