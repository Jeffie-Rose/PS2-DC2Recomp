#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckGetAlready__15CMenuSystemDataFi
// Address: 0x2f1310 - 0x2f134c
void CheckGetAlready__15CMenuSystemDataFi_0x2f1310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckGetAlready__15CMenuSystemDataFi_0x2f1310");
#endif

    switch (ctx->pc) {
        case 0x2f1318u: goto label_2f1318;
        default: break;
    }

    ctx->pc = 0x2f1310u;

    // 0x2f1310: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f1310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1318:
    // 0x2f1318: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2f1318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f131c: 0x84420288  lh          $v0, 0x288($v0)
    ctx->pc = 0x2f131cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 648)));
    // 0x2f1320: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1320u;
    {
        const bool branch_taken_0x2f1320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F1324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1320u;
            // 0x2f1324: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1320) {
            ctx->pc = 0x2F1330u;
            goto label_2f1330;
        }
    }
    ctx->pc = 0x2F1328u;
    // 0x2f1328: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F1328u;
    {
        const bool branch_taken_0x2f1328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1328) {
            ctx->pc = 0x2F1344u;
            goto label_2f1344;
        }
    }
    ctx->pc = 0x2F1330u;
label_2f1330:
    // 0x2f1330: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f1330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f1334: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x2f1334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f1338: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F1338u;
    {
        const bool branch_taken_0x2f1338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1338u;
            // 0x2f133c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1338) {
            ctx->pc = 0x2F1318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1318;
        }
    }
    ctx->pc = 0x2F1340u;
    // 0x2f1340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1344:
    // 0x2f1344: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F134Cu;
}
