#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgVectorMin__FPfPfPf
// Address: 0x12f460 - 0x12f474
void mgVectorMin__FPfPfPf_0x12f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgVectorMin__FPfPfPf_0x12f460");
#endif

    ctx->pc = 0x12f460u;

    // 0x12f460: 0xd8af0000  lqc2        $vf15, 0x0($a1)
    ctx->pc = 0x12f460u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f464: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x12f464u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f468: 0x4bf07caf  vmini.xyzw  $vf18, $vf15, $vf16
    ctx->pc = 0x12f468u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x12f46c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F46Cu;
            // 0x12f470: 0xf8920000  sqc2        $vf18, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[18]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F474u;
}
