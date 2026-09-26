#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFuchi__5CFontFi
// Address: 0x2d4570 - 0x2d4578
void SetFuchi__5CFontFi_0x2d4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFuchi__5CFontFi_0x2d4570");
#endif

    ctx->pc = 0x2d4570u;

    // 0x2d4570: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4570u;
            // 0x2d4574: 0xac850080  sw          $a1, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4578u;
}
