#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SeDelay__12CSceneObjSeqFi
// Address: 0x25d3f0 - 0x25d424
void SeDelay__12CSceneObjSeqFi_0x25d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeDelay__12CSceneObjSeqFi_0x25d3f0");
#endif

    switch (ctx->pc) {
        case 0x25d404u: goto label_25d404;
        default: break;
    }

    ctx->pc = 0x25d3f0u;

    // 0x25d3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d3fc: 0xc097190  jal         func_25C640
    ctx->pc = 0x25D3FCu;
    SET_GPR_U32(ctx, 31, 0x25D404u);
    ctx->pc = 0x25D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25D3FCu;
            // 0x25d400: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C640u;
    if (runtime->hasFunction(0x25C640u)) {
        auto targetFn = runtime->lookupFunction(0x25C640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D404u; }
        if (ctx->pc != 0x25D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextSeSeq__12CSceneObjSeqFv_0x25c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D404u; }
        if (ctx->pc != 0x25D404u) { return; }
    }
    ctx->pc = 0x25D404u;
label_25d404:
    // 0x25d404: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25D404u;
    {
        const bool branch_taken_0x25d404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D404u;
            // 0x25d408: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d404) {
            ctx->pc = 0x25D414u;
            goto label_25d414;
        }
    }
    ctx->pc = 0x25D40Cu;
    // 0x25d40c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25d410: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x25d410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_25d414:
    // 0x25d414: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25d414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d41c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25D41Cu;
            // 0x25d420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25D424u;
}
