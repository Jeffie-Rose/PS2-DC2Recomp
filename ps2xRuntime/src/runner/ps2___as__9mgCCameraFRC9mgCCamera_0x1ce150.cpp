#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__9mgCCameraFRC9mgCCamera
// Address: 0x1ce150 - 0x1ce218
void ps2___as__9mgCCameraFRC9mgCCamera_0x1ce150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__9mgCCameraFRC9mgCCamera_0x1ce150");
#endif

    ctx->pc = 0x1ce150u;

    // 0x1ce150: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1ce150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce154: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ce154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce158: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1ce158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce15c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1ce15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce160: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1ce160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce164: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1ce164u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1ce168: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1ce168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ce16c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1ce16cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1ce170: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1ce170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ce174: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x1ce174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce178: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x1ce178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce17c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1ce17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce180: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1ce180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce184: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1ce184u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1ce188: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1ce188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1ce18c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1ce18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1ce190: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1ce190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1ce194: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x1ce194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce198: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x1ce198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce19c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x1ce19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce1a0: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x1ce1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce1a4: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x1ce1a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1ce1a8: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x1ce1a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ce1ac: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1ce1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1ce1b0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1ce1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1ce1b4: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x1ce1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce1b8: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x1ce1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce1bc: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x1ce1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce1c0: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x1ce1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce1c4: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x1ce1c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1ce1c8: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x1ce1c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1ce1cc: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x1ce1ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1ce1d0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1ce1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1ce1d4: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x1ce1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce1d8: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x1ce1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1ce1dc: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x1ce1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1ce1e0: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x1ce1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x1ce1e4: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x1ce1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce1e8: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x1ce1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1ce1ec: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x1ce1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce1f0: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x1ce1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x1ce1f4: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x1ce1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce1f8: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x1ce1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1ce1fc: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x1ce1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce200: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x1ce200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1ce204: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x1ce204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce208: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1ce208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1ce20c: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x1ce20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x1ce210: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE210u;
            // 0x1ce214: 0xac83005c  sw          $v1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE218u;
}
