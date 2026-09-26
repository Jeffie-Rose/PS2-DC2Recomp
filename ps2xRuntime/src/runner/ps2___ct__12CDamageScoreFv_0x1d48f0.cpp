#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__12CDamageScoreFv
// Address: 0x1d48f0 - 0x1d4924
void ps2___ct__12CDamageScoreFv_0x1d48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__12CDamageScoreFv_0x1d48f0");
#endif

    switch (ctx->pc) {
        case 0x1d4910u: goto label_1d4910;
        default: break;
    }

    ctx->pc = 0x1d48f0u;

    // 0x1d48f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d48f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d48f4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d48f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d48f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d48f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d48fc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1d48fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d4900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4908: 0xc049c86  jal         func_127218
    ctx->pc = 0x1D4908u;
    SET_GPR_U32(ctx, 31, 0x1D4910u);
    ctx->pc = 0x1D490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4908u;
            // 0x1d490c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4910u; }
        if (ctx->pc != 0x1D4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4910u; }
        if (ctx->pc != 0x1D4910u) { return; }
    }
    ctx->pc = 0x1D4910u;
label_1d4910:
    // 0x1d4910: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d4910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d491c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D491Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D491Cu;
            // 0x1d4920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4924u;
}
