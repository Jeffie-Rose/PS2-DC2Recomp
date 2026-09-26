#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CEnemyGekirinFv
// Address: 0x1ca060 - 0x1ca0a8
void Step__13CEnemyGekirinFv_0x1ca060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CEnemyGekirinFv_0x1ca060");
#endif

    ctx->pc = 0x1ca060u;

    // 0x1ca060: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1ca060u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca068: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CA068u;
    {
        const bool branch_taken_0x1ca068 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca068) {
            ctx->pc = 0x1CA0A0u;
            goto label_1ca0a0;
        }
    }
    ctx->pc = 0x1CA070u;
    // 0x1ca070: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x1ca070u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1ca074: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ca074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1ca078: 0x24638e50  addiu       $v1, $v1, -0x71B0
    ctx->pc = 0x1ca078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938192));
    // 0x1ca07c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ca080: 0xa0850001  sb          $a1, 0x1($a0)
    ctx->pc = 0x1ca080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ca084: 0x80850001  lb          $a1, 0x1($a0)
    ctx->pc = 0x1ca084u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1ca088: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1ca088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ca08c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ca08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ca090: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ca090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca094: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA094u;
    {
        const bool branch_taken_0x1ca094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA094u;
            // 0x1ca098: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca094) {
            ctx->pc = 0x1CA0A0u;
            goto label_1ca0a0;
        }
    }
    ctx->pc = 0x1CA09Cu;
    // 0x1ca09c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ca09cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1ca0a0:
    // 0x1ca0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA0A8u;
}
