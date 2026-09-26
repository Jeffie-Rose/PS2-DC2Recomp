#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceMSIn_Init
// Address: 0x123c10 - 0x123c90
void sceMSIn_Init_0x123c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMSIn_Init_0x123c10");
#endif

    switch (ctx->pc) {
        case 0x123c50u: goto label_123c50;
        default: break;
    }

    ctx->pc = 0x123c10u;

    // 0x123c10: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x123C10u;
    {
        const bool branch_taken_0x123c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c10) {
            ctx->pc = 0x123C88u;
            goto label_123c88;
        }
    }
    ctx->pc = 0x123C18u;
    // 0x123c18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x123c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123c1c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x123c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123c20: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x123C20u;
    {
        const bool branch_taken_0x123c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C20u;
            // 0x123c24: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c20) {
            ctx->pc = 0x123C88u;
            goto label_123c88;
        }
    }
    ctx->pc = 0x123C28u;
    // 0x123c28: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x123C28u;
    {
        const bool branch_taken_0x123c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c28) {
            ctx->pc = 0x123C88u;
            goto label_123c88;
        }
    }
    ctx->pc = 0x123C30u;
    // 0x123c30: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x123c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x123c34: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x123C34u;
    {
        const bool branch_taken_0x123c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C34u;
            // 0x123c38: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c34) {
            ctx->pc = 0x123C88u;
            goto label_123c88;
        }
    }
    ctx->pc = 0x123C3Cu;
    // 0x123c3c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x123C3Cu;
    {
        const bool branch_taken_0x123c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c3c) {
            ctx->pc = 0x123C88u;
            goto label_123c88;
        }
    }
    ctx->pc = 0x123C44u;
    // 0x123c44: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x123C44u;
    {
        const bool branch_taken_0x123c44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x123C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C44u;
            // 0x123c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c44) {
            ctx->pc = 0x123C78u;
            goto label_123c78;
        }
    }
    ctx->pc = 0x123C4Cu;
    // 0x123c4c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x123c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_123c50:
    // 0x123c50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x123c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123c54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x123C54u;
    {
        const bool branch_taken_0x123c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123c54) {
            ctx->pc = 0x123C80u;
            goto label_123c80;
        }
    }
    ctx->pc = 0x123C5Cu;
    // 0x123c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x123c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123c60: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x123c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x123c64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123C64u;
    {
        const bool branch_taken_0x123c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C64u;
            // 0x123c68: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c64) {
            ctx->pc = 0x123C80u;
            goto label_123c80;
        }
    }
    ctx->pc = 0x123C6Cu;
    // 0x123c6c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x123c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x123c70: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x123C70u;
    {
        const bool branch_taken_0x123c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C70u;
            // 0x123c74: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c70) {
            ctx->pc = 0x123C50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_123c50;
        }
    }
    ctx->pc = 0x123C78u;
label_123c78:
    // 0x123c78: 0x3e00008  jr          $ra
    ctx->pc = 0x123C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C78u;
            // 0x123c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123C80u;
label_123c80:
    // 0x123c80: 0x3e00008  jr          $ra
    ctx->pc = 0x123C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C80u;
            // 0x123c84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123C88u;
label_123c88:
    // 0x123c88: 0x3e00008  jr          $ra
    ctx->pc = 0x123C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123C88u;
            // 0x123c8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123C90u;
}
