#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopSeSeq__Fi
// Address: 0x1902f0 - 0x190320
void StopSeSeq__Fi_0x1902f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopSeSeq__Fi_0x1902f0");
#endif

    switch (ctx->pc) {
        case 0x190300u: goto label_190300;
        case 0x190314u: goto label_190314;
        default: break;
    }

    ctx->pc = 0x1902f0u;

    // 0x1902f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1902f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1902f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1902f8: 0xc063298  jal         func_18CA60
    ctx->pc = 0x1902F8u;
    SET_GPR_U32(ctx, 31, 0x190300u);
    ctx->pc = 0x18CA60u;
    if (runtime->hasFunction(0x18CA60u)) {
        auto targetFn = runtime->lookupFunction(0x18CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190300u; }
        if (ctx->pc != 0x190300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSeq__Fi_0x18ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190300u; }
        if (ctx->pc != 0x190300u) { return; }
    }
    ctx->pc = 0x190300u;
label_190300:
    // 0x190300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x190300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190304: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190304u;
    {
        const bool branch_taken_0x190304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190304) {
            ctx->pc = 0x190314u;
            goto label_190314;
        }
    }
    ctx->pc = 0x19030Cu;
    // 0x19030c: 0xc062e74  jal         func_18B9D0
    ctx->pc = 0x19030Cu;
    SET_GPR_U32(ctx, 31, 0x190314u);
    ctx->pc = 0x18B9D0u;
    if (runtime->hasFunction(0x18B9D0u)) {
        auto targetFn = runtime->lookupFunction(0x18B9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190314u; }
        if (ctx->pc != 0x190314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stop__9sndCSeSeqFv_0x18b9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190314u; }
        if (ctx->pc != 0x190314u) { return; }
    }
    ctx->pc = 0x190314u;
label_190314:
    // 0x190314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190318: 0x3e00008  jr          $ra
    ctx->pc = 0x190318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190318u;
            // 0x19031c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190320u;
}
