#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPhototWorkAdr__15CInventUserDataFv
// Address: 0x1feaf0 - 0x1feaf8
void GetPhototWorkAdr__15CInventUserDataFv_0x1feaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPhototWorkAdr__15CInventUserDataFv_0x1feaf0");
#endif

    ctx->pc = 0x1feaf0u;

    // 0x1feaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEAF0u;
            // 0x1feaf4: 0x24820d60  addiu       $v0, $a0, 0xD60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEAF8u;
}
