#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9input_strFv
// Address: 0x146a30 - 0x146a44
void ps2___ct__9input_strFv_0x146a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9input_strFv_0x146a30");
#endif

    ctx->pc = 0x146a30u;

    // 0x146a30: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x146a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x146a34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x146a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a38: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x146a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x146a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x146A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A3Cu;
            // 0x146a40: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146A44u;
}
