#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowMotionName__11CCharacter2Fv
// Address: 0x168420 - 0x168440
void GetNowMotionName__11CCharacter2Fv_0x168420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowMotionName__11CCharacter2Fv_0x168420");
#endif

    ctx->pc = 0x168420u;

    // 0x168420: 0x8c820374  lw          $v0, 0x374($a0)
    ctx->pc = 0x168420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x168424: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168424u;
    {
        const bool branch_taken_0x168424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168424) {
            ctx->pc = 0x168434u;
            goto label_168434;
        }
    }
    ctx->pc = 0x16842Cu;
    // 0x16842c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16842Cu;
    {
        const bool branch_taken_0x16842c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16842c) {
            ctx->pc = 0x168438u;
            goto label_168438;
        }
    }
    ctx->pc = 0x168434u;
label_168434:
    // 0x168434: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168438:
    // 0x168438: 0x3e00008  jr          $ra
    ctx->pc = 0x168438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168440u;
}
