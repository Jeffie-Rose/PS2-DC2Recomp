#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MotionTrgWait__12CSceneObjSeqFv
// Address: 0x25d060 - 0x25d088
void MotionTrgWait__12CSceneObjSeqFv_0x25d060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionTrgWait__12CSceneObjSeqFv_0x25d060");
#endif

    switch (ctx->pc) {
        case 0x25d070u: goto label_25d070;
        default: break;
    }

    ctx->pc = 0x25d060u;

    // 0x25d060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25d064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d068: 0xc097130  jal         func_25C4C0
    ctx->pc = 0x25D068u;
    SET_GPR_U32(ctx, 31, 0x25D070u);
    ctx->pc = 0x25C4C0u;
    if (runtime->hasFunction(0x25C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x25C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D070u; }
        if (ctx->pc != 0x25D070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D070u; }
        if (ctx->pc != 0x25D070u) { return; }
    }
    ctx->pc = 0x25D070u;
label_25d070:
    // 0x25d070: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25D070u;
    {
        const bool branch_taken_0x25d070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D070u;
            // 0x25d074: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d070) {
            ctx->pc = 0x25D07Cu;
            goto label_25d07c;
        }
    }
    ctx->pc = 0x25D078u;
    // 0x25d078: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25d07c:
    // 0x25d07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d080: 0x3e00008  jr          $ra
    ctx->pc = 0x25D080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D080u;
            // 0x25d084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D088u;
}
