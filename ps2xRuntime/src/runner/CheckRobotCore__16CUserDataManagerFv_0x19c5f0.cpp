#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRobotCore__16CUserDataManagerFv
// Address: 0x19c5f0 - 0x19c644
void CheckRobotCore__16CUserDataManagerFv_0x19c5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRobotCore__16CUserDataManagerFv_0x19c5f0");
#endif

    switch (ctx->pc) {
        case 0x19c5fcu: goto label_19c5fc;
        default: break;
    }

    ctx->pc = 0x19c5f0u;

    // 0x19c5f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19c5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5f8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x19c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_19c5fc:
    // 0x19c5fc: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x19c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19c600: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x19c600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19c604: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x19C604u;
    {
        const bool branch_taken_0x19c604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C604u;
            // 0x19c608: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c604) {
            ctx->pc = 0x19C628u;
            goto label_19c628;
        }
    }
    ctx->pc = 0x19C60Cu;
    // 0x19c60c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x19c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19c610: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19c610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c614: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19c614u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c61c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19c620: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C620u;
    {
        const bool branch_taken_0x19c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C620u;
            // 0x19c624: 0x84420002  lh          $v0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c620) {
            ctx->pc = 0x19C63Cu;
            goto label_19c63c;
        }
    }
    ctx->pc = 0x19C628u;
label_19c628:
    // 0x19c628: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19c628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19c62c: 0x28a20096  slti        $v0, $a1, 0x96
    ctx->pc = 0x19c62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19c630: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x19C630u;
    {
        const bool branch_taken_0x19c630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C630u;
            // 0x19c634: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c630) {
            ctx->pc = 0x19C5FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19c5fc;
        }
    }
    ctx->pc = 0x19C638u;
    // 0x19c638: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19c63c:
    // 0x19c63c: 0x3e00008  jr          $ra
    ctx->pc = 0x19C63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C644u;
}
