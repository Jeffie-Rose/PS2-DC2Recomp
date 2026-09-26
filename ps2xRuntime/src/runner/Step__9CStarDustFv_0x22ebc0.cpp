#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CStarDustFv
// Address: 0x22ebc0 - 0x22ebf0
void Step__9CStarDustFv_0x22ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CStarDustFv_0x22ebc0");
#endif

    ctx->pc = 0x22ebc0u;

    // 0x22ebc0: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x22ebc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x22ebc4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22EBC4u;
    {
        const bool branch_taken_0x22ebc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ebc4) {
            ctx->pc = 0x22EBE8u;
            goto label_22ebe8;
        }
    }
    ctx->pc = 0x22EBCCu;
    // 0x22ebcc: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x22ebccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22ebd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22ebd4: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x22ebd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x22ebd8: 0x84830010  lh          $v1, 0x10($a0)
    ctx->pc = 0x22ebd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22ebdc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22EBDCu;
    {
        const bool branch_taken_0x22ebdc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x22ebdc) {
            ctx->pc = 0x22EBE8u;
            goto label_22ebe8;
        }
    }
    ctx->pc = 0x22EBE4u;
    // 0x22ebe4: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x22ebe4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
label_22ebe8:
    // 0x22ebe8: 0x3e00008  jr          $ra
    ctx->pc = 0x22EBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EBF0u;
}
