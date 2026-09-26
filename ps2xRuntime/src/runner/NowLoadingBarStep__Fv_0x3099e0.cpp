#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowLoadingBarStep__Fv
// Address: 0x3099e0 - 0x309a54
void NowLoadingBarStep__Fv_0x3099e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowLoadingBarStep__Fv_0x3099e0");
#endif

    ctx->pc = 0x3099e0u;

    // 0x3099e0: 0x8f83a198  lw          $v1, -0x5E68($gp)
    ctx->pc = 0x3099e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943128)));
    // 0x3099e4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3099e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x3099e8: 0x8c24b4b8  lw          $a0, -0x4B48($at)
    ctx->pc = 0x3099e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948024)));
    // 0x3099ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3099ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3099f0: 0xaf83a198  sw          $v1, -0x5E68($gp)
    ctx->pc = 0x3099f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943128), GPR_U32(ctx, 3));
    // 0x3099f4: 0x8f83a198  lw          $v1, -0x5E68($gp)
    ctx->pc = 0x3099f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943128)));
    // 0x3099f8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3099f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3099fc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3099FCu;
    {
        const bool branch_taken_0x3099fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3099fc) {
            ctx->pc = 0x309A08u;
            goto label_309a08;
        }
    }
    ctx->pc = 0x309A04u;
    // 0x309a04: 0xaf84a198  sw          $a0, -0x5E68($gp)
    ctx->pc = 0x309a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943128), GPR_U32(ctx, 4));
label_309a08:
    // 0x309a08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x309a08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a0c: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x309a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x309a10: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x309a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x309a14: 0x8f84a198  lw          $a0, -0x5E68($gp)
    ctx->pc = 0x309a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943128)));
    // 0x309a18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x309a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x309a1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x309a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x309a20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x309a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x309a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309a28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x309a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x309a2c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x309a2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x309a30: 0x0  nop
    ctx->pc = 0x309a30u;
    // NOP
    // 0x309a34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x309a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309a38: 0x0  nop
    ctx->pc = 0x309a38u;
    // NOP
    // 0x309a3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x309A3Cu;
    {
        const bool branch_taken_0x309a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x309A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309A3Cu;
            // 0x309a40: 0xe781a194  swc1        $f1, -0x5E6C($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x309a3c) {
            ctx->pc = 0x309A4Cu;
            goto label_309a4c;
        }
    }
    ctx->pc = 0x309A44u;
    // 0x309a44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x309a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x309a48: 0xaf83a194  sw          $v1, -0x5E6C($gp)
    ctx->pc = 0x309a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943124), GPR_U32(ctx, 3));
label_309a4c:
    // 0x309a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x309A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309A54u;
}
