#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartFishEffect__12CAquaFishEffFi
// Address: 0x20ef50 - 0x20ef74
void StartFishEffect__12CAquaFishEffFi_0x20ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartFishEffect__12CAquaFishEffFi_0x20ef50");
#endif

    ctx->pc = 0x20ef50u;

    // 0x20ef50: 0xa4850008  sh          $a1, 0x8($a0)
    ctx->pc = 0x20ef50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x20ef54: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x20ef58: 0x94850008  lhu         $a1, 0x8($a0)
    ctx->pc = 0x20ef58u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20ef5c: 0x2463f960  addiu       $v1, $v1, -0x6A0
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965600));
    // 0x20ef60: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x20ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ef64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20ef68: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ef6c: 0x3e00008  jr          $ra
    ctx->pc = 0x20EF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EF6Cu;
            // 0x20ef70: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20EF74u;
}
