#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgVectorMaxMin__FPfPfPfPfPf
// Address: 0x12f4d0 - 0x12f4f8
void mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0");
#endif

    ctx->pc = 0x12f4d0u;

    // 0x12f4d0: 0xd8cf0000  lqc2        $vf15, 0x0($a2)
    ctx->pc = 0x12f4d0u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f4d4: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x12f4d4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f4d8: 0xd9110000  lqc2        $vf17, 0x0($t0)
    ctx->pc = 0x12f4d8u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f4dc: 0x4bf07cab  vmax.xyzw   $vf18, $vf15, $vf16
    ctx->pc = 0x12f4dcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x12f4e0: 0x4bf07d2f  vmini.xyzw  $vf20, $vf15, $vf16
    ctx->pc = 0x12f4e0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f4e4: 0x4bf194eb  vmax.xyzw   $vf19, $vf18, $vf17
    ctx->pc = 0x12f4e4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[18], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x12f4e8: 0x4bf1a56f  vmini.xyzw  $vf21, $vf20, $vf17
    ctx->pc = 0x12f4e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[20], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x12f4ec: 0xf8930000  sqc2        $vf19, 0x0($a0)
    ctx->pc = 0x12f4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x12f4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F4F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F4F0u;
            // 0x12f4f4: 0xf8b50000  sqc2        $vf21, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[21]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F4F8u;
}
