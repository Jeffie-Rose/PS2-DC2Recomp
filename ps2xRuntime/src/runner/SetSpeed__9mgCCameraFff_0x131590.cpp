#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSpeed__9mgCCameraFff
// Address: 0x131590 - 0x1315b8
void SetSpeed__9mgCCameraFff_0x131590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSpeed__9mgCCameraFff_0x131590");
#endif

    ctx->pc = 0x131590u;

    // 0x131590: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131594: 0xe48c0048  swc1        $f12, 0x48($a0)
    ctx->pc = 0x131594u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x131598: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x131598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13159c: 0x0  nop
    ctx->pc = 0x13159cu;
    // NOP
    // 0x1315a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1315A0u;
    {
        const bool branch_taken_0x1315a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1315A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1315A0u;
            // 0x1315a4: 0xe48d004c  swc1        $f13, 0x4C($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315a0) {
            ctx->pc = 0x1315B0u;
            goto label_1315b0;
        }
    }
    ctx->pc = 0x1315A8u;
    // 0x1315a8: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x1315a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1315ac: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x1315acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
label_1315b0:
    // 0x1315b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1315B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1315B8u;
}
