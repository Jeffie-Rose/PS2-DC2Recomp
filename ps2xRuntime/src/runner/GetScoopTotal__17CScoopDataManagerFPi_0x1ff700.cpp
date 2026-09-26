#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetScoopTotal__17CScoopDataManagerFPi
// Address: 0x1ff700 - 0x1ff744
void GetScoopTotal__17CScoopDataManagerFPi_0x1ff700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetScoopTotal__17CScoopDataManagerFPi_0x1ff700");
#endif

    switch (ctx->pc) {
        case 0x1ff70cu: goto label_1ff70c;
        default: break;
    }

    ctx->pc = 0x1ff700u;

    // 0x1ff700: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff700u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ff708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff70c:
    // 0x1ff70c: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1ff70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ff710: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x1ff710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1ff714: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF714u;
    {
        const bool branch_taken_0x1ff714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff714) {
            ctx->pc = 0x1FF720u;
            goto label_1ff720;
        }
    }
    ctx->pc = 0x1FF71Cu;
    // 0x1ff71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ff720:
    // 0x1ff720: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ff720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ff724: 0x28c30080  slti        $v1, $a2, 0x80
    ctx->pc = 0x1ff724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1ff728: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF728u;
    {
        const bool branch_taken_0x1ff728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF728u;
            // 0x1ff72c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff728) {
            ctx->pc = 0x1FF70Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff70c;
        }
    }
    ctx->pc = 0x1FF730u;
    // 0x1ff730: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF730u;
    {
        const bool branch_taken_0x1ff730 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF730u;
            // 0x1ff734: 0x24030035  addiu       $v1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff730) {
            ctx->pc = 0x1FF73Cu;
            goto label_1ff73c;
        }
    }
    ctx->pc = 0x1FF738u;
    // 0x1ff738: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1ff738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1ff73c:
    // 0x1ff73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF744u;
}
