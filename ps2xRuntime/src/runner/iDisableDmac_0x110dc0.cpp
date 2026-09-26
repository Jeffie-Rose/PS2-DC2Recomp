#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iDisableDmac
// Address: 0x110dc0 - 0x110de0
void iDisableDmac_0x110dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iDisableDmac_0x110dc0");
#endif

    switch (ctx->pc) {
        case 0x110dd0u: goto label_110dd0;
        default: break;
    }

    ctx->pc = 0x110dc0u;

    // 0x110dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110dc8: 0xc043fac  jal         func_10FEB0
    ctx->pc = 0x110DC8u;
    SET_GPR_U32(ctx, 31, 0x110DD0u);
    ctx->pc = 0x10FEB0u;
    if (runtime->hasFunction(0x10FEB0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DD0u; }
        if (ctx->pc != 0x110DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iDisableDmac_0x10feb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110DD0u; }
        if (ctx->pc != 0x110DD0u) { return; }
    }
    ctx->pc = 0x110DD0u;
label_110dd0:
    // 0x110dd0: 0xf  sync
    ctx->pc = 0x110dd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x110DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110DD8u;
            // 0x110ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110DE0u;
}
