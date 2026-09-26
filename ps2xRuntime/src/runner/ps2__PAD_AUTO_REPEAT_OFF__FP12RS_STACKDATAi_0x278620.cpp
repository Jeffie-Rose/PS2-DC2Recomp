#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PAD_AUTO_REPEAT_OFF__FP12RS_STACKDATAi
// Address: 0x278620 - 0x278644
void ps2__PAD_AUTO_REPEAT_OFF__FP12RS_STACKDATAi_0x278620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PAD_AUTO_REPEAT_OFF__FP12RS_STACKDATAi_0x278620");
#endif

    switch (ctx->pc) {
        case 0x278634u: goto label_278634;
        default: break;
    }

    ctx->pc = 0x278620u;

    // 0x278620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x278620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x278624: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x278624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x278628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27862c: 0xc052d40  jal         func_14B500
    ctx->pc = 0x27862Cu;
    SET_GPR_U32(ctx, 31, 0x278634u);
    ctx->pc = 0x278630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27862Cu;
            // 0x278630: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B500u;
    if (runtime->hasFunction(0x14B500u)) {
        auto targetFn = runtime->lookupFunction(0x14B500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278634u; }
        if (ctx->pc != 0x278634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoRepeatOff__8CGamePadFv_0x14b500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278634u; }
        if (ctx->pc != 0x278634u) { return; }
    }
    ctx->pc = 0x278634u;
label_278634:
    // 0x278634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27863c: 0x3e00008  jr          $ra
    ctx->pc = 0x27863Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27863Cu;
            // 0x278640: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x278644u;
}
