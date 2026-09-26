#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextColSeq__12CSceneObjSeqFv
// Address: 0x25c580 - 0x25c5dc
void SearchNextColSeq__12CSceneObjSeqFv_0x25c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextColSeq__12CSceneObjSeqFv_0x25c580");
#endif

    switch (ctx->pc) {
        case 0x25c594u: goto label_25c594;
        default: break;
    }

    ctx->pc = 0x25c580u;

    // 0x25c580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c58c: 0xc0970dc  jal         func_25C370
    ctx->pc = 0x25C58Cu;
    SET_GPR_U32(ctx, 31, 0x25C594u);
    ctx->pc = 0x25C590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C58Cu;
            // 0x25c590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C370u;
    if (runtime->hasFunction(0x25C370u)) {
        auto targetFn = runtime->lookupFunction(0x25C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C594u; }
        if (ctx->pc != 0x25C594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneObjSeqFv_0x25c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C594u; }
        if (ctx->pc != 0x25C594u) { return; }
    }
    ctx->pc = 0x25C594u;
label_25c594:
    // 0x25c594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C594u;
    {
        const bool branch_taken_0x25c594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c594) {
            ctx->pc = 0x25C5A4u;
            goto label_25c5a4;
        }
    }
    ctx->pc = 0x25C59Cu;
    // 0x25c59c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C59Cu;
    {
        const bool branch_taken_0x25c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C59Cu;
            // 0x25c5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c59c) {
            ctx->pc = 0x25C5CCu;
            goto label_25c5cc;
        }
    }
    ctx->pc = 0x25C5A4u;
label_25c5a4:
    // 0x25c5a4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x25c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25c5a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C5A8u;
    {
        const bool branch_taken_0x25c5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c5a8) {
            ctx->pc = 0x25C5B4u;
            goto label_25c5b4;
        }
    }
    ctx->pc = 0x25C5B0u;
    // 0x25c5b0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x25c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_25c5b4:
    // 0x25c5b4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x25c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x25c5b8: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x25c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x25c5bc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x25c5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25c5c0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C5C0u;
    {
        const bool branch_taken_0x25c5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c5c0) {
            ctx->pc = 0x25C5CCu;
            goto label_25c5cc;
        }
    }
    ctx->pc = 0x25C5C8u;
    // 0x25c5c8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x25c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_25c5cc:
    // 0x25c5cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C5D4u;
            // 0x25c5d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C5DCu;
}
