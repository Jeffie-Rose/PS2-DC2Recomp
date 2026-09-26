#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: duhandler__3stdFv
// Address: 0x100950 - 0x100974
void duhandler__3stdFv_0x100950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("duhandler__3stdFv_0x100950");
#endif

    switch (ctx->pc) {
        case 0x100950u: goto label_100950;
        case 0x100954u: goto label_100954;
        case 0x100958u: goto label_100958;
        case 0x10095cu: goto label_10095c;
        case 0x100960u: goto label_100960;
        case 0x100964u: goto label_100964;
        case 0x100968u: goto label_100968;
        case 0x10096cu: goto label_10096c;
        case 0x100970u: goto label_100970;
        default: break;
    }

    ctx->pc = 0x100950u;

label_100950:
    // 0x100950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_100954:
    // 0x100954: 0x3c010032  lui         $at, 0x32
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50 << 16));
label_100958:
    // 0x100958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10095c:
    // 0x10095c: 0x8c226310  lw          $v0, 0x6310($at)
    ctx->pc = 0x10095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25360)));
label_100960:
    // 0x100960: 0x40f809  jalr        $v0
label_100964:
    if (ctx->pc == 0x100964u) {
        ctx->pc = 0x100968u;
        goto label_100968;
    }
    ctx->pc = 0x100960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x100968u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x100968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x100968u; }
            if (ctx->pc != 0x100968u) { return; }
        }
        }
    }
    ctx->pc = 0x100968u;
label_100968:
    // 0x100968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10096c:
    // 0x10096c: 0x3e00008  jr          $ra
label_100970:
    if (ctx->pc == 0x100970u) {
        ctx->pc = 0x100970u;
            // 0x100970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x100974u;
        goto label_fallthrough_0x10096c;
    }
    ctx->pc = 0x10096Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10096Cu;
            // 0x100970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x10096c:
    ctx->pc = 0x100974u;
}
