#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboNameDefault__16CUserDataManagerFv
// Address: 0x19c450 - 0x19c488
void GetRoboNameDefault__16CUserDataManagerFv_0x19c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboNameDefault__16CUserDataManagerFv_0x19c450");
#endif

    ctx->pc = 0x19c450u;

    // 0x19c450: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x19c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x19c454: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C454u;
    {
        const bool branch_taken_0x19c454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C454u;
            // 0x19c458: 0x28410002  slti        $at, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c454) {
            ctx->pc = 0x19C464u;
            goto label_19c464;
        }
    }
    ctx->pc = 0x19C45Cu;
    // 0x19c45c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c45cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c460: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19c460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_19c464:
    // 0x19c464: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C464u;
    {
        const bool branch_taken_0x19c464 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C464u;
            // 0x19c468: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c464) {
            ctx->pc = 0x19C474u;
            goto label_19c474;
        }
    }
    ctx->pc = 0x19C46Cu;
    // 0x19c46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c470: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19c470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19c474:
    // 0x19c474: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x19c474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19c478: 0x24426300  addiu       $v0, $v0, 0x6300
    ctx->pc = 0x19c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25344));
    // 0x19c47c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c480: 0x3e00008  jr          $ra
    ctx->pc = 0x19C480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C480u;
            // 0x19c484: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C488u;
}
