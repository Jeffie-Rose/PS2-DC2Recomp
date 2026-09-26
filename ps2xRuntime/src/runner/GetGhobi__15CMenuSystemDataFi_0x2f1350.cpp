#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGhobi__15CMenuSystemDataFi
// Address: 0x2f1350 - 0x2f1390
void GetGhobi__15CMenuSystemDataFi_0x2f1350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGhobi__15CMenuSystemDataFi_0x2f1350");
#endif

    switch (ctx->pc) {
        case 0x2f1358u: goto label_2f1358;
        default: break;
    }

    ctx->pc = 0x2f1350u;

    // 0x2f1350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f1350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1358:
    // 0x2f1358: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2f1358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2f135c: 0x84630288  lh          $v1, 0x288($v1)
    ctx->pc = 0x2f135cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x2f1360: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F1360u;
    {
        const bool branch_taken_0x2f1360 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2F1364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1360u;
            // 0x2f1364: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1360) {
            ctx->pc = 0x2F1374u;
            goto label_2f1374;
        }
    }
    ctx->pc = 0x2F1368u;
    // 0x2f1368: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f1368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f136c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F136Cu;
    {
        const bool branch_taken_0x2f136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F136Cu;
            // 0x2f1370: 0xa4650288  sh          $a1, 0x288($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 648), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f136c) {
            ctx->pc = 0x2F1384u;
            goto label_2f1384;
        }
    }
    ctx->pc = 0x2F1374u;
label_2f1374:
    // 0x2f1374: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f1374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f1378: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x2f1378u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f137c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F137Cu;
    {
        const bool branch_taken_0x2f137c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F137Cu;
            // 0x2f1380: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f137c) {
            ctx->pc = 0x2F1358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1358;
        }
    }
    ctx->pc = 0x2F1384u;
label_2f1384:
    // 0x2f1384: 0x0  nop
    ctx->pc = 0x2f1384u;
    // NOP
    // 0x2f1388: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1390u;
}
