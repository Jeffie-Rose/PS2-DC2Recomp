#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _alalcInit
// Address: 0x10e640 - 0x10e654
void _alalcInit_0x10e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_alalcInit_0x10e640");
#endif

    ctx->pc = 0x10e640u;

    // 0x10e640: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x10e640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x10e644: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x10e644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x10e648: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x10e648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x10e64c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E64Cu;
            // 0x10e650: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E654u;
}
