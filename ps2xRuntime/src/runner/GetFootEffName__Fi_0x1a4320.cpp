#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFootEffName__Fi
// Address: 0x1a4320 - 0x1a4370
void GetFootEffName__Fi_0x1a4320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFootEffName__Fi_0x1a4320");
#endif

    ctx->pc = 0x1a4320u;

    // 0x1a4320: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4320u;
    {
        const bool branch_taken_0x1a4320 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A4324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4320u;
            // 0x1a4324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4320) {
            ctx->pc = 0x1A4338u;
            goto label_1a4338;
        }
    }
    ctx->pc = 0x1A4328u;
    // 0x1a4328: 0x2882001e  slti        $v0, $a0, 0x1E
    ctx->pc = 0x1a4328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1a432c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A432Cu;
    {
        const bool branch_taken_0x1a432c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A432Cu;
            // 0x1a4330: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a432c) {
            ctx->pc = 0x1A4340u;
            goto label_1a4340;
        }
    }
    ctx->pc = 0x1A4334u;
    // 0x1a4334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4338:
    // 0x1a4338: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A4338u;
    {
        const bool branch_taken_0x1a4338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4338) {
            ctx->pc = 0x1A4368u;
            goto label_1a4368;
        }
    }
    ctx->pc = 0x1A4340u;
label_1a4340:
    // 0x1a4340: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4344: 0x24426680  addiu       $v0, $v0, 0x6680
    ctx->pc = 0x1a4344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26240));
    // 0x1a4348: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a4348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a434c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4350: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a4350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a4354: 0x24426670  addiu       $v0, $v0, 0x6670
    ctx->pc = 0x1a4354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26224));
    // 0x1a4358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a4358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a435c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4360: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4364: 0x0  nop
    ctx->pc = 0x1a4364u;
    // NOP
label_1a4368:
    // 0x1a4368: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4370u;
}
