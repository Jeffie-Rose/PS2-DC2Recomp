#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFadeFlag__12CActionCharaFi
// Address: 0x16aad0 - 0x16ab00
void SetFadeFlag__12CActionCharaFi_0x16aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFadeFlag__12CActionCharaFi_0x16aad0");
#endif

    switch (ctx->pc) {
        case 0x16aad8u: goto label_16aad8;
        default: break;
    }

    ctx->pc = 0x16aad0u;

    // 0x16aad0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AAD0u;
    {
        const bool branch_taken_0x16aad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aad0) {
            ctx->pc = 0x16AAF8u;
            goto label_16aaf8;
        }
    }
    ctx->pc = 0x16AAD8u;
label_16aad8:
    // 0x16aad8: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x16aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x16aadc: 0x8c840678  lw          $a0, 0x678($a0)
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1656)));
    // 0x16aae0: 0x0  nop
    ctx->pc = 0x16aae0u;
    // NOP
    // 0x16aae4: 0x0  nop
    ctx->pc = 0x16aae4u;
    // NOP
    // 0x16aae8: 0x0  nop
    ctx->pc = 0x16aae8u;
    // NOP
    // 0x16aaec: 0x0  nop
    ctx->pc = 0x16aaecu;
    // NOP
    // 0x16aaf0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16AAF0u;
    {
        const bool branch_taken_0x16aaf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aaf0) {
            ctx->pc = 0x16AAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16aad8;
        }
    }
    ctx->pc = 0x16AAF8u;
label_16aaf8:
    // 0x16aaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AB00u;
}
