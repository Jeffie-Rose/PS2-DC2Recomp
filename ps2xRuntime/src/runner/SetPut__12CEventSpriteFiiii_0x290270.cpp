#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPut__12CEventSpriteFiiii
// Address: 0x290270 - 0x290284
void SetPut__12CEventSpriteFiiii_0x290270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPut__12CEventSpriteFiiii_0x290270");
#endif

    ctx->pc = 0x290270u;

    // 0x290270: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x290270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x290274: 0xac86006c  sw          $a2, 0x6C($a0)
    ctx->pc = 0x290274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 6));
    // 0x290278: 0xac870070  sw          $a3, 0x70($a0)
    ctx->pc = 0x290278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 7));
    // 0x29027c: 0x3e00008  jr          $ra
    ctx->pc = 0x29027Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29027Cu;
            // 0x290280: 0xac880074  sw          $t0, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290284u;
}
