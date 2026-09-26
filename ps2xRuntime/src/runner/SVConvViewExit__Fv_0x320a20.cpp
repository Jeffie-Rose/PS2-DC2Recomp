#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SVConvViewExit__Fv
// Address: 0x320a20 - 0x320a64
void SVConvViewExit__Fv_0x320a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SVConvViewExit__Fv_0x320a20");
#endif

    switch (ctx->pc) {
        case 0x320a30u: goto label_320a30;
        case 0x320a3cu: goto label_320a3c;
        case 0x320a48u: goto label_320a48;
        case 0x320a50u: goto label_320a50;
        case 0x320a58u: goto label_320a58;
        default: break;
    }

    ctx->pc = 0x320a20u;

    // 0x320a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x320a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320a28: 0xc048958  jal         func_122560
    ctx->pc = 0x320A28u;
    SET_GPR_U32(ctx, 31, 0x320A30u);
    ctx->pc = 0x122560u;
    if (runtime->hasFunction(0x122560u)) {
        auto targetFn = runtime->lookupFunction(0x122560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A30u; }
        if (ctx->pc != 0x320A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcEnd_0x122560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A30u; }
        if (ctx->pc != 0x320A30u) { return; }
    }
    ctx->pc = 0x320A30u;
label_320a30:
    // 0x320a30: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x320a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x320a34: 0xc052d40  jal         func_14B500
    ctx->pc = 0x320A34u;
    SET_GPR_U32(ctx, 31, 0x320A3Cu);
    ctx->pc = 0x320A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320A34u;
            // 0x320a38: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B500u;
    if (runtime->hasFunction(0x14B500u)) {
        auto targetFn = runtime->lookupFunction(0x14B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A3Cu; }
        if (ctx->pc != 0x320A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoRepeatOff__8CGamePadFv_0x14b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A3Cu; }
        if (ctx->pc != 0x320A3Cu) { return; }
    }
    ctx->pc = 0x320A3Cu;
label_320a3c:
    // 0x320a3c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x320a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x320a40: 0xc052d48  jal         func_14B520
    ctx->pc = 0x320A40u;
    SET_GPR_U32(ctx, 31, 0x320A48u);
    ctx->pc = 0x320A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320A40u;
            // 0x320a44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A48u; }
        if (ctx->pc != 0x320A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A48u; }
        if (ctx->pc != 0x320A48u) { return; }
    }
    ctx->pc = 0x320A48u;
label_320a48:
    // 0x320a48: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x320A48u;
    SET_GPR_U32(ctx, 31, 0x320A50u);
    ctx->pc = 0x320A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320A48u;
            // 0x320a4c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A50u; }
        if (ctx->pc != 0x320A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A50u; }
        if (ctx->pc != 0x320A50u) { return; }
    }
    ctx->pc = 0x320A50u;
label_320a50:
    // 0x320a50: 0xc05188c  jal         func_146230
    ctx->pc = 0x320A50u;
    SET_GPR_U32(ctx, 31, 0x320A58u);
    ctx->pc = 0x146230u;
    if (runtime->hasFunction(0x146230u)) {
        auto targetFn = runtime->lookupFunction(0x146230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A58u; }
        if (ctx->pc != 0x320A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCloseFont__Fv_0x146230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A58u; }
        if (ctx->pc != 0x320A58u) { return; }
    }
    ctx->pc = 0x320A58u;
label_320a58:
    // 0x320a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x320A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320A5Cu;
            // 0x320a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x320A64u;
}
