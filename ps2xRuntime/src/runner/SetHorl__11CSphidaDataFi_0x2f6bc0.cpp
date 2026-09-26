#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHorl__11CSphidaDataFi
// Address: 0x2f6bc0 - 0x2f6bc8
void SetHorl__11CSphidaDataFi_0x2f6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHorl__11CSphidaDataFi_0x2f6bc0");
#endif

    ctx->pc = 0x2f6bc0u;

    // 0x2f6bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6BC0u;
            // 0x2f6bc4: 0xa4851478  sh          $a1, 0x1478($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 5240), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6BC8u;
}
