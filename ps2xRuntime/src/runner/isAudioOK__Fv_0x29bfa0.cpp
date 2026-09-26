#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: isAudioOK__Fv
// Address: 0x29bfa0 - 0x29bfcc
void isAudioOK__Fv_0x29bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isAudioOK__Fv_0x29bfa0");
#endif

    switch (ctx->pc) {
        case 0x29bfc0u: goto label_29bfc0;
        default: break;
    }

    ctx->pc = 0x29bfa0u;

    // 0x29bfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29bfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bfa8: 0x938298f8  lbu         $v0, -0x6708($gp)
    ctx->pc = 0x29bfa8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940920)));
    // 0x29bfac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BFACu;
    {
        const bool branch_taken_0x29bfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFACu;
            // 0x29bfb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfac) {
            ctx->pc = 0x29BFC0u;
            goto label_29bfc0;
        }
    }
    ctx->pc = 0x29BFB4u;
    // 0x29bfb4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29bfb8: 0xc0a6cc0  jal         func_29B300
    ctx->pc = 0x29BFB8u;
    SET_GPR_U32(ctx, 31, 0x29BFC0u);
    ctx->pc = 0x29BFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFB8u;
            // 0x29bfbc: 0x24845410  addiu       $a0, $a0, 0x5410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B300u;
    if (runtime->hasFunction(0x29B300u)) {
        auto targetFn = runtime->lookupFunction(0x29B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFC0u; }
        if (ctx->pc != 0x29BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecIsPreset__FP8AudioDec_0x29b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFC0u; }
        if (ctx->pc != 0x29BFC0u) { return; }
    }
    ctx->pc = 0x29BFC0u;
label_29bfc0:
    // 0x29bfc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x29BFC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFC4u;
            // 0x29bfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BFCCu;
}
