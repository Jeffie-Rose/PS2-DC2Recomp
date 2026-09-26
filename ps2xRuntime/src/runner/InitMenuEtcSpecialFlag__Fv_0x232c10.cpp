#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMenuEtcSpecialFlag__Fv
// Address: 0x232c10 - 0x232c18
void InitMenuEtcSpecialFlag__Fv_0x232c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMenuEtcSpecialFlag__Fv_0x232c10");
#endif

    ctx->pc = 0x232c10u;

    // 0x232c10: 0x3e00008  jr          $ra
    ctx->pc = 0x232C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232C10u;
            // 0x232c14: 0xaf809500  sw          $zero, -0x6B00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232C18u;
}
