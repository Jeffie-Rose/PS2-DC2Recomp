#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeOut__11CDngFreeMapFi
// Address: 0x1ee7d0 - 0x1ee80c
void FadeOut__11CDngFreeMapFi_0x1ee7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeOut__11CDngFreeMapFi_0x1ee7d0");
#endif

    ctx->pc = 0x1ee7d0u;

    // 0x1ee7d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee7d4: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1ee7d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ee7d8: 0xac8300fc  sw          $v1, 0xFC($a0)
    ctx->pc = 0x1ee7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 3));
    // 0x1ee7dc: 0x3c03c300  lui         $v1, 0xC300
    ctx->pc = 0x1ee7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49920 << 16));
    // 0x1ee7e0: 0xac8500f4  sw          $a1, 0xF4($a0)
    ctx->pc = 0x1ee7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 5));
    // 0x1ee7e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee7e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee7e8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE7E8u;
    {
        const bool branch_taken_0x1ee7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EE7E8u;
            // 0x1ee7ec: 0xac8300f8  sw          $v1, 0xF8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee7e8) {
            ctx->pc = 0x1EE804u;
            goto label_1ee804;
        }
    }
    ctx->pc = 0x1EE7F0u;
    // 0x1ee7f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ee7f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee7f4: 0x0  nop
    ctx->pc = 0x1ee7f4u;
    // NOP
    // 0x1ee7f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ee7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ee7fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ee7fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee800: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x1ee800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_1ee804:
    // 0x1ee804: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EE80Cu;
}
