#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMsg__7CDC2MesFi
// Address: 0x21df80 - 0x21df8c
void MakeMsg__7CDC2MesFi_0x21df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMsg__7CDC2MesFi_0x21df80");
#endif

    ctx->pc = 0x21df80u;

    // 0x21df80: 0xa48521e6  sh          $a1, 0x21E6($a0)
    ctx->pc = 0x21df80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8678), (uint16_t)GPR_U32(ctx, 5));
    // 0x21df84: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF84u;
            // 0x21df88: 0xa0802200  sb          $zero, 0x2200($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8704), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DF8Cu;
}
