#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEohNo__12CSceneObjSeqFi
// Address: 0x25c360 - 0x25c368
void SetEohNo__12CSceneObjSeqFi_0x25c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEohNo__12CSceneObjSeqFi_0x25c360");
#endif

    ctx->pc = 0x25c360u;

    // 0x25c360: 0x3e00008  jr          $ra
    ctx->pc = 0x25C360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C360u;
            // 0x25c364: 0xac850064  sw          $a1, 0x64($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C368u;
}
