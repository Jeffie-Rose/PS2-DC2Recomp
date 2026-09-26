#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InstallCancel__Fv
// Address: 0x31c260 - 0x31c26c
void InstallCancel__Fv_0x31c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InstallCancel__Fv_0x31c260");
#endif

    ctx->pc = 0x31c260u;

    // 0x31c260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c264: 0x3e00008  jr          $ra
    ctx->pc = 0x31C264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C264u;
            // 0x31c268: 0xaf83a3e4  sw          $v1, -0x5C1C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C26Cu;
}
