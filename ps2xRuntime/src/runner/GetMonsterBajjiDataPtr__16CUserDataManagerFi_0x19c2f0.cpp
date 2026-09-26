#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterBajjiDataPtr__16CUserDataManagerFi
// Address: 0x19c2f0 - 0x19c2f8
void GetMonsterBajjiDataPtr__16CUserDataManagerFi_0x19c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterBajjiDataPtr__16CUserDataManagerFi_0x19c2f0");
#endif

    ctx->pc = 0x19c2f0u;

    // 0x19c2f0: 0x8066b10  j           func_19AC40
    ctx->pc = 0x19C2F0u;
    ctx->pc = 0x19C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2F0u;
            // 0x19c2f4: 0x24844eb0  addiu       $a0, $a0, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC40u;
    if (runtime->hasFunction(0x19AC40u)) {
        auto targetFn = runtime->lookupFunction(0x19AC40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C2F8u;
}
