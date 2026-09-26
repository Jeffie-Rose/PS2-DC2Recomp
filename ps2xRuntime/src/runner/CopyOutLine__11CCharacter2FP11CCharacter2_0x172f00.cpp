#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyOutLine__11CCharacter2FP11CCharacter2
// Address: 0x172f00 - 0x172f58
void CopyOutLine__11CCharacter2FP11CCharacter2_0x172f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyOutLine__11CCharacter2FP11CCharacter2_0x172f00");
#endif

    switch (ctx->pc) {
        case 0x172f2cu: goto label_172f2c;
        default: break;
    }

    ctx->pc = 0x172f00u;

    // 0x172f00: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x172F00u;
    {
        const bool branch_taken_0x172f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f00) {
            ctx->pc = 0x172F50u;
            goto label_172f50;
        }
    }
    ctx->pc = 0x172F08u;
    // 0x172f08: 0x8ca30124  lw          $v1, 0x124($a1)
    ctx->pc = 0x172f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
    // 0x172f0c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x172F0Cu;
    {
        const bool branch_taken_0x172f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f0c) {
            ctx->pc = 0x172F50u;
            goto label_172f50;
        }
    }
    ctx->pc = 0x172F14u;
    // 0x172f14: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x172f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x172f18: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x172F18u;
    {
        const bool branch_taken_0x172f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f18) {
            ctx->pc = 0x172F50u;
            goto label_172f50;
        }
    }
    ctx->pc = 0x172F20u;
    // 0x172f20: 0x8c830124  lw          $v1, 0x124($a0)
    ctx->pc = 0x172f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x172f24: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x172F24u;
    {
        const bool branch_taken_0x172f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f24) {
            ctx->pc = 0x172F4Cu;
            goto label_172f4c;
        }
    }
    ctx->pc = 0x172F2Cu;
label_172f2c:
    // 0x172f2c: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x172f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x172f30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x172f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172f34: 0x0  nop
    ctx->pc = 0x172f34u;
    // NOP
    // 0x172f38: 0x0  nop
    ctx->pc = 0x172f38u;
    // NOP
    // 0x172f3c: 0x0  nop
    ctx->pc = 0x172f3cu;
    // NOP
    // 0x172f40: 0x0  nop
    ctx->pc = 0x172f40u;
    // NOP
    // 0x172f44: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x172F44u;
    {
        const bool branch_taken_0x172f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x172f44) {
            ctx->pc = 0x172F2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172f2c;
        }
    }
    ctx->pc = 0x172F4Cu;
label_172f4c:
    // 0x172f4c: 0x0  nop
    ctx->pc = 0x172f4cu;
    // NOP
label_172f50:
    // 0x172f50: 0x3e00008  jr          $ra
    ctx->pc = 0x172F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172F58u;
}
