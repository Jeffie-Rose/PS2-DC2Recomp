#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgAbs__Ff
// Address: 0x161c40 - 0x161c64
void mgAbs__Ff_0x161c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgAbs__Ff_0x161c40");
#endif

    ctx->pc = 0x161c40u;

    // 0x161c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161c44: 0x0  nop
    ctx->pc = 0x161c44u;
    // NOP
    // 0x161c48: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x161c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161c4c: 0x0  nop
    ctx->pc = 0x161c4cu;
    // NOP
    // 0x161c50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x161C50u;
    {
        const bool branch_taken_0x161c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161c50) {
            ctx->pc = 0x161C5Cu;
            goto label_161c5c;
        }
    }
    ctx->pc = 0x161C58u;
    // 0x161c58: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x161c58u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_161c5c:
    // 0x161c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x161C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C5Cu;
            // 0x161c60: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161C64u;
}
