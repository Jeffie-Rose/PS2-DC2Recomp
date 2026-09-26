#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CapturePlay__8CGamePadFv
// Address: 0x14b610 - 0x14b61c
void CapturePlay__8CGamePadFv_0x14b610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CapturePlay__8CGamePadFv_0x14b610");
#endif

    ctx->pc = 0x14b610u;

    // 0x14b610: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b614: 0x3e00008  jr          $ra
    ctx->pc = 0x14B614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B614u;
            // 0x14b618: 0xac830470  sw          $v1, 0x470($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B61Cu;
}
