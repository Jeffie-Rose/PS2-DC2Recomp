#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CParticleFv
// Address: 0x281a60 - 0x281b04
void Step__9CParticleFv_0x281a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CParticleFv_0x281a60");
#endif

    ctx->pc = 0x281a60u;

    // 0x281a60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x281a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281a64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281A64u;
    {
        const bool branch_taken_0x281a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A64u;
            // 0x281a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a64) {
            ctx->pc = 0x281A74u;
            goto label_281a74;
        }
    }
    ctx->pc = 0x281A6Cu;
    // 0x281a6c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x281A6Cu;
    {
        const bool branch_taken_0x281a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281a6c) {
            ctx->pc = 0x281AFCu;
            goto label_281afc;
        }
    }
    ctx->pc = 0x281A74u;
label_281a74:
    // 0x281a74: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x281a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281a78: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x281a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281a7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x281a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x281a80: 0x0  nop
    ctx->pc = 0x281a80u;
    // NOP
    // 0x281a84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x281A84u;
    {
        const bool branch_taken_0x281a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x281a84) {
            ctx->pc = 0x281A98u;
            goto label_281a98;
        }
    }
    ctx->pc = 0x281A8Cu;
    // 0x281a8c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x281a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x281a90: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x281A90u;
    {
        const bool branch_taken_0x281a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A90u;
            // 0x281a94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a90) {
            ctx->pc = 0x281AFCu;
            goto label_281afc;
        }
    }
    ctx->pc = 0x281A98u;
label_281a98:
    // 0x281a98: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x281a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281aa0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x281aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281aa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281aa8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x281aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x281aac: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x281aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281ab0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x281ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281ab4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281ab8: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x281ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x281abc: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x281abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281ac0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x281ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281ac4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281ac8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x281ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x281acc: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x281accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281ad0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x281ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281ad4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281ad8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x281ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x281adc: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x281adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281ae0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x281ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281ae4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281ae8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x281ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x281aec: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x281aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281af0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x281af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x281af4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281af8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x281af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_281afc:
    // 0x281afc: 0x3e00008  jr          $ra
    ctx->pc = 0x281AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281B04u;
}
