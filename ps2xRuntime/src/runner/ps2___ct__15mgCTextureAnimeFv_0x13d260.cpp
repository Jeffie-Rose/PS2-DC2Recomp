#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15mgCTextureAnimeFv
// Address: 0x13d260 - 0x13d290
void ps2___ct__15mgCTextureAnimeFv_0x13d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15mgCTextureAnimeFv_0x13d260");
#endif

    switch (ctx->pc) {
        case 0x13d278u: goto label_13d278;
        default: break;
    }

    ctx->pc = 0x13d260u;

    // 0x13d260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13d268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d26c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d270: 0xc04f47c  jal         func_13D1F0
    ctx->pc = 0x13D270u;
    SET_GPR_U32(ctx, 31, 0x13D278u);
    ctx->pc = 0x13D1F0u;
    if (runtime->hasFunction(0x13D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x13D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D278u; }
        if (ctx->pc != 0x13D278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15mgCTextureAnimeFv_0x13d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D278u; }
        if (ctx->pc != 0x13D278u) { return; }
    }
    ctx->pc = 0x13D278u;
label_13d278:
    // 0x13d278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13d278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d284: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13d288: 0x3e00008  jr          $ra
    ctx->pc = 0x13D288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D290u;
}
