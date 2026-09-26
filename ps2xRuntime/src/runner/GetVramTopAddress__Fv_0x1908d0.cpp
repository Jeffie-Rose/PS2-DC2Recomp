#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVramTopAddress__Fv
// Address: 0x1908d0 - 0x1908f0
void GetVramTopAddress__Fv_0x1908d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVramTopAddress__Fv_0x1908d0");
#endif

    switch (ctx->pc) {
        case 0x1908e0u: goto label_1908e0;
        default: break;
    }

    ctx->pc = 0x1908d0u;

    // 0x1908d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1908d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1908d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1908d8: 0xc050848  jal         func_142120
    ctx->pc = 0x1908D8u;
    SET_GPR_U32(ctx, 31, 0x1908E0u);
    ctx->pc = 0x142120u;
    if (runtime->hasFunction(0x142120u)) {
        auto targetFn = runtime->lookupFunction(0x142120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908E0u; }
        if (ctx->pc != 0x1908E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetTopVRAMAddress__Fv_0x142120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908E0u; }
        if (ctx->pc != 0x1908E0u) { return; }
    }
    ctx->pc = 0x1908E0u;
label_1908e0:
    // 0x1908e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1908e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1908e4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1908e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1908e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1908E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1908ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1908E8u;
            // 0x1908ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1908F0u;
}
