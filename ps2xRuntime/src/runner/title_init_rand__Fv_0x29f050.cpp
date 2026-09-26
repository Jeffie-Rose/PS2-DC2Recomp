#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: title_init_rand__Fv
// Address: 0x29f050 - 0x29f074
void title_init_rand__Fv_0x29f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("title_init_rand__Fv_0x29f050");
#endif

    switch (ctx->pc) {
        case 0x29f060u: goto label_29f060;
        case 0x29f068u: goto label_29f068;
        default: break;
    }

    ctx->pc = 0x29f050u;

    // 0x29f050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f058: 0xc0504c4  jal         func_141310
    ctx->pc = 0x29F058u;
    SET_GPR_U32(ctx, 31, 0x29F060u);
    ctx->pc = 0x141310u;
    if (runtime->hasFunction(0x141310u)) {
        auto targetFn = runtime->lookupFunction(0x141310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F060u; }
        if (ctx->pc != 0x29F060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetVSyncCount__Fv_0x141310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F060u; }
        if (ctx->pc != 0x29F060u) { return; }
    }
    ctx->pc = 0x29F060u;
label_29f060:
    // 0x29f060: 0xc04a0e6  jal         func_128398
    ctx->pc = 0x29F060u;
    SET_GPR_U32(ctx, 31, 0x29F068u);
    ctx->pc = 0x29F064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F060u;
            // 0x29f064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128398u;
    if (runtime->hasFunction(0x128398u)) {
        auto targetFn = runtime->lookupFunction(0x128398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F068u; }
        if (ctx->pc != 0x29F068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        srand_0x128398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F068u; }
        if (ctx->pc != 0x29F068u) { return; }
    }
    ctx->pc = 0x29F068u;
label_29f068:
    // 0x29f068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f06c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F06Cu;
            // 0x29f070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F074u;
}
