#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMode__10CAfterWireFi
// Address: 0x1c23c0 - 0x1c23d8
void SetMode__10CAfterWireFi_0x1c23c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMode__10CAfterWireFi_0x1c23c0");
#endif

    ctx->pc = 0x1c23c0u;

    // 0x1c23c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1c23c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1c23c4: 0xa4800116  sh          $zero, 0x116($a0)
    ctx->pc = 0x1c23c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 278), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c23c8: 0xa4800118  sh          $zero, 0x118($a0)
    ctx->pc = 0x1c23c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c23cc: 0xa4800112  sh          $zero, 0x112($a0)
    ctx->pc = 0x1c23ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c23d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C23D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C23D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C23D0u;
            // 0x1c23d4: 0xa4800114  sh          $zero, 0x114($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 276), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C23D8u;
}
