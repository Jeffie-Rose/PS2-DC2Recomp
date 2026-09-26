#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgVectorMaxMin__FPfPfPfPfPfPf
// Address: 0x12f500 - 0x12f534
void mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500");
#endif

    ctx->pc = 0x12f500u;

    // 0x12f500: 0xd8cf0000  lqc2        $vf15, 0x0($a2)
    ctx->pc = 0x12f500u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f504: 0xd8f00000  lqc2        $vf16, 0x0($a3)
    ctx->pc = 0x12f504u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f508: 0xd9110000  lqc2        $vf17, 0x0($t0)
    ctx->pc = 0x12f508u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f50c: 0xd9320000  lqc2        $vf18, 0x0($t1)
    ctx->pc = 0x12f50cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12f510: 0x4bf07d2b  vmax.xyzw   $vf20, $vf15, $vf16
    ctx->pc = 0x12f510u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f514: 0x4bf07d6f  vmini.xyzw  $vf21, $vf15, $vf16
    ctx->pc = 0x12f514u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x12f518: 0x4bf1a52b  vmax.xyzw   $vf20, $vf20, $vf17
    ctx->pc = 0x12f518u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[20], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f51c: 0x4bf1ad6f  vmini.xyzw  $vf21, $vf21, $vf17
    ctx->pc = 0x12f51cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[21], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x12f520: 0x4bf2a52b  vmax.xyzw   $vf20, $vf20, $vf18
    ctx->pc = 0x12f520u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f524: 0x4bf2ad6f  vmini.xyzw  $vf21, $vf21, $vf18
    ctx->pc = 0x12f524u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[21], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x12f528: 0xf8940000  sqc2        $vf20, 0x0($a0)
    ctx->pc = 0x12f528u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x12f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F52Cu;
            // 0x12f530: 0xf8b50000  sqc2        $vf21, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[21]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F534u;
}
