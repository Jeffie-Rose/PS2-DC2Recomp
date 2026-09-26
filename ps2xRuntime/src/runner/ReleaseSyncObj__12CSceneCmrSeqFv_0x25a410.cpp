#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReleaseSyncObj__12CSceneCmrSeqFv
// Address: 0x25a410 - 0x25a438
void ReleaseSyncObj__12CSceneCmrSeqFv_0x25a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReleaseSyncObj__12CSceneCmrSeqFv_0x25a410");
#endif

    switch (ctx->pc) {
        case 0x25a420u: goto label_25a420;
        default: break;
    }

    ctx->pc = 0x25a410u;

    // 0x25a410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a418: 0xc096698  jal         func_259A60
    ctx->pc = 0x25A418u;
    SET_GPR_U32(ctx, 31, 0x25A420u);
    ctx->pc = 0x259A60u;
    if (runtime->hasFunction(0x259A60u)) {
        auto targetFn = runtime->lookupFunction(0x259A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A420u; }
        if (ctx->pc != 0x25A420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextAhdSeq__12CSceneCmrSeqFv_0x259a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A420u; }
        if (ctx->pc != 0x25A420u) { return; }
    }
    ctx->pc = 0x25A420u;
label_25a420:
    // 0x25a420: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25A420u;
    {
        const bool branch_taken_0x25a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A420u;
            // 0x25a424: 0x24030017  addiu       $v1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a420) {
            ctx->pc = 0x25A42Cu;
            goto label_25a42c;
        }
    }
    ctx->pc = 0x25A428u;
    // 0x25a428: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_25a42c:
    // 0x25a42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a430: 0x3e00008  jr          $ra
    ctx->pc = 0x25A430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A430u;
            // 0x25a434: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A438u;
}
