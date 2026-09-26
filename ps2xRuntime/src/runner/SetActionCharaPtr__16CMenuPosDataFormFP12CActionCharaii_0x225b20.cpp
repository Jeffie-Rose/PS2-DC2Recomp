#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii
// Address: 0x225b20 - 0x225b30
void SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20");
#endif

    ctx->pc = 0x225b20u;

    // 0x225b20: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x225b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x225b24: 0xa4860034  sh          $a2, 0x34($a0)
    ctx->pc = 0x225b24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 6));
    // 0x225b28: 0x3e00008  jr          $ra
    ctx->pc = 0x225B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225B28u;
            // 0x225b2c: 0xa4870036  sh          $a3, 0x36($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225B30u;
}
