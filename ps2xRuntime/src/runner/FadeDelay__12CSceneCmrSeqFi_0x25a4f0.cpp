#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FadeDelay__12CSceneCmrSeqFi
// Address: 0x25a4f0 - 0x25a524
void FadeDelay__12CSceneCmrSeqFi_0x25a4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FadeDelay__12CSceneCmrSeqFi_0x25a4f0");
#endif

    switch (ctx->pc) {
        case 0x25a504u: goto label_25a504;
        default: break;
    }

    ctx->pc = 0x25a4f0u;

    // 0x25a4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a4fc: 0xc0966b0  jal         func_259AC0
    ctx->pc = 0x25A4FCu;
    SET_GPR_U32(ctx, 31, 0x25A504u);
    ctx->pc = 0x25A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A4FCu;
            // 0x25a500: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259AC0u;
    if (runtime->hasFunction(0x259AC0u)) {
        auto targetFn = runtime->lookupFunction(0x259AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A504u; }
        if (ctx->pc != 0x25A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextFadeSeq__12CSceneCmrSeqFv_0x259ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A504u; }
        if (ctx->pc != 0x25A504u) { return; }
    }
    ctx->pc = 0x25A504u;
label_25a504:
    // 0x25a504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A504u;
    {
        const bool branch_taken_0x25a504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A504u;
            // 0x25a508: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a504) {
            ctx->pc = 0x25A514u;
            goto label_25a514;
        }
    }
    ctx->pc = 0x25A50Cu;
    // 0x25a50c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a510: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x25a510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_25a514:
    // 0x25a514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a51c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A51Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A51Cu;
            // 0x25a520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A524u;
}
