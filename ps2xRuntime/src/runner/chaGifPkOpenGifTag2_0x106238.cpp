#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: chaGifPkOpenGifTag2
// Address: 0x106238 - 0x106258
void chaGifPkOpenGifTag2_0x106238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chaGifPkOpenGifTag2_0x106238");
#endif

    ctx->pc = 0x106238u;

    // 0x106238: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x106238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10623c: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x10623cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x106240: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x106240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x106244: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x106244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x106248: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x106248u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x10624c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x106250: 0x3e00008  jr          $ra
    ctx->pc = 0x106250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106250u;
            // 0x106254: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106258u;
}
