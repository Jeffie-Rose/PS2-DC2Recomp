#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitWorldCoord__Fv
// Address: 0x260f70 - 0x260fbc
void InitWorldCoord__Fv_0x260f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitWorldCoord__Fv_0x260f70");
#endif

    ctx->pc = 0x260f70u;

    // 0x260f70: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260f74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x260f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x260f78: 0xac20e438  sw          $zero, -0x1BC8($at)
    ctx->pc = 0x260f78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960184), GPR_U32(ctx, 0));
    // 0x260f7c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260f80: 0xaf8097f4  sw          $zero, -0x680C($gp)
    ctx->pc = 0x260f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 0));
    // 0x260f84: 0xac20e434  sw          $zero, -0x1BCC($at)
    ctx->pc = 0x260f84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960180), GPR_U32(ctx, 0));
    // 0x260f88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260f8c: 0xac23e43c  sw          $v1, -0x1BC4($at)
    ctx->pc = 0x260f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960188), GPR_U32(ctx, 3));
    // 0x260f90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260f94: 0xac20e430  sw          $zero, -0x1BD0($at)
    ctx->pc = 0x260f94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960176), GPR_U32(ctx, 0));
    // 0x260f98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260f9c: 0xac20e44c  sw          $zero, -0x1BB4($at)
    ctx->pc = 0x260f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960204), GPR_U32(ctx, 0));
    // 0x260fa0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260fa4: 0xac20e448  sw          $zero, -0x1BB8($at)
    ctx->pc = 0x260fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960200), GPR_U32(ctx, 0));
    // 0x260fa8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260fac: 0xac20e444  sw          $zero, -0x1BBC($at)
    ctx->pc = 0x260facu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960196), GPR_U32(ctx, 0));
    // 0x260fb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x260fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x260fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x260FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260FB4u;
            // 0x260fb8: 0xac20e440  sw          $zero, -0x1BC0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260FBCu;
}
