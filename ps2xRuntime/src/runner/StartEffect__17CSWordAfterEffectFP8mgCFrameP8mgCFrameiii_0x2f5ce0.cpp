#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartEffect__17CSWordAfterEffectFP8mgCFrameP8mgCFrameiii
// Address: 0x2f5ce0 - 0x2f5d44
void StartEffect__17CSWordAfterEffectFP8mgCFrameP8mgCFrameiii_0x2f5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartEffect__17CSWordAfterEffectFP8mgCFrameP8mgCFrameiii_0x2f5ce0");
#endif

    ctx->pc = 0x2f5ce0u;

    // 0x2f5ce0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2f5ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2f5ce4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f5ce4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ce8: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2f5ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2f5cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5cf0: 0xac87008c  sw          $a3, 0x8C($a0)
    ctx->pc = 0x2f5cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 7));
    // 0x2f5cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f5cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f5cf8: 0xac890090  sw          $t1, 0x90($a0)
    ctx->pc = 0x2f5cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 9));
    // 0x2f5cfc: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x2f5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x2f5d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f5d04: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x2f5d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x2f5d08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5d0c: 0x0  nop
    ctx->pc = 0x2f5d0cu;
    // NOP
    // 0x2f5d10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2f5d10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f5d14: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x2f5d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x2f5d18: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x2f5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x2f5d1c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x2f5d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x2f5d20: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2f5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2f5d24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5d28: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x2f5d2c: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2f5d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2f5d30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f5d34: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x2f5d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x2f5d38: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2f5d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2f5d3c: 0x804a0d2  j           func_128348
    ctx->pc = 0x2F5D3Cu;
    ctx->pc = 0x2F5D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5D3Cu;
            // 0x2f5d40: 0x248419b8  addiu       $a0, $a0, 0x19B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        printf_0x128348(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2F5D44u;
}
