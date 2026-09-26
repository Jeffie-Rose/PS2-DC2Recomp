#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNetaFlag__15CInventUserDataFi
// Address: 0x1febc0 - 0x1febfc
void CheckNetaFlag__15CInventUserDataFi_0x1febc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNetaFlag__15CInventUserDataFi_0x1febc0");
#endif

    switch (ctx->pc) {
        case 0x1febc8u: goto label_1febc8;
        default: break;
    }

    ctx->pc = 0x1febc0u;

    // 0x1febc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1febc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1febc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1febc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1febc8:
    // 0x1febc8: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1febc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1febcc: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1febccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1febd0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEBD0u;
    {
        const bool branch_taken_0x1febd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1febd0) {
            ctx->pc = 0x1FEBE0u;
            goto label_1febe0;
        }
    }
    ctx->pc = 0x1FEBD8u;
    // 0x1febd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEBD8u;
    {
        const bool branch_taken_0x1febd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1febd8) {
            ctx->pc = 0x1FEBF4u;
            goto label_1febf4;
        }
    }
    ctx->pc = 0x1FEBE0u;
label_1febe0:
    // 0x1febe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1febe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1febe4: 0x28430200  slti        $v1, $v0, 0x200
    ctx->pc = 0x1febe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1febe8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FEBE8u;
    {
        const bool branch_taken_0x1febe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBE8u;
            // 0x1febec: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1febe8) {
            ctx->pc = 0x1FEBC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1febc8;
        }
    }
    ctx->pc = 0x1FEBF0u;
    // 0x1febf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1febf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1febf4:
    // 0x1febf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEBFCu;
}
