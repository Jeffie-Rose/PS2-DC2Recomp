#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: trans_effect_rate__Fi
// Address: 0x1be660 - 0x1be6a0
void trans_effect_rate__Fi_0x1be660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("trans_effect_rate__Fi_0x1be660");
#endif

    ctx->pc = 0x1be660u;

    // 0x1be660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1be660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be664: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1be664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1be668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be66c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1be66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1be670: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1be670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1be674: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1be674u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1be678: 0x0  nop
    ctx->pc = 0x1be678u;
    // NOP
    // 0x1be67c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1be67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be680: 0x0  nop
    ctx->pc = 0x1be680u;
    // NOP
    // 0x1be684: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1be684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be688: 0x0  nop
    ctx->pc = 0x1be688u;
    // NOP
    // 0x1be68c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE68Cu;
    {
        const bool branch_taken_0x1be68c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1be68c) {
            ctx->pc = 0x1BE698u;
            goto label_1be698;
        }
    }
    ctx->pc = 0x1BE694u;
    // 0x1be694: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1be694u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1be698:
    // 0x1be698: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE6A0u;
}
