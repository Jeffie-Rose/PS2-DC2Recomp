#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLocalMatrix__8mgCFrameFPA4_f
// Address: 0x136ce0 - 0x136e3c
void GetLocalMatrix__8mgCFrameFPA4_f_0x136ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLocalMatrix__8mgCFrameFPA4_f_0x136ce0");
#endif

    switch (ctx->pc) {
        case 0x136d54u: goto label_136d54;
        case 0x136d5cu: goto label_136d5c;
        case 0x136d90u: goto label_136d90;
        case 0x136db4u: goto label_136db4;
        case 0x136dd8u: goto label_136dd8;
        case 0x136df8u: goto label_136df8;
        case 0x136e10u: goto label_136e10;
        case 0x136e28u: goto label_136e28;
        default: break;
    }

    ctx->pc = 0x136ce0u;

    // 0x136ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x136ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x136cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136cf4: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x136cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x136cf8: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x136CF8u;
    {
        const bool branch_taken_0x136cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136CF8u;
            // 0x136cfc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136cf8) {
            ctx->pc = 0x136E1Cu;
            goto label_136e1c;
        }
    }
    ctx->pc = 0x136D00u;
    // 0x136d00: 0x262300b0  addiu       $v1, $s1, 0xB0
    ctx->pc = 0x136d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x136d04: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x136d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x136d08: 0xd84a0000  lqc2        $vf10, 0x0($v0)
    ctx->pc = 0x136d08u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136d0c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x136d0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136d10: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x136d10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x136d14: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x136d14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x136d18: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x136d18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x136d1c: 0x4bea086a  vmul.xyzw   $vf1, $vf1, $vf10
    ctx->pc = 0x136d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x136d20: 0x4bea10aa  vmul.xyzw   $vf2, $vf2, $vf10
    ctx->pc = 0x136d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[10]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x136d24: 0x4bea18ea  vmul.xyzw   $vf3, $vf3, $vf10
    ctx->pc = 0x136d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[10]); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x136d28: 0x4be0211b  vmulw.xyzw  $vf4, $vf4, $vf0w
    ctx->pc = 0x136d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i vu_bits = _mm_castps_si128(res); __m128i vu_abs = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7FFFFFFF)); __m128i vu_exp = _mm_and_si128(vu_bits, _mm_set1_epi32(0x7F800000)); __m128i vu_zero_mask = _mm_cmpeq_epi32(vu_abs, _mm_setzero_si128()); __m128i vu_under_mask = _mm_and_si128(_mm_andnot_si128(vu_zero_mask, _mm_cmpeq_epi32(vu_exp, _mm_setzero_si128())), _mm_set_epi32(-1, -1, -1, -1)); __m128i vu_over_mask = _mm_and_si128(_mm_cmpeq_epi32(vu_exp, _mm_set1_epi32(0x7F800000)), _mm_set_epi32(-1, -1, -1, -1)); uint32_t vu_active = 0xFu; auto vu_reverse4 = [](uint32_t value) { return ((value & 0x1u) << 3) | ((value & 0x2u) << 1) | ((value & 0x4u) >> 1) | ((value & 0x8u) >> 3); }; uint32_t vu_z = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(_mm_or_si128(vu_zero_mask, vu_under_mask))) & vu_active); uint32_t vu_s = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_bits)) & vu_active); uint32_t vu_u = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_under_mask)) & vu_active); uint32_t vu_o = vu_reverse4((uint32_t)_mm_movemask_ps(_mm_castsi128_ps(vu_over_mask)) & vu_active); ctx->vu0_mac_flags = (ctx->vu0_mac_flags & 0x0u) | vu_z | (vu_s << 4) | (vu_u << 8) | (vu_o << 12); uint16_t vu_current = ((ctx->vu0_mac_flags & 0x000Fu) ? 0x1u : 0u) | ((ctx->vu0_mac_flags & 0x00F0u) ? 0x2u : 0u) | ((ctx->vu0_mac_flags & 0x0F00u) ? 0x4u : 0u) | ((ctx->vu0_mac_flags & 0xF000u) ? 0x8u : 0u); ctx->vu0_status = (uint16_t)((ctx->vu0_status & 0xFC0u) | vu_current | (vu_current << 6)); __m128i vu_sign = _mm_and_si128(vu_bits, _mm_set1_epi32((int)0x80000000u)); vu_bits = _mm_blendv_epi8(vu_bits, vu_sign, vu_under_mask); vu_bits = _mm_blendv_epi8(vu_bits, _mm_or_si128(vu_sign, _mm_set1_epi32(0x7F7FFFFF)), vu_over_mask); res = _mm_castsi128_ps(vu_bits);  __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136d2c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x136d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x136d30: 0xfa020010  sqc2        $vf2, 0x10($s0)
    ctx->pc = 0x136d30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x136d34: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x136d34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x136d38: 0xfa040030  sqc2        $vf4, 0x30($s0)
    ctx->pc = 0x136d38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136d3c: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x136d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x136d40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x136d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x136d44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x136D44u;
    {
        const bool branch_taken_0x136d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D44u;
            // 0x136d48: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d44) {
            ctx->pc = 0x136D5Cu;
            goto label_136d5c;
        }
    }
    ctx->pc = 0x136D4Cu;
    // 0x136d4c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x136D4Cu;
    SET_GPR_U32(ctx, 31, 0x136D54u);
    ctx->pc = 0x136D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136D4Cu;
            // 0x136d50: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D54u; }
        if (ctx->pc != 0x136D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D54u; }
        if (ctx->pc != 0x136D54u) { return; }
    }
    ctx->pc = 0x136D54u;
label_136d54:
    // 0x136d54: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x136D54u;
    SET_GPR_U32(ctx, 31, 0x136D5Cu);
    ctx->pc = 0x136D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136D54u;
            // 0x136d58: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D5Cu; }
        if (ctx->pc != 0x136D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D5Cu; }
        if (ctx->pc != 0x136D5Cu) { return; }
    }
    ctx->pc = 0x136D5Cu;
label_136d5c:
    // 0x136d5c: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x136d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x136d60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x136d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x136d64: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x136D64u;
    {
        const bool branch_taken_0x136d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136d64) {
            ctx->pc = 0x136DD8u;
            goto label_136dd8;
        }
    }
    ctx->pc = 0x136D6Cu;
    // 0x136d6c: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x136d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136d74: 0x0  nop
    ctx->pc = 0x136d74u;
    // NOP
    // 0x136d78: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x136d78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136d7c: 0x0  nop
    ctx->pc = 0x136d7cu;
    // NOP
    // 0x136d80: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136D80u;
    {
        const bool branch_taken_0x136d80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136D80u;
            // 0x136d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d80) {
            ctx->pc = 0x136D90u;
            goto label_136d90;
        }
    }
    ctx->pc = 0x136D88u;
    // 0x136d88: 0xc041ccc  jal         func_107330
    ctx->pc = 0x136D88u;
    SET_GPR_U32(ctx, 31, 0x136D90u);
    ctx->pc = 0x136D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136D88u;
            // 0x136d8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107330u;
    if (runtime->hasFunction(0x107330u)) {
        auto targetFn = runtime->lookupFunction(0x107330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D90u; }
        if (ctx->pc != 0x136D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x107330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136D90u; }
        if (ctx->pc != 0x136D90u) { return; }
    }
    ctx->pc = 0x136D90u;
label_136d90:
    // 0x136d90: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x136d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136d94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136d98: 0x0  nop
    ctx->pc = 0x136d98u;
    // NOP
    // 0x136d9c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x136d9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136da0: 0x0  nop
    ctx->pc = 0x136da0u;
    // NOP
    // 0x136da4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136DA4u;
    {
        const bool branch_taken_0x136da4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DA4u;
            // 0x136da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136da4) {
            ctx->pc = 0x136DB4u;
            goto label_136db4;
        }
    }
    ctx->pc = 0x136DACu;
    // 0x136dac: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x136DACu;
    SET_GPR_U32(ctx, 31, 0x136DB4u);
    ctx->pc = 0x136DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136DACu;
            // 0x136db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DB4u; }
        if (ctx->pc != 0x136DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DB4u; }
        if (ctx->pc != 0x136DB4u) { return; }
    }
    ctx->pc = 0x136DB4u;
label_136db4:
    // 0x136db4: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x136db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x136db8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136dbc: 0x0  nop
    ctx->pc = 0x136dbcu;
    // NOP
    // 0x136dc0: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x136dc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136dc4: 0x0  nop
    ctx->pc = 0x136dc4u;
    // NOP
    // 0x136dc8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136DC8u;
    {
        const bool branch_taken_0x136dc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DC8u;
            // 0x136dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dc8) {
            ctx->pc = 0x136DD8u;
            goto label_136dd8;
        }
    }
    ctx->pc = 0x136DD0u;
    // 0x136dd0: 0xc041ca2  jal         func_107288
    ctx->pc = 0x136DD0u;
    SET_GPR_U32(ctx, 31, 0x136DD8u);
    ctx->pc = 0x136DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136DD0u;
            // 0x136dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107288u;
    if (runtime->hasFunction(0x107288u)) {
        auto targetFn = runtime->lookupFunction(0x107288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DD8u; }
        if (ctx->pc != 0x136DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x107288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DD8u; }
        if (ctx->pc != 0x136DD8u) { return; }
    }
    ctx->pc = 0x136DD8u;
label_136dd8:
    // 0x136dd8: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x136dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x136ddc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x136ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x136de0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x136DE0u;
    {
        const bool branch_taken_0x136de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DE0u;
            // 0x136de4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136de0) {
            ctx->pc = 0x136E04u;
            goto label_136e04;
        }
    }
    ctx->pc = 0x136DE8u;
    // 0x136de8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x136de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x136dec: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x136decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x136df0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x136DF0u;
    SET_GPR_U32(ctx, 31, 0x136DF8u);
    ctx->pc = 0x136DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136DF0u;
            // 0x136df4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DF8u; }
        if (ctx->pc != 0x136DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136DF8u; }
        if (ctx->pc != 0x136DF8u) { return; }
    }
    ctx->pc = 0x136DF8u;
label_136df8:
    // 0x136df8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x136df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x136dfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136DFCu;
    {
        const bool branch_taken_0x136dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136DFCu;
            // 0x136e00: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dfc) {
            ctx->pc = 0x136E28u;
            goto label_136e28;
        }
    }
    ctx->pc = 0x136E04u;
label_136e04:
    // 0x136e04: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x136e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x136e08: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x136E08u;
    SET_GPR_U32(ctx, 31, 0x136E10u);
    ctx->pc = 0x136E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E08u;
            // 0x136e0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E10u; }
        if (ctx->pc != 0x136E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E10u; }
        if (ctx->pc != 0x136E10u) { return; }
    }
    ctx->pc = 0x136E10u;
label_136e10:
    // 0x136e10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x136e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x136e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x136E14u;
    {
        const bool branch_taken_0x136e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136E14u;
            // 0x136e18: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e14) {
            ctx->pc = 0x136E28u;
            goto label_136e28;
        }
    }
    ctx->pc = 0x136E1Cu;
label_136e1c:
    // 0x136e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e20: 0xc041c60  jal         func_107180
    ctx->pc = 0x136E20u;
    SET_GPR_U32(ctx, 31, 0x136E28u);
    ctx->pc = 0x136E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136E20u;
            // 0x136e24: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E28u; }
        if (ctx->pc != 0x136E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136E28u; }
        if (ctx->pc != 0x136E28u) { return; }
    }
    ctx->pc = 0x136E28u;
label_136e28:
    // 0x136e28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136e34: 0x3e00008  jr          $ra
    ctx->pc = 0x136E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136E34u;
            // 0x136e38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136E3Cu;
}
