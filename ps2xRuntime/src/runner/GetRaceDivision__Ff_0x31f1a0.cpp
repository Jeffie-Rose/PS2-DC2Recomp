#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRaceDivision__Ff
// Address: 0x31f1a0 - 0x31f24c
void GetRaceDivision__Ff_0x31f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRaceDivision__Ff_0x31f1a0");
#endif

    ctx->pc = 0x31f1a0u;

    // 0x31f1a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x31f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x31f1a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f1a8: 0x0  nop
    ctx->pc = 0x31f1a8u;
    // NOP
    // 0x31f1ac: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31f1acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f1b0: 0x0  nop
    ctx->pc = 0x31f1b0u;
    // NOP
    // 0x31f1b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31F1B4u;
    {
        const bool branch_taken_0x31f1b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1B4u;
            // 0x31f1b8: 0x3c0240c0  lui         $v0, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1b4) {
            ctx->pc = 0x31F1C4u;
            goto label_31f1c4;
        }
    }
    ctx->pc = 0x31F1BCu;
    // 0x31f1bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x31F1BCu;
    {
        const bool branch_taken_0x31f1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1BCu;
            // 0x31f1c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1bc) {
            ctx->pc = 0x31F244u;
            goto label_31f244;
        }
    }
    ctx->pc = 0x31F1C4u;
label_31f1c4:
    // 0x31f1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f1c8: 0x0  nop
    ctx->pc = 0x31f1c8u;
    // NOP
    // 0x31f1cc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31f1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f1d0: 0x0  nop
    ctx->pc = 0x31f1d0u;
    // NOP
    // 0x31f1d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31F1D4u;
    {
        const bool branch_taken_0x31f1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1D4u;
            // 0x31f1d8: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1d4) {
            ctx->pc = 0x31F1E4u;
            goto label_31f1e4;
        }
    }
    ctx->pc = 0x31F1DCu;
    // 0x31f1dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x31F1DCu;
    {
        const bool branch_taken_0x31f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1DCu;
            // 0x31f1e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1dc) {
            ctx->pc = 0x31F244u;
            goto label_31f244;
        }
    }
    ctx->pc = 0x31F1E4u;
label_31f1e4:
    // 0x31f1e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f1e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f1e8: 0x0  nop
    ctx->pc = 0x31f1e8u;
    // NOP
    // 0x31f1ec: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31f1ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f1f0: 0x0  nop
    ctx->pc = 0x31f1f0u;
    // NOP
    // 0x31f1f4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31F1F4u;
    {
        const bool branch_taken_0x31f1f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1F4u;
            // 0x31f1f8: 0x3c024160  lui         $v0, 0x4160 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1f4) {
            ctx->pc = 0x31F204u;
            goto label_31f204;
        }
    }
    ctx->pc = 0x31F1FCu;
    // 0x31f1fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31F1FCu;
    {
        const bool branch_taken_0x31f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F1FCu;
            // 0x31f200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f1fc) {
            ctx->pc = 0x31F244u;
            goto label_31f244;
        }
    }
    ctx->pc = 0x31F204u;
label_31f204:
    // 0x31f204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f208: 0x0  nop
    ctx->pc = 0x31f208u;
    // NOP
    // 0x31f20c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31f20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f210: 0x0  nop
    ctx->pc = 0x31f210u;
    // NOP
    // 0x31f214: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31F214u;
    {
        const bool branch_taken_0x31f214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F214u;
            // 0x31f218: 0x3c024180  lui         $v0, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f214) {
            ctx->pc = 0x31F224u;
            goto label_31f224;
        }
    }
    ctx->pc = 0x31F21Cu;
    // 0x31f21c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31F21Cu;
    {
        const bool branch_taken_0x31f21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F21Cu;
            // 0x31f220: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f21c) {
            ctx->pc = 0x31F244u;
            goto label_31f244;
        }
    }
    ctx->pc = 0x31F224u;
label_31f224:
    // 0x31f224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f228: 0x0  nop
    ctx->pc = 0x31f228u;
    // NOP
    // 0x31f22c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31f22cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31f230: 0x0  nop
    ctx->pc = 0x31f230u;
    // NOP
    // 0x31f234: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31F234u;
    {
        const bool branch_taken_0x31f234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F234u;
            // 0x31f238: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f234) {
            ctx->pc = 0x31F244u;
            goto label_31f244;
        }
    }
    ctx->pc = 0x31F23Cu;
    // 0x31f23c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x31F23Cu;
    {
        const bool branch_taken_0x31f23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F23Cu;
            // 0x31f240: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f23c) {
            ctx->pc = 0x31F244u;
            goto label_31f244;
        }
    }
    ctx->pc = 0x31F244u;
label_31f244:
    // 0x31f244: 0x3e00008  jr          $ra
    ctx->pc = 0x31F244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31F24Cu;
}
