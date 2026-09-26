#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: get_default_monster_progresstbl__Fi
// Address: 0x2b5da0 - 0x2b5de4
void get_default_monster_progresstbl__Fi_0x2b5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_default_monster_progresstbl__Fi_0x2b5da0");
#endif

    switch (ctx->pc) {
        case 0x2b5db0u: goto label_2b5db0;
        default: break;
    }

    ctx->pc = 0x2b5da0u;

    // 0x2b5da0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5da8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2b5da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2b5dac: 0x24a54640  addiu       $a1, $a1, 0x4640
    ctx->pc = 0x2b5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17984));
label_2b5db0:
    // 0x2b5db0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2b5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b5db4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2b5db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5db8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5DB8u;
    {
        const bool branch_taken_0x2b5db8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5db8) {
            ctx->pc = 0x2B5DC8u;
            goto label_2b5dc8;
        }
    }
    ctx->pc = 0x2B5DC0u;
    // 0x2b5dc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5DC0u;
    {
        const bool branch_taken_0x2b5dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5dc0) {
            ctx->pc = 0x2B5DDCu;
            goto label_2b5ddc;
        }
    }
    ctx->pc = 0x2B5DC8u;
label_2b5dc8:
    // 0x2b5dc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5dcc: 0x28430013  slti        $v1, $v0, 0x13
    ctx->pc = 0x2b5dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2b5dd0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B5DD0u;
    {
        const bool branch_taken_0x2b5dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5DD0u;
            // 0x2b5dd4: 0x24c6000a  addiu       $a2, $a2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dd0) {
            ctx->pc = 0x2B5DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5db0;
        }
    }
    ctx->pc = 0x2B5DD8u;
    // 0x2b5dd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5ddc:
    // 0x2b5ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5DE4u;
}
