#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDistVectorXZ__FPf
// Address: 0x130000 - 0x13002c
void mgDistVectorXZ__FPf_0x130000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDistVectorXZ__FPf_0x130000");
#endif

    ctx->pc = 0x130000u;

    // 0x130000: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x130000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x130004: 0x4bc4212a  vmul.xyz    $vf4, $vf4, $vf4
    ctx->pc = 0x130004u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, -1, -1, -1)); uint32_t vu_active = 0x7u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130008: 0x4b85233d  vmr32.xy    $vf5, $vf4
    ctx->pc = 0x130008u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13000c: 0x4b062b3d  vmr32.x     $vf6, $vf5
    ctx->pc = 0x13000cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x130010: 0x4b0621e8  vadd.x      $vf7, $vf4, $vf6
    ctx->pc = 0x130010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(0, 0, 0, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(0, 0, 0, -1)); uint32_t vu_active = 0x1u; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x130014: 0x4a0703bd  .word       0x4A0703BD                   # vsqrt       $Q, $vf7x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x130014u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = ps2_vu_sqrtq(ft); }
    // 0x130018: 0x4a0003bf  vwaitq
    ctx->pc = 0x130018u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13001c: 0x4842b000  cfc2.ni     $v0, $vi22
    ctx->pc = 0x13001cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x130020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130024: 0x3e00008  jr          $ra
    ctx->pc = 0x130024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13002Cu;
}
