#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Direct__11mgCDrawPrimFUlUl
// Address: 0x134d80 - 0x134d9c
void Direct__11mgCDrawPrimFUlUl_0x134d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Direct__11mgCDrawPrimFUlUl_0x134d80");
#endif

    ctx->pc = 0x134d80u;

    // 0x134d80: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x134d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134d84: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x134d84u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x134d88: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x134d88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x134d8c: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x134d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134d90: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134d94: 0x3e00008  jr          $ra
    ctx->pc = 0x134D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D94u;
            // 0x134d98: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134D9Cu;
}
