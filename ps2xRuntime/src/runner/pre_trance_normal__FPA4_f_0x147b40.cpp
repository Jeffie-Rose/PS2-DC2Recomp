#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pre_trance_normal__FPA4_f
// Address: 0x147b40 - 0x147b54
void pre_trance_normal__FPA4_f_0x147b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pre_trance_normal__FPA4_f_0x147b40");
#endif

    ctx->pc = 0x147b40u;

    // 0x147b40: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x147b40u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x147b44: 0xd88b0010  lqc2        $vf11, 0x10($a0)
    ctx->pc = 0x147b44u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147b48: 0xd88c0020  lqc2        $vf12, 0x20($a0)
    ctx->pc = 0x147b48u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x147b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x147B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B4Cu;
            // 0x147b50: 0xd88d0030  lqc2        $vf13, 0x30($a0) (Delay Slot)
        ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147B54u;
}
