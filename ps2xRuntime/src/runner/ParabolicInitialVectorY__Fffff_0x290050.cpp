#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ParabolicInitialVectorY__Fffff
// Address: 0x290050 - 0x290080
void ParabolicInitialVectorY__Fffff_0x290050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParabolicInitialVectorY__Fffff_0x290050");
#endif

    ctx->pc = 0x290050u;

    // 0x290050: 0x460c6841  sub.s       $f1, $f13, $f12
    ctx->pc = 0x290050u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x290054: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x290054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x290058: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x290058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29005c: 0x460f7002  mul.s       $f0, $f14, $f15
    ctx->pc = 0x29005cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
    // 0x290060: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x290060u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x290064: 0x4600785d  msub.s      $f1, $f15, $f0
    ctx->pc = 0x290064u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[0]));
    // 0x290068: 0x460f1002  mul.s       $f0, $f2, $f15
    ctx->pc = 0x290068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x29006c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x29006cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x290070: 0x0  nop
    ctx->pc = 0x290070u;
    // NOP
    // 0x290074: 0x0  nop
    ctx->pc = 0x290074u;
    // NOP
    // 0x290078: 0x3e00008  jr          $ra
    ctx->pc = 0x290078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290080u;
}
