#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Run__9CCharaPasFv
// Address: 0x256d80 - 0x256d98
void Run__9CCharaPasFv_0x256d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Run__9CCharaPasFv_0x256d80");
#endif

    ctx->pc = 0x256d80u;

    // 0x256d80: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x256d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x256d84: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x256D84u;
    {
        const bool branch_taken_0x256d84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x256D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256D84u;
            // 0x256d88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256d84) {
            ctx->pc = 0x256D90u;
            goto label_256d90;
        }
    }
    ctx->pc = 0x256D8Cu;
    // 0x256d8c: 0xac8304a4  sw          $v1, 0x4A4($a0)
    ctx->pc = 0x256d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1188), GPR_U32(ctx, 3));
label_256d90:
    // 0x256d90: 0x3e00008  jr          $ra
    ctx->pc = 0x256D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256D98u;
}
