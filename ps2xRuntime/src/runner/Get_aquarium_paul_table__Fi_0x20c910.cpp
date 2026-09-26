#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get_aquarium_paul_table__Fi
// Address: 0x20c910 - 0x20c934
void Get_aquarium_paul_table__Fi_0x20c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_aquarium_paul_table__Fi_0x20c910");
#endif

    ctx->pc = 0x20c910u;

    // 0x20c910: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C910u;
    {
        const bool branch_taken_0x20c910 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C910u;
            // 0x20c914: 0x2882003c  slti        $v0, $a0, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c910) {
            ctx->pc = 0x20C920u;
            goto label_20c920;
        }
    }
    ctx->pc = 0x20C918u;
    // 0x20c918: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C918u;
    {
        const bool branch_taken_0x20c918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c918) {
            ctx->pc = 0x20C924u;
            goto label_20c924;
        }
    }
    ctx->pc = 0x20C920u;
label_20c920:
    // 0x20c920: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c924:
    // 0x20c924: 0x8f8291f4  lw          $v0, -0x6E0C($gp)
    ctx->pc = 0x20c924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939124)));
    // 0x20c928: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x20c928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20c92c: 0x3e00008  jr          $ra
    ctx->pc = 0x20C92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C92Cu;
            // 0x20c930: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C934u;
}
