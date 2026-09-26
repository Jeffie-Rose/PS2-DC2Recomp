#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__13CRandomCircleFv
// Address: 0x28c160 - 0x28c178
void Clear__13CRandomCircleFv_0x28c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__13CRandomCircleFv_0x28c160");
#endif

    ctx->pc = 0x28c160u;

    // 0x28c160: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x28c160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x28c164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28c164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c168: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x28c168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x28c16c: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x28c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x28c170: 0x3e00008  jr          $ra
    ctx->pc = 0x28C170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C170u;
            // 0x28c174: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C178u;
}
