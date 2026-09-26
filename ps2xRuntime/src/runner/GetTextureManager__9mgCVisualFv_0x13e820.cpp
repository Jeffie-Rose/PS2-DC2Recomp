#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTextureManager__9mgCVisualFv
// Address: 0x13e820 - 0x13e844
void GetTextureManager__9mgCVisualFv_0x13e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTextureManager__9mgCVisualFv_0x13e820");
#endif

    ctx->pc = 0x13e820u;

    // 0x13e820: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13e824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E824u;
    {
        const bool branch_taken_0x13e824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e824) {
            ctx->pc = 0x13E834u;
            goto label_13e834;
        }
    }
    ctx->pc = 0x13E82Cu;
    // 0x13e82c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13E82Cu;
    {
        const bool branch_taken_0x13e82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e82c) {
            ctx->pc = 0x13E83Cu;
            goto label_13e83c;
        }
    }
    ctx->pc = 0x13E834u;
label_13e834:
    // 0x13e834: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x13e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x13e838: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x13e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_13e83c:
    // 0x13e83c: 0x3e00008  jr          $ra
    ctx->pc = 0x13E83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E844u;
}
