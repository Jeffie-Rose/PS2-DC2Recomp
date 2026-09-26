#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _Bfree
// Address: 0x127390 - 0x1273bc
void ps2__Bfree_0x127390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Bfree_0x127390");
#endif

    ctx->pc = 0x127390u;

    // 0x127390: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x127390u;
    {
        const bool branch_taken_0x127390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x127390) {
            ctx->pc = 0x1273B4u;
            goto label_1273b4;
        }
    }
    ctx->pc = 0x127398u;
    // 0x127398: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x127398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12739c: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x12739cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1273a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1273a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1273a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1273a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1273a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1273a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1273ac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1273acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1273b0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1273b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1273b4:
    // 0x1273b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1273B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1273BCu;
}
