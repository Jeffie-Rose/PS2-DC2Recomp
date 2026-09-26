#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgZeroMatrix__FPA4_f
// Address: 0x130160 - 0x130178
void mgZeroMatrix__FPA4_f_0x130160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgZeroMatrix__FPA4_f_0x130160");
#endif

    ctx->pc = 0x130160u;

    // 0x130160: 0x4be1086c  vsub.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x130160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x130164: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x130164u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130168: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x130168u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13016c: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x13016cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130170: 0x3e00008  jr          $ra
    ctx->pc = 0x130170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130170u;
            // 0x130174: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130178u;
}
