#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgVectorMinMaxN__FPfPfPA4_fi
// Address: 0x130980 - 0x1309d8
void mgVectorMinMaxN__FPfPfPA4_fi_0x130980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgVectorMinMaxN__FPfPfPA4_fi_0x130980");
#endif

    switch (ctx->pc) {
        case 0x13099cu: goto label_13099c;
        default: break;
    }

    ctx->pc = 0x130980u;

    // 0x130980: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x130980u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x130984: 0xd8ca0000  lqc2        $vf10, 0x0($a2)
    ctx->pc = 0x130984u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x130988: 0x4beb533c  vmove.xyzw  $vf11, $vf10
    ctx->pc = 0x130988u;
    ctx->vu0_vf[11] = ctx->vu0_vf[10];
    // 0x13098c: 0xd8d00010  lqc2        $vf16, 0x10($a2)
    ctx->pc = 0x13098cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x130990: 0x4a0002ff  vnop
    ctx->pc = 0x130990u;
    // NOP operation, no action needed for VU0
    // 0x130994: 0x4a0002ff  vnop
    ctx->pc = 0x130994u;
    // NOP operation, no action needed for VU0
    // 0x130998: 0x4a0002ff  vnop
    ctx->pc = 0x130998u;
    // NOP operation, no action needed for VU0
label_13099c:
    // 0x13099c: 0x4bf052ab  vmax.xyzw   $vf10, $vf10, $vf16
    ctx->pc = 0x13099cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x1309a0: 0x4bf05aef  vmini.xyzw  $vf11, $vf11, $vf16
    ctx->pc = 0x1309a0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[11], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x1309a4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1309a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1309a8: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x1309a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x1309ac: 0xd8d00000  lqc2        $vf16, 0x0($a2)
    ctx->pc = 0x1309acu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1309b0: 0x4a0002ff  vnop
    ctx->pc = 0x1309b0u;
    // NOP operation, no action needed for VU0
    // 0x1309b4: 0x4e1fff9  bgez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1309B4u;
    {
        const bool branch_taken_0x1309b4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1309b4) {
            ctx->pc = 0x13099Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13099c;
        }
    }
    ctx->pc = 0x1309BCu;
    // 0x1309bc: 0x0  nop
    ctx->pc = 0x1309bcu;
    // NOP
    // 0x1309c0: 0x4a0002ff  vnop
    ctx->pc = 0x1309c0u;
    // NOP operation, no action needed for VU0
    // 0x1309c4: 0x4a0002ff  vnop
    ctx->pc = 0x1309c4u;
    // NOP operation, no action needed for VU0
    // 0x1309c8: 0x4a0002ff  vnop
    ctx->pc = 0x1309c8u;
    // NOP operation, no action needed for VU0
    // 0x1309cc: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x1309ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1309d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1309D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1309D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1309D0u;
            // 0x1309d4: 0xf8ab0000  sqc2        $vf11, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[11]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1309D8u;
}
