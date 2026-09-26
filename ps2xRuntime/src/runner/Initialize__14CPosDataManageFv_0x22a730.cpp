#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CPosDataManageFv
// Address: 0x22a730 - 0x22a750
void Initialize__14CPosDataManageFv_0x22a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CPosDataManageFv_0x22a730");
#endif

    ctx->pc = 0x22a730u;

    // 0x22a730: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x22a730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x22a734: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x22a734u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a738: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x22a738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x22a73c: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x22a73cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a740: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x22a740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x22a744: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x22a744u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x22a748: 0x3e00008  jr          $ra
    ctx->pc = 0x22A748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A748u;
            // 0x22a74c: 0xa080001e  sb          $zero, 0x1E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A750u;
}
