#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexture__7CBubbleFP10mgCTextureii
// Address: 0x20cd00 - 0x20cd10
void SetTexture__7CBubbleFP10mgCTextureii_0x20cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexture__7CBubbleFP10mgCTextureii_0x20cd00");
#endif

    ctx->pc = 0x20cd00u;

    // 0x20cd00: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x20cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x20cd04: 0xa486002c  sh          $a2, 0x2C($a0)
    ctx->pc = 0x20cd04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 6));
    // 0x20cd08: 0x3e00008  jr          $ra
    ctx->pc = 0x20CD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CD08u;
            // 0x20cd0c: 0xa487002e  sh          $a3, 0x2E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20CD10u;
}
