#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: iEnableIntc
// Address: 0x110d60 - 0x110d80
void iEnableIntc_0x110d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iEnableIntc_0x110d60");
#endif

    switch (ctx->pc) {
        case 0x110d70u: goto label_110d70;
        default: break;
    }

    ctx->pc = 0x110d60u;

    // 0x110d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110d68: 0xc043fa0  jal         func_10FE80
    ctx->pc = 0x110D68u;
    SET_GPR_U32(ctx, 31, 0x110D70u);
    ctx->pc = 0x10FE80u;
    if (runtime->hasFunction(0x10FE80u)) {
        auto targetFn = runtime->lookupFunction(0x10FE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D70u; }
        if (ctx->pc != 0x110D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iEnableIntc_0x10fe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110D70u; }
        if (ctx->pc != 0x110D70u) { return; }
    }
    ctx->pc = 0x110D70u;
label_110d70:
    // 0x110d70: 0xf  sync
    ctx->pc = 0x110d70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110d78: 0x3e00008  jr          $ra
    ctx->pc = 0x110D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110D78u;
            // 0x110d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110D80u;
}
