#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetType__6CSceneFiii
// Address: 0x2847f0 - 0x284820
void SetType__6CSceneFiii_0x2847f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetType__6CSceneFiii_0x2847f0");
#endif

    switch (ctx->pc) {
        case 0x284804u: goto label_284804;
        default: break;
    }

    ctx->pc = 0x2847f0u;

    // 0x2847f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2847f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2847f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2847f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2847f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2847f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2847fc: 0xc0a0da8  jal         func_2836A0
    ctx->pc = 0x2847FCu;
    SET_GPR_U32(ctx, 31, 0x284804u);
    ctx->pc = 0x284800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2847FCu;
            // 0x284800: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2836A0u;
    if (runtime->hasFunction(0x2836A0u)) {
        auto targetFn = runtime->lookupFunction(0x2836A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284804u; }
        if (ctx->pc != 0x284804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__6CSceneFii_0x2836a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284804u; }
        if (ctx->pc != 0x284804u) { return; }
    }
    ctx->pc = 0x284804u;
label_284804:
    // 0x284804: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x284804u;
    {
        const bool branch_taken_0x284804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284804) {
            ctx->pc = 0x284810u;
            goto label_284810;
        }
    }
    ctx->pc = 0x28480Cu;
    // 0x28480c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x28480cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_284810:
    // 0x284810: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x284810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284818: 0x3e00008  jr          $ra
    ctx->pc = 0x284818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284818u;
            // 0x28481c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284820u;
}
