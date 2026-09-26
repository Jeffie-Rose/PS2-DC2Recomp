#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QuakeDelay__12CSceneCmrSeqFi
// Address: 0x25a640 - 0x25a674
void QuakeDelay__12CSceneCmrSeqFi_0x25a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuakeDelay__12CSceneCmrSeqFi_0x25a640");
#endif

    switch (ctx->pc) {
        case 0x25a654u: goto label_25a654;
        default: break;
    }

    ctx->pc = 0x25a640u;

    // 0x25a640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a64c: 0xc0966c8  jal         func_259B20
    ctx->pc = 0x25A64Cu;
    SET_GPR_U32(ctx, 31, 0x25A654u);
    ctx->pc = 0x25A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A64Cu;
            // 0x25a650: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259B20u;
    if (runtime->hasFunction(0x259B20u)) {
        auto targetFn = runtime->lookupFunction(0x259B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A654u; }
        if (ctx->pc != 0x25A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextQuakeSeq__12CSceneCmrSeqFv_0x259b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A654u; }
        if (ctx->pc != 0x25A654u) { return; }
    }
    ctx->pc = 0x25A654u;
label_25a654:
    // 0x25a654: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A654u;
    {
        const bool branch_taken_0x25a654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A654u;
            // 0x25a658: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a654) {
            ctx->pc = 0x25A664u;
            goto label_25a664;
        }
    }
    ctx->pc = 0x25A65Cu;
    // 0x25a65c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a660: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x25a660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_25a664:
    // 0x25a664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a66c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A66Cu;
            // 0x25a670: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A674u;
}
