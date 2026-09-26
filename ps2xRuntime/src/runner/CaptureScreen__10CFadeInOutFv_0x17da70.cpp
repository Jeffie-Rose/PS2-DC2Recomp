#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CaptureScreen__10CFadeInOutFv
// Address: 0x17da70 - 0x17dad0
void CaptureScreen__10CFadeInOutFv_0x17da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CaptureScreen__10CFadeInOutFv_0x17da70");
#endif

    switch (ctx->pc) {
        case 0x17daa8u: goto label_17daa8;
        case 0x17dab0u: goto label_17dab0;
        case 0x17dac0u: goto label_17dac0;
        default: break;
    }

    ctx->pc = 0x17da70u;

    // 0x17da70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x17da74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17da74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17da78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17da7c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x17da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17da80: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17DA80u;
    {
        const bool branch_taken_0x17da80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA80u;
            // 0x17da84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da80) {
            ctx->pc = 0x17DAC0u;
            goto label_17dac0;
        }
    }
    ctx->pc = 0x17DA88u;
    // 0x17da88: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x17da8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17DA8Cu;
    {
        const bool branch_taken_0x17da8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA8Cu;
            // 0x17da90: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da8c) {
            ctx->pc = 0x17DAA0u;
            goto label_17daa0;
        }
    }
    ctx->pc = 0x17DA94u;
    // 0x17da94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17DA94u;
    {
        const bool branch_taken_0x17da94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DA94u;
            // 0x17da98: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17da94) {
            ctx->pc = 0x17DAC4u;
            goto label_17dac4;
        }
    }
    ctx->pc = 0x17DA9Cu;
    // 0x17da9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17daa0:
    // 0x17daa0: 0xc04b120  jal         func_12C480
    ctx->pc = 0x17DAA0u;
    SET_GPR_U32(ctx, 31, 0x17DAA8u);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAA8u; }
        if (ctx->pc != 0x17DAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAA8u; }
        if (ctx->pc != 0x17DAA8u) { return; }
    }
    ctx->pc = 0x17DAA8u;
label_17daa8:
    // 0x17daa8: 0xc051100  jal         func_144400
    ctx->pc = 0x17DAA8u;
    SET_GPR_U32(ctx, 31, 0x17DAB0u);
    ctx->pc = 0x17DAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAA8u;
            // 0x17daac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144400u;
    if (runtime->hasFunction(0x144400u)) {
        auto targetFn = runtime->lookupFunction(0x144400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAB0u; }
        if (ctx->pc != 0x17DAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBackBuffer__FP10mgCTexture_0x144400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAB0u; }
        if (ctx->pc != 0x17DAB0u) { return; }
    }
    ctx->pc = 0x17DAB0u;
label_17dab0:
    // 0x17dab0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17dab4: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x17dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x17dab8: 0xc05141c  jal         func_145070
    ctx->pc = 0x17DAB8u;
    SET_GPR_U32(ctx, 31, 0x17DAC0u);
    ctx->pc = 0x17DABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAB8u;
            // 0x17dabc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145070u;
    if (runtime->hasFunction(0x145070u)) {
        auto targetFn = runtime->lookupFunction(0x145070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAC0u; }
        if (ctx->pc != 0x17DAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreImage__FP10mgCTextureP1_0x145070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DAC0u; }
        if (ctx->pc != 0x17DAC0u) { return; }
    }
    ctx->pc = 0x17DAC0u;
label_17dac0:
    // 0x17dac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17dac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17dac4:
    // 0x17dac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dac8: 0x3e00008  jr          $ra
    ctx->pc = 0x17DAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DAC8u;
            // 0x17dacc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DAD0u;
}
