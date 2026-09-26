#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Enable__15mgCTextureAnimeFi
// Address: 0x13d800 - 0x13d838
void Enable__15mgCTextureAnimeFi_0x13d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Enable__15mgCTextureAnimeFi_0x13d800");
#endif

    ctx->pc = 0x13d800u;

    // 0x13d800: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D800u;
    {
        const bool branch_taken_0x13d800 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x13d800) {
            ctx->pc = 0x13D818u;
            goto label_13d818;
        }
    }
    ctx->pc = 0x13D808u;
    // 0x13d808: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13d808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d80c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x13d80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13d810: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D810u;
    {
        const bool branch_taken_0x13d810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d810) {
            ctx->pc = 0x13D820u;
            goto label_13d820;
        }
    }
    ctx->pc = 0x13D818u;
label_13d818:
    // 0x13d818: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D818u;
    {
        const bool branch_taken_0x13d818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d818) {
            ctx->pc = 0x13D830u;
            goto label_13d830;
        }
    }
    ctx->pc = 0x13D820u;
label_13d820:
    // 0x13d820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13d820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d824: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d82c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x13d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_13d830:
    // 0x13d830: 0x3e00008  jr          $ra
    ctx->pc = 0x13D830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D838u;
}
