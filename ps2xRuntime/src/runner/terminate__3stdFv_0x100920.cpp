#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: terminate__3stdFv
// Address: 0x100920 - 0x100944
void terminate__3stdFv_0x100920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("terminate__3stdFv_0x100920");
#endif

    switch (ctx->pc) {
        case 0x100920u: goto label_100920;
        case 0x100924u: goto label_100924;
        case 0x100928u: goto label_100928;
        case 0x10092cu: goto label_10092c;
        case 0x100930u: goto label_100930;
        case 0x100934u: goto label_100934;
        case 0x100938u: goto label_100938;
        case 0x10093cu: goto label_10093c;
        case 0x100940u: goto label_100940;
        default: break;
    }

    ctx->pc = 0x100920u;

label_100920:
    // 0x100920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_100924:
    // 0x100924: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x100924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_100928:
    // 0x100928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10092c:
    // 0x10092c: 0x8c226310  lw          $v0, 0x6310($at)
    ctx->pc = 0x10092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25360)));
label_100930:
    // 0x100930: 0x40f809  jalr        $v0
label_100934:
    if (ctx->pc == 0x100934u) {
        ctx->pc = 0x100938u;
        goto label_100938;
    }
    ctx->pc = 0x100930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100938u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x100938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100938u; }
            if (ctx->pc != 0x100938u) { return; }
        }
        }
    }
    ctx->pc = 0x100938u;
label_100938:
    // 0x100938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10093c:
    // 0x10093c: 0x3e00008  jr          $ra
label_100940:
    if (ctx->pc == 0x100940u) {
        ctx->pc = 0x100940u;
            // 0x100940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x100944u;
        goto label_fallthrough_0x10093c;
    }
    ctx->pc = 0x10093Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10093Cu;
            // 0x100940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10093c:
    ctx->pc = 0x100944u;
}
