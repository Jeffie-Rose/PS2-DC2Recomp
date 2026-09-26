#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13CEventSprite2Fv
// Address: 0x290a60 - 0x290a88
void ps2___ct__13CEventSprite2Fv_0x290a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13CEventSprite2Fv_0x290a60");
#endif

    switch (ctx->pc) {
        case 0x290a74u: goto label_290a74;
        default: break;
    }

    ctx->pc = 0x290a60u;

    // 0x290a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x290a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x290a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290a6c: 0xc0a42a4  jal         func_290A90
    ctx->pc = 0x290A6Cu;
    SET_GPR_U32(ctx, 31, 0x290A74u);
    ctx->pc = 0x290A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290A6Cu;
            // 0x290a70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A90u;
    if (runtime->hasFunction(0x290A90u)) {
        auto targetFn = runtime->lookupFunction(0x290A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A74u; }
        if (ctx->pc != 0x290A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEventSprite2Fv_0x290a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290A74u; }
        if (ctx->pc != 0x290A74u) { return; }
    }
    ctx->pc = 0x290A74u;
label_290a74:
    // 0x290a74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x290a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x290a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290a80: 0x3e00008  jr          $ra
    ctx->pc = 0x290A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290A80u;
            // 0x290a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x290A88u;
}
