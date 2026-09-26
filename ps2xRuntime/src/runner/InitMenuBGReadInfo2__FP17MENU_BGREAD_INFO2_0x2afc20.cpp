#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMenuBGReadInfo2__FP17MENU_BGREAD_INFO2
// Address: 0x2afc20 - 0x2afc34
void InitMenuBGReadInfo2__FP17MENU_BGREAD_INFO2_0x2afc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMenuBGReadInfo2__FP17MENU_BGREAD_INFO2_0x2afc20");
#endif

    ctx->pc = 0x2afc20u;

    // 0x2afc20: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x2afc20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afc24: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x2afc24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x2afc28: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2afc28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2afc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AFC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFC2Cu;
            // 0x2afc30: 0xa0800020  sb          $zero, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFC34u;
}
