#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWind__6CSceneFPf
// Address: 0x284b50 - 0x284b60
void GetWind__6CSceneFPf_0x284b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWind__6CSceneFPf_0x284b50");
#endif

    ctx->pc = 0x284b50u;

    // 0x284b50: 0x78822f80  lq          $v0, 0x2F80($a0)
    ctx->pc = 0x284b50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 12160)));
    // 0x284b54: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x284b54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x284b58: 0x3e00008  jr          $ra
    ctx->pc = 0x284B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284B58u;
            // 0x284b5c: 0xc4802f78  lwc1        $f0, 0x2F78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284B60u;
}
