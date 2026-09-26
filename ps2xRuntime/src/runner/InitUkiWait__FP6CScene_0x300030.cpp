#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitUkiWait__FP6CScene
// Address: 0x300030 - 0x300048
void InitUkiWait__FP6CScene_0x300030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitUkiWait__FP6CScene_0x300030");
#endif

    ctx->pc = 0x300030u;

    // 0x300030: 0xaf80a098  sw          $zero, -0x5F68($gp)
    ctx->pc = 0x300030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942872), GPR_U32(ctx, 0));
    // 0x300034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300038: 0xaf80a010  sw          $zero, -0x5FF0($gp)
    ctx->pc = 0x300038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942736), GPR_U32(ctx, 0));
    // 0x30003c: 0xaf80a014  sw          $zero, -0x5FEC($gp)
    ctx->pc = 0x30003cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942740), GPR_U32(ctx, 0));
    // 0x300040: 0x3e00008  jr          $ra
    ctx->pc = 0x300040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300040u;
            // 0x300044: 0xaf80a09c  sw          $zero, -0x5F64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300048u;
}
