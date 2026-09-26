#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Add__15mgCTextureBlockFP10mgCTexture
// Address: 0x12c720 - 0x12c778
void Add__15mgCTextureBlockFP10mgCTexture_0x12c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add__15mgCTextureBlockFP10mgCTexture_0x12c720");
#endif

    switch (ctx->pc) {
        case 0x12c744u: goto label_12c744;
        default: break;
    }

    ctx->pc = 0x12c720u;

    // 0x12c720: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x12c720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
    // 0x12c724: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c728: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C728u;
    {
        const bool branch_taken_0x12c728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c728) {
            ctx->pc = 0x12C73Cu;
            goto label_12c73c;
        }
    }
    ctx->pc = 0x12C730u;
    // 0x12c730: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x12c730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x12c734: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12C734u;
    {
        const bool branch_taken_0x12c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c734) {
            ctx->pc = 0x12C770u;
            goto label_12c770;
        }
    }
    ctx->pc = 0x12C73Cu;
label_12c73c:
    // 0x12c73c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12C73Cu;
    {
        const bool branch_taken_0x12c73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c73c) {
            ctx->pc = 0x12C764u;
            goto label_12c764;
        }
    }
    ctx->pc = 0x12C744u;
label_12c744:
    // 0x12c744: 0x8c640068  lw          $a0, 0x68($v1)
    ctx->pc = 0x12c744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x12c748: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C748u;
    {
        const bool branch_taken_0x12c748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c748) {
            ctx->pc = 0x12C75Cu;
            goto label_12c75c;
        }
    }
    ctx->pc = 0x12C750u;
    // 0x12c750: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x12c750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
    // 0x12c754: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C754u;
    {
        const bool branch_taken_0x12c754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c754) {
            ctx->pc = 0x12C770u;
            goto label_12c770;
        }
    }
    ctx->pc = 0x12C75Cu;
label_12c75c:
    // 0x12c75c: 0x0  nop
    ctx->pc = 0x12c75cu;
    // NOP
    // 0x12c760: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x12c760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12c764:
    // 0x12c764: 0x0  nop
    ctx->pc = 0x12c764u;
    // NOP
    // 0x12c768: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x12C768u;
    {
        const bool branch_taken_0x12c768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c768) {
            ctx->pc = 0x12C744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C770u;
label_12c770:
    // 0x12c770: 0x3e00008  jr          $ra
    ctx->pc = 0x12C770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C778u;
}
