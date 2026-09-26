#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCosInfo__Fi
// Address: 0x2f5440 - 0x2f547c
void GetCosInfo__Fi_0x2f5440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCosInfo__Fi_0x2f5440");
#endif

    switch (ctx->pc) {
        case 0x2f544cu: goto label_2f544c;
        default: break;
    }

    ctx->pc = 0x2f5440u;

    // 0x2f5440: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f5440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2f5444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5448: 0x2442cc40  addiu       $v0, $v0, -0x33C0
    ctx->pc = 0x2f5448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954048));
label_2f544c:
    // 0x2f544c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2f544cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f5450: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5450u;
    {
        const bool branch_taken_0x2f5450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f5450) {
            ctx->pc = 0x2F5460u;
            goto label_2f5460;
        }
    }
    ctx->pc = 0x2F5458u;
    // 0x2f5458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5458u;
    {
        const bool branch_taken_0x2f5458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5458) {
            ctx->pc = 0x2F5474u;
            goto label_2f5474;
        }
    }
    ctx->pc = 0x2F5460u;
label_2f5460:
    // 0x2f5460: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f5460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f5464: 0x28a30022  slti        $v1, $a1, 0x22
    ctx->pc = 0x2f5464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x2f5468: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F5468u;
    {
        const bool branch_taken_0x2f5468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F546Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5468u;
            // 0x2f546c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5468) {
            ctx->pc = 0x2F544Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f544c;
        }
    }
    ctx->pc = 0x2F5470u;
    // 0x2f5470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5474:
    // 0x2f5474: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F547Cu;
}
