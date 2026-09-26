#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__12CObjectFrameFR12CObjectFrameP9mgCMemory
// Address: 0x16a050 - 0x16a12c
void Copy__12CObjectFrameFR12CObjectFrameP9mgCMemory_0x16a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__12CObjectFrameFR12CObjectFrameP9mgCMemory_0x16a050");
#endif

    ctx->pc = 0x16a050u;

    // 0x16a050: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x16a050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16a054: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x16a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a058: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x16a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a05c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x16a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a060: 0xe4a30010  swc1        $f3, 0x10($a1)
    ctx->pc = 0x16a060u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x16a064: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x16a064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x16a068: 0xe4a10018  swc1        $f1, 0x18($a1)
    ctx->pc = 0x16a068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x16a06c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x16a06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x16a070: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x16a070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16a074: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x16a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a078: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x16a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a07c: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x16a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a080: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x16a080u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x16a084: 0xe4a20024  swc1        $f2, 0x24($a1)
    ctx->pc = 0x16a084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x16a088: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x16a088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x16a08c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x16a08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x16a090: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x16a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16a094: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x16a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a098: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x16a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a09c: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x16a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a0a0: 0xe4a30030  swc1        $f3, 0x30($a1)
    ctx->pc = 0x16a0a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x16a0a4: 0xe4a20034  swc1        $f2, 0x34($a1)
    ctx->pc = 0x16a0a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x16a0a8: 0xe4a10038  swc1        $f1, 0x38($a1)
    ctx->pc = 0x16a0a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x16a0ac: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x16a0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x16a0b0: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x16a0b4: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x16a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x16a0b8: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x16a0bc: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x16a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x16a0c0: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x16a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a0c4: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x16a0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x16a0c8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x16a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x16a0cc: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x16a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
    // 0x16a0d0: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x16a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a0d4: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x16a0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x16a0d8: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x16a0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a0dc: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x16a0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x16a0e0: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x16a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a0e4: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x16a0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x16a0e8: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x16a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x16a0ec: 0xaca30064  sw          $v1, 0x64($a1)
    ctx->pc = 0x16a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 3));
    // 0x16a0f0: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x16a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x16a0f4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A0F4u;
    {
        const bool branch_taken_0x16a0f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A0F4u;
            // 0x16a0f8: 0xaca30068  sw          $v1, 0x68($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0f4) {
            ctx->pc = 0x16A108u;
            goto label_16a108;
        }
    }
    ctx->pc = 0x16A0FCu;
    // 0x16a0fc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x16a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x16a100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A100u;
    {
        const bool branch_taken_0x16a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A100u;
            // 0x16a104: 0xaca30070  sw          $v1, 0x70($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a100) {
            ctx->pc = 0x16A110u;
            goto label_16a110;
        }
    }
    ctx->pc = 0x16A108u;
label_16a108:
    // 0x16a108: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x16a108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x16a10c: 0xaca30070  sw          $v1, 0x70($a1)
    ctx->pc = 0x16a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 3));
label_16a110:
    // 0x16a110: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x16a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a114: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x16a114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x16a118: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x16a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x16a11c: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x16a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x16a120: 0xaca40054  sw          $a0, 0x54($a1)
    ctx->pc = 0x16a120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 4));
    // 0x16a124: 0x3e00008  jr          $ra
    ctx->pc = 0x16A124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A124u;
            // 0x16a128: 0xaca30058  sw          $v1, 0x58($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A12Cu;
}
