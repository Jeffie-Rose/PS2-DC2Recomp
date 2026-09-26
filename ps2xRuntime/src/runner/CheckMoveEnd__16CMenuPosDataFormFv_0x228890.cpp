#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckMoveEnd__16CMenuPosDataFormFv
// Address: 0x228890 - 0x228900
void CheckMoveEnd__16CMenuPosDataFormFv_0x228890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckMoveEnd__16CMenuPosDataFormFv_0x228890");
#endif

    ctx->pc = 0x228890u;

    // 0x228890: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x228890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x228894: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228894u;
    {
        const bool branch_taken_0x228894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228894) {
            ctx->pc = 0x2288B4u;
            goto label_2288b4;
        }
    }
    ctx->pc = 0x22889Cu;
    // 0x22889c: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x22889cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2288a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2288a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2288a4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2288A4u;
    {
        const bool branch_taken_0x2288a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2288A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2288A4u;
            // 0x2288a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288a4) {
            ctx->pc = 0x2288B4u;
            goto label_2288b4;
        }
    }
    ctx->pc = 0x2288ACu;
    // 0x2288ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2288ACu;
    {
        const bool branch_taken_0x2288ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2288ac) {
            ctx->pc = 0x2288F8u;
            goto label_2288f8;
        }
    }
    ctx->pc = 0x2288B4u;
label_2288b4:
    // 0x2288b4: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x2288b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2288b8: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2288b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2288bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2288bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2288c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2288c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2288c4: 0x0  nop
    ctx->pc = 0x2288c4u;
    // NOP
    // 0x2288c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2288C8u;
    {
        const bool branch_taken_0x2288c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2288CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2288C8u;
            // 0x2288cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288c8) {
            ctx->pc = 0x2288F8u;
            goto label_2288f8;
        }
    }
    ctx->pc = 0x2288D0u;
    // 0x2288d0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x2288d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2288d4: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2288d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2288d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2288d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2288dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2288dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2288e0: 0x0  nop
    ctx->pc = 0x2288e0u;
    // NOP
    // 0x2288e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2288E4u;
    {
        const bool branch_taken_0x2288e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2288E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2288E4u;
            // 0x2288e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2288e4) {
            ctx->pc = 0x2288F4u;
            goto label_2288f4;
        }
    }
    ctx->pc = 0x2288ECu;
    // 0x2288ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2288ECu;
    {
        const bool branch_taken_0x2288ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2288ec) {
            ctx->pc = 0x2288F8u;
            goto label_2288f8;
        }
    }
    ctx->pc = 0x2288F4u;
label_2288f4:
    // 0x2288f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2288f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2288f8:
    // 0x2288f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2288F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228900u;
}
