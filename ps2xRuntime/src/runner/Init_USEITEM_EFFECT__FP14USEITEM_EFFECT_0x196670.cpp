#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Init_USEITEM_EFFECT__FP14USEITEM_EFFECT
// Address: 0x196670 - 0x196690
void Init_USEITEM_EFFECT__FP14USEITEM_EFFECT_0x196670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_USEITEM_EFFECT__FP14USEITEM_EFFECT_0x196670");
#endif

    ctx->pc = 0x196670u;

    // 0x196670: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x196670u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x196674: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x196674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x196678: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x196678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x19667c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x19667cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x196680: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x196680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x196684: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x196684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x196688: 0x3e00008  jr          $ra
    ctx->pc = 0x196688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19668Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196688u;
            // 0x19668c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196690u;
}
