#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: signal
// Address: 0x128768 - 0x128794
void signal_0x128768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("signal_0x128768");
#endif

    switch (ctx->pc) {
        case 0x128788u: goto label_128788;
        default: break;
    }

    ctx->pc = 0x128768u;

    // 0x128768: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x128768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12876c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12876cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x128770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128774: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x128774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128778: 0x8c643b84  lw          $a0, 0x3B84($v1)
    ctx->pc = 0x128778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15236)));
    // 0x12877c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x128780: 0xc04a142  jal         func_128508
    ctx->pc = 0x128780u;
    SET_GPR_U32(ctx, 31, 0x128788u);
    ctx->pc = 0x128784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128780u;
            // 0x128784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128508u;
    if (runtime->hasFunction(0x128508u)) {
        auto targetFn = runtime->lookupFunction(0x128508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128788u; }
        if (ctx->pc != 0x128788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _signal_r_0x128508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128788u; }
        if (ctx->pc != 0x128788u) { return; }
    }
    ctx->pc = 0x128788u;
label_128788:
    // 0x128788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x128788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12878c: 0x3e00008  jr          $ra
    ctx->pc = 0x12878Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12878Cu;
            // 0x128790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x128794u;
}
