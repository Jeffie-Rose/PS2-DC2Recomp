#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevFontIdle
// Address: 0x104de0 - 0x104e20
void sceDevFontIdle_0x104de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontIdle_0x104de0");
#endif

    switch (ctx->pc) {
        case 0x104df8u: goto label_104df8;
        default: break;
    }

    ctx->pc = 0x104de0u;

    // 0x104de0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x104de4: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x104de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x104de8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x104dec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x104decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x104df0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x104DF0u;
    {
        const bool branch_taken_0x104df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x104DF0u;
            // 0x104df4: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104df0) {
            ctx->pc = 0x104E18u;
            goto label_104e18;
        }
    }
    ctx->pc = 0x104DF8u;
label_104df8:
    // 0x104df8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x104df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x104dfc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x104dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x104e00: 0x0  nop
    ctx->pc = 0x104e00u;
    // NOP
    // 0x104e04: 0x0  nop
    ctx->pc = 0x104e04u;
    // NOP
    // 0x104e08: 0x0  nop
    ctx->pc = 0x104e08u;
    // NOP
    // 0x104e0c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104E0Cu;
    {
        const bool branch_taken_0x104e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104e0c) {
            ctx->pc = 0x104DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_104df8;
        }
    }
    ctx->pc = 0x104E14u;
    // 0x104e14: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x104e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_104e18:
    // 0x104e18: 0x3e00008  jr          $ra
    ctx->pc = 0x104E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x104E20u;
}
