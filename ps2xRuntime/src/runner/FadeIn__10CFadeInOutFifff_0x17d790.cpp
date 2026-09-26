#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeIn__10CFadeInOutFifff
// Address: 0x17d790 - 0x17d7f0
void FadeIn__10CFadeInOutFifff_0x17d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeIn__10CFadeInOutFifff_0x17d790");
#endif

    ctx->pc = 0x17d790u;

    // 0x17d790: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17d794: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D794u;
    {
        const bool branch_taken_0x17d794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D794u;
            // 0x17d798: 0x3c034300  lui         $v1, 0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d794) {
            ctx->pc = 0x17D7A4u;
            goto label_17d7a4;
        }
    }
    ctx->pc = 0x17D79Cu;
    // 0x17d79c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D79Cu;
    {
        const bool branch_taken_0x17d79c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x17d79c) {
            ctx->pc = 0x17D7A8u;
            goto label_17d7a8;
        }
    }
    ctx->pc = 0x17D7A4u;
label_17d7a4:
    // 0x17d7a4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x17d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_17d7a8:
    // 0x17d7a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d7ac: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x17d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x17d7b0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D7B0u;
    {
        const bool branch_taken_0x17d7b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17D7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7B0u;
            // 0x17d7b4: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7b0) {
            ctx->pc = 0x17D7C0u;
            goto label_17d7c0;
        }
    }
    ctx->pc = 0x17D7B8u;
    // 0x17d7b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D7B8u;
    {
        const bool branch_taken_0x17d7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7B8u;
            // 0x17d7bc: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d7b8) {
            ctx->pc = 0x17D7DCu;
            goto label_17d7dc;
        }
    }
    ctx->pc = 0x17D7C0u;
label_17d7c0:
    // 0x17d7c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17d7c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d7c4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x17d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x17d7c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17d7c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d7cc: 0x0  nop
    ctx->pc = 0x17d7ccu;
    // NOP
    // 0x17d7d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d7d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17d7d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17d7d8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17d7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_17d7dc:
    // 0x17d7dc: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x17d7dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17d7e0: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x17d7e0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17d7e4: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x17d7e4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x17d7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D7E8u;
            // 0x17d7ec: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D7F0u;
}
