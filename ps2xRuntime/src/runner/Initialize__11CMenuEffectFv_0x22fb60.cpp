#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11CMenuEffectFv
// Address: 0x22fb60 - 0x22fb88
void Initialize__11CMenuEffectFv_0x22fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11CMenuEffectFv_0x22fb60");
#endif

    ctx->pc = 0x22fb60u;

    // 0x22fb60: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x22fb60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22fb64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22fb68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x22fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x22fb6c: 0xa0830009  sb          $v1, 0x9($a0)
    ctx->pc = 0x22fb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x22fb70: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x22fb70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x22fb74: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x22fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22fb78: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x22fb78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x22fb7c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x22fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x22fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x22FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FB80u;
            // 0x22fb84: 0xa4830034  sh          $v1, 0x34($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22FB88u;
}
