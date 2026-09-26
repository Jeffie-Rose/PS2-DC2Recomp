#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__10CMenuInterFi
// Address: 0x235750 - 0x235788
void Initialize__10CMenuInterFi_0x235750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__10CMenuInterFi_0x235750");
#endif

    ctx->pc = 0x235750u;

    // 0x235750: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x235750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235754: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x235754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x235758: 0xa4860010  sh          $a2, 0x10($a0)
    ctx->pc = 0x235758u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x23575c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x23575cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x235760: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x235760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x235764: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x235764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x235768: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x235768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x23576c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x235770: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x235770u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x235774: 0xa0850013  sb          $a1, 0x13($a0)
    ctx->pc = 0x235774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x235778: 0xa0860014  sb          $a2, 0x14($a0)
    ctx->pc = 0x235778u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x23577c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23577cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x235780: 0x3e00008  jr          $ra
    ctx->pc = 0x235780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235780u;
            // 0x235784: 0xa0800015  sb          $zero, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235788u;
}
