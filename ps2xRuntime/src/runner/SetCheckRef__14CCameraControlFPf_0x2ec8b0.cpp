#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCheckRef__14CCameraControlFPf
// Address: 0x2ec8b0 - 0x2ec8c4
void SetCheckRef__14CCameraControlFPf_0x2ec8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCheckRef__14CCameraControlFPf_0x2ec8b0");
#endif

    ctx->pc = 0x2ec8b0u;

    // 0x2ec8b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec8b4: 0xac8301e0  sw          $v1, 0x1E0($a0)
    ctx->pc = 0x2ec8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 480), GPR_U32(ctx, 3));
    // 0x2ec8b8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2ec8b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ec8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC8BCu;
            // 0x2ec8c0: 0x7c8301d0  sq          $v1, 0x1D0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 464), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC8C4u;
}
