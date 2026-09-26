#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMenuDlTexture__Fv
// Address: 0x222450 - 0x222468
void GetMenuDlTexture__Fv_0x222450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMenuDlTexture__Fv_0x222450");
#endif

    ctx->pc = 0x222450u;

    // 0x222450: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x222454: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x222454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x222458: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x222458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22245c: 0x24a5a5a0  addiu       $a1, $a1, -0x5A60
    ctx->pc = 0x22245cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944160));
    // 0x222460: 0x804b414  j           func_12D050
    ctx->pc = 0x222460u;
    ctx->pc = 0x222464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x222460u;
            // 0x222464: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x222468u;
}
