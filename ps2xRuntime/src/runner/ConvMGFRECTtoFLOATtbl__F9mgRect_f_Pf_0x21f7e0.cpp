#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvMGFRECTtoFLOATtbl__F9mgRect<f>Pf
// Address: 0x21f7e0 - 0x21f840
void ConvMGFRECTtoFLOATtbl__F9mgRect_f_Pf_0x21f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvMGFRECTtoFLOATtbl__F9mgRect_f_Pf_0x21f7e0");
#endif

    ctx->pc = 0x21f7e0u;

    // 0x21f7e0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x21f7e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21f7e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f7e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f7e8: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x21f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x21f7ec: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x21f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x21f7f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x21f7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f7f4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x21f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x21f7f8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x21f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21f7fc: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x21f7fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21f800: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x21f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f804: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x21f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21f808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21f80c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x21f80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21f810: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x21f810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x21f814: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x21f814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f818: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x21f818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x21f81c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x21f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f820: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x21f820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x21f824: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x21f824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x21f828: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x21f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f82c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x21f82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x21f830: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x21f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f834: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x21f834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x21f838: 0x3e00008  jr          $ra
    ctx->pc = 0x21F838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F838u;
            // 0x21f83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F840u;
}
