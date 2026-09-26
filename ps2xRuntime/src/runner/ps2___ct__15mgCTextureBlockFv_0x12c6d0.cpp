#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15mgCTextureBlockFv
// Address: 0x12c6d0 - 0x12c700
void ps2___ct__15mgCTextureBlockFv_0x12c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15mgCTextureBlockFv_0x12c6d0");
#endif

    switch (ctx->pc) {
        case 0x12c6e8u: goto label_12c6e8;
        default: break;
    }

    ctx->pc = 0x12c6d0u;

    // 0x12c6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12c6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12c6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6e0: 0xc04b1c0  jal         func_12C700
    ctx->pc = 0x12C6E0u;
    SET_GPR_U32(ctx, 31, 0x12C6E8u);
    ctx->pc = 0x12C700u;
    if (runtime->hasFunction(0x12C700u)) {
        auto targetFn = runtime->lookupFunction(0x12C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6E8u; }
        if (ctx->pc != 0x12C6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15mgCTextureBlockFv_0x12c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6E8u; }
        if (ctx->pc != 0x12C6E8u) { return; }
    }
    ctx->pc = 0x12C6E8u;
label_12c6e8:
    // 0x12c6e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12c6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c6f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12c6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c6f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12c6f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C700u;
}
