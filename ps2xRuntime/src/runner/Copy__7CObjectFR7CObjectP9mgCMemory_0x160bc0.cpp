#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__7CObjectFR7CObjectP9mgCMemory
// Address: 0x160bc0 - 0x160c6c
void Copy__7CObjectFR7CObjectP9mgCMemory_0x160bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__7CObjectFR7CObjectP9mgCMemory_0x160bc0");
#endif

    ctx->pc = 0x160bc0u;

    // 0x160bc0: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x160bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x160bc4: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x160bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160bc8: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x160bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160bcc: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x160bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160bd0: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x160bd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x160bd4: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x160bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x160bd8: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x160bd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x160bdc: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x160bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x160be0: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x160be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x160be4: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x160be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160be8: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x160be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160bec: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x160becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160bf0: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x160bf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x160bf4: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x160bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x160bf8: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x160bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x160bfc: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x160bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x160c00: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x160c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x160c04: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x160c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160c08: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x160c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160c0c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x160c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c10: 0xe4a30030  swc1        $f3, 0x30($a1)
    ctx->pc = 0x160c10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x160c14: 0xe4a20034  swc1        $f2, 0x34($a1)
    ctx->pc = 0x160c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x160c18: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x160c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x160c1c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x160c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x160c20: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x160c24: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x160c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x160c28: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x160c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x160c2c: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x160c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x160c30: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x160c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c34: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x160c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x160c38: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x160c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x160c3c: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x160c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
    // 0x160c40: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x160c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c44: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x160c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x160c48: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x160c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c4c: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x160c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x160c50: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x160c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160c54: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x160c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x160c58: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x160c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x160c5c: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x160c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x160c60: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x160c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x160c64: 0x3e00008  jr          $ra
    ctx->pc = 0x160C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C64u;
            // 0x160c68: 0xaca30068  sw          $v1, 0x68($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160C6Cu;
}
