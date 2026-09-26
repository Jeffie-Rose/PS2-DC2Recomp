#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePartsInfo__13CEditInfoMngrFi
// Address: 0x2a4e00 - 0x2a4e40
void GetePartsInfo__13CEditInfoMngrFi_0x2a4e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePartsInfo__13CEditInfoMngrFi_0x2a4e00");
#endif

    ctx->pc = 0x2a4e00u;

    // 0x2a4e00: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4E00u;
    {
        const bool branch_taken_0x2a4e00 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A4E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4E00u;
            // 0x2a4e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e00) {
            ctx->pc = 0x2A4E1Cu;
            goto label_2a4e1c;
        }
    }
    ctx->pc = 0x2A4E08u;
    // 0x2a4e08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a4e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4e0c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2a4e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4e10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4E10u;
    {
        const bool branch_taken_0x2a4e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e10) {
            ctx->pc = 0x2A4E24u;
            goto label_2a4e24;
        }
    }
    ctx->pc = 0x2A4E18u;
    // 0x2a4e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a4e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4e1c:
    // 0x2a4e1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4E1Cu;
    {
        const bool branch_taken_0x2a4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e1c) {
            ctx->pc = 0x2A4E38u;
            goto label_2a4e38;
        }
    }
    ctx->pc = 0x2A4E24u;
label_2a4e24:
    // 0x2a4e24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4e28: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a4e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a4e2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a4e30: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2a4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2a4e34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4e38:
    // 0x2a4e38: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4E40u;
}
