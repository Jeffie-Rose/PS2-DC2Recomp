#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pGetBindVertex__13CDynamicAnimeFi
// Address: 0x17abf0 - 0x17ac28
void pGetBindVertex__13CDynamicAnimeFi_0x17abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pGetBindVertex__13CDynamicAnimeFi_0x17abf0");
#endif

    ctx->pc = 0x17abf0u;

    // 0x17abf0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17ABF0u;
    {
        const bool branch_taken_0x17abf0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABF0u;
            // 0x17abf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abf0) {
            ctx->pc = 0x17AC0Cu;
            goto label_17ac0c;
        }
    }
    ctx->pc = 0x17ABF8u;
    // 0x17abf8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x17abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17abfc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17abfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17ac00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AC00u;
    {
        const bool branch_taken_0x17ac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ac00) {
            ctx->pc = 0x17AC14u;
            goto label_17ac14;
        }
    }
    ctx->pc = 0x17AC08u;
    // 0x17ac08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ac08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ac0c:
    // 0x17ac0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17AC0Cu;
    {
        const bool branch_taken_0x17ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ac0c) {
            ctx->pc = 0x17AC20u;
            goto label_17ac20;
        }
    }
    ctx->pc = 0x17AC14u;
label_17ac14:
    // 0x17ac14: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x17ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x17ac18: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x17ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17ac1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ac20:
    // 0x17ac20: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AC28u;
}
