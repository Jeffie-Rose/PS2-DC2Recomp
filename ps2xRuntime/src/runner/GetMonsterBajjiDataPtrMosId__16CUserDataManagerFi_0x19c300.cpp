#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi
// Address: 0x19c300 - 0x19c308
void GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300");
#endif

    ctx->pc = 0x19c300u;

    // 0x19c300: 0x8066b20  j           func_19AC80
    ctx->pc = 0x19C300u;
    ctx->pc = 0x19C304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C300u;
            // 0x19c304: 0x24844eb0  addiu       $a0, $a0, 0x4EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC80u;
    if (runtime->hasFunction(0x19AC80u)) {
        auto targetFn = runtime->lookupFunction(0x19AC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetMonsterBajjiDataByMonsterID__11CMonsterBoxFi_0x19ac80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19C308u;
}
