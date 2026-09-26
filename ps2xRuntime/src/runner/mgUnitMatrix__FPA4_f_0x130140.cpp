#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgUnitMatrix__FPA4_f
// Address: 0x130140 - 0x130160
void mgUnitMatrix__FPA4_f_0x130140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgUnitMatrix__FPA4_f_0x130140");
#endif

    ctx->pc = 0x130140u;

    // 0x130140: 0x4be1033d  vmr32.xyzw  $vf1, $vf0
    ctx->pc = 0x130140u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x130144: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x130144u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x130148: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x130148u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13014c: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x13014cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130150: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x130150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x130154: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x130154u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x130158: 0x3e00008  jr          $ra
    ctx->pc = 0x130158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13015Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130158u;
            // 0x13015c: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130160u;
}
