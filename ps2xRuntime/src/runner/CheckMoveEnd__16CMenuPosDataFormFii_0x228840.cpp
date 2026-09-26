#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMoveEnd__16CMenuPosDataFormFii
// Address: 0x228840 - 0x228884
void CheckMoveEnd__16CMenuPosDataFormFii_0x228840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMoveEnd__16CMenuPosDataFormFii_0x228840");
#endif

    ctx->pc = 0x228840u;

    // 0x228840: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x228840u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228844: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x228844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228848: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22884c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x22884cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228850: 0x0  nop
    ctx->pc = 0x228850u;
    // NOP
    // 0x228854: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x228854u;
    {
        const bool branch_taken_0x228854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228854u;
            // 0x228858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228854) {
            ctx->pc = 0x22887Cu;
            goto label_22887c;
        }
    }
    ctx->pc = 0x22885Cu;
    // 0x22885c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x22885cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228860: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x228860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228868: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x228868u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22886c: 0x0  nop
    ctx->pc = 0x22886cu;
    // NOP
    // 0x228870: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x228870u;
    {
        const bool branch_taken_0x228870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x228874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228870u;
            // 0x228874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228870) {
            ctx->pc = 0x22887Cu;
            goto label_22887c;
        }
    }
    ctx->pc = 0x228878u;
    // 0x228878: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x228878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22887c:
    // 0x22887c: 0x3e00008  jr          $ra
    ctx->pc = 0x22887Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228884u;
}
