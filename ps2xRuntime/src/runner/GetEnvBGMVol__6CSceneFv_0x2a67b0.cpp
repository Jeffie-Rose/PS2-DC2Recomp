#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEnvBGMVol__6CSceneFv
// Address: 0x2a67b0 - 0x2a67c0
void GetEnvBGMVol__6CSceneFv_0x2a67b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEnvBGMVol__6CSceneFv_0x2a67b0");
#endif

    ctx->pc = 0x2a67b0u;

    // 0x2a67b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a67b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a67b4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a67b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a67b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A67B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A67BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A67B8u;
            // 0x2a67bc: 0xc420a48c  lwc1        $f0, -0x5B74($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A67C0u;
}
