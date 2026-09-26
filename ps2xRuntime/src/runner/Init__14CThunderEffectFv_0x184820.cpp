#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init__14CThunderEffectFv
// Address: 0x184820 - 0x184834
void Init__14CThunderEffectFv_0x184820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__14CThunderEffectFv_0x184820");
#endif

    ctx->pc = 0x184820u;

    // 0x184820: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x184820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x184824: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x184824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x184828: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x184828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x18482c: 0x3e00008  jr          $ra
    ctx->pc = 0x18482Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18482Cu;
            // 0x184830: 0xac800098  sw          $zero, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184834u;
}
