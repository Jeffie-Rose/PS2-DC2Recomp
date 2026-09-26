#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Disable__15mgCTextureAnimeFi
// Address: 0x13d840 - 0x13d880
void Disable__15mgCTextureAnimeFi_0x13d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Disable__15mgCTextureAnimeFi_0x13d840");
#endif

    ctx->pc = 0x13d840u;

    // 0x13d840: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D840u;
    {
        const bool branch_taken_0x13d840 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x13d840) {
            ctx->pc = 0x13D858u;
            goto label_13d858;
        }
    }
    ctx->pc = 0x13D848u;
    // 0x13d848: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d84c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x13d84cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13d850: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D850u;
    {
        const bool branch_taken_0x13d850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d850) {
            ctx->pc = 0x13D860u;
            goto label_13d860;
        }
    }
    ctx->pc = 0x13D858u;
label_13d858:
    // 0x13d858: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D858u;
    {
        const bool branch_taken_0x13d858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d858) {
            ctx->pc = 0x13D878u;
            goto label_13d878;
        }
    }
    ctx->pc = 0x13D860u;
label_13d860:
    // 0x13d860: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x13d860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d864: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13d864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13d868: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x13d868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13d86c: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x13d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x13d870: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x13d870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
    // 0x13d874: 0xac800184  sw          $zero, 0x184($a0)
    ctx->pc = 0x13d874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 388), GPR_U32(ctx, 0));
label_13d878:
    // 0x13d878: 0x3e00008  jr          $ra
    ctx->pc = 0x13D878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D880u;
}
