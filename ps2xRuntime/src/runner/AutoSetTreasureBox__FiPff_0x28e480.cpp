#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoSetTreasureBox__FiPff
// Address: 0x28e480 - 0x28e4a8
void AutoSetTreasureBox__FiPff_0x28e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoSetTreasureBox__FiPff_0x28e480");
#endif

    ctx->pc = 0x28e480u;

    // 0x28e480: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28e484: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x28e484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e488: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28e488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e48c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x28e48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x28e490: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28e490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e494: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28e494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e498: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x28e498u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e49c: 0x8c44300c  lw          $a0, 0x300C($v0)
    ctx->pc = 0x28e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12300)));
    // 0x28e4a0: 0x80a3154  j           func_28C550
    ctx->pc = 0x28E4A0u;
    ctx->pc = 0x28E4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4A0u;
            // 0x28e4a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C550u;
    if (runtime->hasFunction(0x28C550u)) {
        auto targetFn = runtime->lookupFunction(0x28C550u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        PutTreasureBox__19CTreasureBoxManagerFiPffiiiii_0x28c550(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x28E4A8u;
}
