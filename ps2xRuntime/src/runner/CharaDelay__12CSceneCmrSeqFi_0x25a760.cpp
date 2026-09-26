#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CharaDelay__12CSceneCmrSeqFi
// Address: 0x25a760 - 0x25a794
void CharaDelay__12CSceneCmrSeqFi_0x25a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CharaDelay__12CSceneCmrSeqFi_0x25a760");
#endif

    switch (ctx->pc) {
        case 0x25a774u: goto label_25a774;
        default: break;
    }

    ctx->pc = 0x25a760u;

    // 0x25a760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a76c: 0xc0966e0  jal         func_259B80
    ctx->pc = 0x25A76Cu;
    SET_GPR_U32(ctx, 31, 0x25A774u);
    ctx->pc = 0x25A770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A76Cu;
            // 0x25a770: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259B80u;
    if (runtime->hasFunction(0x259B80u)) {
        auto targetFn = runtime->lookupFunction(0x259B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A774u; }
        if (ctx->pc != 0x25A774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNextCharaSeq__12CSceneCmrSeqFv_0x259b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A774u; }
        if (ctx->pc != 0x25A774u) { return; }
    }
    ctx->pc = 0x25A774u;
label_25a774:
    // 0x25a774: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A774u;
    {
        const bool branch_taken_0x25a774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A774u;
            // 0x25a778: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a774) {
            ctx->pc = 0x25A784u;
            goto label_25a784;
        }
    }
    ctx->pc = 0x25A77Cu;
    // 0x25a77c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25a780: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x25a780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_25a784:
    // 0x25a784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a78c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A78Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A78Cu;
            // 0x25a790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A794u;
}
