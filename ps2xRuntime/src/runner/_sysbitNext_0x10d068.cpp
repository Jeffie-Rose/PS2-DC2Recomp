#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sysbitNext
// Address: 0x10d068 - 0x10d084
void _sysbitNext_0x10d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitNext_0x10d068");
#endif

    ctx->pc = 0x10d068u;

    // 0x10d068: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x10d068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10d06c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x10d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10d070: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x10d070u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10d074: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x10d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x10d078: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10d07c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D07Cu;
            // 0x10d080: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D084u;
}
