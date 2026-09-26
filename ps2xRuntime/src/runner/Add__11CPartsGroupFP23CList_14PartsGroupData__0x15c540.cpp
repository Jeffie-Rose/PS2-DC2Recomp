#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Add__11CPartsGroupFP23CList<14PartsGroupData>
// Address: 0x15c540 - 0x15c584
void Add__11CPartsGroupFP23CList_14PartsGroupData__0x15c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Add__11CPartsGroupFP23CList_14PartsGroupData__0x15c540");
#endif

    switch (ctx->pc) {
        case 0x15c55cu: goto label_15c55c;
        default: break;
    }

    ctx->pc = 0x15c540u;

    // 0x15c540: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x15c544: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C544u;
    {
        const bool branch_taken_0x15c544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c544) {
            ctx->pc = 0x15C554u;
            goto label_15c554;
        }
    }
    ctx->pc = 0x15C54Cu;
    // 0x15c54c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15C54Cu;
    {
        const bool branch_taken_0x15c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C54Cu;
            // 0x15c550: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c54c) {
            ctx->pc = 0x15C57Cu;
            goto label_15c57c;
        }
    }
    ctx->pc = 0x15C554u;
label_15c554:
    // 0x15c554: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C554u;
    {
        const bool branch_taken_0x15c554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c554) {
            ctx->pc = 0x15C570u;
            goto label_15c570;
        }
    }
    ctx->pc = 0x15C55Cu;
label_15c55c:
    // 0x15c55c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15c560: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C560u;
    {
        const bool branch_taken_0x15c560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c560) {
            ctx->pc = 0x15C570u;
            goto label_15c570;
        }
    }
    ctx->pc = 0x15C568u;
    // 0x15c568: 0x1480fffc  bnez        $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x15C568u;
    {
        const bool branch_taken_0x15c568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C568u;
            // 0x15c56c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c568) {
            ctx->pc = 0x15C55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c55c;
        }
    }
    ctx->pc = 0x15C570u;
label_15c570:
    // 0x15c570: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C570u;
    {
        const bool branch_taken_0x15c570 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C570u;
            // 0x15c574: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c570) {
            ctx->pc = 0x15C57Cu;
            goto label_15c57c;
        }
    }
    ctx->pc = 0x15C578u;
    // 0x15c578: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x15c578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_15c57c:
    // 0x15c57c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C584u;
}
