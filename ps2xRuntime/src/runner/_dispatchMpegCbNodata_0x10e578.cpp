#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dispatchMpegCbNodata
// Address: 0x10e578 - 0x10e59c
void _dispatchMpegCbNodata_0x10e578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispatchMpegCbNodata_0x10e578");
#endif

    switch (ctx->pc) {
        case 0x10e590u: goto label_10e590;
        default: break;
    }

    ctx->pc = 0x10e578u;

    // 0x10e578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e580: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10e580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10e584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e588: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10E588u;
    SET_GPR_U32(ctx, 31, 0x10E590u);
    ctx->pc = 0x10E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E588u;
            // 0x10e58c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E590u; }
        if (ctx->pc != 0x10E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E590u; }
        if (ctx->pc != 0x10E590u) { return; }
    }
    ctx->pc = 0x10E590u;
label_10e590:
    // 0x10e590: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10e590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e594: 0x3e00008  jr          $ra
    ctx->pc = 0x10E594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E594u;
            // 0x10e598: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E59Cu;
}
