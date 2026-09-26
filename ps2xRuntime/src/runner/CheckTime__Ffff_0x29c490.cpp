#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckTime__Ffff
// Address: 0x29c490 - 0x29c524
void CheckTime__Ffff_0x29c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckTime__Ffff_0x29c490");
#endif

    ctx->pc = 0x29c490u;

    // 0x29c490: 0x460d7036  c.le.s      $f14, $f13
    ctx->pc = 0x29c490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c494: 0x0  nop
    ctx->pc = 0x29c494u;
    // NOP
    // 0x29c498: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x29C498u;
    {
        const bool branch_taken_0x29c498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c498) {
            ctx->pc = 0x29C4D4u;
            goto label_29c4d4;
        }
    }
    ctx->pc = 0x29C4A0u;
    // 0x29c4a0: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x29c4a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c4a4: 0x0  nop
    ctx->pc = 0x29c4a4u;
    // NOP
    // 0x29c4a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C4A8u;
    {
        const bool branch_taken_0x29c4a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c4a8) {
            ctx->pc = 0x29C4B8u;
            goto label_29c4b8;
        }
    }
    ctx->pc = 0x29C4B0u;
    // 0x29c4b0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29C4B0u;
    {
        const bool branch_taken_0x29c4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4B0u;
            // 0x29c4b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4b0) {
            ctx->pc = 0x29C51Cu;
            goto label_29c51c;
        }
    }
    ctx->pc = 0x29C4B8u;
label_29c4b8:
    // 0x29c4b8: 0x460e6034  c.lt.s      $f12, $f14
    ctx->pc = 0x29c4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c4bc: 0x0  nop
    ctx->pc = 0x29c4bcu;
    // NOP
    // 0x29c4c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x29C4C0u;
    {
        const bool branch_taken_0x29c4c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4C0u;
            // 0x29c4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4c0) {
            ctx->pc = 0x29C4CCu;
            goto label_29c4cc;
        }
    }
    ctx->pc = 0x29C4C8u;
    // 0x29c4c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c4cc:
    // 0x29c4cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29C4CCu;
    {
        const bool branch_taken_0x29c4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4CCu;
            // 0x29c4d0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4cc) {
            ctx->pc = 0x29C51Cu;
            goto label_29c51c;
        }
    }
    ctx->pc = 0x29C4D4u;
label_29c4d4:
    // 0x29c4d4: 0x460e6836  c.le.s      $f13, $f14
    ctx->pc = 0x29c4d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c4d8: 0x0  nop
    ctx->pc = 0x29c4d8u;
    // NOP
    // 0x29c4dc: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x29C4DCu;
    {
        const bool branch_taken_0x29c4dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4DCu;
            // 0x29c4e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4dc) {
            ctx->pc = 0x29C51Cu;
            goto label_29c51c;
        }
    }
    ctx->pc = 0x29C4E4u;
    // 0x29c4e4: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x29c4e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c4e8: 0x0  nop
    ctx->pc = 0x29c4e8u;
    // NOP
    // 0x29c4ec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29C4ECu;
    {
        const bool branch_taken_0x29c4ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c4ec) {
            ctx->pc = 0x29C4FCu;
            goto label_29c4fc;
        }
    }
    ctx->pc = 0x29C4F4u;
    // 0x29c4f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29C4F4u;
    {
        const bool branch_taken_0x29c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C4F4u;
            // 0x29c4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4f4) {
            ctx->pc = 0x29C51Cu;
            goto label_29c51c;
        }
    }
    ctx->pc = 0x29C4FCu;
label_29c4fc:
    // 0x29c4fc: 0x460e6034  c.lt.s      $f12, $f14
    ctx->pc = 0x29c4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c500: 0x0  nop
    ctx->pc = 0x29c500u;
    // NOP
    // 0x29c504: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29C504u;
    {
        const bool branch_taken_0x29c504 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C504u;
            // 0x29c508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c504) {
            ctx->pc = 0x29C51Cu;
            goto label_29c51c;
        }
    }
    ctx->pc = 0x29C50Cu;
    // 0x29c50c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29C510u;
    {
        const bool branch_taken_0x29c510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c510) {
            ctx->pc = 0x29C51Cu;
            goto label_29c51c;
        }
    }
    ctx->pc = 0x29C518u;
    // 0x29c518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29c51c:
    // 0x29c51c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C524u;
}
