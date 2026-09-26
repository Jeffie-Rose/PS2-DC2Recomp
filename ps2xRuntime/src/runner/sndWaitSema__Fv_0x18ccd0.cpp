#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndWaitSema__Fv
// Address: 0x18ccd0 - 0x18ccf8
void sndWaitSema__Fv_0x18ccd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndWaitSema__Fv_0x18ccd0");
#endif

    switch (ctx->pc) {
        case 0x18ccecu: goto label_18ccec;
        default: break;
    }

    ctx->pc = 0x18ccd0u;

    // 0x18ccd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ccd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ccd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ccd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ccd8: 0x8f84803c  lw          $a0, -0x7FC4($gp)
    ctx->pc = 0x18ccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934588)));
    // 0x18ccdc: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CCDCu;
    {
        const bool branch_taken_0x18ccdc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18ccdc) {
            ctx->pc = 0x18CCECu;
            goto label_18ccec;
        }
    }
    ctx->pc = 0x18CCE4u;
    // 0x18cce4: 0xc044048  jal         func_110120
    ctx->pc = 0x18CCE4u;
    SET_GPR_U32(ctx, 31, 0x18CCECu);
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCECu; }
        if (ctx->pc != 0x18CCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCECu; }
        if (ctx->pc != 0x18CCECu) { return; }
    }
    ctx->pc = 0x18CCECu;
label_18ccec:
    // 0x18ccec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ccecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x18CCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CCF0u;
            // 0x18ccf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CCF8u;
}
