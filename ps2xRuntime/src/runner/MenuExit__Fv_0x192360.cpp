#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuExit__Fv
// Address: 0x192360 - 0x192388
void MenuExit__Fv_0x192360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuExit__Fv_0x192360");
#endif

    switch (ctx->pc) {
        case 0x192374u: goto label_192374;
        case 0x19237cu: goto label_19237c;
        default: break;
    }

    ctx->pc = 0x192360u;

    // 0x192360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192364: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x192364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x192368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19236c: 0xc052d40  jal         func_14B500
    ctx->pc = 0x19236Cu;
    SET_GPR_U32(ctx, 31, 0x192374u);
    ctx->pc = 0x192370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19236Cu;
            // 0x192370: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B500u;
    if (runtime->hasFunction(0x14B500u)) {
        auto targetFn = runtime->lookupFunction(0x14B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192374u; }
        if (ctx->pc != 0x192374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoRepeatOff__8CGamePadFv_0x14b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192374u; }
        if (ctx->pc != 0x192374u) { return; }
    }
    ctx->pc = 0x192374u;
label_192374:
    // 0x192374: 0xc05188c  jal         func_146230
    ctx->pc = 0x192374u;
    SET_GPR_U32(ctx, 31, 0x19237Cu);
    ctx->pc = 0x146230u;
    if (runtime->hasFunction(0x146230u)) {
        auto targetFn = runtime->lookupFunction(0x146230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19237Cu; }
        if (ctx->pc != 0x19237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCloseFont__Fv_0x146230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19237Cu; }
        if (ctx->pc != 0x19237Cu) { return; }
    }
    ctx->pc = 0x19237Cu;
label_19237c:
    // 0x19237c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19237cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192380: 0x3e00008  jr          $ra
    ctx->pc = 0x192380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192380u;
            // 0x192384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192388u;
}
