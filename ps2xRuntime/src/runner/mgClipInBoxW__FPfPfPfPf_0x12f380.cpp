#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgClipInBoxW__FPfPfPfPf
// Address: 0x12f380 - 0x12f3c4
void mgClipInBoxW__FPfPfPfPf_0x12f380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgClipInBoxW__FPfPfPfPf_0x12f380");
#endif

    ctx->pc = 0x12f380u;

    // 0x12f380: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x12f380u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12f384: 0xd8ab0000  lqc2        $vf11, 0x0($a1)
    ctx->pc = 0x12f384u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f388: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x12f388u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f38c: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x12f38cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f390: 0x48c08000  ctc2.ni     $zero, $vi16
    ctx->pc = 0x12f390u;
    ctx->vu0_status = (uint16_t)GPR_U32(ctx, 0);
    // 0x12f394: 0x4baa0e6c  vsub.xyw    $vf25, $vf1, $vf10
    ctx->pc = 0x12f394u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, 0, -1, -1)); uint32_t vu_active = 0xBu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x12f398: 0x4ba25e6c  vsub.xyw    $vf25, $vf11, $vf2
    ctx->pc = 0x12f398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[11], ctx->vu0_vf[2]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, 0, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, 0, -1, -1)); uint32_t vu_active = 0xBu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x12f39c: 0x4a0002ff  vnop
    ctx->pc = 0x12f39cu;
    // NOP operation, no action needed for VU0
    // 0x12f3a0: 0x4a0002ff  vnop
    ctx->pc = 0x12f3a0u;
    // NOP operation, no action needed for VU0
    // 0x12f3a4: 0x4a0002ff  vnop
    ctx->pc = 0x12f3a4u;
    // NOP operation, no action needed for VU0
    // 0x12f3a8: 0x4a0002ff  vnop
    ctx->pc = 0x12f3a8u;
    // NOP operation, no action needed for VU0
    // 0x12f3ac: 0x4a0002ff  vnop
    ctx->pc = 0x12f3acu;
    // NOP operation, no action needed for VU0
    // 0x12f3b0: 0x48428000  cfc2.ni     $v0, $vi16
    ctx->pc = 0x12f3b0u;
    SET_GPR_U32(ctx, 2, ctx->vu0_status);
    // 0x12f3b4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x12f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x12f3b8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x12f3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x12f3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x12F3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F3BCu;
            // 0x12f3c0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F3C4u;
}
