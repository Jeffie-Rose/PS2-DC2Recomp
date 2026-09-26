#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NowPartyCharaID__16CUserDataManagerFv
// Address: 0x19c930 - 0x19c970
void NowPartyCharaID__16CUserDataManagerFv_0x19c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NowPartyCharaID__16CUserDataManagerFv_0x19c930");
#endif

    switch (ctx->pc) {
        case 0x19c938u: goto label_19c938;
        default: break;
    }

    ctx->pc = 0x19c930u;

    // 0x19c930: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19c930u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c938:
    // 0x19c938: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x19c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19c93c: 0x94427db2  lhu         $v0, 0x7DB2($v0)
    ctx->pc = 0x19c93cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 32178)));
    // 0x19c940: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19c944: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C944u;
    {
        const bool branch_taken_0x19c944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C944u;
            // 0x19c948: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c944) {
            ctx->pc = 0x19C954u;
            goto label_19c954;
        }
    }
    ctx->pc = 0x19C94Cu;
    // 0x19c94c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19C94Cu;
    {
        const bool branch_taken_0x19c94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c94c) {
            ctx->pc = 0x19C968u;
            goto label_19c968;
        }
    }
    ctx->pc = 0x19C954u;
label_19c954:
    // 0x19c954: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19c954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19c958: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x19c958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x19c95c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19C95Cu;
    {
        const bool branch_taken_0x19c95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C95Cu;
            // 0x19c960: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c95c) {
            ctx->pc = 0x19C938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19c938;
        }
    }
    ctx->pc = 0x19C964u;
    // 0x19c964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19c968:
    // 0x19c968: 0x3e00008  jr          $ra
    ctx->pc = 0x19C968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C970u;
}
