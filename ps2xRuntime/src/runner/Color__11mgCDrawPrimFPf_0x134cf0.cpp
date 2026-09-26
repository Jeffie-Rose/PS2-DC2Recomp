#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Color__11mgCDrawPrimFPf
// Address: 0x134cf0 - 0x134d28
void Color__11mgCDrawPrimFPf_0x134cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Color__11mgCDrawPrimFPf_0x134cf0");
#endif

    switch (ctx->pc) {
        case 0x134d1cu: goto label_134d1c;
        default: break;
    }

    ctx->pc = 0x134cf0u;

    // 0x134cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134cf8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x134cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x134cfc: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x134cfcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134d00: 0x4bea517c  vftoi0.xyzw $vf10, $vf10
    ctx->pc = 0x134d00u;
    { __m128 src = ctx->vu0_vf[10]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x134d04: 0xf84a0000  sqc2        $vf10, 0x0($v0)
    ctx->pc = 0x134d04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x134d08: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x134d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x134d0c: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x134d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x134d10: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x134d10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x134d14: 0xc04d320  jal         func_134C80
    ctx->pc = 0x134D14u;
    SET_GPR_U32(ctx, 31, 0x134D1Cu);
    ctx->pc = 0x134D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134D14u;
            // 0x134d18: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D1Cu; }
        if (ctx->pc != 0x134D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D1Cu; }
        if (ctx->pc != 0x134D1Cu) { return; }
    }
    ctx->pc = 0x134D1Cu;
label_134d1c:
    // 0x134d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d20: 0x3e00008  jr          $ra
    ctx->pc = 0x134D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D20u;
            // 0x134d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134D28u;
}
