#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLocalCnt2__Fi
// Address: 0x261150 - 0x261194
void GetLocalCnt2__Fi_0x261150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLocalCnt2__Fi_0x261150");
#endif

    switch (ctx->pc) {
        case 0x261160u: goto label_261160;
        default: break;
    }

    ctx->pc = 0x261150u;

    // 0x261150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x261150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261158: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x261158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x26115c: 0x24a5efc0  addiu       $a1, $a1, -0x1040
    ctx->pc = 0x26115cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963136));
label_261160:
    // 0x261160: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x261160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x261164: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x261164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261168: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x261168u;
    {
        const bool branch_taken_0x261168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x261168) {
            ctx->pc = 0x261178u;
            goto label_261178;
        }
    }
    ctx->pc = 0x261170u;
    // 0x261170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261170u;
    {
        const bool branch_taken_0x261170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x261170) {
            ctx->pc = 0x26118Cu;
            goto label_26118c;
        }
    }
    ctx->pc = 0x261178u;
label_261178:
    // 0x261178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x261178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26117c: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x26117cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x261180: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x261180u;
    {
        const bool branch_taken_0x261180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x261184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261180u;
            // 0x261184: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261180) {
            ctx->pc = 0x261160u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261160;
        }
    }
    ctx->pc = 0x261188u;
    // 0x261188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x261188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26118c:
    // 0x26118c: 0x3e00008  jr          $ra
    ctx->pc = 0x26118Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x261194u;
}
