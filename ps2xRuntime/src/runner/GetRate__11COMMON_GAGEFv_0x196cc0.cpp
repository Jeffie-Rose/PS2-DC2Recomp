#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRate__11COMMON_GAGEFv
// Address: 0x196cc0 - 0x196cfc
void GetRate__11COMMON_GAGEFv_0x196cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRate__11COMMON_GAGEFv_0x196cc0");
#endif

    ctx->pc = 0x196cc0u;

    // 0x196cc0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x196cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196cc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x196cc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196cc8: 0x0  nop
    ctx->pc = 0x196cc8u;
    // NOP
    // 0x196ccc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x196cccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196cd0: 0x0  nop
    ctx->pc = 0x196cd0u;
    // NOP
    // 0x196cd4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x196CD4u;
    {
        const bool branch_taken_0x196cd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x196cd4) {
            ctx->pc = 0x196CF4u;
            goto label_196cf4;
        }
    }
    ctx->pc = 0x196CDCu;
    // 0x196cdc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x196cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196ce0: 0x0  nop
    ctx->pc = 0x196ce0u;
    // NOP
    // 0x196ce4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x196ce4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x196ce8: 0x0  nop
    ctx->pc = 0x196ce8u;
    // NOP
    // 0x196cec: 0x0  nop
    ctx->pc = 0x196cecu;
    // NOP
    // 0x196cf0: 0x0  nop
    ctx->pc = 0x196cf0u;
    // NOP
label_196cf4:
    // 0x196cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x196CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196CFCu;
}
