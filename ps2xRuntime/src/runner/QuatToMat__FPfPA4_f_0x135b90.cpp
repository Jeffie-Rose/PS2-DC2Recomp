#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QuatToMat__FPfPA4_f
// Address: 0x135b90 - 0x135c6c
void QuatToMat__FPfPA4_f_0x135b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuatToMat__FPfPA4_f_0x135b90");
#endif

    ctx->pc = 0x135b90u;

    // 0x135b90: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x135b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135b94: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x135b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x135b98: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x135b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135b9c: 0xc48b000c  lwc1        $f11, 0xC($a0)
    ctx->pc = 0x135b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x135ba0: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x135ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135ba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x135ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135ba8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x135ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x135bac: 0x46020a42  mul.s       $f9, $f1, $f2
    ctx->pc = 0x135bacu;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x135bb0: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x135bb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x135bb4: 0x460b1202  mul.s       $f8, $f2, $f11
    ctx->pc = 0x135bb4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x135bb8: 0x460229c2  mul.s       $f7, $f5, $f2
    ctx->pc = 0x135bb8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x135bbc: 0x46012982  mul.s       $f6, $f5, $f1
    ctx->pc = 0x135bbcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x135bc0: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x135bc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x135bc4: 0x460b0a82  mul.s       $f10, $f1, $f11
    ctx->pc = 0x135bc4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x135bc8: 0x460b5882  mul.s       $f2, $f11, $f11
    ctx->pc = 0x135bc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x135bcc: 0x46022040  add.s       $f1, $f4, $f2
    ctx->pc = 0x135bccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x135bd0: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x135bd0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x135bd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x135bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x135bd8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x135bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135bdc: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x135bdcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
    // 0x135be0: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x135be0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x135be4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x135be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x135be8: 0x46041840  add.s       $f1, $f3, $f4
    ctx->pc = 0x135be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x135bec: 0x460548c1  sub.s       $f3, $f9, $f5
    ctx->pc = 0x135becu;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[5]);
    // 0x135bf0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x135bf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x135bf4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x135bf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x135bf8: 0x46026101  sub.s       $f4, $f12, $f2
    ctx->pc = 0x135bf8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x135bfc: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x135bfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x135c00: 0x46054880  add.s       $f2, $f9, $f5
    ctx->pc = 0x135c00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x135c04: 0x460750c0  add.s       $f3, $f10, $f7
    ctx->pc = 0x135c04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[7]);
    // 0x135c08: 0x46020142  mul.s       $f5, $f0, $f2
    ctx->pc = 0x135c08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x135c0c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x135c0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x135c10: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x135c10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x135c14: 0x46075081  sub.s       $f2, $f10, $f7
    ctx->pc = 0x135c14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
    // 0x135c18: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x135c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x135c1c: 0xe4a50010  swc1        $f5, 0x10($a1)
    ctx->pc = 0x135c1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x135c20: 0xe4a40014  swc1        $f4, 0x14($a1)
    ctx->pc = 0x135c20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x135c24: 0x460200c2  mul.s       $f3, $f0, $f2
    ctx->pc = 0x135c24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x135c28: 0x46064101  sub.s       $f4, $f8, $f6
    ctx->pc = 0x135c28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
    // 0x135c2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x135c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x135c30: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x135c30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x135c34: 0x46064080  add.s       $f2, $f8, $f6
    ctx->pc = 0x135c34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x135c38: 0xe4a40018  swc1        $f4, 0x18($a1)
    ctx->pc = 0x135c38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x135c3c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x135c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x135c40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x135c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x135c44: 0xe4a30020  swc1        $f3, 0x20($a1)
    ctx->pc = 0x135c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x135c48: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x135c48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x135c4c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x135c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x135c50: 0xe4a10028  swc1        $f1, 0x28($a1)
    ctx->pc = 0x135c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x135c54: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x135c54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x135c58: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x135c58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x135c5c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x135c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x135c60: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x135c60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x135c64: 0x3e00008  jr          $ra
    ctx->pc = 0x135C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135C64u;
            // 0x135c68: 0xaca3003c  sw          $v1, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135C6Cu;
}
