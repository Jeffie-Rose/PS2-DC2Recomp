#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__13CDynamicAnimeFR13CDynamicAnimeP8mgCFrameP9mgCMemory
// Address: 0x17ad50 - 0x17b154
void Copy__13CDynamicAnimeFR13CDynamicAnimeP8mgCFrameP9mgCMemory_0x17ad50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__13CDynamicAnimeFR13CDynamicAnimeP8mgCFrameP9mgCMemory_0x17ad50");
#endif

    switch (ctx->pc) {
        case 0x17aed8u: goto label_17aed8;
        case 0x17aee8u: goto label_17aee8;
        case 0x17af00u: goto label_17af00;
        case 0x17af2cu: goto label_17af2c;
        case 0x17af38u: goto label_17af38;
        case 0x17af90u: goto label_17af90;
        case 0x17afa0u: goto label_17afa0;
        case 0x17afccu: goto label_17afcc;
        case 0x17afdcu: goto label_17afdc;
        case 0x17b008u: goto label_17b008;
        case 0x17b018u: goto label_17b018;
        case 0x17b044u: goto label_17b044;
        case 0x17b054u: goto label_17b054;
        case 0x17b080u: goto label_17b080;
        case 0x17b090u: goto label_17b090;
        case 0x17b0a0u: goto label_17b0a0;
        default: break;
    }

    ctx->pc = 0x17ad50u;

    // 0x17ad50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17ad50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17ad54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17ad54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17ad58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17ad58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17ad5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ad5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ad60: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x17ad60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17ad64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17ad68: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x17ad68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17ad70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ad74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ad74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ad78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ad78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ad80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17ad80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad84: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x17ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x17ad88: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17ad8c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x17ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x17ad90: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x17ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17ad94: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x17ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x17ad98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17ad9c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x17ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x17ada0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17ada4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x17ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x17ada8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x17ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17adac: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x17adacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x17adb0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x17adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17adb4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x17adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x17adb8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x17adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17adbc: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x17adbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x17adc0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x17adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17adc4: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x17adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
    // 0x17adc8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x17adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17adcc: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x17adccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x17add0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17add0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17add4: 0xaca30028  sw          $v1, 0x28($a1)
    ctx->pc = 0x17add4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    // 0x17add8: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x17add8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x17addc: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x17addcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x17ade0: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x17ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17ade4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x17ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x17ade8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x17ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x17adec: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x17adecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x17adf0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x17adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17adf4: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x17adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x17adf8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x17adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17adfc: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x17adfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
    // 0x17ae00: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17ae04: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x17ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x17ae08: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x17ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x17ae0c: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x17ae0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x17ae10: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x17ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x17ae14: 0xaca30048  sw          $v1, 0x48($a1)
    ctx->pc = 0x17ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 3));
    // 0x17ae18: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x17ae18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x17ae1c: 0xaca3004c  sw          $v1, 0x4C($a1)
    ctx->pc = 0x17ae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 3));
    // 0x17ae20: 0xc4830050  lwc1        $f3, 0x50($a0)
    ctx->pc = 0x17ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ae24: 0xc4820054  lwc1        $f2, 0x54($a0)
    ctx->pc = 0x17ae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ae28: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x17ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ae2c: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x17ae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ae30: 0xe4a30050  swc1        $f3, 0x50($a1)
    ctx->pc = 0x17ae30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x17ae34: 0xe4a20054  swc1        $f2, 0x54($a1)
    ctx->pc = 0x17ae34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x17ae38: 0xe4a10058  swc1        $f1, 0x58($a1)
    ctx->pc = 0x17ae38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x17ae3c: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x17ae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x17ae40: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x17ae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ae44: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x17ae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x17ae48: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x17ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ae4c: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x17ae4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x17ae50: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x17ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ae54: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x17ae54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x17ae58: 0xc4830070  lwc1        $f3, 0x70($a0)
    ctx->pc = 0x17ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17ae5c: 0xc4820074  lwc1        $f2, 0x74($a0)
    ctx->pc = 0x17ae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17ae60: 0xc4810078  lwc1        $f1, 0x78($a0)
    ctx->pc = 0x17ae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ae64: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x17ae64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ae68: 0xe4a30070  swc1        $f3, 0x70($a1)
    ctx->pc = 0x17ae68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x17ae6c: 0xe4a20074  swc1        $f2, 0x74($a1)
    ctx->pc = 0x17ae6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x17ae70: 0xe4a10078  swc1        $f1, 0x78($a1)
    ctx->pc = 0x17ae70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x17ae74: 0xe4a0007c  swc1        $f0, 0x7C($a1)
    ctx->pc = 0x17ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
    // 0x17ae78: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x17ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x17ae7c: 0xaca30080  sw          $v1, 0x80($a1)
    ctx->pc = 0x17ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 3));
    // 0x17ae80: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x17ae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ae84: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x17ae84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x17ae88: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x17ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x17ae8c: 0xaca30088  sw          $v1, 0x88($a1)
    ctx->pc = 0x17ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 3));
    // 0x17ae90: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x17ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ae94: 0xe4a0008c  swc1        $f0, 0x8C($a1)
    ctx->pc = 0x17ae94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 140), bits); }
    // 0x17ae98: 0x12a000a5  beqz        $s5, . + 4 + (0xA5 << 2)
    ctx->pc = 0x17AE98u;
    {
        const bool branch_taken_0x17ae98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AE98u;
            // 0x17ae9c: 0xacb50000  sw          $s5, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae98) {
            ctx->pc = 0x17B130u;
            goto label_17b130;
        }
    }
    ctx->pc = 0x17AEA0u;
    // 0x17aea0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17aea4: 0x1880002e  blez        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x17AEA4u;
    {
        const bool branch_taken_0x17aea4 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x17aea4) {
            ctx->pc = 0x17AF60u;
            goto label_17af60;
        }
    }
    ctx->pc = 0x17AEACu;
    // 0x17aeac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17aeb0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x17AEB0u;
    {
        const bool branch_taken_0x17aeb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEB0u;
            // 0x17aeb4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aeb0) {
            ctx->pc = 0x17AF60u;
            goto label_17af60;
        }
    }
    ctx->pc = 0x17AEB8u;
    // 0x17aeb8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17aeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17aebc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AEBCu;
    {
        const bool branch_taken_0x17aebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEBCu;
            // 0x17aec0: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aebc) {
            ctx->pc = 0x17AECCu;
            goto label_17aecc;
        }
    }
    ctx->pc = 0x17AEC4u;
    // 0x17aec4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17aec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17aecc:
    // 0x17aecc: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17aed0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17AED0u;
    SET_GPR_U32(ctx, 31, 0x17AED8u);
    ctx->pc = 0x17AED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AED0u;
            // 0x17aed4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AED8u; }
        if (ctx->pc != 0x17AED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AED8u; }
        if (ctx->pc != 0x17AED8u) { return; }
    }
    ctx->pc = 0x17AED8u;
label_17aed8:
    // 0x17aed8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17aedc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17aedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aee0: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17AEE0u;
    SET_GPR_U32(ctx, 31, 0x17AEE8u);
    ctx->pc = 0x17AEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEE0u;
            // 0x17aee4: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AEE8u; }
        if (ctx->pc != 0x17AEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AEE8u; }
        if (ctx->pc != 0x17AEE8u) { return; }
    }
    ctx->pc = 0x17AEE8u;
label_17aee8:
    // 0x17aee8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x17aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x17aeec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17aeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17aef0: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x17AEF0u;
    {
        const bool branch_taken_0x17aef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEF0u;
            // 0x17aef4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aef0) {
            ctx->pc = 0x17B130u;
            goto label_17b130;
        }
    }
    ctx->pc = 0x17AEF8u;
    // 0x17aef8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17AEF8u;
    {
        const bool branch_taken_0x17aef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AEF8u;
            // 0x17aefc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aef8) {
            ctx->pc = 0x17AF50u;
            goto label_17af50;
        }
    }
    ctx->pc = 0x17AF00u;
label_17af00:
    // 0x17af00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17af04: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17af04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17af08: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17af08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17af0c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x17af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17af10: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17af14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17af18: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17AF18u;
    {
        const bool branch_taken_0x17af18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17af18) {
            ctx->pc = 0x17AF44u;
            goto label_17af44;
        }
    }
    ctx->pc = 0x17AF20u;
    // 0x17af20: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x17af24: 0xc04ddd4  jal         func_137750
    ctx->pc = 0x17AF24u;
    SET_GPR_U32(ctx, 31, 0x17AF2Cu);
    ctx->pc = 0x17AF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF24u;
            // 0x17af28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137750u;
    if (runtime->hasFunction(0x137750u)) {
        auto targetFn = runtime->lookupFunction(0x137750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF2Cu; }
        if (ctx->pc != 0x17AF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrameID__8mgCFrameFPc_0x137750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF2Cu; }
        if (ctx->pc != 0x17AF2Cu) { return; }
    }
    ctx->pc = 0x17AF2Cu;
label_17af2c:
    // 0x17af2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17af2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af30: 0xc04d9ec  jal         func_1367B0
    ctx->pc = 0x17AF30u;
    SET_GPR_U32(ctx, 31, 0x17AF38u);
    ctx->pc = 0x17AF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF30u;
            // 0x17af34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF38u; }
        if (ctx->pc != 0x17AF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF38u; }
        if (ctx->pc != 0x17AF38u) { return; }
    }
    ctx->pc = 0x17AF38u;
label_17af38:
    // 0x17af38: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17af3c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17af40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x17af40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_17af44:
    // 0x17af44: 0x0  nop
    ctx->pc = 0x17af44u;
    // NOP
    // 0x17af48: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x17af48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x17af4c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17af4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17af50:
    // 0x17af50: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17af50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17af54: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x17af54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17af58: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17AF58u;
    {
        const bool branch_taken_0x17af58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17af58) {
            ctx->pc = 0x17AF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17af00;
        }
    }
    ctx->pc = 0x17AF60u;
label_17af60:
    // 0x17af60: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17af64: 0x18600072  blez        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x17AF64u;
    {
        const bool branch_taken_0x17af64 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17af64) {
            ctx->pc = 0x17B130u;
            goto label_17b130;
        }
    }
    ctx->pc = 0x17AF6Cu;
    // 0x17af6c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17af70: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17af70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17af74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AF74u;
    {
        const bool branch_taken_0x17af74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF74u;
            // 0x17af78: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17af74) {
            ctx->pc = 0x17AF84u;
            goto label_17af84;
        }
    }
    ctx->pc = 0x17AF7Cu;
    // 0x17af7c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17af80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17af84:
    // 0x17af84: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17af88: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17AF88u;
    SET_GPR_U32(ctx, 31, 0x17AF90u);
    ctx->pc = 0x17AF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF88u;
            // 0x17af8c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF90u; }
        if (ctx->pc != 0x17AF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AF90u; }
        if (ctx->pc != 0x17AF90u) { return; }
    }
    ctx->pc = 0x17AF90u;
label_17af90:
    // 0x17af90: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17af94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17af94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17af98: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17AF98u;
    SET_GPR_U32(ctx, 31, 0x17AFA0u);
    ctx->pc = 0x17AF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AF98u;
            // 0x17af9c: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFA0u; }
        if (ctx->pc != 0x17AFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFA0u; }
        if (ctx->pc != 0x17AFA0u) { return; }
    }
    ctx->pc = 0x17AFA0u;
label_17afa0:
    // 0x17afa0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x17afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x17afa4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17afa8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17afac: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17afacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17afb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AFB0u;
    {
        const bool branch_taken_0x17afb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFB0u;
            // 0x17afb4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afb0) {
            ctx->pc = 0x17AFC0u;
            goto label_17afc0;
        }
    }
    ctx->pc = 0x17AFB8u;
    // 0x17afb8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17afb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17afbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17afc0:
    // 0x17afc0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17afc4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17AFC4u;
    SET_GPR_U32(ctx, 31, 0x17AFCCu);
    ctx->pc = 0x17AFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFC4u;
            // 0x17afc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFCCu; }
        if (ctx->pc != 0x17AFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFCCu; }
        if (ctx->pc != 0x17AFCCu) { return; }
    }
    ctx->pc = 0x17AFCCu;
label_17afcc:
    // 0x17afcc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17afd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17afd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17afd4: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17AFD4u;
    SET_GPR_U32(ctx, 31, 0x17AFDCu);
    ctx->pc = 0x17AFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFD4u;
            // 0x17afd8: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFDCu; }
        if (ctx->pc != 0x17AFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AFDCu; }
        if (ctx->pc != 0x17AFDCu) { return; }
    }
    ctx->pc = 0x17AFDCu;
label_17afdc:
    // 0x17afdc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17afe0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17afe4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17afe8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17afec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AFECu;
    {
        const bool branch_taken_0x17afec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AFECu;
            // 0x17aff0: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afec) {
            ctx->pc = 0x17AFFCu;
            goto label_17affc;
        }
    }
    ctx->pc = 0x17AFF4u;
    // 0x17aff4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17aff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17affc:
    // 0x17affc: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17b000: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17B000u;
    SET_GPR_U32(ctx, 31, 0x17B008u);
    ctx->pc = 0x17B004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B000u;
            // 0x17b004: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B008u; }
        if (ctx->pc != 0x17B008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B008u; }
        if (ctx->pc != 0x17B008u) { return; }
    }
    ctx->pc = 0x17B008u;
label_17b008:
    // 0x17b008: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b00c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b010: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17B010u;
    SET_GPR_U32(ctx, 31, 0x17B018u);
    ctx->pc = 0x17B014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B010u;
            // 0x17b014: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B018u; }
        if (ctx->pc != 0x17B018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B018u; }
        if (ctx->pc != 0x17B018u) { return; }
    }
    ctx->pc = 0x17B018u;
label_17b018:
    // 0x17b018: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x17b018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x17b01c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b020: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17b020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17b024: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17b028: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B028u;
    {
        const bool branch_taken_0x17b028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B028u;
            // 0x17b02c: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b028) {
            ctx->pc = 0x17B038u;
            goto label_17b038;
        }
    }
    ctx->pc = 0x17B030u;
    // 0x17b030: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17b030u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17b034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17b038:
    // 0x17b038: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17b038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17b03c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17B03Cu;
    SET_GPR_U32(ctx, 31, 0x17B044u);
    ctx->pc = 0x17B040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B03Cu;
            // 0x17b040: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B044u; }
        if (ctx->pc != 0x17B044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B044u; }
        if (ctx->pc != 0x17B044u) { return; }
    }
    ctx->pc = 0x17B044u;
label_17b044:
    // 0x17b044: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b04c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17B04Cu;
    SET_GPR_U32(ctx, 31, 0x17B054u);
    ctx->pc = 0x17B050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B04Cu;
            // 0x17b050: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B054u; }
        if (ctx->pc != 0x17B054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B054u; }
        if (ctx->pc != 0x17B054u) { return; }
    }
    ctx->pc = 0x17B054u;
label_17b054:
    // 0x17b054: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x17b054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x17b058: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b05c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17b060: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17b060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17b064: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B064u;
    {
        const bool branch_taken_0x17b064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B064u;
            // 0x17b068: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b064) {
            ctx->pc = 0x17B074u;
            goto label_17b074;
        }
    }
    ctx->pc = 0x17B06Cu;
    // 0x17b06c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17b070: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17b074:
    // 0x17b074: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x17b074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17b078: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17B078u;
    SET_GPR_U32(ctx, 31, 0x17B080u);
    ctx->pc = 0x17B07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B078u;
            // 0x17b07c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B080u; }
        if (ctx->pc != 0x17B080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B080u; }
        if (ctx->pc != 0x17B080u) { return; }
    }
    ctx->pc = 0x17B080u;
label_17b080:
    // 0x17b080: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x17b080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b088: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x17B088u;
    SET_GPR_U32(ctx, 31, 0x17B090u);
    ctx->pc = 0x17B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B088u;
            // 0x17b08c: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B090u; }
        if (ctx->pc != 0x17B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B090u; }
        if (ctx->pc != 0x17B090u) { return; }
    }
    ctx->pc = 0x17B090u;
label_17b090:
    // 0x17b090: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17b090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x17b094: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b098: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17B098u;
    {
        const bool branch_taken_0x17b098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B098u;
            // 0x17b09c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b098) {
            ctx->pc = 0x17B120u;
            goto label_17b120;
        }
    }
    ctx->pc = 0x17B0A0u;
label_17b0a0:
    // 0x17b0a0: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x17b0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17b0a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17b0a8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x17b0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17b0ac: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17b0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17b0b0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17b0b0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b0b4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17b0b8: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x17b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x17b0bc: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x17b0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17b0c0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x17b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17b0c4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17b0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17b0c8: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17b0c8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b0cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17b0d0: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x17b0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x17b0d4: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x17b0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17b0d8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x17b0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17b0dc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17b0e0: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17b0e0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b0e4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17b0e8: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x17b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x17b0ec: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x17b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17b0f0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17b0f4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17b0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17b0f8: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17b0f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b0fc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17b100: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x17b100u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x17b104: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x17b104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17b108: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x17b108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x17b10c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17b110: 0x78c60000  lq          $a2, 0x0($a2)
    ctx->pc = 0x17b110u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17b114: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17b118: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17b11c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x17b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_17b120:
    // 0x17b120: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x17b120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17b124: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x17b124u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x17b128: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x17B128u;
    {
        const bool branch_taken_0x17b128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b128) {
            ctx->pc = 0x17B0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17b0a0;
        }
    }
    ctx->pc = 0x17B130u;
label_17b130:
    // 0x17b130: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17b130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17b134: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17b134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b138: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17b138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17b13c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17b13cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17b140: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b14c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B14Cu;
            // 0x17b150: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B154u;
}
