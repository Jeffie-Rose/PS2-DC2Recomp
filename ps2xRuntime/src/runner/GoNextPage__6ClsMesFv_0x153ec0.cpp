#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GoNextPage__6ClsMesFv
// Address: 0x153ec0 - 0x153ef0
void GoNextPage__6ClsMesFv_0x153ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GoNextPage__6ClsMesFv_0x153ec0");
#endif

    ctx->pc = 0x153ec0u;

    // 0x153ec0: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x153ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x153ec4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x153EC4u;
    {
        const bool branch_taken_0x153ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x153ec4) {
            ctx->pc = 0x153EE8u;
            goto label_153ee8;
        }
    }
    ctx->pc = 0x153ECCu;
    // 0x153ecc: 0xac8001c0  sw          $zero, 0x1C0($a0)
    ctx->pc = 0x153eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    // 0x153ed0: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x153ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x153ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x153ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153ed8: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x153ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x153edc: 0xac8017dc  sw          $zero, 0x17DC($a0)
    ctx->pc = 0x153edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6108), GPR_U32(ctx, 0));
    // 0x153ee0: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x153ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x153ee4: 0xac8301d8  sw          $v1, 0x1D8($a0)
    ctx->pc = 0x153ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 3));
label_153ee8:
    // 0x153ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x153EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x153EF0u;
}
