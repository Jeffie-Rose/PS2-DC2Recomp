#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlacPartsTable__4CMapFPi
// Address: 0x15cbd0 - 0x15cbe0
void GetPlacPartsTable__4CMapFPi_0x15cbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlacPartsTable__4CMapFPi_0x15cbd0");
#endif

    ctx->pc = 0x15cbd0u;

    // 0x15cbd0: 0x8c820328  lw          $v0, 0x328($a0)
    ctx->pc = 0x15cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 808)));
    // 0x15cbd4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x15cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x15cbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x15CBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBD8u;
            // 0x15cbdc: 0x8c82032c  lw          $v0, 0x32C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CBE0u;
}
