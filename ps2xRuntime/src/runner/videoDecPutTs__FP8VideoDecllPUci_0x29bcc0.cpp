#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecPutTs__FP8VideoDecllPUci
// Address: 0x29bcc0 - 0x29bcfc
void videoDecPutTs__FP8VideoDecllPUci_0x29bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecPutTs__FP8VideoDecllPUci_0x29bcc0");
#endif

    switch (ctx->pc) {
        case 0x29bcf0u: goto label_29bcf0;
        default: break;
    }

    ctx->pc = 0x29bcc0u;

    // 0x29bcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29bcc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29bcc8: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x29bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x29bccc: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x29bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x29bcd0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x29bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x29bcd4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x29bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x29bcd8: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x29bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29bcdc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29bce0: 0xafa80024  sw          $t0, 0x24($sp)
    ctx->pc = 0x29bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 8));
    // 0x29bce4: 0x24845398  addiu       $a0, $a0, 0x5398
    ctx->pc = 0x29bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
    // 0x29bce8: 0xc0a6a08  jal         func_29A820
    ctx->pc = 0x29BCE8u;
    SET_GPR_U32(ctx, 31, 0x29BCF0u);
    ctx->pc = 0x29BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCE8u;
            // 0x29bcec: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A820u;
    if (runtime->hasFunction(0x29A820u)) {
        auto targetFn = runtime->lookupFunction(0x29A820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BCF0u; }
        if (ctx->pc != 0x29BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        viBufPutTs__FP5ViBufP9TimeStamp_0x29a820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BCF0u; }
        if (ctx->pc != 0x29BCF0u) { return; }
    }
    ctx->pc = 0x29BCF0u;
label_29bcf0:
    // 0x29bcf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29bcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x29BCF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCF4u;
            // 0x29bcf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29BCFCu;
}
