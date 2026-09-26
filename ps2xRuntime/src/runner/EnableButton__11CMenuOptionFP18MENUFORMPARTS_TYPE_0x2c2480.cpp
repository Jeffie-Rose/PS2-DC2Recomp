#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE
// Address: 0x2c2480 - 0x2c2494
void EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableButton__11CMenuOptionFP18MENUFORMPARTS_TYPE_0x2c2480");
#endif

    ctx->pc = 0x2c2480u;

    // 0x2c2480: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2c2480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2c2484: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x2c2484u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2488: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x2c2488u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c248c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C248Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C248Cu;
            // 0x2c2490: 0xa0a30009  sb          $v1, 0x9($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2494u;
}
