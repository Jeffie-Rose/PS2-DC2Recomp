#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeIn__11CDngFreeMapFi
// Address: 0x1ee790 - 0x1ee7c8
void FadeIn__11CDngFreeMapFi_0x1ee790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeIn__11CDngFreeMapFi_0x1ee790");
#endif

    ctx->pc = 0x1ee790u;

    // 0x1ee790: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x1ee790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
    // 0x1ee794: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1ee794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1ee798: 0xac8500f4  sw          $a1, 0xF4($a0)
    ctx->pc = 0x1ee798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 5));
    // 0x1ee79c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee7a0: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1ee7a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ee7a4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE7A4u;
    {
        const bool branch_taken_0x1ee7a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7A4u;
            // 0x1ee7a8: 0xac8300f8  sw          $v1, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7a4) {
            ctx->pc = 0x1EE7C0u;
            goto label_1ee7c0;
        }
    }
    ctx->pc = 0x1EE7ACu;
    // 0x1ee7ac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ee7acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee7b0: 0x0  nop
    ctx->pc = 0x1ee7b0u;
    // NOP
    // 0x1ee7b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee7b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ee7b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ee7b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee7bc: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x1ee7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_1ee7c0:
    // 0x1ee7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7C0u;
            // 0x1ee7c4: 0xac8000f0  sw          $zero, 0xF0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE7C8u;
}
