#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDrawDirectStart__Fv
// Address: 0x1430c0 - 0x1430e0
void mgDrawDirectStart__Fv_0x1430c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDrawDirectStart__Fv_0x1430c0");
#endif

    switch (ctx->pc) {
        case 0x1430d0u: goto label_1430d0;
        default: break;
    }

    ctx->pc = 0x1430c0u;

    // 0x1430c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1430c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1430c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1430c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1430c8: 0xc041ace  jal         func_106B38
    ctx->pc = 0x1430C8u;
    SET_GPR_U32(ctx, 31, 0x1430D0u);
    ctx->pc = 0x1430CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1430C8u;
            // 0x1430cc: 0x8f848774  lw          $a0, -0x788C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1430D0u; }
        if (ctx->pc != 0x1430D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1430D0u; }
        if (ctx->pc != 0x1430D0u) { return; }
    }
    ctx->pc = 0x1430D0u;
label_1430d0:
    // 0x1430d0: 0xaf808888  sw          $zero, -0x7778($gp)
    ctx->pc = 0x1430d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 0));
    // 0x1430d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1430d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1430d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1430D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1430DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1430D8u;
            // 0x1430dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1430E0u;
}
