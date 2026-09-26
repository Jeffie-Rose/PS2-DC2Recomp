#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgBoxMaxMin__FP9mgVu0FBOXP9mgVu0FBOX
// Address: 0x12f540 - 0x12f574
void mgBoxMaxMin__FP9mgVu0FBOXP9mgVu0FBOX_0x12f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgBoxMaxMin__FP9mgVu0FBOXP9mgVu0FBOX_0x12f540");
#endif

    ctx->pc = 0x12f540u;

    // 0x12f540: 0xd88f0000  lqc2        $vf15, 0x0($a0)
    ctx->pc = 0x12f540u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f544: 0xd8900010  lqc2        $vf16, 0x10($a0)
    ctx->pc = 0x12f544u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12f548: 0xd8b10000  lqc2        $vf17, 0x0($a1)
    ctx->pc = 0x12f548u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f54c: 0xd8b20010  lqc2        $vf18, 0x10($a1)
    ctx->pc = 0x12f54cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12f550: 0x4bf07d2b  vmax.xyzw   $vf20, $vf15, $vf16
    ctx->pc = 0x12f550u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f554: 0x4bf07d6f  vmini.xyzw  $vf21, $vf15, $vf16
    ctx->pc = 0x12f554u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x12f558: 0x4bf1a52b  vmax.xyzw   $vf20, $vf20, $vf17
    ctx->pc = 0x12f558u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[20], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f55c: 0x4bf1ad6f  vmini.xyzw  $vf21, $vf21, $vf17
    ctx->pc = 0x12f55cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[21], ctx->vu0_vf[17]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x12f560: 0x4bf2a52b  vmax.xyzw   $vf20, $vf20, $vf18
    ctx->pc = 0x12f560u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = _mm_blendv_ps(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x12f564: 0x4bf2ad6f  vmini.xyzw  $vf21, $vf21, $vf18
    ctx->pc = 0x12f564u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[21], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x12f568: 0xf8940000  sqc2        $vf20, 0x0($a0)
    ctx->pc = 0x12f568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[20]));
    // 0x12f56c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F56Cu;
            // 0x12f570: 0xf8950010  sqc2        $vf21, 0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[21]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F574u;
}
