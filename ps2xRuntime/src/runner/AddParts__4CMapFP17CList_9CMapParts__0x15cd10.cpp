#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddParts__4CMapFP17CList<9CMapParts>
// Address: 0x15cd10 - 0x15cd5c
void AddParts__4CMapFP17CList_9CMapParts__0x15cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddParts__4CMapFP17CList_9CMapParts__0x15cd10");
#endif

    switch (ctx->pc) {
        case 0x15cd2cu: goto label_15cd2c;
        default: break;
    }

    ctx->pc = 0x15cd10u;

    // 0x15cd10: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15CD10u;
    {
        const bool branch_taken_0x15cd10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd10) {
            ctx->pc = 0x15CD54u;
            goto label_15cd54;
        }
    }
    ctx->pc = 0x15CD18u;
    // 0x15cd18: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x15cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x15cd1c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x15CD1Cu;
    {
        const bool branch_taken_0x15cd1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd1c) {
            ctx->pc = 0x15CD50u;
            goto label_15cd50;
        }
    }
    ctx->pc = 0x15CD24u;
    // 0x15cd24: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CD24u;
    {
        const bool branch_taken_0x15cd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd24) {
            ctx->pc = 0x15CD40u;
            goto label_15cd40;
        }
    }
    ctx->pc = 0x15CD2Cu;
label_15cd2c:
    // 0x15cd2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15cd30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CD30u;
    {
        const bool branch_taken_0x15cd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cd30) {
            ctx->pc = 0x15CD40u;
            goto label_15cd40;
        }
    }
    ctx->pc = 0x15CD38u;
    // 0x15cd38: 0x1480fffc  bnez        $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x15CD38u;
    {
        const bool branch_taken_0x15cd38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD38u;
            // 0x15cd3c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd38) {
            ctx->pc = 0x15CD2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cd2c;
        }
    }
    ctx->pc = 0x15CD40u;
label_15cd40:
    // 0x15cd40: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CD40u;
    {
        const bool branch_taken_0x15cd40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD40u;
            // 0x15cd44: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd40) {
            ctx->pc = 0x15CD54u;
            goto label_15cd54;
        }
    }
    ctx->pc = 0x15CD48u;
    // 0x15cd48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15CD48u;
    {
        const bool branch_taken_0x15cd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD48u;
            // 0x15cd4c: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd48) {
            ctx->pc = 0x15CD54u;
            goto label_15cd54;
        }
    }
    ctx->pc = 0x15CD50u;
label_15cd50:
    // 0x15cd50: 0xac850104  sw          $a1, 0x104($a0)
    ctx->pc = 0x15cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 5));
label_15cd54:
    // 0x15cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x15CD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CD5Cu;
}
