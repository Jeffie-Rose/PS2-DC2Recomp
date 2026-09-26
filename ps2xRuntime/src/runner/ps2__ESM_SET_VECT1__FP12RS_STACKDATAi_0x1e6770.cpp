#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VECT1__FP12RS_STACKDATAi
// Address: 0x1e6770 - 0x1e67ec
void ps2__ESM_SET_VECT1__FP12RS_STACKDATAi_0x1e6770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VECT1__FP12RS_STACKDATAi_0x1e6770");
#endif

    switch (ctx->pc) {
        case 0x1e6784u: goto label_1e6784;
        case 0x1e6794u: goto label_1e6794;
        case 0x1e67a4u: goto label_1e67a4;
        case 0x1e67b0u: goto label_1e67b0;
        case 0x1e67dcu: goto label_1e67dc;
        default: break;
    }

    ctx->pc = 0x1e6770u;

    // 0x1e6770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e677c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E677Cu;
    SET_GPR_U32(ctx, 31, 0x1E6784u);
    ctx->pc = 0x1E6780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E677Cu;
            // 0x1e6780: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6784u; }
        if (ctx->pc != 0x1E6784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6784u; }
        if (ctx->pc != 0x1E6784u) { return; }
    }
    ctx->pc = 0x1E6784u;
label_1e6784:
    // 0x1e6784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6788: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e6788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e678c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E678Cu;
    SET_GPR_U32(ctx, 31, 0x1E6794u);
    ctx->pc = 0x1E6790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E678Cu;
            // 0x1e6790: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6794u; }
        if (ctx->pc != 0x1E6794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6794u; }
        if (ctx->pc != 0x1E6794u) { return; }
    }
    ctx->pc = 0x1E6794u;
label_1e6794:
    // 0x1e6794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e6794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6798: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e6798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e679c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E679Cu;
    SET_GPR_U32(ctx, 31, 0x1E67A4u);
    ctx->pc = 0x1E67A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E679Cu;
            // 0x1e67a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67A4u; }
        if (ctx->pc != 0x1E67A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67A4u; }
        if (ctx->pc != 0x1E67A4u) { return; }
    }
    ctx->pc = 0x1E67A4u;
label_1e67a4:
    // 0x1e67a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e67a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e67a8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E67A8u;
    SET_GPR_U32(ctx, 31, 0x1E67B0u);
    ctx->pc = 0x1E67ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67A8u;
            // 0x1e67ac: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67B0u; }
        if (ctx->pc != 0x1E67B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67B0u; }
        if (ctx->pc != 0x1E67B0u) { return; }
    }
    ctx->pc = 0x1E67B0u;
label_1e67b0:
    // 0x1e67b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e67b4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e67b8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1e67b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1e67bc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e67bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e67c0: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e67c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e67c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e67c8: 0x8c660670  lw          $a2, 0x670($v1)
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1e67cc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e67ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e67d0: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e67d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e67d4: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x1E67D4u;
    SET_GPR_U32(ctx, 31, 0x1E67DCu);
    ctx->pc = 0x1E67D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67D4u;
            // 0x1e67d8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67DCu; }
        if (ctx->pc != 0x1E67DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67DCu; }
        if (ctx->pc != 0x1E67DCu) { return; }
    }
    ctx->pc = 0x1E67DCu;
label_1e67dc:
    // 0x1e67dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e67dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e67e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e67e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e67e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E67E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E67E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67E4u;
            // 0x1e67e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E67ECu;
}
