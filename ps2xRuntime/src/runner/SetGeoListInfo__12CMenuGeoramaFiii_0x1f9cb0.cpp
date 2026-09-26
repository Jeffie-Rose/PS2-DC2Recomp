#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGeoListInfo__12CMenuGeoramaFiii
// Address: 0x1f9cb0 - 0x1f9cd4
void SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0");
#endif

    ctx->pc = 0x1f9cb0u;

    // 0x1f9cb0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1f9cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1f9cb4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9cb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9cbc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f9cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f9cc0: 0xac26b7f4  sw          $a2, -0x480C($at)
    ctx->pc = 0x1f9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948852), GPR_U32(ctx, 6));
    // 0x1f9cc4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f9cc8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1f9cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1f9ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9CCCu;
            // 0x1f9cd0: 0xac27b7f8  sw          $a3, -0x4808($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294948856), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9CD4u;
}
