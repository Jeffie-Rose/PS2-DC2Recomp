#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_PR_SLOWING__FP12RS_STACKDATAi
// Address: 0x26fb40 - 0x26fb88
void ps2__CMRS_PR_SLOWING__FP12RS_STACKDATAi_0x26fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_PR_SLOWING__FP12RS_STACKDATAi_0x26fb40");
#endif

    switch (ctx->pc) {
        case 0x26fb54u: goto label_26fb54;
        case 0x26fb60u: goto label_26fb60;
        case 0x26fb74u: goto label_26fb74;
        default: break;
    }

    ctx->pc = 0x26fb40u;

    // 0x26fb40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26fb44: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x26fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26fb48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26fb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26fb4c: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x26FB4Cu;
    SET_GPR_U32(ctx, 31, 0x26FB54u);
    ctx->pc = 0x26FB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB4Cu;
            // 0x26fb50: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB54u; }
        if (ctx->pc != 0x26FB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB54u; }
        if (ctx->pc != 0x26FB54u) { return; }
    }
    ctx->pc = 0x26FB54u;
label_26fb54:
    // 0x26fb54: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26fb54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26fb58: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26FB58u;
    SET_GPR_U32(ctx, 31, 0x26FB60u);
    ctx->pc = 0x26FB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB58u;
            // 0x26fb5c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB60u; }
        if (ctx->pc != 0x26FB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB60u; }
        if (ctx->pc != 0x26FB60u) { return; }
    }
    ctx->pc = 0x26FB60u;
label_26fb60:
    // 0x26fb60: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26fb64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26fb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26fb68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26fb6c: 0xc09680c  jal         func_25A030
    ctx->pc = 0x26FB6Cu;
    SET_GPR_U32(ctx, 31, 0x26FB74u);
    ctx->pc = 0x26FB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB6Cu;
            // 0x26fb70: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A030u;
    if (runtime->hasFunction(0x25A030u)) {
        auto targetFn = runtime->lookupFunction(0x25A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB74u; }
        if (ctx->pc != 0x26FB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PRSlowing__12CSceneCmrSeqFfi_0x25a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FB74u; }
        if (ctx->pc != 0x26FB74u) { return; }
    }
    ctx->pc = 0x26FB74u;
label_26fb74:
    // 0x26fb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26fb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fb78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x26fb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26fb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x26FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26FB80u;
            // 0x26fb84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26FB88u;
}
