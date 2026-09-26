#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__10mgCDrawEnvFR10mgCDrawEnv
// Address: 0x138880 - 0x1388a8
void ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880");
#endif

    ctx->pc = 0x138880u;

    // 0x138880: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x138880u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x138884: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x138884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138888: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x138888u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x13888c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x13888cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x138890: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x138890u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x138894: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x138894u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x138898: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x138898u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x13889c: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x13889cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1388a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1388A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1388A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1388A0u;
            // 0x1388a4: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1388A8u;
}
