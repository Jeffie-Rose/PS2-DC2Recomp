#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteTexAnime__17mgCTextureManagerFi
// Address: 0x12f150 - 0x12f17c
void DeleteTexAnime__17mgCTextureManagerFi_0x12f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteTexAnime__17mgCTextureManagerFi_0x12f150");
#endif

    switch (ctx->pc) {
        case 0x12f160u: goto label_12f160;
        default: break;
    }

    ctx->pc = 0x12f150u;

    // 0x12f150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f158: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12F158u;
    SET_GPR_U32(ctx, 31, 0x12F160u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F160u; }
        if (ctx->pc != 0x12F160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F160u; }
        if (ctx->pc != 0x12F160u) { return; }
    }
    ctx->pc = 0x12F160u;
label_12f160:
    // 0x12f160: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F160u;
    {
        const bool branch_taken_0x12f160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f160) {
            ctx->pc = 0x12F16Cu;
            goto label_12f16c;
        }
    }
    ctx->pc = 0x12F168u;
    // 0x12f168: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12f168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_12f16c:
    // 0x12f16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f170: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f174: 0x3e00008  jr          $ra
    ctx->pc = 0x12F174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F17Cu;
}
