#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__39mgCObjectStack<21CList<12EMAP_MESSAGE>>Fv
// Address: 0x285b30 - 0x285b38
void Initialize__39mgCObjectStack_21CList_12EMAP_MESSAGE__Fv_0x285b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__39mgCObjectStack_21CList_12EMAP_MESSAGE__Fv_0x285b30");
#endif

    ctx->pc = 0x285b30u;

    // 0x285b30: 0x3e00008  jr          $ra
    ctx->pc = 0x285B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B30u;
            // 0x285b34: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285B38u;
}
