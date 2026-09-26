#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__15CHitEffectImageFv
// Address: 0x1c2a60 - 0x1c2ae0
void Draw__15CHitEffectImageFv_0x1c2a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__15CHitEffectImageFv_0x1c2a60");
#endif

    switch (ctx->pc) {
        case 0x1c2aa4u: goto label_1c2aa4;
        case 0x1c2abcu: goto label_1c2abc;
        case 0x1c2ad4u: goto label_1c2ad4;
        default: break;
    }

    ctx->pc = 0x1c2a60u;

    // 0x1c2a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2a68: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1c2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1c2a6c: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2A6Cu;
    {
        const bool branch_taken_0x1c2a6c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c2a6c) {
            ctx->pc = 0x1C2AD4u;
            goto label_1c2ad4;
        }
    }
    ctx->pc = 0x1C2A74u;
    // 0x1c2a74: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x1c2a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1c2a78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2a7c: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2A7Cu;
    {
        const bool branch_taken_0x1c2a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C2A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A7Cu;
            // 0x1c2a80: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a7c) {
            ctx->pc = 0x1C2AC4u;
            goto label_1c2ac4;
        }
    }
    ctx->pc = 0x1C2A84u;
    // 0x1c2a84: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2A84u;
    {
        const bool branch_taken_0x1c2a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c2a84) {
            ctx->pc = 0x1C2AACu;
            goto label_1c2aac;
        }
    }
    ctx->pc = 0x1C2A8Cu;
    // 0x1c2a8c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2A8Cu;
    {
        const bool branch_taken_0x1c2a8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a8c) {
            ctx->pc = 0x1C2A9Cu;
            goto label_1c2a9c;
        }
    }
    ctx->pc = 0x1C2A94u;
    // 0x1c2a94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2A94u;
    {
        const bool branch_taken_0x1c2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2A94u;
            // 0x1c2a98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a94) {
            ctx->pc = 0x1C2AD8u;
            goto label_1c2ad8;
        }
    }
    ctx->pc = 0x1C2A9Cu;
label_1c2a9c:
    // 0x1c2a9c: 0xc070ab8  jal         func_1C2AE0
    ctx->pc = 0x1C2A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C2AA4u);
    ctx->pc = 0x1C2AE0u;
    if (runtime->hasFunction(0x1C2AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C2AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA4u; }
        if (ctx->pc != 0x1C2AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawBord__15CHitEffectImageFv_0x1c2ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AA4u; }
        if (ctx->pc != 0x1C2AA4u) { return; }
    }
    ctx->pc = 0x1C2AA4u;
label_1c2aa4:
    // 0x1c2aa4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C2AA4u;
    {
        const bool branch_taken_0x1c2aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2aa4) {
            ctx->pc = 0x1C2AD4u;
            goto label_1c2ad4;
        }
    }
    ctx->pc = 0x1C2AACu;
label_1c2aac:
    // 0x1c2aac: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2ab0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c2ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2ab4: 0xc070b58  jal         func_1C2D60
    ctx->pc = 0x1C2AB4u;
    SET_GPR_U32(ctx, 31, 0x1C2ABCu);
    ctx->pc = 0x1C2D60u;
    if (runtime->hasFunction(0x1C2D60u)) {
        auto targetFn = runtime->lookupFunction(0x1C2D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ABCu; }
        if (ctx->pc != 0x1C2ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSpark__15CHitEffectImageFf_0x1c2d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2ABCu; }
        if (ctx->pc != 0x1C2ABCu) { return; }
    }
    ctx->pc = 0x1C2ABCu;
label_1c2abc:
    // 0x1c2abc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2ABCu;
    {
        const bool branch_taken_0x1c2abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2abc) {
            ctx->pc = 0x1C2AD4u;
            goto label_1c2ad4;
        }
    }
    ctx->pc = 0x1C2AC4u;
label_1c2ac4:
    // 0x1c2ac4: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1c2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1c2ac8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c2ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2acc: 0xc070b58  jal         func_1C2D60
    ctx->pc = 0x1C2ACCu;
    SET_GPR_U32(ctx, 31, 0x1C2AD4u);
    ctx->pc = 0x1C2D60u;
    if (runtime->hasFunction(0x1C2D60u)) {
        auto targetFn = runtime->lookupFunction(0x1C2D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AD4u; }
        if (ctx->pc != 0x1C2AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSpark__15CHitEffectImageFf_0x1c2d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2AD4u; }
        if (ctx->pc != 0x1C2AD4u) { return; }
    }
    ctx->pc = 0x1C2AD4u;
label_1c2ad4:
    // 0x1c2ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2ad8:
    // 0x1c2ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2AD8u;
            // 0x1c2adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2AE0u;
}
