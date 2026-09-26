#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextScaleSeq__12CSceneObjSeqFv
// Address: 0x25c5e0 - 0x25c63c
void SearchNextScaleSeq__12CSceneObjSeqFv_0x25c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextScaleSeq__12CSceneObjSeqFv_0x25c5e0");
#endif

    switch (ctx->pc) {
        case 0x25c5f4u: goto label_25c5f4;
        default: break;
    }

    ctx->pc = 0x25c5e0u;

    // 0x25c5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c5ec: 0xc0970dc  jal         func_25C370
    ctx->pc = 0x25C5ECu;
    SET_GPR_U32(ctx, 31, 0x25C5F4u);
    ctx->pc = 0x25C5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5ECu;
            // 0x25c5f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C370u;
    if (runtime->hasFunction(0x25C370u)) {
        auto targetFn = runtime->lookupFunction(0x25C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5F4u; }
        if (ctx->pc != 0x25C5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneObjSeqFv_0x25c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C5F4u; }
        if (ctx->pc != 0x25C5F4u) { return; }
    }
    ctx->pc = 0x25C5F4u;
label_25c5f4:
    // 0x25c5f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C5F4u;
    {
        const bool branch_taken_0x25c5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c5f4) {
            ctx->pc = 0x25C604u;
            goto label_25c604;
        }
    }
    ctx->pc = 0x25C5FCu;
    // 0x25c5fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C5FCu;
    {
        const bool branch_taken_0x25c5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5FCu;
            // 0x25c600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c5fc) {
            ctx->pc = 0x25C62Cu;
            goto label_25c62c;
        }
    }
    ctx->pc = 0x25C604u;
label_25c604:
    // 0x25c604: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x25c604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25c608: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C608u;
    {
        const bool branch_taken_0x25c608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c608) {
            ctx->pc = 0x25C614u;
            goto label_25c614;
        }
    }
    ctx->pc = 0x25C610u;
    // 0x25c610: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x25c610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_25c614:
    // 0x25c614: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x25c614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x25c618: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x25c618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x25c61c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x25c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25c620: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C620u;
    {
        const bool branch_taken_0x25c620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c620) {
            ctx->pc = 0x25C62Cu;
            goto label_25c62c;
        }
    }
    ctx->pc = 0x25C628u;
    // 0x25c628: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x25c628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_25c62c:
    // 0x25c62c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c634: 0x3e00008  jr          $ra
    ctx->pc = 0x25C634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C634u;
            // 0x25c638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C63Cu;
}
