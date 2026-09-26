#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadPackNoLine__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2
// Address: 0x175200 - 0x175228
void LoadPackNoLine__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x175200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPackNoLine__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x175200");
#endif

    switch (ctx->pc) {
        case 0x175200u: goto label_175200;
        case 0x175204u: goto label_175204;
        case 0x175208u: goto label_175208;
        case 0x17520cu: goto label_17520c;
        case 0x175210u: goto label_175210;
        case 0x175214u: goto label_175214;
        case 0x175218u: goto label_175218;
        case 0x17521cu: goto label_17521c;
        case 0x175220u: goto label_175220;
        case 0x175224u: goto label_175224;
        default: break;
    }

    ctx->pc = 0x175200u;

label_175200:
    // 0x175200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_175204:
    // 0x175204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_175208:
    // 0x175208: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x175208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_17520c:
    // 0x17520c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17520cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175210:
    // 0x175210: 0x8f390084  lw          $t9, 0x84($t9)
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 132)));
label_175214:
    // 0x175214: 0x320f809  jalr        $t9
label_175218:
    if (ctx->pc == 0x175218u) {
        ctx->pc = 0x17521Cu;
        goto label_17521c;
    }
    ctx->pc = 0x175214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17521Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17521Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17521Cu; }
            if (ctx->pc != 0x17521Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17521Cu;
label_17521c:
    // 0x17521c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_175220:
    // 0x175220: 0x3e00008  jr          $ra
label_175224:
    if (ctx->pc == 0x175224u) {
        ctx->pc = 0x175224u;
            // 0x175224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x175228u;
        goto label_fallthrough_0x175220;
    }
    ctx->pc = 0x175220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175220u;
            // 0x175224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x175220:
    ctx->pc = 0x175228u;
}
