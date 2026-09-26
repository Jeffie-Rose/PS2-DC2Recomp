#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MovieViewExit__Fv
// Address: 0x2c7260 - 0x2c728c
void MovieViewExit__Fv_0x2c7260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MovieViewExit__Fv_0x2c7260");
#endif

    switch (ctx->pc) {
        case 0x2c7270u: goto label_2c7270;
        case 0x2c7278u: goto label_2c7278;
        case 0x2c7280u: goto label_2c7280;
        default: break;
    }

    ctx->pc = 0x2c7260u;

    // 0x2c7260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c7264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c7268: 0xc0635f0  jal         func_18D7C0
    ctx->pc = 0x2C7268u;
    SET_GPR_U32(ctx, 31, 0x2C7270u);
    ctx->pc = 0x2C726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7268u;
            // 0x2c726c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7270u; }
        if (ctx->pc != 0x2C7270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7270u; }
        if (ctx->pc != 0x2C7270u) { return; }
    }
    ctx->pc = 0x2C7270u;
label_2c7270:
    // 0x2c7270: 0xc05188c  jal         func_146230
    ctx->pc = 0x2C7270u;
    SET_GPR_U32(ctx, 31, 0x2C7278u);
    ctx->pc = 0x146230u;
    if (runtime->hasFunction(0x146230u)) {
        auto targetFn = runtime->lookupFunction(0x146230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7278u; }
        if (ctx->pc != 0x2C7278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCloseFont__Fv_0x146230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7278u; }
        if (ctx->pc != 0x2C7278u) { return; }
    }
    ctx->pc = 0x2C7278u;
label_2c7278:
    // 0x2c7278: 0xc050478  jal         func_1411E0
    ctx->pc = 0x2C7278u;
    SET_GPR_U32(ctx, 31, 0x2C7280u);
    ctx->pc = 0x2C727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7278u;
            // 0x2c727c: 0x8f849d6c  lw          $a0, -0x6294($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942060)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1411E0u;
    if (runtime->hasFunction(0x1411E0u)) {
        auto targetFn = runtime->lookupFunction(0x1411E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7280u; }
        if (ctx->pc != 0x2C7280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPerformanceMeter__Fi_0x1411e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7280u; }
        if (ctx->pc != 0x2C7280u) { return; }
    }
    ctx->pc = 0x2C7280u;
label_2c7280:
    // 0x2c7280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7284: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7284u;
            // 0x2c7288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C728Cu;
}
