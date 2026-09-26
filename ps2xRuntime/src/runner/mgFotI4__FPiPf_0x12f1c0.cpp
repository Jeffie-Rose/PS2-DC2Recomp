#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgFotI4__FPiPf
// Address: 0x12f1c0 - 0x12f1d0
void mgFotI4__FPiPf_0x12f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgFotI4__FPiPf_0x12f1c0");
#endif

    ctx->pc = 0x12f1c0u;

    // 0x12f1c0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x12f1c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f1c4: 0x4be1097d  vftoi4.xyzw $vf1, $vf1
    ctx->pc = 0x12f1c4u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F1C8u;
            // 0x12f1cc: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F1D0u;
}
