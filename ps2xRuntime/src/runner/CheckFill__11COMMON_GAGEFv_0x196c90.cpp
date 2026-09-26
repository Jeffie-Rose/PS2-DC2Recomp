#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFill__11COMMON_GAGEFv
// Address: 0x196c90 - 0x196cb4
void CheckFill__11COMMON_GAGEFv_0x196c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFill__11COMMON_GAGEFv_0x196c90");
#endif

    ctx->pc = 0x196c90u;

    // 0x196c90: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x196c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196c94: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x196c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x196c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196c9c: 0x0  nop
    ctx->pc = 0x196c9cu;
    // NOP
    // 0x196ca0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x196CA0u;
    {
        const bool branch_taken_0x196ca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x196CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196CA0u;
            // 0x196ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ca0) {
            ctx->pc = 0x196CACu;
            goto label_196cac;
        }
    }
    ctx->pc = 0x196CA8u;
    // 0x196ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196cac:
    // 0x196cac: 0x3e00008  jr          $ra
    ctx->pc = 0x196CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196CB4u;
}
