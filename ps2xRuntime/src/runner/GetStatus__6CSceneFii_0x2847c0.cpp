#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStatus__6CSceneFii
// Address: 0x2847c0 - 0x2847f0
void GetStatus__6CSceneFii_0x2847c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStatus__6CSceneFii_0x2847c0");
#endif

    switch (ctx->pc) {
        case 0x2847d0u: goto label_2847d0;
        default: break;
    }

    ctx->pc = 0x2847c0u;

    // 0x2847c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2847c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2847c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2847c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2847c8: 0xc0a0da8  jal         func_2836A0
    ctx->pc = 0x2847C8u;
    SET_GPR_U32(ctx, 31, 0x2847D0u);
    ctx->pc = 0x2836A0u;
    if (runtime->hasFunction(0x2836A0u)) {
        auto targetFn = runtime->lookupFunction(0x2836A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2847D0u; }
        if (ctx->pc != 0x2847D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__6CSceneFii_0x2836a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2847D0u; }
        if (ctx->pc != 0x2847D0u) { return; }
    }
    ctx->pc = 0x2847D0u;
label_2847d0:
    // 0x2847d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2847D0u;
    {
        const bool branch_taken_0x2847d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2847d0) {
            ctx->pc = 0x2847E0u;
            goto label_2847e0;
        }
    }
    ctx->pc = 0x2847D8u;
    // 0x2847d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2847D8u;
    {
        const bool branch_taken_0x2847d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2847D8u;
            // 0x2847dc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847d8) {
            ctx->pc = 0x2847E4u;
            goto label_2847e4;
        }
    }
    ctx->pc = 0x2847E0u;
label_2847e0:
    // 0x2847e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2847e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2847e4:
    // 0x2847e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2847e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2847e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2847E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2847ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2847E8u;
            // 0x2847ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2847F0u;
}
