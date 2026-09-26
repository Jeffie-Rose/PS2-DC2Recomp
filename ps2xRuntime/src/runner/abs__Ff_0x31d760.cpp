#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: abs__Ff
// Address: 0x31d760 - 0x31d784
void abs__Ff_0x31d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("abs__Ff_0x31d760");
#endif

    ctx->pc = 0x31d760u;

    // 0x31d760: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d764: 0x0  nop
    ctx->pc = 0x31d764u;
    // NOP
    // 0x31d768: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31d768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d76c: 0x0  nop
    ctx->pc = 0x31d76cu;
    // NOP
    // 0x31d770: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31D770u;
    {
        const bool branch_taken_0x31d770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d770) {
            ctx->pc = 0x31D77Cu;
            goto label_31d77c;
        }
    }
    ctx->pc = 0x31D778u;
    // 0x31d778: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x31d778u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_31d77c:
    // 0x31d77c: 0x3e00008  jr          $ra
    ctx->pc = 0x31D77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D77Cu;
            // 0x31d780: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D784u;
}
