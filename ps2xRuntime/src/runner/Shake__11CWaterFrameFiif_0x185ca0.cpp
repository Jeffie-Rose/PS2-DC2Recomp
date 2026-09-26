#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Shake__11CWaterFrameFiif
// Address: 0x185ca0 - 0x185cfc
void Shake__11CWaterFrameFiif_0x185ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shake__11CWaterFrameFiif_0x185ca0");
#endif

    switch (ctx->pc) {
        case 0x185ca0u: goto label_185ca0;
        case 0x185ca4u: goto label_185ca4;
        case 0x185ca8u: goto label_185ca8;
        case 0x185cacu: goto label_185cac;
        case 0x185cb0u: goto label_185cb0;
        case 0x185cb4u: goto label_185cb4;
        case 0x185cb8u: goto label_185cb8;
        case 0x185cbcu: goto label_185cbc;
        case 0x185cc0u: goto label_185cc0;
        case 0x185cc4u: goto label_185cc4;
        case 0x185cc8u: goto label_185cc8;
        case 0x185cccu: goto label_185ccc;
        case 0x185cd0u: goto label_185cd0;
        case 0x185cd4u: goto label_185cd4;
        case 0x185cd8u: goto label_185cd8;
        case 0x185cdcu: goto label_185cdc;
        case 0x185ce0u: goto label_185ce0;
        case 0x185ce4u: goto label_185ce4;
        case 0x185ce8u: goto label_185ce8;
        case 0x185cecu: goto label_185cec;
        case 0x185cf0u: goto label_185cf0;
        case 0x185cf4u: goto label_185cf4;
        case 0x185cf8u: goto label_185cf8;
        default: break;
    }

    ctx->pc = 0x185ca0u;

label_185ca0:
    // 0x185ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x185ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_185ca4:
    // 0x185ca4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x185ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_185ca8:
    // 0x185ca8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x185ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_185cac:
    // 0x185cac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x185cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_185cb0:
    // 0x185cb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185cb4:
    // 0x185cb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x185cb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_185cb8:
    // 0x185cb8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x185cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_185cbc:
    // 0x185cbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x185cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_185cc0:
    // 0x185cc0: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x185cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_185cc4:
    // 0x185cc4: 0x320f809  jalr        $t9
label_185cc8:
    if (ctx->pc == 0x185CC8u) {
        ctx->pc = 0x185CC8u;
            // 0x185cc8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x185CCCu;
        goto label_185ccc;
    }
    ctx->pc = 0x185CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x185CCCu);
        ctx->pc = 0x185CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185CC4u;
            // 0x185cc8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x185CCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185CCCu; }
            if (ctx->pc != 0x185CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x185CCCu;
label_185ccc:
    // 0x185ccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185cd0:
    // 0x185cd0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_185cd4:
    if (ctx->pc == 0x185CD4u) {
        ctx->pc = 0x185CD4u;
            // 0x185cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185CD8u;
        goto label_185cd8;
    }
    ctx->pc = 0x185CD0u;
    {
        const bool branch_taken_0x185cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185CD0u;
            // 0x185cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cd0) {
            ctx->pc = 0x185CE4u;
            goto label_185ce4;
        }
    }
    ctx->pc = 0x185CD8u;
label_185cd8:
    // 0x185cd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x185cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185cdc:
    // 0x185cdc: 0xc061258  jal         func_184960
label_185ce0:
    if (ctx->pc == 0x185CE0u) {
        ctx->pc = 0x185CE0u;
            // 0x185ce0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x185CE4u;
        goto label_185ce4;
    }
    ctx->pc = 0x185CDCu;
    SET_GPR_U32(ctx, 31, 0x185CE4u);
    ctx->pc = 0x185CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185CDCu;
            // 0x185ce0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (runtime->hasFunction(0x184960u)) {
        auto targetFn = runtime->lookupFunction(0x184960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CE4u; }
        if (ctx->pc != 0x185CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shake__6CWaterFiif_0x184960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185CE4u; }
        if (ctx->pc != 0x185CE4u) { return; }
    }
    ctx->pc = 0x185CE4u;
label_185ce4:
    // 0x185ce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x185ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_185ce8:
    // 0x185ce8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x185ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_185cec:
    // 0x185cec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185cf0:
    // 0x185cf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x185cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185cf4:
    // 0x185cf4: 0x3e00008  jr          $ra
label_185cf8:
    if (ctx->pc == 0x185CF8u) {
        ctx->pc = 0x185CF8u;
            // 0x185cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x185CFCu;
        goto label_fallthrough_0x185cf4;
    }
    ctx->pc = 0x185CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185CF4u;
            // 0x185cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x185cf4:
    ctx->pc = 0x185CFCu;
}
