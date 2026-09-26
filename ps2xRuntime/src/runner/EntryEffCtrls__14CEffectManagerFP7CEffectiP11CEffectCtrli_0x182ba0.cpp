#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryEffCtrls__14CEffectManagerFP7CEffectiP11CEffectCtrli
// Address: 0x182ba0 - 0x182bb4
void EntryEffCtrls__14CEffectManagerFP7CEffectiP11CEffectCtrli_0x182ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryEffCtrls__14CEffectManagerFP7CEffectiP11CEffectCtrli_0x182ba0");
#endif

    ctx->pc = 0x182ba0u;

    // 0x182ba0: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x182ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x182ba4: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x182ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x182ba8: 0xac870028  sw          $a3, 0x28($a0)
    ctx->pc = 0x182ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 7));
    // 0x182bac: 0x3e00008  jr          $ra
    ctx->pc = 0x182BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BACu;
            // 0x182bb0: 0xac88002c  sw          $t0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182BB4u;
}
