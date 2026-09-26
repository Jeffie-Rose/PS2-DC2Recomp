#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgEndDraw__FiP14mgCDrawManager
// Address: 0x142580 - 0x1425a0
void mgEndDraw__FiP14mgCDrawManager_0x142580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgEndDraw__FiP14mgCDrawManager_0x142580");
#endif

    ctx->pc = 0x142580u;

    // 0x142580: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142580u;
    {
        const bool branch_taken_0x142580 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x142584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142580u;
            // 0x142584: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142580) {
            ctx->pc = 0x142590u;
            goto label_142590;
        }
    }
    ctx->pc = 0x142588u;
    // 0x142588: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x142588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x14258c: 0x24a520e0  addiu       $a1, $a1, 0x20E0
    ctx->pc = 0x14258cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8416));
label_142590:
    // 0x142590: 0x8f868774  lw          $a2, -0x788C($gp)
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x142594: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x142594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142598: 0x804d5c8  j           func_135720
    ctx->pc = 0x142598u;
    ctx->pc = 0x14259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142598u;
            // 0x14259c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135720u;
    if (runtime->hasFunction(0x135720u)) {
        auto targetFn = runtime->lookupFunction(0x135720u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Draw__14mgCDrawManagerFiP13sceVif1Packet_0x135720(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1425A0u;
}
