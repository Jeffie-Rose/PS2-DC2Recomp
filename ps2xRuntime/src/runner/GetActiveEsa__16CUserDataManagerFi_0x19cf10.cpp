#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveEsa__16CUserDataManagerFi
// Address: 0x19cf10 - 0x19cf3c
void GetActiveEsa__16CUserDataManagerFi_0x19cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveEsa__16CUserDataManagerFi_0x19cf10");
#endif

    ctx->pc = 0x19cf10u;

    // 0x19cf10: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x19cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x19cf14: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CF14u;
    {
        const bool branch_taken_0x19cf14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF14u;
            // 0x19cf18: 0x2402012f  addiu       $v0, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf14) {
            ctx->pc = 0x19CF24u;
            goto label_19cf24;
        }
    }
    ctx->pc = 0x19CF1Cu;
    // 0x19cf1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19CF1Cu;
    {
        const bool branch_taken_0x19cf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF1Cu;
            // 0x19cf20: 0x24824880  addiu       $v0, $a0, 0x4880 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 18560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf1c) {
            ctx->pc = 0x19CF34u;
            goto label_19cf34;
        }
    }
    ctx->pc = 0x19CF24u;
label_19cf24:
    // 0x19cf24: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CF24u;
    {
        const bool branch_taken_0x19cf24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF24u;
            // 0x19cf28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf24) {
            ctx->pc = 0x19CF34u;
            goto label_19cf34;
        }
    }
    ctx->pc = 0x19CF2Cu;
    // 0x19cf2c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x19CF2Cu;
    {
        const bool branch_taken_0x19cf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CF2Cu;
            // 0x19cf30: 0x248248ec  addiu       $v0, $a0, 0x48EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 18668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf2c) {
            ctx->pc = 0x19CF34u;
            goto label_19cf34;
        }
    }
    ctx->pc = 0x19CF34u;
label_19cf34:
    // 0x19cf34: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CF3Cu;
}
