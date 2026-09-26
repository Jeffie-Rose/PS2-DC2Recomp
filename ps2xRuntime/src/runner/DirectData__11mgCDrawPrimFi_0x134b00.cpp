#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DirectData__11mgCDrawPrimFi
// Address: 0x134b00 - 0x134b14
void DirectData__11mgCDrawPrimFi_0x134b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DirectData__11mgCDrawPrimFi_0x134b00");
#endif

    ctx->pc = 0x134b00u;

    // 0x134b00: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x134b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134b04: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x134b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x134b08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x134B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B0Cu;
            // 0x134b10: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134B14u;
}
