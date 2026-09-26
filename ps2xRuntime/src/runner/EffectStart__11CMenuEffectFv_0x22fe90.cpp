#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EffectStart__11CMenuEffectFv
// Address: 0x22fe90 - 0x22fea0
void EffectStart__11CMenuEffectFv_0x22fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectStart__11CMenuEffectFv_0x22fe90");
#endif

    ctx->pc = 0x22fe90u;

    // 0x22fe90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22fe94: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x22fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fe98: 0x3e00008  jr          $ra
    ctx->pc = 0x22FE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE98u;
            // 0x22fe9c: 0xa4800036  sh          $zero, 0x36($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FEA0u;
}
