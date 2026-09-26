#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeStep__10CFadeInOutFv
// Address: 0x17d990 - 0x17da4c
void FadeStep__10CFadeInOutFv_0x17d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeStep__10CFadeInOutFv_0x17d990");
#endif

    ctx->pc = 0x17d990u;

    // 0x17d990: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17d994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D994u;
    {
        const bool branch_taken_0x17d994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d994) {
            ctx->pc = 0x17D9A4u;
            goto label_17d9a4;
        }
    }
    ctx->pc = 0x17D99Cu;
    // 0x17d99c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17D99Cu;
    {
        const bool branch_taken_0x17d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D99Cu;
            // 0x17d9a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d99c) {
            ctx->pc = 0x17DA44u;
            goto label_17da44;
        }
    }
    ctx->pc = 0x17D9A4u;
label_17d9a4:
    // 0x17d9a4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17D9A4u;
    {
        const bool branch_taken_0x17d9a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17d9a4) {
            ctx->pc = 0x17D9E0u;
            goto label_17d9e0;
        }
    }
    ctx->pc = 0x17D9ACu;
    // 0x17d9ac: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x17d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d9b0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x17d9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d9b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17d9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17d9b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17d9b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x17d9bc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x17d9bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d9c0: 0x0  nop
    ctx->pc = 0x17d9c0u;
    // NOP
    // 0x17d9c4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x17D9C4u;
    {
        const bool branch_taken_0x17d9c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17D9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9C4u;
            // 0x17d9c8: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9c4) {
            ctx->pc = 0x17DA10u;
            goto label_17da10;
        }
    }
    ctx->pc = 0x17D9CCu;
    // 0x17d9cc: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x17d9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x17d9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d9d4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17d9d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17D9D8u;
    {
        const bool branch_taken_0x17d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9D8u;
            // 0x17d9dc: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9d8) {
            ctx->pc = 0x17DA10u;
            goto label_17da10;
        }
    }
    ctx->pc = 0x17D9E0u;
label_17d9e0:
    // 0x17d9e0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x17d9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17d9e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x17d9e8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x17d9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17d9ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17d9ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17d9f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17d9f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17d9f4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17d9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17d9f8: 0x0  nop
    ctx->pc = 0x17d9f8u;
    // NOP
    // 0x17d9fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x17D9FCu;
    {
        const bool branch_taken_0x17d9fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17DA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D9FCu;
            // 0x17da00: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d9fc) {
            ctx->pc = 0x17DA10u;
            goto label_17da10;
        }
    }
    ctx->pc = 0x17DA04u;
    // 0x17da04: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x17da04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x17da08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17da08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17da0c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x17da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_17da10:
    // 0x17da10: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17da14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DA14u;
    {
        const bool branch_taken_0x17da14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da14) {
            ctx->pc = 0x17DA3Cu;
            goto label_17da3c;
        }
    }
    ctx->pc = 0x17DA1Cu;
    // 0x17da1c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x17da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17da20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DA20u;
    {
        const bool branch_taken_0x17da20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17da20) {
            ctx->pc = 0x17DA3Cu;
            goto label_17da3c;
        }
    }
    ctx->pc = 0x17DA28u;
    // 0x17da28: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x17da2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17da30: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DA30u;
    {
        const bool branch_taken_0x17da30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17da30) {
            ctx->pc = 0x17DA3Cu;
            goto label_17da3c;
        }
    }
    ctx->pc = 0x17DA38u;
    // 0x17da38: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17da38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_17da3c:
    // 0x17da3c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x17da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17da40: 0x0  nop
    ctx->pc = 0x17da40u;
    // NOP
label_17da44:
    // 0x17da44: 0x3e00008  jr          $ra
    ctx->pc = 0x17DA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DA4Cu;
}
