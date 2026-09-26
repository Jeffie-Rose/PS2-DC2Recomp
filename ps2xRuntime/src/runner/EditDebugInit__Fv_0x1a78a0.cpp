#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDebugInit__Fv
// Address: 0x1a78a0 - 0x1a78b4
void EditDebugInit__Fv_0x1a78a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDebugInit__Fv_0x1a78a0");
#endif

    ctx->pc = 0x1a78a0u;

    // 0x1a78a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a78a4: 0xaf808c10  sw          $zero, -0x73F0($gp)
    ctx->pc = 0x1a78a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937616), GPR_U32(ctx, 0));
    // 0x1a78a8: 0xaf808c18  sw          $zero, -0x73E8($gp)
    ctx->pc = 0x1a78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937624), GPR_U32(ctx, 0));
    // 0x1a78ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A78ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A78B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A78ACu;
            // 0x1a78b0: 0xaf838c14  sw          $v1, -0x73EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A78B4u;
}
