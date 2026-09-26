#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyFuncPointCheck__9CMapPartsFR15CFuncPointCheck
// Address: 0x167a60 - 0x167a98
void CopyFuncPointCheck__9CMapPartsFR15CFuncPointCheck_0x167a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyFuncPointCheck__9CMapPartsFR15CFuncPointCheck_0x167a60");
#endif

    ctx->pc = 0x167a60u;

    // 0x167a60: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x167a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167a64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167a64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167a68: 0x0  nop
    ctx->pc = 0x167a68u;
    // NOP
    // 0x167a6c: 0xe48102fc  swc1        $f1, 0x2FC($a0)
    ctx->pc = 0x167a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 764), bits); }
    // 0x167a70: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x167a74: 0xac830300  sw          $v1, 0x300($a0)
    ctx->pc = 0x167a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 3));
    // 0x167a78: 0xc48101e0  lwc1        $f1, 0x1E0($a0)
    ctx->pc = 0x167a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167a7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167a80: 0x0  nop
    ctx->pc = 0x167a80u;
    // NOP
    // 0x167a84: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x167A84u;
    {
        const bool branch_taken_0x167a84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167a84) {
            ctx->pc = 0x167A90u;
            goto label_167a90;
        }
    }
    ctx->pc = 0x167A8Cu;
    // 0x167a8c: 0xe48102fc  swc1        $f1, 0x2FC($a0)
    ctx->pc = 0x167a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 764), bits); }
label_167a90:
    // 0x167a90: 0x3e00008  jr          $ra
    ctx->pc = 0x167A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167A98u;
}
