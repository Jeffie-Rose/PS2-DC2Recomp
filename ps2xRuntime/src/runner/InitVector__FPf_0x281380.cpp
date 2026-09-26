#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitVector__FPf
// Address: 0x281380 - 0x281398
void InitVector__FPf_0x281380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVector__FPf_0x281380");
#endif

    ctx->pc = 0x281380u;

    // 0x281380: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x281380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x281384: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x281384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281388: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x281388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x28138c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x28138cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x281390: 0x3e00008  jr          $ra
    ctx->pc = 0x281390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281390u;
            // 0x281394: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281398u;
}
