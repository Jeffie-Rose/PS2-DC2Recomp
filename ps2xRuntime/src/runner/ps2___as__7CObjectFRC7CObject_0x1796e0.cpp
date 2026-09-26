#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__7CObjectFRC7CObject
// Address: 0x1796e0 - 0x179790
void ps2___as__7CObjectFRC7CObject_0x1796e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__7CObjectFRC7CObject_0x1796e0");
#endif

    ctx->pc = 0x1796e0u;

    // 0x1796e0: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x1796e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1796e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1796e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796e8: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x1796e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1796ec: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1796ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1796f0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1796f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796f4: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1796f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1796f8: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1796f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1796fc: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1796fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x179700: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x179700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x179704: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x179704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179708: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x179708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17970c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x17970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179710: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x179710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179714: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x179714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x179718: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x179718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x17971c: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x17971cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x179720: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x179720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x179724: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x179724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x179728: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x179728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17972c: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x17972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179730: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x179730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179734: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x179734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x179738: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x179738u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x17973c: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x17973cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x179740: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x179740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x179744: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x179744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x179748: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x179748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x17974c: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x17974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x179750: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x179750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x179754: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x179754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179758: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x179758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x17975c: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x17975cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x179760: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x179760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x179764: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x179764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179768: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x179768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x17976c: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x17976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179770: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x179770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x179774: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x179774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179778: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x179778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x17977c: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x17977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x179780: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x179780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x179784: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x179784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x179788: 0x3e00008  jr          $ra
    ctx->pc = 0x179788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179788u;
            // 0x17978c: 0xac830068  sw          $v1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179790u;
}
