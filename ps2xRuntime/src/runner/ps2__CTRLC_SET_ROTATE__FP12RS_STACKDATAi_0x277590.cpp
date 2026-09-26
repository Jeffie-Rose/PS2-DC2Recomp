#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CTRLC_SET_ROTATE__FP12RS_STACKDATAi
// Address: 0x277590 - 0x2775c8
void ps2__CTRLC_SET_ROTATE__FP12RS_STACKDATAi_0x277590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CTRLC_SET_ROTATE__FP12RS_STACKDATAi_0x277590");
#endif

    switch (ctx->pc) {
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775b4u: goto label_2775b4;
        default: break;
    }

    ctx->pc = 0x277590u;

    // 0x277590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x277598: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x277598u;
    SET_GPR_U32(ctx, 31, 0x2775A0u);
    ctx->pc = 0x27759Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277598u;
            // 0x27759c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775A0u; }
        if (ctx->pc != 0x2775A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775A0u; }
        if (ctx->pc != 0x2775A0u) { return; }
    }
    ctx->pc = 0x2775A0u;
label_2775a0:
    // 0x2775a0: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x2775A0u;
    SET_GPR_U32(ctx, 31, 0x2775A8u);
    ctx->pc = 0x2775A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2775A0u;
            // 0x2775a4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775A8u; }
        if (ctx->pc != 0x2775A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775A8u; }
        if (ctx->pc != 0x2775A8u) { return; }
    }
    ctx->pc = 0x2775A8u;
label_2775a8:
    // 0x2775a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2775a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775ac: 0xc0bb1e4  jal         func_2EC790
    ctx->pc = 0x2775ACu;
    SET_GPR_U32(ctx, 31, 0x2775B4u);
    ctx->pc = 0x2775B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2775ACu;
            // 0x2775b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC790u;
    if (runtime->hasFunction(0x2EC790u)) {
        auto targetFn = runtime->lookupFunction(0x2EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775B4u; }
        if (ctx->pc != 0x2775B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotate__14CCameraControlFf_0x2ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775B4u; }
        if (ctx->pc != 0x2775B4u) { return; }
    }
    ctx->pc = 0x2775B4u;
label_2775b4:
    // 0x2775b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2775b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2775b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2775b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2775bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2775bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2775c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2775C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2775C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2775C0u;
            // 0x2775c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2775C8u;
}
