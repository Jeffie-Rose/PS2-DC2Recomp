#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UserDataRefresh__Fv
// Address: 0x1a1850 - 0x1a1880
void UserDataRefresh__Fv_0x1a1850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UserDataRefresh__Fv_0x1a1850");
#endif

    switch (ctx->pc) {
        case 0x1a1860u: goto label_1a1860;
        case 0x1a1874u: goto label_1a1874;
        default: break;
    }

    ctx->pc = 0x1a1850u;

    // 0x1a1850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1858: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A1858u;
    SET_GPR_U32(ctx, 31, 0x1A1860u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1860u; }
        if (ctx->pc != 0x1A1860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1860u; }
        if (ctx->pc != 0x1A1860u) { return; }
    }
    ctx->pc = 0x1A1860u;
label_1a1860:
    // 0x1a1860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1864: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1864u;
    {
        const bool branch_taken_0x1a1864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1864) {
            ctx->pc = 0x1A1874u;
            goto label_1a1874;
        }
    }
    ctx->pc = 0x1A186Cu;
    // 0x1a186c: 0xc066ce0  jal         func_19B380
    ctx->pc = 0x1A186Cu;
    SET_GPR_U32(ctx, 31, 0x1A1874u);
    ctx->pc = 0x19B380u;
    if (runtime->hasFunction(0x19B380u)) {
        auto targetFn = runtime->lookupFunction(0x19B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1874u; }
        if (ctx->pc != 0x1A1874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParam__16CUserDataManagerFv_0x19b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1874u; }
        if (ctx->pc != 0x1A1874u) { return; }
    }
    ctx->pc = 0x1A1874u;
label_1a1874:
    // 0x1a1874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1878: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1878u;
            // 0x1a187c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1880u;
}
