#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetInfoID__10CEditPartsFv
// Address: 0x1b5a50 - 0x1b5a70
void GetInfoID__10CEditPartsFv_0x1b5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInfoID__10CEditPartsFv_0x1b5a50");
#endif

    ctx->pc = 0x1b5a50u;

    // 0x1b5a50: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x1b5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x1b5a54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5A54u;
    {
        const bool branch_taken_0x1b5a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a54) {
            ctx->pc = 0x1B5A64u;
            goto label_1b5a64;
        }
    }
    ctx->pc = 0x1B5A5Cu;
    // 0x1b5a5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5A5Cu;
    {
        const bool branch_taken_0x1b5a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5A5Cu;
            // 0x1b5a60: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a5c) {
            ctx->pc = 0x1B5A68u;
            goto label_1b5a68;
        }
    }
    ctx->pc = 0x1B5A64u;
label_1b5a64:
    // 0x1b5a64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b5a68:
    // 0x1b5a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5A70u;
}
