#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTexture__17mgCTextureManagerFPci
// Address: 0x12d050 - 0x12d070
void GetTexture__17mgCTextureManagerFPci_0x12d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTexture__17mgCTextureManagerFPci_0x12d050");
#endif

    switch (ctx->pc) {
        case 0x12d060u: goto label_12d060;
        default: break;
    }

    ctx->pc = 0x12d050u;

    // 0x12d050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d058: 0xc04b3d0  jal         func_12CF40
    ctx->pc = 0x12D058u;
    SET_GPR_U32(ctx, 31, 0x12D060u);
    ctx->pc = 0x12CF40u;
    if (runtime->hasFunction(0x12CF40u)) {
        auto targetFn = runtime->lookupFunction(0x12CF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D060u; }
        if (ctx->pc != 0x12D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchTextureName__17mgCTextureManagerFPci_0x12cf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D060u; }
        if (ctx->pc != 0x12D060u) { return; }
    }
    ctx->pc = 0x12D060u;
label_12d060:
    // 0x12d060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d064: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12d064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12d068: 0x3e00008  jr          $ra
    ctx->pc = 0x12D068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12D070u;
}
