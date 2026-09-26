#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRidePodCore__Fi
// Address: 0x196630 - 0x19666c
void GetRidePodCore__Fi_0x196630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRidePodCore__Fi_0x196630");
#endif

    ctx->pc = 0x196630u;

    // 0x196630: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196630u;
    {
        const bool branch_taken_0x196630 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x196634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196630u;
            // 0x196634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196630) {
            ctx->pc = 0x196644u;
            goto label_196644;
        }
    }
    ctx->pc = 0x196638u;
    // 0x196638: 0x28810007  slti        $at, $a0, 0x7
    ctx->pc = 0x196638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x19663c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19663Cu;
    {
        const bool branch_taken_0x19663c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19663c) {
            ctx->pc = 0x19664Cu;
            goto label_19664c;
        }
    }
    ctx->pc = 0x196644u;
label_196644:
    // 0x196644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x196644u;
    {
        const bool branch_taken_0x196644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196644) {
            ctx->pc = 0x196664u;
            goto label_196664;
        }
    }
    ctx->pc = 0x19664Cu;
label_19664c:
    // 0x19664c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x196650: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x196654: 0x24425b80  addiu       $v0, $v0, 0x5B80
    ctx->pc = 0x196654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23424));
    // 0x196658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19665c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x19665cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196660: 0x0  nop
    ctx->pc = 0x196660u;
    // NOP
label_196664:
    // 0x196664: 0x3e00008  jr          $ra
    ctx->pc = 0x196664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19666Cu;
}
