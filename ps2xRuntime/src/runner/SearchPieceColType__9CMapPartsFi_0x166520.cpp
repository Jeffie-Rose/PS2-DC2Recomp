#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchPieceColType__9CMapPartsFi
// Address: 0x166520 - 0x16657c
void SearchPieceColType__9CMapPartsFi_0x166520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchPieceColType__9CMapPartsFi_0x166520");
#endif

    switch (ctx->pc) {
        case 0x16654cu: goto label_16654c;
        default: break;
    }

    ctx->pc = 0x166520u;

    // 0x166520: 0x8c8600b0  lw          $a2, 0xB0($a0)
    ctx->pc = 0x166520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x166524: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x166524u;
    {
        const bool branch_taken_0x166524 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x166528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166524u;
            // 0x166528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166524) {
            ctx->pc = 0x16653Cu;
            goto label_16653c;
        }
    }
    ctx->pc = 0x16652Cu;
    // 0x16652c: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x16652cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x166530: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x166530u;
    {
        const bool branch_taken_0x166530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166530) {
            ctx->pc = 0x166544u;
            goto label_166544;
        }
    }
    ctx->pc = 0x166538u;
    // 0x166538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16653c:
    // 0x16653c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16653Cu;
    {
        const bool branch_taken_0x16653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16653c) {
            ctx->pc = 0x166574u;
            goto label_166574;
        }
    }
    ctx->pc = 0x166544u;
label_166544:
    // 0x166544: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x166544u;
    {
        const bool branch_taken_0x166544 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x166544) {
            ctx->pc = 0x16656Cu;
            goto label_16656c;
        }
    }
    ctx->pc = 0x16654Cu;
label_16654c:
    // 0x16654c: 0x84c300b0  lh          $v1, 0xB0($a2)
    ctx->pc = 0x16654cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x166550: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166550u;
    {
        const bool branch_taken_0x166550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x166554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166550u;
            // 0x166554: 0x24c20010  addiu       $v0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166550) {
            ctx->pc = 0x166560u;
            goto label_166560;
        }
    }
    ctx->pc = 0x166558u;
    // 0x166558: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x166558u;
    {
        const bool branch_taken_0x166558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166558) {
            ctx->pc = 0x166574u;
            goto label_166574;
        }
    }
    ctx->pc = 0x166560u;
label_166560:
    // 0x166560: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x166560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166564: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x166564u;
    {
        const bool branch_taken_0x166564 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x166564) {
            ctx->pc = 0x16654Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16654c;
        }
    }
    ctx->pc = 0x16656Cu;
label_16656c:
    // 0x16656c: 0x0  nop
    ctx->pc = 0x16656cu;
    // NOP
    // 0x166570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166574:
    // 0x166574: 0x3e00008  jr          $ra
    ctx->pc = 0x166574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16657Cu;
}
