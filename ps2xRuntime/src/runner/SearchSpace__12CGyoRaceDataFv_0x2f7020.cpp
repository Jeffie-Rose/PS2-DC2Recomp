#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSpace__12CGyoRaceDataFv
// Address: 0x2f7020 - 0x2f7060
void SearchSpace__12CGyoRaceDataFv_0x2f7020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSpace__12CGyoRaceDataFv_0x2f7020");
#endif

    switch (ctx->pc) {
        case 0x2f7028u: goto label_2f7028;
        default: break;
    }

    ctx->pc = 0x2f7020u;

    // 0x2f7020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f7020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f7024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f7028:
    // 0x2f7028: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2f7028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f702c: 0x8463002a  lh          $v1, 0x2A($v1)
    ctx->pc = 0x2f702cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x2f7030: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x2f7030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f7034: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7034u;
    {
        const bool branch_taken_0x2f7034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7034) {
            ctx->pc = 0x2F7044u;
            goto label_2f7044;
        }
    }
    ctx->pc = 0x2F703Cu;
    // 0x2f703c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F703Cu;
    {
        const bool branch_taken_0x2f703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f703c) {
            ctx->pc = 0x2F7058u;
            goto label_2f7058;
        }
    }
    ctx->pc = 0x2F7044u;
label_2f7044:
    // 0x2f7044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f7048: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x2f7048u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2f704c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F704Cu;
    {
        const bool branch_taken_0x2f704c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F704Cu;
            // 0x2f7050: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f704c) {
            ctx->pc = 0x2F7028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7028;
        }
    }
    ctx->pc = 0x2F7054u;
    // 0x2f7054: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7058:
    // 0x2f7058: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7060u;
}
