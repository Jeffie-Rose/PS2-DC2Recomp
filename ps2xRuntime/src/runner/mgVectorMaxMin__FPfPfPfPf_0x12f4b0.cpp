#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgVectorMaxMin__FPfPfPfPf
// Address: 0x12f4b0 - 0x12f4cc
void mgVectorMaxMin__FPfPfPfPf_0x12f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgVectorMaxMin__FPfPfPfPf_0x12f4b0");
#endif

    ctx->pc = 0x12f4b0u;

    // 0x12f4b0: 0xd8cf0000  lqc2        $vf15, 0x0($a2)
    ctx->pc = 0x12f4b0u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f4b4: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x12f4b4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f4b8: 0x4bf07cab  vmax.xyzw   $vf18, $vf15, $vf16
    ctx->pc = 0x12f4b8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x12f4bc: 0x4bf07d2f  vmini.xyzw  $vf20, $vf15, $vf16
    ctx->pc = 0x12f4bcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f4c0: 0xf8920000  sqc2        $vf18, 0x0($a0)
    ctx->pc = 0x12f4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x12f4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12F4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4C4u;
            // 0x12f4c8: 0xf8b40000  sqc2        $vf20, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[20]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F4CCu;
}
