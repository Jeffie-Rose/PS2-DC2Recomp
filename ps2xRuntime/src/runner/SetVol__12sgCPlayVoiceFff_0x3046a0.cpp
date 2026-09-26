#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVol__12sgCPlayVoiceFff
// Address: 0x3046a0 - 0x30471c
void SetVol__12sgCPlayVoiceFff_0x3046a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVol__12sgCPlayVoiceFff_0x3046a0");
#endif

    ctx->pc = 0x3046a0u;

    // 0x3046a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3046a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046a4: 0x0  nop
    ctx->pc = 0x3046a4u;
    // NOP
    // 0x3046a8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3046a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3046ac: 0x0  nop
    ctx->pc = 0x3046acu;
    // NOP
    // 0x3046b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3046B0u;
    {
        const bool branch_taken_0x3046b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3046B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3046B0u;
            // 0x3046b4: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046b0) {
            ctx->pc = 0x3046BCu;
            goto label_3046bc;
        }
    }
    ctx->pc = 0x3046B8u;
    // 0x3046b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3046b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3046bc:
    // 0x3046bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3046bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046c0: 0x0  nop
    ctx->pc = 0x3046c0u;
    // NOP
    // 0x3046c4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x3046c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3046c8: 0x0  nop
    ctx->pc = 0x3046c8u;
    // NOP
    // 0x3046cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3046CCu;
    {
        const bool branch_taken_0x3046cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3046cc) {
            ctx->pc = 0x3046D8u;
            goto label_3046d8;
        }
    }
    ctx->pc = 0x3046D4u;
    // 0x3046d4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3046d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3046d8:
    // 0x3046d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3046d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046dc: 0x0  nop
    ctx->pc = 0x3046dcu;
    // NOP
    // 0x3046e0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x3046e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3046e4: 0x0  nop
    ctx->pc = 0x3046e4u;
    // NOP
    // 0x3046e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3046E8u;
    {
        const bool branch_taken_0x3046e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3046ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3046E8u;
            // 0x3046ec: 0xe48c0010  swc1        $f12, 0x10($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046e8) {
            ctx->pc = 0x3046F4u;
            goto label_3046f4;
        }
    }
    ctx->pc = 0x3046F0u;
    // 0x3046f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3046f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3046f4:
    // 0x3046f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3046f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3046f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3046f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3046fc: 0x0  nop
    ctx->pc = 0x3046fcu;
    // NOP
    // 0x304700: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x304700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304704: 0x0  nop
    ctx->pc = 0x304704u;
    // NOP
    // 0x304708: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x304708u;
    {
        const bool branch_taken_0x304708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304708) {
            ctx->pc = 0x304714u;
            goto label_304714;
        }
    }
    ctx->pc = 0x304710u;
    // 0x304710: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x304710u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_304714:
    // 0x304714: 0x3e00008  jr          $ra
    ctx->pc = 0x304714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304714u;
            // 0x304718: 0xe48d000c  swc1        $f13, 0xC($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30471Cu;
}
