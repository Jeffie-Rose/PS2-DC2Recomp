#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CountFish__16CUserDataManagerFv
// Address: 0x19ebf0 - 0x19ec60
void CountFish__16CUserDataManagerFv_0x19ebf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CountFish__16CUserDataManagerFv_0x19ebf0");
#endif

    switch (ctx->pc) {
        case 0x19ec00u: goto label_19ec00;
        case 0x19ec2cu: goto label_19ec2c;
        default: break;
    }

    ctx->pc = 0x19ebf0u;

    // 0x19ebf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ebf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19ebf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19ebf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ebfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19ec00:
    // 0x19ec00: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19ec04: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EC04u;
    {
        const bool branch_taken_0x19ec04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x19ec04) {
            ctx->pc = 0x19EC10u;
            goto label_19ec10;
        }
    }
    ctx->pc = 0x19EC0Cu;
    // 0x19ec0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19ec10:
    // 0x19ec10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x19ec10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19ec14: 0x28e30096  slti        $v1, $a3, 0x96
    ctx->pc = 0x19ec14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x19ec18: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19EC18u;
    {
        const bool branch_taken_0x19ec18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC18u;
            // 0x19ec1c: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec18) {
            ctx->pc = 0x19EC00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ec00;
        }
    }
    ctx->pc = 0x19EC20u;
    // 0x19ec20: 0x24844958  addiu       $a0, $a0, 0x4958
    ctx->pc = 0x19ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18776));
    // 0x19ec24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ec24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19ec28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ec2c:
    // 0x19ec2c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x19ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19ec30: 0x84630006  lh          $v1, 0x6($v1)
    ctx->pc = 0x19ec30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x19ec34: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x19ec34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19ec38: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19EC38u;
    {
        const bool branch_taken_0x19ec38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ec38) {
            ctx->pc = 0x19EC44u;
            goto label_19ec44;
        }
    }
    ctx->pc = 0x19EC40u;
    // 0x19ec40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19ec44:
    // 0x19ec44: 0x0  nop
    ctx->pc = 0x19ec44u;
    // NOP
    // 0x19ec48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19ec4c: 0x28a30006  slti        $v1, $a1, 0x6
    ctx->pc = 0x19ec4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19ec50: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x19EC50u;
    {
        const bool branch_taken_0x19ec50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19EC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC50u;
            // 0x19ec54: 0x24c6006c  addiu       $a2, $a2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ec50) {
            ctx->pc = 0x19EC2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19ec2c;
        }
    }
    ctx->pc = 0x19EC58u;
    // 0x19ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC60u;
}
