#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCALE_VECTOR__FP12RS_STACKDATAi
// Address: 0x1e15a0 - 0x1e1600
void ps2__SCALE_VECTOR__FP12RS_STACKDATAi_0x1e15a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCALE_VECTOR__FP12RS_STACKDATAi_0x1e15a0");
#endif

    switch (ctx->pc) {
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15c8u: goto label_1e15c8;
        case 0x1e15dcu: goto label_1e15dc;
        case 0x1e15f0u: goto label_1e15f0;
        default: break;
    }

    ctx->pc = 0x1e15a0u;

    // 0x1e15a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e15a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e15a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e15a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e15a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e15ac: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E15ACu;
    SET_GPR_U32(ctx, 31, 0x1E15B4u);
    ctx->pc = 0x1E15B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15ACu;
            // 0x1e15b0: 0x24c40018  addiu       $a0, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15B4u; }
        if (ctx->pc != 0x1E15B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15B4u; }
        if (ctx->pc != 0x1E15B4u) { return; }
    }
    ctx->pc = 0x1E15B4u;
label_1e15b4:
    // 0x1e15b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e15b8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e15b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e15bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e15bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e15c0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E15C0u;
    SET_GPR_U32(ctx, 31, 0x1E15C8u);
    ctx->pc = 0x1E15C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15C0u;
            // 0x1e15c4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C8u; }
        if (ctx->pc != 0x1E15C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C8u; }
        if (ctx->pc != 0x1E15C8u) { return; }
    }
    ctx->pc = 0x1E15C8u;
label_1e15c8:
    // 0x1e15c8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1e15cc: 0x24c40008  addiu       $a0, $a2, 0x8
    ctx->pc = 0x1e15ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1e15d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e15d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e15d4: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E15D4u;
    SET_GPR_U32(ctx, 31, 0x1E15DCu);
    ctx->pc = 0x1E15D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15D4u;
            // 0x1e15d8: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15DCu; }
        if (ctx->pc != 0x1E15DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15DCu; }
        if (ctx->pc != 0x1E15DCu) { return; }
    }
    ctx->pc = 0x1E15DCu;
label_1e15dc:
    // 0x1e15dc: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1e15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1e15e0: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x1e15e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1e15e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e15e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e15e8: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E15E8u;
    SET_GPR_U32(ctx, 31, 0x1E15F0u);
    ctx->pc = 0x1E15ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15E8u;
            // 0x1e15ec: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15F0u; }
        if (ctx->pc != 0x1E15F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15F0u; }
        if (ctx->pc != 0x1E15F0u) { return; }
    }
    ctx->pc = 0x1E15F0u;
label_1e15f0:
    // 0x1e15f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e15f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e15f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e15f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E15F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E15FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15F8u;
            // 0x1e15fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1600u;
}
