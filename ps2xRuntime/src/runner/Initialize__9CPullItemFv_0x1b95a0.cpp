#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CPullItemFv
// Address: 0x1b95a0 - 0x1b95c8
void Initialize__9CPullItemFv_0x1b95a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CPullItemFv_0x1b95a0");
#endif

    ctx->pc = 0x1b95a0u;

    // 0x1b95a0: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x1b95a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x1b95a4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1b95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b95a8: 0xa4800042  sh          $zero, 0x42($a0)
    ctx->pc = 0x1b95a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b95ac: 0xa4800030  sh          $zero, 0x30($a0)
    ctx->pc = 0x1b95acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b95b0: 0xa4800032  sh          $zero, 0x32($a0)
    ctx->pc = 0x1b95b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b95b4: 0xa4830034  sh          $v1, 0x34($a0)
    ctx->pc = 0x1b95b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b95b8: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x1b95b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b95bc: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x1b95bcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b95c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B95C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B95C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95C0u;
            // 0x1b95c4: 0xa4800044  sh          $zero, 0x44($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B95C8u;
}
