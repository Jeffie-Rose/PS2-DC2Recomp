#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__10mgCTextureFv
// Address: 0x12c480 - 0x12c4b0
void ps2___ct__10mgCTextureFv_0x12c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__10mgCTextureFv_0x12c480");
#endif

    switch (ctx->pc) {
        case 0x12c498u: goto label_12c498;
        default: break;
    }

    ctx->pc = 0x12c480u;

    // 0x12c480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c490: 0xc04b12c  jal         func_12C4B0
    ctx->pc = 0x12C490u;
    SET_GPR_U32(ctx, 31, 0x12C498u);
    ctx->pc = 0x12C4B0u;
    if (runtime->hasFunction(0x12C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C498u; }
        if (ctx->pc != 0x12C498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCTextureFv_0x12c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C498u; }
        if (ctx->pc != 0x12C498u) { return; }
    }
    ctx->pc = 0x12C498u;
label_12c498:
    // 0x12c498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12c498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c49c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c4a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12c4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C4B0u;
}
