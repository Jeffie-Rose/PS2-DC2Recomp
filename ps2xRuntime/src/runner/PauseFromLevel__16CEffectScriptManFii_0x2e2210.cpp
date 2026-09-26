#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseFromLevel__16CEffectScriptManFii
// Address: 0x2e2210 - 0x2e2248
void PauseFromLevel__16CEffectScriptManFii_0x2e2210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseFromLevel__16CEffectScriptManFii_0x2e2210");
#endif

    switch (ctx->pc) {
        case 0x2e221cu: goto label_2e221c;
        default: break;
    }

    ctx->pc = 0x2e2210u;

    // 0x2e2210: 0x8c841188  lw          $a0, 0x1188($a0)
    ctx->pc = 0x2e2210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4488)));
    // 0x2e2214: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E2214u;
    {
        const bool branch_taken_0x2e2214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2214) {
            ctx->pc = 0x2E2240u;
            goto label_2e2240;
        }
    }
    ctx->pc = 0x2E221Cu;
label_2e221c:
    // 0x2e221c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2e221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2e2220: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2220u;
    {
        const bool branch_taken_0x2e2220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e2220) {
            ctx->pc = 0x2E222Cu;
            goto label_2e222c;
        }
    }
    ctx->pc = 0x2E2228u;
    // 0x2e2228: 0xac86013c  sw          $a2, 0x13C($a0)
    ctx->pc = 0x2e2228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 6));
label_2e222c:
    // 0x2e222c: 0x0  nop
    ctx->pc = 0x2e222cu;
    // NOP
    // 0x2e2230: 0x8c840144  lw          $a0, 0x144($a0)
    ctx->pc = 0x2e2230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x2e2234: 0x0  nop
    ctx->pc = 0x2e2234u;
    // NOP
    // 0x2e2238: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E2238u;
    {
        const bool branch_taken_0x2e2238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2238) {
            ctx->pc = 0x2E221Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e221c;
        }
    }
    ctx->pc = 0x2E2240u;
label_2e2240:
    // 0x2e2240: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2248u;
}
