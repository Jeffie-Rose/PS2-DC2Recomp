#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextPosSeq__12CSceneObjSeqFv
// Address: 0x25c400 - 0x25c45c
void SearchNextPosSeq__12CSceneObjSeqFv_0x25c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextPosSeq__12CSceneObjSeqFv_0x25c400");
#endif

    switch (ctx->pc) {
        case 0x25c414u: goto label_25c414;
        default: break;
    }

    ctx->pc = 0x25c400u;

    // 0x25c400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c40c: 0xc0970dc  jal         func_25C370
    ctx->pc = 0x25C40Cu;
    SET_GPR_U32(ctx, 31, 0x25C414u);
    ctx->pc = 0x25C410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C40Cu;
            // 0x25c410: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C370u;
    if (runtime->hasFunction(0x25C370u)) {
        auto targetFn = runtime->lookupFunction(0x25C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C414u; }
        if (ctx->pc != 0x25C414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneObjSeqFv_0x25c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C414u; }
        if (ctx->pc != 0x25C414u) { return; }
    }
    ctx->pc = 0x25C414u;
label_25c414:
    // 0x25c414: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C414u;
    {
        const bool branch_taken_0x25c414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c414) {
            ctx->pc = 0x25C424u;
            goto label_25c424;
        }
    }
    ctx->pc = 0x25C41Cu;
    // 0x25c41c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C41Cu;
    {
        const bool branch_taken_0x25c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C41Cu;
            // 0x25c420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c41c) {
            ctx->pc = 0x25C44Cu;
            goto label_25c44c;
        }
    }
    ctx->pc = 0x25C424u;
label_25c424:
    // 0x25c424: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x25c424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x25c428: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C428u;
    {
        const bool branch_taken_0x25c428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c428) {
            ctx->pc = 0x25C434u;
            goto label_25c434;
        }
    }
    ctx->pc = 0x25C430u;
    // 0x25c430: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x25c430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_25c434:
    // 0x25c434: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x25c434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x25c438: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x25c438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x25c43c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x25c43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x25c440: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C440u;
    {
        const bool branch_taken_0x25c440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c440) {
            ctx->pc = 0x25C44Cu;
            goto label_25c44c;
        }
    }
    ctx->pc = 0x25C448u;
    // 0x25c448: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x25c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_25c44c:
    // 0x25c44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c454: 0x3e00008  jr          $ra
    ctx->pc = 0x25C454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C454u;
            // 0x25c458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C45Cu;
}
