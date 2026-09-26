#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHelpMes__Fiii
// Address: 0x2d8840 - 0x2d8850
void SetHelpMes__Fiii_0x2d8840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHelpMes__Fiii_0x2d8840");
#endif

    ctx->pc = 0x2d8840u;

    // 0x2d8840: 0xaf849e8c  sw          $a0, -0x6174($gp)
    ctx->pc = 0x2d8840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942348), GPR_U32(ctx, 4));
    // 0x2d8844: 0xaf859e90  sw          $a1, -0x6170($gp)
    ctx->pc = 0x2d8844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942352), GPR_U32(ctx, 5));
    // 0x2d8848: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D884Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D8848u;
            // 0x2d884c: 0xaf869e94  sw          $a2, -0x616C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942356), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D8850u;
}
