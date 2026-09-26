#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMsgItemPos__7CDC2MesFPii
// Address: 0x21df10 - 0x21df80
void SetMsgItemPos__7CDC2MesFPii_0x21df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMsgItemPos__7CDC2MesFPii_0x21df10");
#endif

    switch (ctx->pc) {
        case 0x21df24u: goto label_21df24;
        default: break;
    }

    ctx->pc = 0x21df10u;

    // 0x21df10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21df10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x21df14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df18: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x21df18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21DF1Cu;
    {
        const bool branch_taken_0x21df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF1Cu;
            // 0x21df20: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df1c) {
            ctx->pc = 0x21DF5Cu;
            goto label_21df5c;
        }
    }
    ctx->pc = 0x21DF24u;
label_21df24:
    // 0x21df24: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x21df24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21df28: 0x5000008  bltz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DF28u;
    {
        const bool branch_taken_0x21df28 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x21DF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF28u;
            // 0x21df2c: 0x8c6a0004  lw          $t2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df28) {
            ctx->pc = 0x21DF4Cu;
            goto label_21df4c;
        }
    }
    ctx->pc = 0x21DF30u;
    // 0x21df30: 0x29010014  slti        $at, $t0, 0x14
    ctx->pc = 0x21df30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21df34: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DF34u;
    {
        const bool branch_taken_0x21df34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF34u;
            // 0x21df38: 0x8b6821  addu        $t5, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df34) {
            ctx->pc = 0x21DF4Cu;
            goto label_21df4c;
        }
    }
    ctx->pc = 0x21DF3Cu;
    // 0x21df3c: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x21df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x21df40: 0xada91b94  sw          $t1, 0x1B94($t5)
    ctx->pc = 0x21df40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 7060), GPR_U32(ctx, 9));
    // 0x21df44: 0xadaa1b98  sw          $t2, 0x1B98($t5)
    ctx->pc = 0x21df44u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 7064), GPR_U32(ctx, 10));
    // 0x21df48: 0xac671c34  sw          $a3, 0x1C34($v1)
    ctx->pc = 0x21df48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7220), GPR_U32(ctx, 7));
label_21df4c:
    // 0x21df4c: 0x0  nop
    ctx->pc = 0x21df4cu;
    // NOP
    // 0x21df50: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x21df50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x21df54: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x21df54u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x21df58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21df58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_21df5c:
    // 0x21df5c: 0x0  nop
    ctx->pc = 0x21df5cu;
    // NOP
    // 0x21df60: 0x106082a  slt         $at, $t0, $a2
    ctx->pc = 0x21df60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21df64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DF64u;
    {
        const bool branch_taken_0x21df64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF64u;
            // 0x21df68: 0x29030010  slti        $v1, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df64) {
            ctx->pc = 0x21DF74u;
            goto label_21df74;
        }
    }
    ctx->pc = 0x21DF6Cu;
    // 0x21df6c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21DF6Cu;
    {
        const bool branch_taken_0x21df6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF6Cu;
            // 0x21df70: 0xab1821  addu        $v1, $a1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df6c) {
            ctx->pc = 0x21DF24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21df24;
        }
    }
    ctx->pc = 0x21DF74u;
label_21df74:
    // 0x21df74: 0x0  nop
    ctx->pc = 0x21df74u;
    // NOP
    // 0x21df78: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DF80u;
}
