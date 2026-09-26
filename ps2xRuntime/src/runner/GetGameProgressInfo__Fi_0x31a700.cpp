#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGameProgressInfo__Fi
// Address: 0x31a700 - 0x31a740
void GetGameProgressInfo__Fi_0x31a700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGameProgressInfo__Fi_0x31a700");
#endif

    ctx->pc = 0x31a700u;

    // 0x31a700: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31A700u;
    {
        const bool branch_taken_0x31a700 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x31A704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A700u;
            // 0x31a704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a700) {
            ctx->pc = 0x31A71Cu;
            goto label_31a71c;
        }
    }
    ctx->pc = 0x31A708u;
    // 0x31a708: 0x8f82a340  lw          $v0, -0x5CC0($gp)
    ctx->pc = 0x31a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943552)));
    // 0x31a70c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x31a70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31a710: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A710u;
    {
        const bool branch_taken_0x31a710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A710u;
            // 0x31a714: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a710) {
            ctx->pc = 0x31A724u;
            goto label_31a724;
        }
    }
    ctx->pc = 0x31A718u;
    // 0x31a718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31a718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a71c:
    // 0x31a71c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A71Cu;
    {
        const bool branch_taken_0x31a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a71c) {
            ctx->pc = 0x31A738u;
            goto label_31a738;
        }
    }
    ctx->pc = 0x31A724u;
label_31a724:
    // 0x31a724: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x31a728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31a72c: 0x24423bd0  addiu       $v0, $v0, 0x3BD0
    ctx->pc = 0x31a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15312));
    // 0x31a730: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31a730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31a734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31a734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31a738:
    // 0x31a738: 0x3e00008  jr          $ra
    ctx->pc = 0x31A738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A740u;
}
