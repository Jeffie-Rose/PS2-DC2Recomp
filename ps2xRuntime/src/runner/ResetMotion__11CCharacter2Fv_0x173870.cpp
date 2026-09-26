#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetMotion__11CCharacter2Fv
// Address: 0x173870 - 0x173884
void ResetMotion__11CCharacter2Fv_0x173870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetMotion__11CCharacter2Fv_0x173870");
#endif

    ctx->pc = 0x173870u;

    // 0x173870: 0xac800374  sw          $zero, 0x374($a0)
    ctx->pc = 0x173870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 0));
    // 0x173874: 0xac800368  sw          $zero, 0x368($a0)
    ctx->pc = 0x173874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 0));
    // 0x173878: 0xac8003a8  sw          $zero, 0x3A8($a0)
    ctx->pc = 0x173878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 936), GPR_U32(ctx, 0));
    // 0x17387c: 0x3e00008  jr          $ra
    ctx->pc = 0x17387Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17387Cu;
            // 0x173880: 0xac8003a4  sw          $zero, 0x3A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173884u;
}
