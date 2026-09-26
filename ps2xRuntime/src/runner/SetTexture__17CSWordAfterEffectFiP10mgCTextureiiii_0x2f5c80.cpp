#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexture__17CSWordAfterEffectFiP10mgCTextureiiii
// Address: 0x2f5c80 - 0x2f5cc0
void SetTexture__17CSWordAfterEffectFiP10mgCTextureiiii_0x2f5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexture__17CSWordAfterEffectFiP10mgCTextureiiii_0x2f5c80");
#endif

    ctx->pc = 0x2f5c80u;

    // 0x2f5c80: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x2f5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x2f5c84: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2f5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f5c88: 0xac860064  sw          $a2, 0x64($a0)
    ctx->pc = 0x2f5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 6));
    // 0x2f5c8c: 0xac870068  sw          $a3, 0x68($a0)
    ctx->pc = 0x2f5c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 7));
    // 0x2f5c90: 0xac88006c  sw          $t0, 0x6C($a0)
    ctx->pc = 0x2f5c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 8));
    // 0x2f5c94: 0xac890070  sw          $t1, 0x70($a0)
    ctx->pc = 0x2f5c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 9));
    // 0x2f5c98: 0xac8a0074  sw          $t2, 0x74($a0)
    ctx->pc = 0x2f5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 10));
    // 0x2f5c9c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x2f5c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x2f5ca0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x2f5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x2f5ca4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2f5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2f5ca8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2f5ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2f5cac: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2f5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x2f5cb0: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x2f5cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x2f5cb4: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x2f5cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x2f5cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5CB8u;
            // 0x2f5cbc: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5CC0u;
}
