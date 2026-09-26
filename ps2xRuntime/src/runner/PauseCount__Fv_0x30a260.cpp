#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PauseCount__Fv
// Address: 0x30a260 - 0x30a284
void PauseCount__Fv_0x30a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PauseCount__Fv_0x30a260");
#endif

    ctx->pc = 0x30a260u;

    // 0x30a260: 0x8f83a1b0  lw          $v1, -0x5E50($gp)
    ctx->pc = 0x30a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943152)));
    // 0x30a264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30a264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30a268: 0xaf83a1b0  sw          $v1, -0x5E50($gp)
    ctx->pc = 0x30a268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943152), GPR_U32(ctx, 3));
    // 0x30a26c: 0x8f83a1b0  lw          $v1, -0x5E50($gp)
    ctx->pc = 0x30a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943152)));
    // 0x30a270: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A270u;
    {
        const bool branch_taken_0x30a270 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x30a270) {
            ctx->pc = 0x30A27Cu;
            goto label_30a27c;
        }
    }
    ctx->pc = 0x30A278u;
    // 0x30a278: 0xaf80a1b0  sw          $zero, -0x5E50($gp)
    ctx->pc = 0x30a278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943152), GPR_U32(ctx, 0));
label_30a27c:
    // 0x30a27c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A284u;
}
