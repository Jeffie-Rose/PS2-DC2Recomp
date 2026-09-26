#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowPutBomb__Fv
// Address: 0x316220 - 0x316230
void NowPutBomb__Fv_0x316220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowPutBomb__Fv_0x316220");
#endif

    ctx->pc = 0x316220u;

    // 0x316220: 0x8f82a308  lw          $v0, -0x5CF8($gp)
    ctx->pc = 0x316220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943496)));
    // 0x316224: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x316224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x316228: 0x3e00008  jr          $ra
    ctx->pc = 0x316228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31622Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316228u;
            // 0x31622c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316230u;
}
