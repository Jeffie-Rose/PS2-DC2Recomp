#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearMagicSwordPow__16CBattleCharaInfoFv
// Address: 0x19fd00 - 0x19fd2c
void ClearMagicSwordPow__16CBattleCharaInfoFv_0x19fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearMagicSwordPow__16CBattleCharaInfoFv_0x19fd00");
#endif

    ctx->pc = 0x19fd00u;

    // 0x19fd00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19fd04: 0xa4830018  sh          $v1, 0x18($a0)
    ctx->pc = 0x19fd04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x19fd08: 0xa480001a  sh          $zero, 0x1A($a0)
    ctx->pc = 0x19fd08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fd0c: 0xa480001c  sh          $zero, 0x1C($a0)
    ctx->pc = 0x19fd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fd10: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x19fd10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fd14: 0xa4800020  sh          $zero, 0x20($a0)
    ctx->pc = 0x19fd14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fd18: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x19fd18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fd1c: 0xa4800024  sh          $zero, 0x24($a0)
    ctx->pc = 0x19fd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fd20: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x19fd20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x19fd24: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD24u;
            // 0x19fd28: 0xa4800028  sh          $zero, 0x28($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FD2Cu;
}
