#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _lmcGetClientPtr
// Address: 0x1225a0 - 0x1225d0
void _lmcGetClientPtr_0x1225a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lmcGetClientPtr_0x1225a0");
#endif

    ctx->pc = 0x1225a0u;

    // 0x1225a0: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x1225a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x1225a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1225a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1225a8: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x1225a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
    // 0x1225ac: 0x24423890  addiu       $v0, $v0, 0x3890
    ctx->pc = 0x1225acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14480));
    // 0x1225b0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1225b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1225b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1225b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1225b8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1225b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1225bc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1225bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1225c0: 0x8c833894  lw          $v1, 0x3894($a0)
    ctx->pc = 0x1225c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14484)));
    // 0x1225c4: 0x2442e740  addiu       $v0, $v0, -0x18C0
    ctx->pc = 0x1225c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960960));
    // 0x1225c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1225C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1225CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1225C8u;
            // 0x1225cc: 0xacc3003c  sw          $v1, 0x3C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1225D0u;
}
