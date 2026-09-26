#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetWorkBuffer__16CEffectScriptManFP9mgCMemory
// Address: 0x2dff10 - 0x2dff24
void SetWorkBuffer__16CEffectScriptManFP9mgCMemory_0x2dff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWorkBuffer__16CEffectScriptManFP9mgCMemory_0x2dff10");
#endif

    ctx->pc = 0x2dff10u;

    // 0x2dff10: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DFF10u;
    {
        const bool branch_taken_0x2dff10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dff10) {
            ctx->pc = 0x2DFF1Cu;
            goto label_2dff1c;
        }
    }
    ctx->pc = 0x2DFF18u;
    // 0x2dff18: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2dff18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_2dff1c:
    // 0x2dff1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFF24u;
}
