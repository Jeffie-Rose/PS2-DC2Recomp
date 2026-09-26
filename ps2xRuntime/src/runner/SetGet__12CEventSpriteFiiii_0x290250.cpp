#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGet__12CEventSpriteFiiii
// Address: 0x290250 - 0x290264
void SetGet__12CEventSpriteFiiii_0x290250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGet__12CEventSpriteFiiii_0x290250");
#endif

    ctx->pc = 0x290250u;

    // 0x290250: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x290250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x290254: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x290254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
    // 0x290258: 0xac870060  sw          $a3, 0x60($a0)
    ctx->pc = 0x290258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 7));
    // 0x29025c: 0x3e00008  jr          $ra
    ctx->pc = 0x29025Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29025Cu;
            // 0x290260: 0xac880064  sw          $t0, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290264u;
}
