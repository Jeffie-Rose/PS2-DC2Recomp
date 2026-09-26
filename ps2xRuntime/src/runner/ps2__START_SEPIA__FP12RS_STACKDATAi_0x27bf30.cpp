#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _START_SEPIA__FP12RS_STACKDATAi
// Address: 0x27bf30 - 0x27bf64
void ps2__START_SEPIA__FP12RS_STACKDATAi_0x27bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__START_SEPIA__FP12RS_STACKDATAi_0x27bf30");
#endif

    switch (ctx->pc) {
        case 0x27bf44u: goto label_27bf44;
        case 0x27bf54u: goto label_27bf54;
        default: break;
    }

    ctx->pc = 0x27bf30u;

    // 0x27bf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27bf34: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27bf34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27bf38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bf3c: 0xc09825c  jal         func_260970
    ctx->pc = 0x27BF3Cu;
    SET_GPR_U32(ctx, 31, 0x27BF44u);
    ctx->pc = 0x27BF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF3Cu;
            // 0x27bf40: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260970u;
    if (runtime->hasFunction(0x260970u)) {
        auto targetFn = runtime->lookupFunction(0x260970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF44u; }
        if (ctx->pc != 0x27BF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CaptureSepiaScreen__13CScreenEffectFv_0x260970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF44u; }
        if (ctx->pc != 0x27BF44u) { return; }
    }
    ctx->pc = 0x27BF44u;
label_27bf44:
    // 0x27bf44: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x27bf48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bf4c: 0xc0982fc  jal         func_260BF0
    ctx->pc = 0x27BF4Cu;
    SET_GPR_U32(ctx, 31, 0x27BF54u);
    ctx->pc = 0x27BF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF4Cu;
            // 0x27bf50: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260BF0u;
    if (runtime->hasFunction(0x260BF0u)) {
        auto targetFn = runtime->lookupFunction(0x260BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF54u; }
        if (ctx->pc != 0x27BF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSepiaFlag__13CScreenEffectFi_0x260bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BF54u; }
        if (ctx->pc != 0x27BF54u) { return; }
    }
    ctx->pc = 0x27BF54u;
label_27bf54:
    // 0x27bf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bf58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x27BF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BF5Cu;
            // 0x27bf60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27BF64u;
}
