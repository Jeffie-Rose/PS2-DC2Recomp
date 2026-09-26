#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveParam__14CCameraControlFv
// Address: 0x2ebfa0 - 0x2ebfc4
void GetActiveParam__14CCameraControlFv_0x2ebfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveParam__14CCameraControlFv_0x2ebfa0");
#endif

    ctx->pc = 0x2ebfa0u;

    // 0x2ebfa0: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x2ebfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x2ebfa4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ebfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ebfa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ebfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ebfac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ebfacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ebfb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ebfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ebfb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ebfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ebfb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ebfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ebfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBFBCu;
            // 0x2ebfc0: 0x244200f4  addiu       $v0, $v0, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBFC4u;
}
