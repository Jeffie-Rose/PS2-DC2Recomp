#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAbsWinData__6ClsMesFP4RECT
// Address: 0x15b080 - 0x15b0d8
void SetAbsWinData__6ClsMesFP4RECT_0x15b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAbsWinData__6ClsMesFP4RECT_0x15b080");
#endif

    ctx->pc = 0x15b080u;

    // 0x15b080: 0x8c830190  lw          $v1, 0x190($a0)
    ctx->pc = 0x15b080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x15b084: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x15b084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15b088: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B088u;
    {
        const bool branch_taken_0x15b088 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b088) {
            ctx->pc = 0x15B094u;
            goto label_15b094;
        }
    }
    ctx->pc = 0x15B090u;
    // 0x15b090: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15b090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_15b094:
    // 0x15b094: 0x8c830194  lw          $v1, 0x194($a0)
    ctx->pc = 0x15b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x15b098: 0x28610000  slti        $at, $v1, 0x0
    ctx->pc = 0x15b098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15b09c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B09Cu;
    {
        const bool branch_taken_0x15b09c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b09c) {
            ctx->pc = 0x15B0A8u;
            goto label_15b0a8;
        }
    }
    ctx->pc = 0x15B0A4u;
    // 0x15b0a4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x15b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_15b0a8:
    // 0x15b0a8: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x15b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x15b0ac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15b0acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b0b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B0B0u;
    {
        const bool branch_taken_0x15b0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0b0) {
            ctx->pc = 0x15B0BCu;
            goto label_15b0bc;
        }
    }
    ctx->pc = 0x15B0B8u;
    // 0x15b0b8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x15b0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_15b0bc:
    // 0x15b0bc: 0x8c83019c  lw          $v1, 0x19C($a0)
    ctx->pc = 0x15b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x15b0c0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x15b0c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b0c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B0C4u;
    {
        const bool branch_taken_0x15b0c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b0c4) {
            ctx->pc = 0x15B0D0u;
            goto label_15b0d0;
        }
    }
    ctx->pc = 0x15B0CCu;
    // 0x15b0cc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x15b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_15b0d0:
    // 0x15b0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x15B0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B0D8u;
}
