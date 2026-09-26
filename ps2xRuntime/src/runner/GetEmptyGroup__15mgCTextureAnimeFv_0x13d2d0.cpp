#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEmptyGroup__15mgCTextureAnimeFv
// Address: 0x13d2d0 - 0x13d31c
void GetEmptyGroup__15mgCTextureAnimeFv_0x13d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEmptyGroup__15mgCTextureAnimeFv_0x13d2d0");
#endif

    switch (ctx->pc) {
        case 0x13d2dcu: goto label_13d2dc;
        default: break;
    }

    ctx->pc = 0x13d2d0u;

    // 0x13d2d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13d2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d2d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13D2D4u;
    {
        const bool branch_taken_0x13d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d2d4) {
            ctx->pc = 0x13D2FCu;
            goto label_13d2fc;
        }
    }
    ctx->pc = 0x13D2DCu;
label_13d2dc:
    // 0x13d2dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13d2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13d2e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d2e4: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x13d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x13d2e8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D2E8u;
    {
        const bool branch_taken_0x13d2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d2e8) {
            ctx->pc = 0x13D2F8u;
            goto label_13d2f8;
        }
    }
    ctx->pc = 0x13D2F0u;
    // 0x13d2f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13D2F0u;
    {
        const bool branch_taken_0x13d2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d2f0) {
            ctx->pc = 0x13D314u;
            goto label_13d314;
        }
    }
    ctx->pc = 0x13D2F8u;
label_13d2f8:
    // 0x13d2f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_13d2fc:
    // 0x13d2fc: 0x0  nop
    ctx->pc = 0x13d2fcu;
    // NOP
    // 0x13d300: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d304: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x13d304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13d308: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13D308u;
    {
        const bool branch_taken_0x13d308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d308) {
            ctx->pc = 0x13D2DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13d2dc;
        }
    }
    ctx->pc = 0x13D310u;
    // 0x13d310: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13d310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13d314:
    // 0x13d314: 0x3e00008  jr          $ra
    ctx->pc = 0x13D314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D31Cu;
}
