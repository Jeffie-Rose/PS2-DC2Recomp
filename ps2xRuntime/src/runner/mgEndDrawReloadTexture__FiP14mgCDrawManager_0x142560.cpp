#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgEndDrawReloadTexture__FiP14mgCDrawManager
// Address: 0x142560 - 0x142580
void mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560");
#endif

    ctx->pc = 0x142560u;

    // 0x142560: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142560u;
    {
        const bool branch_taken_0x142560 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x142564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142560u;
            // 0x142564: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142560) {
            ctx->pc = 0x142570u;
            goto label_142570;
        }
    }
    ctx->pc = 0x142568u;
    // 0x142568: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x142568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x14256c: 0x24a520e0  addiu       $a1, $a1, 0x20E0
    ctx->pc = 0x14256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8416));
label_142570:
    // 0x142570: 0x8f868774  lw          $a2, -0x788C($gp)
    ctx->pc = 0x142570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142574: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x142574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142578: 0x804d598  j           func_135660
    ctx->pc = 0x142578u;
    ctx->pc = 0x14257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142578u;
            // 0x14257c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135660u;
    if (runtime->hasFunction(0x135660u)) {
        auto targetFn = runtime->lookupFunction(0x135660u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ReloadTexture__14mgCDrawManagerFiP13sceVif1Packet_0x135660(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x142580u;
}
