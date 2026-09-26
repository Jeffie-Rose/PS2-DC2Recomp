#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHalfFontWPercent__6ClsMesFf
// Address: 0x152a60 - 0x152a90
void SetHalfFontWPercent__6ClsMesFf_0x152a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHalfFontWPercent__6ClsMesFf_0x152a60");
#endif

    ctx->pc = 0x152a60u;

    // 0x152a60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a64: 0x0  nop
    ctx->pc = 0x152a64u;
    // NOP
    // 0x152a68: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x152a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x152a6c: 0x0  nop
    ctx->pc = 0x152a6cu;
    // NOP
    // 0x152a70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x152A70u;
    {
        const bool branch_taken_0x152a70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x152A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152A70u;
            // 0x152a74: 0x3c033f0c  lui         $v1, 0x3F0C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a70) {
            ctx->pc = 0x152A84u;
            goto label_152a84;
        }
    }
    ctx->pc = 0x152A78u;
    // 0x152a78: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x152a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x152a7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x152A7Cu;
    {
        const bool branch_taken_0x152a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152A7Cu;
            // 0x152a80: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a7c) {
            ctx->pc = 0x152A88u;
            goto label_152a88;
        }
    }
    ctx->pc = 0x152A84u;
label_152a84:
    // 0x152a84: 0xe48c00c8  swc1        $f12, 0xC8($a0)
    ctx->pc = 0x152a84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 200), bits); }
label_152a88:
    // 0x152a88: 0x3e00008  jr          $ra
    ctx->pc = 0x152A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152A90u;
}
