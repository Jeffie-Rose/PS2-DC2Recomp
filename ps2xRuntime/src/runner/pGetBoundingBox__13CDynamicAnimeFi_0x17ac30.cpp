#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pGetBoundingBox__13CDynamicAnimeFi
// Address: 0x17ac30 - 0x17ac70
void pGetBoundingBox__13CDynamicAnimeFi_0x17ac30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pGetBoundingBox__13CDynamicAnimeFi_0x17ac30");
#endif

    ctx->pc = 0x17ac30u;

    // 0x17ac30: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AC30u;
    {
        const bool branch_taken_0x17ac30 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17AC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC30u;
            // 0x17ac34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac30) {
            ctx->pc = 0x17AC4Cu;
            goto label_17ac4c;
        }
    }
    ctx->pc = 0x17AC38u;
    // 0x17ac38: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x17ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17ac3c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17ac3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17ac40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AC40u;
    {
        const bool branch_taken_0x17ac40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ac40) {
            ctx->pc = 0x17AC54u;
            goto label_17ac54;
        }
    }
    ctx->pc = 0x17AC48u;
    // 0x17ac48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ac48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ac4c:
    // 0x17ac4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17AC4Cu;
    {
        const bool branch_taken_0x17ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac4c) {
            ctx->pc = 0x17AC68u;
            goto label_17ac68;
        }
    }
    ctx->pc = 0x17AC54u;
label_17ac54:
    // 0x17ac54: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x17ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x17ac58: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x17ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x17ac5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17ac60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17ac64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ac68:
    // 0x17ac68: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AC70u;
}
