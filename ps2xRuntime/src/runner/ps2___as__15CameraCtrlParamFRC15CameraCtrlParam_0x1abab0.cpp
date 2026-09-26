#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__15CameraCtrlParamFRC15CameraCtrlParam
// Address: 0x1abab0 - 0x1abb10
void ps2___as__15CameraCtrlParamFRC15CameraCtrlParam_0x1abab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__15CameraCtrlParamFRC15CameraCtrlParam_0x1abab0");
#endif

    ctx->pc = 0x1abab0u;

    // 0x1abab0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1abab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abab4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1abab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abab8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1abab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1ababc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1ababcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abac0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1abac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1abac4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1abac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abac8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1abac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1abacc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1abaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abad0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1abad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1abad4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1abad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abad8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1abad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1abadc: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1abadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abae0: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1abae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1abae4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1abae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abae8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1abae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1abaec: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1abaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abaf0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1abaf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1abaf4: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1abaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abaf8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1abaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1abafc: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x1abafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abb00: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1abb00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1abb04: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x1abb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1abb08: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABB08u;
            // 0x1abb0c: 0xac830028  sw          $v1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ABB10u;
}
