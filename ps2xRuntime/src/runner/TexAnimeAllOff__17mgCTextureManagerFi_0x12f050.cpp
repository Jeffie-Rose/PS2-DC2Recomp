#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TexAnimeAllOff__17mgCTextureManagerFi
// Address: 0x12f050 - 0x12f08c
void TexAnimeAllOff__17mgCTextureManagerFi_0x12f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexAnimeAllOff__17mgCTextureManagerFi_0x12f050");
#endif

    switch (ctx->pc) {
        case 0x12f060u: goto label_12f060;
        case 0x12f07cu: goto label_12f07c;
        default: break;
    }

    ctx->pc = 0x12f050u;

    // 0x12f050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12f054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12f058: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12F058u;
    SET_GPR_U32(ctx, 31, 0x12F060u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F060u; }
        if (ctx->pc != 0x12F060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F060u; }
        if (ctx->pc != 0x12F060u) { return; }
    }
    ctx->pc = 0x12F060u;
label_12f060:
    // 0x12f060: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F060u;
    {
        const bool branch_taken_0x12f060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f060) {
            ctx->pc = 0x12F07Cu;
            goto label_12f07c;
        }
    }
    ctx->pc = 0x12F068u;
    // 0x12f068: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12f06c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F06Cu;
    {
        const bool branch_taken_0x12f06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f06c) {
            ctx->pc = 0x12F07Cu;
            goto label_12f07c;
        }
    }
    ctx->pc = 0x12F074u;
    // 0x12f074: 0xc04f5e8  jal         func_13D7A0
    ctx->pc = 0x12F074u;
    SET_GPR_U32(ctx, 31, 0x12F07Cu);
    ctx->pc = 0x13D7A0u;
    if (runtime->hasFunction(0x13D7A0u)) {
        auto targetFn = runtime->lookupFunction(0x13D7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F07Cu; }
        if (ctx->pc != 0x12F07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableAll__15mgCTextureAnimeFv_0x13d7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F07Cu; }
        if (ctx->pc != 0x12F07Cu) { return; }
    }
    ctx->pc = 0x12F07Cu;
label_12f07c:
    // 0x12f07c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f080: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f084: 0x3e00008  jr          $ra
    ctx->pc = 0x12F084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F08Cu;
}
