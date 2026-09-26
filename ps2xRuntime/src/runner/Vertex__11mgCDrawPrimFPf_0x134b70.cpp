#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Vertex__11mgCDrawPrimFPf
// Address: 0x134b70 - 0x134ba8
void Vertex__11mgCDrawPrimFPf_0x134b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Vertex__11mgCDrawPrimFPf_0x134b70");
#endif

    switch (ctx->pc) {
        case 0x134b9cu: goto label_134b9c;
        default: break;
    }

    ctx->pc = 0x134b70u;

    // 0x134b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134b78: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x134b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134b7c: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x134b7cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134b80: 0x4b8a517d  vftoi4.xy   $vf10, $vf10
    ctx->pc = 0x134b80u;
    { __m128 src = ctx->vu0_vf[10]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x134b84: 0x4a4a517c  vftoi0.z    $vf10, $vf10
    ctx->pc = 0x134b84u;
    { __m128 src = ctx->vu0_vf[10]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x134b88: 0xf84a0000  sqc2        $vf10, 0x0($v0)
    ctx->pc = 0x134b88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x134b8c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x134b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x134b90: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x134b90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x134b94: 0xc04d2ec  jal         func_134BB0
    ctx->pc = 0x134B94u;
    SET_GPR_U32(ctx, 31, 0x134B9Cu);
    ctx->pc = 0x134B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134B94u;
            // 0x134b98: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B9Cu; }
        if (ctx->pc != 0x134B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B9Cu; }
        if (ctx->pc != 0x134B9Cu) { return; }
    }
    ctx->pc = 0x134B9Cu;
label_134b9c:
    // 0x134b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x134BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134BA0u;
            // 0x134ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134BA8u;
}
