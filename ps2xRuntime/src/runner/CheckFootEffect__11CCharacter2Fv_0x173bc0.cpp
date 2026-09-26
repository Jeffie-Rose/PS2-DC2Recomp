#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFootEffect__11CCharacter2Fv
// Address: 0x173bc0 - 0x173be4
void CheckFootEffect__11CCharacter2Fv_0x173bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFootEffect__11CCharacter2Fv_0x173bc0");
#endif

    ctx->pc = 0x173bc0u;

    // 0x173bc0: 0x8c82059c  lw          $v0, 0x59C($a0)
    ctx->pc = 0x173bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1436)));
    // 0x173bc4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173BC4u;
    {
        const bool branch_taken_0x173bc4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x173BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BC4u;
            // 0x173bc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bc4) {
            ctx->pc = 0x173BD4u;
            goto label_173bd4;
        }
    }
    ctx->pc = 0x173BCCu;
    // 0x173bcc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x173BCCu;
    {
        const bool branch_taken_0x173bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173bcc) {
            ctx->pc = 0x173BDCu;
            goto label_173bdc;
        }
    }
    ctx->pc = 0x173BD4u;
label_173bd4:
    // 0x173bd4: 0x8c820580  lw          $v0, 0x580($a0)
    ctx->pc = 0x173bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x173bd8: 0x0  nop
    ctx->pc = 0x173bd8u;
    // NOP
label_173bdc:
    // 0x173bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x173BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173BE4u;
}
