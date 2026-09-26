#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CSceneDataFv
// Address: 0x282ac0 - 0x282ae0
void Initialize__10CSceneDataFv_0x282ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CSceneDataFv_0x282ac0");
#endif

    ctx->pc = 0x282ac0u;

    // 0x282ac0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x282ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x282ac4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x282ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282ac8: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x282ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x282acc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x282accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x282ad0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x282ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x282ad4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x282ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x282ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x282AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282AD8u;
            // 0x282adc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282AE0u;
}
