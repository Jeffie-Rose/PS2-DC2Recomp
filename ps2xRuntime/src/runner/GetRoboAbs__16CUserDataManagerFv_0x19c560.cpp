#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboAbs__16CUserDataManagerFv
// Address: 0x19c560 - 0x19c568
void GetRoboAbs__16CUserDataManagerFv_0x19c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboAbs__16CUserDataManagerFv_0x19c560");
#endif

    ctx->pc = 0x19c560u;

    // 0x19c560: 0x3e00008  jr          $ra
    ctx->pc = 0x19C560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C560u;
            // 0x19c564: 0xc480468c  lwc1        $f0, 0x468C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 18060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C568u;
}
