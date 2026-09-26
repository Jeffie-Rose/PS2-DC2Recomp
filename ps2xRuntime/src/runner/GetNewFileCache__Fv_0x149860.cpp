#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNewFileCache__Fv
// Address: 0x149860 - 0x1498a4
void GetNewFileCache__Fv_0x149860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNewFileCache__Fv_0x149860");
#endif

    switch (ctx->pc) {
        case 0x149870u: goto label_149870;
        default: break;
    }

    ctx->pc = 0x149860u;

    // 0x149860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x149860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149868: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x149868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x14986c: 0x2463ac90  addiu       $v1, $v1, -0x5370
    ctx->pc = 0x14986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945936));
label_149870:
    // 0x149870: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x149870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x149874: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x149874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149878: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149878u;
    {
        const bool branch_taken_0x149878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149878u;
            // 0x14987c: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149878) {
            ctx->pc = 0x149888u;
            goto label_149888;
        }
    }
    ctx->pc = 0x149880u;
    // 0x149880: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x149880u;
    {
        const bool branch_taken_0x149880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149880u;
            // 0x149884: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149880) {
            ctx->pc = 0x14989Cu;
            goto label_14989c;
        }
    }
    ctx->pc = 0x149888u;
label_149888:
    // 0x149888: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x149888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14988c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x14988cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x149890: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x149890u;
    {
        const bool branch_taken_0x149890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149890u;
            // 0x149894: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149890) {
            ctx->pc = 0x149870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_149870;
        }
    }
    ctx->pc = 0x149898u;
    // 0x149898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14989c:
    // 0x14989c: 0x3e00008  jr          $ra
    ctx->pc = 0x14989Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1498A4u;
}
