#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeOut__10CFadeInOutFifff
// Address: 0x17d840 - 0x17d8a0
void FadeOut__10CFadeInOutFifff_0x17d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeOut__10CFadeInOutFifff_0x17d840");
#endif

    ctx->pc = 0x17d840u;

    // 0x17d840: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17d844: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D844u;
    {
        const bool branch_taken_0x17d844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d844) {
            ctx->pc = 0x17D854u;
            goto label_17d854;
        }
    }
    ctx->pc = 0x17D84Cu;
    // 0x17d84c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D84Cu;
    {
        const bool branch_taken_0x17d84c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17D850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D84Cu;
            // 0x17d850: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d84c) {
            ctx->pc = 0x17D85Cu;
            goto label_17d85c;
        }
    }
    ctx->pc = 0x17D854u;
label_17d854:
    // 0x17d854: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17d854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17d858: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17d858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17d85c:
    // 0x17d85c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x17d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x17d860: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D860u;
    {
        const bool branch_taken_0x17d860 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D860u;
            // 0x17d864: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d860) {
            ctx->pc = 0x17D870u;
            goto label_17d870;
        }
    }
    ctx->pc = 0x17D868u;
    // 0x17d868: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17D868u;
    {
        const bool branch_taken_0x17d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D868u;
            // 0x17d86c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d868) {
            ctx->pc = 0x17D88Cu;
            goto label_17d88c;
        }
    }
    ctx->pc = 0x17D870u;
label_17d870:
    // 0x17d870: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x17d870u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d874: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x17d874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x17d878: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17d878u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17d87c: 0x0  nop
    ctx->pc = 0x17d87cu;
    // NOP
    // 0x17d880: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17d880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17d884: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17d884u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17d888: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x17d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_17d88c:
    // 0x17d88c: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x17d88cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17d890: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x17d890u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17d894: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x17d894u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x17d898: 0x3e00008  jr          $ra
    ctx->pc = 0x17D898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D898u;
            // 0x17d89c: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D8A0u;
}
