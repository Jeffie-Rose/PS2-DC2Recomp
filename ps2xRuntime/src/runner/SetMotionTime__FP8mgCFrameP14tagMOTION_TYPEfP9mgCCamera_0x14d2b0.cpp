#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMotionTime__FP8mgCFrameP14tagMOTION_TYPEfP9mgCCamera
// Address: 0x14d2b0 - 0x14d310
void SetMotionTime__FP8mgCFrameP14tagMOTION_TYPEfP9mgCCamera_0x14d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMotionTime__FP8mgCFrameP14tagMOTION_TYPEfP9mgCCamera_0x14d2b0");
#endif

    switch (ctx->pc) {
        case 0x14d2d8u: goto label_14d2d8;
        case 0x14d2e8u: goto label_14d2e8;
        default: break;
    }

    ctx->pc = 0x14d2b0u;

    // 0x14d2b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d2b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14d2b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d2bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14d2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14d2c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14d2c8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14d2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2cc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x14d2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14d2d0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D2D0u;
    {
        const bool branch_taken_0x14d2d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D2D0u;
            // 0x14d2d4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2d0) {
            ctx->pc = 0x14D2F8u;
            goto label_14d2f8;
        }
    }
    ctx->pc = 0x14D2D8u;
label_14d2d8:
    // 0x14d2d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14d2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2e0: 0xc052e80  jal         func_14BA00
    ctx->pc = 0x14D2E0u;
    SET_GPR_U32(ctx, 31, 0x14D2E8u);
    ctx->pc = 0x14D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D2E0u;
            // 0x14d2e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14BA00u;
    if (runtime->hasFunction(0x14BA00u)) {
        auto targetFn = runtime->lookupFunction(0x14BA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2E8u; }
        if (ctx->pc != 0x14D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MotionProc__FP8mgCFramefP8Mot_ListP9mgCCamera_0x14ba00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D2E8u; }
        if (ctx->pc != 0x14D2E8u) { return; }
    }
    ctx->pc = 0x14D2E8u;
label_14d2e8:
    // 0x14d2e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14d2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2ec: 0x0  nop
    ctx->pc = 0x14d2ecu;
    // NOP
    // 0x14d2f0: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D2F0u;
    {
        const bool branch_taken_0x14d2f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d2f0) {
            ctx->pc = 0x14D2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d2d8;
        }
    }
    ctx->pc = 0x14D2F8u;
label_14d2f8:
    // 0x14d2f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14d2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d2fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d300: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d304: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14d304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d308: 0x3e00008  jr          $ra
    ctx->pc = 0x14D308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D308u;
            // 0x14d30c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D310u;
}
