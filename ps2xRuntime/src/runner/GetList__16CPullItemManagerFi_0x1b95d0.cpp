#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetList__16CPullItemManagerFi
// Address: 0x1b95d0 - 0x1b9630
void GetList__16CPullItemManagerFi_0x1b95d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetList__16CPullItemManagerFi_0x1b95d0");
#endif

    switch (ctx->pc) {
        case 0x1b95fcu: goto label_1b95fc;
        default: break;
    }

    ctx->pc = 0x1b95d0u;

    // 0x1b95d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b95d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B95D4u;
    {
        const bool branch_taken_0x1b95d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95D4u;
            // 0x1b95d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95d4) {
            ctx->pc = 0x1B95E8u;
            goto label_1b95e8;
        }
    }
    ctx->pc = 0x1B95DCu;
    // 0x1b95dc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b95e0: 0x1c800003  bgtz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B95E0u;
    {
        const bool branch_taken_0x1b95e0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1b95e0) {
            ctx->pc = 0x1B95F0u;
            goto label_1b95f0;
        }
    }
    ctx->pc = 0x1B95E8u;
label_1b95e8:
    // 0x1b95e8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B95E8u;
    {
        const bool branch_taken_0x1b95e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95e8) {
            ctx->pc = 0x1B9628u;
            goto label_1b9628;
        }
    }
    ctx->pc = 0x1B95F0u;
label_1b95f0:
    // 0x1b95f0: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x1b95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1b95f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B95F4u;
    {
        const bool branch_taken_0x1b95f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95F4u;
            // 0x1b95f8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95f4) {
            ctx->pc = 0x1B9618u;
            goto label_1b9618;
        }
    }
    ctx->pc = 0x1B95FCu;
label_1b95fc:
    // 0x1b95fc: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1b95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1b9600: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9600u;
    {
        const bool branch_taken_0x1b9600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9600) {
            ctx->pc = 0x1B9610u;
            goto label_1b9610;
        }
    }
    ctx->pc = 0x1B9608u;
    // 0x1b9608: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9608u;
    {
        const bool branch_taken_0x1b9608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9608) {
            ctx->pc = 0x1B9628u;
            goto label_1b9628;
        }
    }
    ctx->pc = 0x1B9610u;
label_1b9610:
    // 0x1b9610: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1b9610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b9614: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b9614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b9618:
    // 0x1b9618: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x1b9618u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b961c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B961Cu;
    {
        const bool branch_taken_0x1b961c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b961c) {
            ctx->pc = 0x1B95FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b95fc;
        }
    }
    ctx->pc = 0x1B9624u;
    // 0x1b9624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9628:
    // 0x1b9628: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9630u;
}
