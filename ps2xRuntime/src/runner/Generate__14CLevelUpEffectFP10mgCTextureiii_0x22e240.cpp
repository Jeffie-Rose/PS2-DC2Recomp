#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__14CLevelUpEffectFP10mgCTextureiii
// Address: 0x22e240 - 0x22e27c
void Generate__14CLevelUpEffectFP10mgCTextureiii_0x22e240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__14CLevelUpEffectFP10mgCTextureiii_0x22e240");
#endif

    ctx->pc = 0x22e240u;

    // 0x22e240: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x22e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x22e244: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x22e244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x22e248: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22e248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e24c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x22e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x22e250: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x22e250u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22e254: 0x0  nop
    ctx->pc = 0x22e254u;
    // NOP
    // 0x22e258: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22e258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22e25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e260: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22e260u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22e264: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x22e264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x22e268: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x22e268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x22e26c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x22e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x22e270: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x22e270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x22e274: 0x3e00008  jr          $ra
    ctx->pc = 0x22E274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E274u;
            // 0x22e278: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E27Cu;
}
