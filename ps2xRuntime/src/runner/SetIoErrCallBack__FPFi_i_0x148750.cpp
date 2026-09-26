#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetIoErrCallBack__FPFi_i
// Address: 0x148750 - 0x148758
void SetIoErrCallBack__FPFi_i_0x148750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIoErrCallBack__FPFi_i_0x148750");
#endif

    ctx->pc = 0x148750u;

    // 0x148750: 0x3e00008  jr          $ra
    ctx->pc = 0x148750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148750u;
            // 0x148754: 0xaf8488a8  sw          $a0, -0x7758($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936744), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148758u;
}
