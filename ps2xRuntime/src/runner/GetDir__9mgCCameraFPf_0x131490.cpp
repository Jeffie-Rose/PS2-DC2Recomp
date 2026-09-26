#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDir__9mgCCameraFPf
// Address: 0x131490 - 0x1314c4
void GetDir__9mgCCameraFPf_0x131490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDir__9mgCCameraFPf_0x131490");
#endif

    ctx->pc = 0x131490u;

    // 0x131490: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x131490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131494: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x131494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131498: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x131498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13149c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x13149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1314a0: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1314a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1314a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1314a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1314a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1314a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1314ac: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1314acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1314b0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1314b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1314b4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1314b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1314b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1314b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1314bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1314BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1314C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1314BCu;
            // 0x1314c0: 0xe4a00008  swc1        $f0, 0x8($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1314C4u;
}
