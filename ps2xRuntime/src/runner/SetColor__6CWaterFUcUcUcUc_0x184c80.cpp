#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetColor__6CWaterFUcUcUcUc
// Address: 0x184c80 - 0x184ca4
void SetColor__6CWaterFUcUcUcUc_0x184c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetColor__6CWaterFUcUcUcUc_0x184c80");
#endif

    ctx->pc = 0x184c80u;

    // 0x184c80: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x184c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x184c84: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x184c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x184c88: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x184c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x184c8c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x184c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x184c90: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x184c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x184c94: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x184c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x184c98: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x184c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x184c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x184C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C9Cu;
            // 0x184ca0: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184CA4u;
}
