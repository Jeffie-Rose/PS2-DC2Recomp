#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CosutmeSelDefaultSet__FiPs
// Address: 0x2bc890 - 0x2bc8cc
void CosutmeSelDefaultSet__FiPs_0x2bc890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CosutmeSelDefaultSet__FiPs_0x2bc890");
#endif

    switch (ctx->pc) {
        case 0x2bc898u: goto label_2bc898;
        default: break;
    }

    ctx->pc = 0x2bc890u;

    // 0x2bc890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc898:
    // 0x2bc898: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2bc898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2bc89c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2bc89cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bc8a0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC8A0u;
    {
        const bool branch_taken_0x2bc8a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bc8a0) {
            ctx->pc = 0x2BC8B0u;
            goto label_2bc8b0;
        }
    }
    ctx->pc = 0x2BC8A8u;
    // 0x2bc8a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC8A8u;
    {
        const bool branch_taken_0x2bc8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc8a8) {
            ctx->pc = 0x2BC8C4u;
            goto label_2bc8c4;
        }
    }
    ctx->pc = 0x2BC8B0u;
label_2bc8b0:
    // 0x2bc8b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bc8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bc8b4: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x2bc8b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2bc8b8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BC8B8u;
    {
        const bool branch_taken_0x2bc8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BC8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC8B8u;
            // 0x2bc8bc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc8b8) {
            ctx->pc = 0x2BC898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bc898;
        }
    }
    ctx->pc = 0x2BC8C0u;
    // 0x2bc8c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bc8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc8c4:
    // 0x2bc8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC8C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BC8CCu;
}
