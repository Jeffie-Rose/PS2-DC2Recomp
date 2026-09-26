#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchNextRotSeq__12CSceneObjSeqFv
// Address: 0x25c460 - 0x25c4bc
void SearchNextRotSeq__12CSceneObjSeqFv_0x25c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchNextRotSeq__12CSceneObjSeqFv_0x25c460");
#endif

    switch (ctx->pc) {
        case 0x25c474u: goto label_25c474;
        default: break;
    }

    ctx->pc = 0x25c460u;

    // 0x25c460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25c468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25c46c: 0xc0970dc  jal         func_25C370
    ctx->pc = 0x25C46Cu;
    SET_GPR_U32(ctx, 31, 0x25C474u);
    ctx->pc = 0x25C470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C46Cu;
            // 0x25c470: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C370u;
    if (runtime->hasFunction(0x25C370u)) {
        auto targetFn = runtime->lookupFunction(0x25C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C474u; }
        if (ctx->pc != 0x25C474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSeq__12CSceneObjSeqFv_0x25c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C474u; }
        if (ctx->pc != 0x25C474u) { return; }
    }
    ctx->pc = 0x25C474u;
label_25c474:
    // 0x25c474: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C474u;
    {
        const bool branch_taken_0x25c474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c474) {
            ctx->pc = 0x25C484u;
            goto label_25c484;
        }
    }
    ctx->pc = 0x25C47Cu;
    // 0x25c47c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C47Cu;
    {
        const bool branch_taken_0x25c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C47Cu;
            // 0x25c480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c47c) {
            ctx->pc = 0x25C4ACu;
            goto label_25c4ac;
        }
    }
    ctx->pc = 0x25C484u;
label_25c484:
    // 0x25c484: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25c484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25c488: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C488u;
    {
        const bool branch_taken_0x25c488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c488) {
            ctx->pc = 0x25C494u;
            goto label_25c494;
        }
    }
    ctx->pc = 0x25C490u;
    // 0x25c490: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x25c490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_25c494:
    // 0x25c494: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x25c494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x25c498: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x25c498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x25c49c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x25c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25c4a0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C4A0u;
    {
        const bool branch_taken_0x25c4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c4a0) {
            ctx->pc = 0x25C4ACu;
            goto label_25c4ac;
        }
    }
    ctx->pc = 0x25C4A8u;
    // 0x25c4a8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x25c4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_25c4ac:
    // 0x25c4ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25c4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c4b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C4B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C4B4u;
            // 0x25c4b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C4BCu;
}
