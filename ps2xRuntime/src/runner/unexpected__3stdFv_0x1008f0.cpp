#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: unexpected__3stdFv
// Address: 0x1008f0 - 0x100914
void unexpected__3stdFv_0x1008f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unexpected__3stdFv_0x1008f0");
#endif

    switch (ctx->pc) {
        case 0x1008f0u: goto label_1008f0;
        case 0x1008f4u: goto label_1008f4;
        case 0x1008f8u: goto label_1008f8;
        case 0x1008fcu: goto label_1008fc;
        case 0x100900u: goto label_100900;
        case 0x100904u: goto label_100904;
        case 0x100908u: goto label_100908;
        case 0x10090cu: goto label_10090c;
        case 0x100910u: goto label_100910;
        default: break;
    }

    ctx->pc = 0x1008f0u;

label_1008f0:
    // 0x1008f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1008f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1008f4:
    // 0x1008f4: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_1008f8:
    // 0x1008f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1008f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1008fc:
    // 0x1008fc: 0x8c226318  lw          $v0, 0x6318($at)
    ctx->pc = 0x1008fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25368)));
label_100900:
    // 0x100900: 0x40f809  jalr        $v0
label_100904:
    if (ctx->pc == 0x100904u) {
        ctx->pc = 0x100908u;
        goto label_100908;
    }
    ctx->pc = 0x100900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100908u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x100908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100908u; }
            if (ctx->pc != 0x100908u) { return; }
        }
        }
    }
    ctx->pc = 0x100908u;
label_100908:
    // 0x100908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10090c:
    // 0x10090c: 0x3e00008  jr          $ra
label_100910:
    if (ctx->pc == 0x100910u) {
        ctx->pc = 0x100910u;
            // 0x100910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x100914u;
        goto label_fallthrough_0x10090c;
    }
    ctx->pc = 0x10090Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10090Cu;
            // 0x100910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10090c:
    ctx->pc = 0x100914u;
}
