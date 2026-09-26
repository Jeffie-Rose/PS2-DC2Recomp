#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWeaponInfoData__Fi
// Address: 0x195c40 - 0x195c50
void GetWeaponInfoData__Fi_0x195c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWeaponInfoData__Fi_0x195c40");
#endif

    ctx->pc = 0x195c40u;

    // 0x195c40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x195c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c44: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x195c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195c48: 0x80655f8  j           func_1957E0
    ctx->pc = 0x195C48u;
    ctx->pc = 0x195C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195C48u;
            // 0x195c4c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1957E0u;
    if (runtime->hasFunction(0x1957E0u)) {
        auto targetFn = runtime->lookupFunction(0x1957E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetWeaponData__9CGameDataFi_0x1957e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x195C50u;
}
