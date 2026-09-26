#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: isceSifSendCmd
// Address: 0x112828 - 0x112864
void isceSifSendCmd_0x112828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isceSifSendCmd_0x112828");
#endif

    switch (ctx->pc) {
        case 0x112858u: goto label_112858;
        default: break;
    }

    ctx->pc = 0x112828u;

    // 0x112828: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x112828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11282c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x11282cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112830: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x112830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112838: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x112838u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11283c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11283cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112844: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x112844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112848: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x112848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11284c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x11284cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112850: 0xc0449ac  jal         func_1126B0
    ctx->pc = 0x112850u;
    SET_GPR_U32(ctx, 31, 0x112858u);
    ctx->pc = 0x112854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112850u;
            // 0x112854: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1126B0u;
    if (runtime->hasFunction(0x1126B0u)) {
        auto targetFn = runtime->lookupFunction(0x1126B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112858u; }
        if (ctx->pc != 0x112858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceSifSendCmd_0x1126b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112858u; }
        if (ctx->pc != 0x112858u) { return; }
    }
    ctx->pc = 0x112858u;
label_112858:
    // 0x112858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11285c: 0x3e00008  jr          $ra
    ctx->pc = 0x11285Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11285Cu;
            // 0x112860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112864u;
}
