#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPaseRatio__FiPf
// Address: 0x31fe40 - 0x31fec8
void GetPaseRatio__FiPf_0x31fe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPaseRatio__FiPf_0x31fe40");
#endif

    ctx->pc = 0x31fe40u;

    // 0x31fe40: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fe44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x31fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x31fe48: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x31fe48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x31fe4c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x31fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x31fe50: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x31fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x31fe54: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x31fe54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x31fe58: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x31fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x31fe5c: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x31fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31fe60: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x31fe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31fe64: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x31fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fe68: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x31fe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fe6c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x31fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fe70: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x31fe70u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x31fe74: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x31fe74u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x31fe78: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x31fe78u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x31fe7c: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x31fe7cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x31fe80: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x31fe80u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x31fe84: 0x46052003  div.s       $f0, $f4, $f5
    ctx->pc = 0x31fe84u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[5]); }
    // 0x31fe88: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x31fe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x31fe8c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x31fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fe90: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x31fe90u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x31fe94: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x31fe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x31fe98: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x31fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fe9c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x31fe9cu;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x31fea0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x31fea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x31fea4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x31fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fea8: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x31fea8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x31feac: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x31feacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x31feb0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x31feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31feb4: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x31feb4u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x31feb8: 0x0  nop
    ctx->pc = 0x31feb8u;
    // NOP
    // 0x31febc: 0x0  nop
    ctx->pc = 0x31febcu;
    // NOP
    // 0x31fec0: 0x3e00008  jr          $ra
    ctx->pc = 0x31FEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FEC0u;
            // 0x31fec4: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31FEC8u;
}
