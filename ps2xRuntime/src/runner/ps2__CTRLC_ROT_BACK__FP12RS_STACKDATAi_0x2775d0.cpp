#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CTRLC_ROT_BACK__FP12RS_STACKDATAi
// Address: 0x2775d0 - 0x277608
void ps2__CTRLC_ROT_BACK__FP12RS_STACKDATAi_0x2775d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CTRLC_ROT_BACK__FP12RS_STACKDATAi_0x2775d0");
#endif

    switch (ctx->pc) {
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e8u: goto label_2775e8;
        case 0x2775f4u: goto label_2775f4;
        default: break;
    }

    ctx->pc = 0x2775d0u;

    // 0x2775d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2775d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2775d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2775d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2775d8: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2775D8u;
    SET_GPR_U32(ctx, 31, 0x2775E0u);
    ctx->pc = 0x2775DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2775D8u;
            // 0x2775dc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775E0u; }
        if (ctx->pc != 0x2775E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775E0u; }
        if (ctx->pc != 0x2775E0u) { return; }
    }
    ctx->pc = 0x2775E0u;
label_2775e0:
    // 0x2775e0: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x2775E0u;
    SET_GPR_U32(ctx, 31, 0x2775E8u);
    ctx->pc = 0x2775E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2775E0u;
            // 0x2775e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775E8u; }
        if (ctx->pc != 0x2775E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775E8u; }
        if (ctx->pc != 0x2775E8u) { return; }
    }
    ctx->pc = 0x2775E8u;
label_2775e8:
    // 0x2775e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2775e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2775ec: 0xc0bb224  jal         func_2EC890
    ctx->pc = 0x2775ECu;
    SET_GPR_U32(ctx, 31, 0x2775F4u);
    ctx->pc = 0x2775F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2775ECu;
            // 0x2775f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775F4u; }
        if (ctx->pc != 0x2775F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2775F4u; }
        if (ctx->pc != 0x2775F4u) { return; }
    }
    ctx->pc = 0x2775F4u;
label_2775f4:
    // 0x2775f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2775f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2775f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2775f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2775fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2775fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277600: 0x3e00008  jr          $ra
    ctx->pc = 0x277600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x277600u;
            // 0x277604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x277608u;
}
