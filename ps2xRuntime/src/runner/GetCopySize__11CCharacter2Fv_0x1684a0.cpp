#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCopySize__11CCharacter2Fv
// Address: 0x1684a0 - 0x1684c4
void GetCopySize__11CCharacter2Fv_0x1684a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCopySize__11CCharacter2Fv_0x1684a0");
#endif

    ctx->pc = 0x1684a0u;

    // 0x1684a0: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x1684a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x1684a4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1684A4u;
    {
        const bool branch_taken_0x1684a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1684a4) {
            ctx->pc = 0x1684B4u;
            goto label_1684b4;
        }
    }
    ctx->pc = 0x1684ACu;
    // 0x1684ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1684ACu;
    {
        const bool branch_taken_0x1684ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1684ac) {
            ctx->pc = 0x1684BCu;
            goto label_1684bc;
        }
    }
    ctx->pc = 0x1684B4u;
label_1684b4:
    // 0x1684b4: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x1684b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x1684b8: 0x0  nop
    ctx->pc = 0x1684b8u;
    // NOP
label_1684bc:
    // 0x1684bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1684BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1684C4u;
}
