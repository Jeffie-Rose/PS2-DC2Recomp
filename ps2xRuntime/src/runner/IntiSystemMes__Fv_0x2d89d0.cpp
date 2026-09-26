#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IntiSystemMes__Fv
// Address: 0x2d89d0 - 0x2d89e0
void IntiSystemMes__Fv_0x2d89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IntiSystemMes__Fv_0x2d89d0");
#endif

    ctx->pc = 0x2d89d0u;

    // 0x2d89d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d89d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d89d4: 0xaf809e98  sw          $zero, -0x6168($gp)
    ctx->pc = 0x2d89d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942360), GPR_U32(ctx, 0));
    // 0x2d89d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D89D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D89DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D89D8u;
            // 0x2d89dc: 0xaf838554  sw          $v1, -0x7AAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935892), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D89E0u;
}
