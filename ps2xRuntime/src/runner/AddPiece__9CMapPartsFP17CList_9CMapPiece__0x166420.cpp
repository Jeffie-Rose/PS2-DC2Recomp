#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddPiece__9CMapPartsFP17CList<9CMapPiece>
// Address: 0x166420 - 0x166484
void AddPiece__9CMapPartsFP17CList_9CMapPiece__0x166420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddPiece__9CMapPartsFP17CList_9CMapPiece__0x166420");
#endif

    switch (ctx->pc) {
        case 0x166458u: goto label_166458;
        default: break;
    }

    ctx->pc = 0x166420u;

    // 0x166420: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x166420u;
    {
        const bool branch_taken_0x166420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x166420) {
            ctx->pc = 0x16647Cu;
            goto label_16647c;
        }
    }
    ctx->pc = 0x166428u;
    // 0x166428: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x166428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x16642c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x16642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x166430: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x166430u;
    {
        const bool branch_taken_0x166430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166430u;
            // 0x166434: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166430) {
            ctx->pc = 0x16643Cu;
            goto label_16643c;
        }
    }
    ctx->pc = 0x166438u;
    // 0x166438: 0xac8301e4  sw          $v1, 0x1E4($a0)
    ctx->pc = 0x166438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 3));
label_16643c:
    // 0x16643c: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x16643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x166440: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166440u;
    {
        const bool branch_taken_0x166440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166440) {
            ctx->pc = 0x166450u;
            goto label_166450;
        }
    }
    ctx->pc = 0x166448u;
    // 0x166448: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x166448u;
    {
        const bool branch_taken_0x166448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166448u;
            // 0x16644c: 0xac8500b0  sw          $a1, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166448) {
            ctx->pc = 0x16647Cu;
            goto label_16647c;
        }
    }
    ctx->pc = 0x166450u;
label_166450:
    // 0x166450: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x166450u;
    {
        const bool branch_taken_0x166450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166450) {
            ctx->pc = 0x16646Cu;
            goto label_16646c;
        }
    }
    ctx->pc = 0x166458u;
label_166458:
    // 0x166458: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x166458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16645c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16645Cu;
    {
        const bool branch_taken_0x16645c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16645c) {
            ctx->pc = 0x16646Cu;
            goto label_16646c;
        }
    }
    ctx->pc = 0x166464u;
    // 0x166464: 0x1480fffc  bnez        $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x166464u;
    {
        const bool branch_taken_0x166464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x166468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166464u;
            // 0x166468: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166464) {
            ctx->pc = 0x166458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166458;
        }
    }
    ctx->pc = 0x16646Cu;
label_16646c:
    // 0x16646c: 0x0  nop
    ctx->pc = 0x16646cu;
    // NOP
    // 0x166470: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x166470u;
    {
        const bool branch_taken_0x166470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x166474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166470u;
            // 0x166474: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166470) {
            ctx->pc = 0x16647Cu;
            goto label_16647c;
        }
    }
    ctx->pc = 0x166478u;
    // 0x166478: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x166478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_16647c:
    // 0x16647c: 0x3e00008  jr          $ra
    ctx->pc = 0x16647Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166484u;
}
