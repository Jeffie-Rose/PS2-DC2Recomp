#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__14mgVertexWeightFv
// Address: 0x289850 - 0x289880
void ps2___ct__14mgVertexWeightFv_0x289850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__14mgVertexWeightFv_0x289850");
#endif

    switch (ctx->pc) {
        case 0x28986cu: goto label_28986c;
        default: break;
    }

    ctx->pc = 0x289850u;

    // 0x289850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28985c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x28985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x289860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x289864: 0xc049c86  jal         func_127218
    ctx->pc = 0x289864u;
    SET_GPR_U32(ctx, 31, 0x28986Cu);
    ctx->pc = 0x289868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x289864u;
            // 0x289868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28986Cu; }
        if (ctx->pc != 0x28986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28986Cu; }
        if (ctx->pc != 0x28986Cu) { return; }
    }
    ctx->pc = 0x28986Cu;
label_28986c:
    // 0x28986c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28986cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x289870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289878: 0x3e00008  jr          $ra
    ctx->pc = 0x289878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28987Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289878u;
            // 0x28987c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289880u;
}
