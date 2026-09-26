#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkTEX0__FPUiUlUlUl
// Address: 0x13e4e0 - 0x13e52c
void mgSetPkTEX0__FPUiUlUlUl_0x13e4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkTEX0__FPUiUlUlUl_0x13e4e0");
#endif

    ctx->pc = 0x13e4e0u;

    // 0x13e4e0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13e4e4: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x13e4e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x13e4e8: 0x24424150  addiu       $v0, $v0, 0x4150
    ctx->pc = 0x13e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16720));
    // 0x13e4ec: 0x254a4160  addiu       $t2, $t2, 0x4160
    ctx->pc = 0x13e4ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16736));
    // 0x13e4f0: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x13e4f0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e4f4: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x13e4f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13e4f8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x13e4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13e4fc: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x13e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x13e500: 0x7c8b0000  sq          $t3, 0x0($a0)
    ctx->pc = 0x13e500u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 11));
    // 0x13e504: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13e508: 0x794a0000  lq          $t2, 0x0($t2)
    ctx->pc = 0x13e508u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13e50c: 0x7c8a0010  sq          $t2, 0x10($a0)
    ctx->pc = 0x13e50cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 10));
    // 0x13e510: 0xfc860020  sd          $a2, 0x20($a0)
    ctx->pc = 0x13e510u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 6));
    // 0x13e514: 0xfc890028  sd          $t1, 0x28($a0)
    ctx->pc = 0x13e514u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 9));
    // 0x13e518: 0xfc850030  sd          $a1, 0x30($a0)
    ctx->pc = 0x13e518u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 5));
    // 0x13e51c: 0xfc880038  sd          $t0, 0x38($a0)
    ctx->pc = 0x13e51cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 8));
    // 0x13e520: 0xfc870040  sd          $a3, 0x40($a0)
    ctx->pc = 0x13e520u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 7));
    // 0x13e524: 0x3e00008  jr          $ra
    ctx->pc = 0x13E524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E524u;
            // 0x13e528: 0xfc830048  sd          $v1, 0x48($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E52Cu;
}
