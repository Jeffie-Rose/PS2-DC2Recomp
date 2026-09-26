#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkTEX0__FPUiUlUl
// Address: 0x13e4a0 - 0x13e4e0
void mgSetPkTEX0__FPUiUlUl_0x13e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkTEX0__FPUiUlUl_0x13e4a0");
#endif

    ctx->pc = 0x13e4a0u;

    // 0x13e4a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13e4a4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x13e4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x13e4a8: 0x24424130  addiu       $v0, $v0, 0x4130
    ctx->pc = 0x13e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16688));
    // 0x13e4ac: 0x25084140  addiu       $t0, $t0, 0x4140
    ctx->pc = 0x13e4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16704));
    // 0x13e4b0: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x13e4b0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e4b4: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13e4b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x13e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13e4bc: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x13e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x13e4c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13e4c4: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x13e4c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13e4c8: 0x7c880010  sq          $t0, 0x10($a0)
    ctx->pc = 0x13e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x13e4cc: 0xfc860020  sd          $a2, 0x20($a0)
    ctx->pc = 0x13e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 6));
    // 0x13e4d0: 0xfc870028  sd          $a3, 0x28($a0)
    ctx->pc = 0x13e4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 7));
    // 0x13e4d4: 0xfc850030  sd          $a1, 0x30($a0)
    ctx->pc = 0x13e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 5));
    // 0x13e4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4D8u;
            // 0x13e4dc: 0xfc830038  sd          $v1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E4E0u;
}
