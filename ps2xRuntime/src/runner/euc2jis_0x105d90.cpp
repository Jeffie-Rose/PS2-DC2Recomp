#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: euc2jis
// Address: 0x105d90 - 0x105d9c
void euc2jis_0x105d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("euc2jis_0x105d90");
#endif

    ctx->pc = 0x105d90u;

    // 0x105d90: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x105d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x105d94: 0x3e00008  jr          $ra
    ctx->pc = 0x105D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D94u;
            // 0x105d98: 0x38428080  xori        $v0, $v0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105D9Cu;
}
