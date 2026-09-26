#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTexAnime__17mgCTextureManagerFi
// Address: 0x12f180 - 0x12f1b8
void GetTexAnime__17mgCTextureManagerFi_0x12f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTexAnime__17mgCTextureManagerFi_0x12f180");
#endif

    switch (ctx->pc) {
        case 0x12f190u: goto label_12f190;
        default: break;
    }

    ctx->pc = 0x12f180u;

    // 0x12f180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f188: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12F188u;
    SET_GPR_U32(ctx, 31, 0x12F190u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F190u; }
        if (ctx->pc != 0x12F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F190u; }
        if (ctx->pc != 0x12F190u) { return; }
    }
    ctx->pc = 0x12F190u;
label_12f190:
    // 0x12f190: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F190u;
    {
        const bool branch_taken_0x12f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f190) {
            ctx->pc = 0x12F1A4u;
            goto label_12f1a4;
        }
    }
    ctx->pc = 0x12F198u;
    // 0x12f198: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x12f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f19c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F19Cu;
    {
        const bool branch_taken_0x12f19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f19c) {
            ctx->pc = 0x12F1A8u;
            goto label_12f1a8;
        }
    }
    ctx->pc = 0x12F1A4u;
label_12f1a4:
    // 0x12f1a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f1a8:
    // 0x12f1a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f1ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12f1acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F1B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F1B8u;
}
