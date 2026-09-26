#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndEnterTexture__17mgCTextureManagerFi
// Address: 0x12e5d0 - 0x12e5f4
void EndEnterTexture__17mgCTextureManagerFi_0x12e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndEnterTexture__17mgCTextureManagerFi_0x12e5d0");
#endif

    switch (ctx->pc) {
        case 0x12e5e4u: goto label_12e5e4;
        default: break;
    }

    ctx->pc = 0x12e5d0u;

    // 0x12e5d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e5d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12e5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5dc: 0xc04ba5c  jal         func_12E970
    ctx->pc = 0x12E5DCu;
    SET_GPR_U32(ctx, 31, 0x12E5E4u);
    ctx->pc = 0x12E970u;
    if (runtime->hasFunction(0x12E970u)) {
        auto targetFn = runtime->lookupFunction(0x12E970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5E4u; }
        if (ctx->pc != 0x12E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiPUi_0x12e970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5E4u; }
        if (ctx->pc != 0x12E5E4u) { return; }
    }
    ctx->pc = 0x12E5E4u;
label_12e5e4:
    // 0x12e5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e5e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12e5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12e5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12E5ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E5F4u;
}
