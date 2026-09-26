#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Data4__11mgCDrawPrimFPf
// Address: 0x134ac0 - 0x134adc
void Data4__11mgCDrawPrimFPf_0x134ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Data4__11mgCDrawPrimFPf_0x134ac0");
#endif

    ctx->pc = 0x134ac0u;

    // 0x134ac0: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134ac4: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x134ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x134ac8: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x134ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x134acc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x134accu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134ad0: 0x4be1097d  vftoi4.xyzw $vf1, $vf1
    ctx->pc = 0x134ad0u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x134ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x134AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AD4u;
            // 0x134ad8: 0xf8c10000  sqc2        $vf1, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134ADCu;
}
