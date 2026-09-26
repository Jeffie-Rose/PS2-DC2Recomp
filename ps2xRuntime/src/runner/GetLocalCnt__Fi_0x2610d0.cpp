#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLocalCnt__Fi
// Address: 0x2610d0 - 0x26110c
void GetLocalCnt__Fi_0x2610d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLocalCnt__Fi_0x2610d0");
#endif

    ctx->pc = 0x2610d0u;

    // 0x2610d0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2610D0u;
    {
        const bool branch_taken_0x2610d0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2610D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2610D0u;
            // 0x2610d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610d0) {
            ctx->pc = 0x2610E8u;
            goto label_2610e8;
        }
    }
    ctx->pc = 0x2610D8u;
    // 0x2610d8: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x2610d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2610dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2610DCu;
    {
        const bool branch_taken_0x2610dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2610E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2610DCu;
            // 0x2610e0: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610dc) {
            ctx->pc = 0x2610F0u;
            goto label_2610f0;
        }
    }
    ctx->pc = 0x2610E4u;
    // 0x2610e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2610e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2610e8:
    // 0x2610e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2610E8u;
    {
        const bool branch_taken_0x2610e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2610e8) {
            ctx->pc = 0x261104u;
            goto label_261104;
        }
    }
    ctx->pc = 0x2610F0u;
label_2610f0:
    // 0x2610f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2610f4: 0x2442efc0  addiu       $v0, $v0, -0x1040
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963136));
    // 0x2610f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2610f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2610fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2610fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261100: 0x0  nop
    ctx->pc = 0x261100u;
    // NOP
label_261104:
    // 0x261104: 0x3e00008  jr          $ra
    ctx->pc = 0x261104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26110Cu;
}
