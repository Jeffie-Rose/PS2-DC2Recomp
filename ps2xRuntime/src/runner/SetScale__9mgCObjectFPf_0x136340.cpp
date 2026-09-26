#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScale__9mgCObjectFPf
// Address: 0x136340 - 0x1363b8
void SetScale__9mgCObjectFPf_0x136340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScale__9mgCObjectFPf_0x136340");
#endif

    ctx->pc = 0x136340u;

    // 0x136340: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x136340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136344: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x136344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136348: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x136348u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13634c: 0x0  nop
    ctx->pc = 0x13634cu;
    // NOP
    // 0x136350: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x136350u;
    {
        const bool branch_taken_0x136350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136350u;
            // 0x136354: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136350) {
            ctx->pc = 0x13638Cu;
            goto label_13638c;
        }
    }
    ctx->pc = 0x136358u;
    // 0x136358: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x136358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13635c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136360: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x136360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136364: 0x0  nop
    ctx->pc = 0x136364u;
    // NOP
    // 0x136368: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x136368u;
    {
        const bool branch_taken_0x136368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x136368) {
            ctx->pc = 0x136388u;
            goto label_136388;
        }
    }
    ctx->pc = 0x136370u;
    // 0x136370: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x136370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136374: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x136374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136378: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x136378u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13637c: 0x0  nop
    ctx->pc = 0x13637cu;
    // NOP
    // 0x136380: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x136380u;
    {
        const bool branch_taken_0x136380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136380) {
            ctx->pc = 0x1363B0u;
            goto label_1363b0;
        }
    }
    ctx->pc = 0x136388u;
label_136388:
    // 0x136388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13638c:
    // 0x13638c: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x13638cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x136390: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x136390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136394: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x136394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x136398: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x136398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13639c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x13639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1363a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1363a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1363a4: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1363a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x1363a8: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x1363a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x1363ac: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1363acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_1363b0:
    // 0x1363b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1363B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1363B8u;
}
