#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStart__14CFuncPointMngrFi
// Address: 0x29d870 - 0x29d8a4
void GetStart__14CFuncPointMngrFi_0x29d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStart__14CFuncPointMngrFi_0x29d870");
#endif

    ctx->pc = 0x29d870u;

    // 0x29d870: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x29D870u;
    {
        const bool branch_taken_0x29d870 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x29D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D870u;
            // 0x29d874: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d870) {
            ctx->pc = 0x29D89Cu;
            goto label_29d89c;
        }
    }
    ctx->pc = 0x29D878u;
    // 0x29d878: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x29d878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29d87c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D87Cu;
    {
        const bool branch_taken_0x29d87c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D87Cu;
            // 0x29d880: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d87c) {
            ctx->pc = 0x29D890u;
            goto label_29d890;
        }
    }
    ctx->pc = 0x29D884u;
    // 0x29d884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29D884u;
    {
        const bool branch_taken_0x29d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d884) {
            ctx->pc = 0x29D89Cu;
            goto label_29d89c;
        }
    }
    ctx->pc = 0x29D88Cu;
    // 0x29d88c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29d890:
    // 0x29d890: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29d894: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x29d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29d898: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x29d898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_29d89c:
    // 0x29d89c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D8A4u;
}
