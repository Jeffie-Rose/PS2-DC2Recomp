#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextMotSeq__12CSceneObjSeqFv
// Address: 0x25c4c0 - 0x25c51c
void SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextMotSeq__12CSceneObjSeqFv_0x25c4c0");
#endif

    switch (ctx->pc) {
        case 0x25c4d4u: goto label_25c4d4;
        default: break;
    }

    ctx->pc = 0x25c4c0u;

    // 0x25c4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c4c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c4cc: 0xc0970dc  jal         func_25C370
    ctx->pc = 0x25C4CCu;
    SET_GPR_U32(ctx, 31, 0x25C4D4u);
    ctx->pc = 0x25C4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4CCu;
            // 0x25c4d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C370u;
    if (runtime->hasFunction(0x25C370u)) {
        auto targetFn = runtime->lookupFunction(0x25C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C4D4u; }
        if (ctx->pc != 0x25C4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneObjSeqFv_0x25c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C4D4u; }
        if (ctx->pc != 0x25C4D4u) { return; }
    }
    ctx->pc = 0x25C4D4u;
label_25c4d4:
    // 0x25c4d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C4D4u;
    {
        const bool branch_taken_0x25c4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c4d4) {
            ctx->pc = 0x25C4E4u;
            goto label_25c4e4;
        }
    }
    ctx->pc = 0x25C4DCu;
    // 0x25c4dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C4DCu;
    {
        const bool branch_taken_0x25c4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4DCu;
            // 0x25c4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c4dc) {
            ctx->pc = 0x25C50Cu;
            goto label_25c50c;
        }
    }
    ctx->pc = 0x25C4E4u;
label_25c4e4:
    // 0x25c4e4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x25c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25c4e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C4E8u;
    {
        const bool branch_taken_0x25c4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c4e8) {
            ctx->pc = 0x25C4F4u;
            goto label_25c4f4;
        }
    }
    ctx->pc = 0x25C4F0u;
    // 0x25c4f0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x25c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_25c4f4:
    // 0x25c4f4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x25c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x25c4f8: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x25c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x25c4fc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x25c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25c500: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C500u;
    {
        const bool branch_taken_0x25c500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c500) {
            ctx->pc = 0x25C50Cu;
            goto label_25c50c;
        }
    }
    ctx->pc = 0x25C508u;
    // 0x25c508: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x25c508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_25c50c:
    // 0x25c50c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c514: 0x3e00008  jr          $ra
    ctx->pc = 0x25C514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C514u;
            // 0x25c518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C51Cu;
}
