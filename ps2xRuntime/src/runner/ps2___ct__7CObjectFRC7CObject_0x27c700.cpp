#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__7CObjectFRC7CObject
// Address: 0x27c700 - 0x27c7c8
void ps2___ct__7CObjectFRC7CObject_0x27c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__7CObjectFRC7CObject_0x27c700");
#endif

    ctx->pc = 0x27c700u;

    // 0x27c700: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27c700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x27c704: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x27c704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x27c708: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x27c708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
    // 0x27c70c: 0x24635670  addiu       $v1, $v1, 0x5670
    ctx->pc = 0x27c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22128));
    // 0x27c710: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x27c710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x27c714: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x27c714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27c718: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27c718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c71c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x27c71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c720: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x27c720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c724: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x27c724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c728: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x27c728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x27c72c: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x27c72cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x27c730: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x27c730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x27c734: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x27c734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x27c738: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x27c738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27c73c: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x27c73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c740: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x27c740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c744: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x27c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c748: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x27c748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x27c74c: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x27c74cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x27c750: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x27c750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x27c754: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x27c754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x27c758: 0xc4a30030  lwc1        $f3, 0x30($a1)
    ctx->pc = 0x27c758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27c75c: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x27c75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27c760: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x27c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c764: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x27c764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c768: 0xe4830030  swc1        $f3, 0x30($a0)
    ctx->pc = 0x27c768u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x27c76c: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x27c76cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x27c770: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x27c770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x27c774: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x27c774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x27c778: 0x8ca60040  lw          $a2, 0x40($a1)
    ctx->pc = 0x27c778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x27c77c: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x27c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x27c780: 0x8ca60044  lw          $a2, 0x44($a1)
    ctx->pc = 0x27c780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x27c784: 0xac860044  sw          $a2, 0x44($a0)
    ctx->pc = 0x27c784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 6));
    // 0x27c788: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x27c788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x27c78c: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x27c78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c790: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x27c790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x27c794: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x27c794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x27c798: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x27c798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
    // 0x27c79c: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x27c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c7a0: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x27c7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x27c7a4: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x27c7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c7a8: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x27c7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x27c7ac: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x27c7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c7b0: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x27c7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x27c7b4: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x27c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x27c7b8: 0xac830064  sw          $v1, 0x64($a0)
    ctx->pc = 0x27c7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
    // 0x27c7bc: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x27c7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27C7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C7C0u;
            // 0x27c7c4: 0xac830068  sw          $v1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27C7C8u;
}
