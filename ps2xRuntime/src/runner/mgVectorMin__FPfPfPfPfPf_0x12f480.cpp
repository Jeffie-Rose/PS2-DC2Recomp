#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgVectorMin__FPfPfPfPfPf
// Address: 0x12f480 - 0x12f4a4
void mgVectorMin__FPfPfPfPfPf_0x12f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgVectorMin__FPfPfPfPfPf_0x12f480");
#endif

    ctx->pc = 0x12f480u;

    // 0x12f480: 0xd8af0000  lqc2        $vf15, 0x0($a1)
    ctx->pc = 0x12f480u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f484: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x12f484u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f488: 0xd8f10000  lqc2        $vf17, 0x0($a3)
    ctx->pc = 0x12f488u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f48c: 0xd9120000  lqc2        $vf18, 0x0($t0)
    ctx->pc = 0x12f48cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f490: 0x4bf07d2f  vmini.xyzw  $vf20, $vf15, $vf16
    ctx->pc = 0x12f490u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f494: 0x4bf1a52f  vmini.xyzw  $vf20, $vf20, $vf17
    ctx->pc = 0x12f494u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[20], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f498: 0x4bf2a52f  vmini.xyzw  $vf20, $vf20, $vf18
    ctx->pc = 0x12f498u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f49c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F49Cu;
            // 0x12f4a0: 0xf8940000  sqc2        $vf20, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[20]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F4A4u;
}
