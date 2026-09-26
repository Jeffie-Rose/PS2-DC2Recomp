#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_TARGET_OLD_POS__FP12RS_STACKDATAi
// Address: 0x1e1750 - 0x1e17c8
void ps2__GET_TARGET_OLD_POS__FP12RS_STACKDATAi_0x1e1750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_TARGET_OLD_POS__FP12RS_STACKDATAi_0x1e1750");
#endif

    switch (ctx->pc) {
        case 0x1e1770u: goto label_1e1770;
        case 0x1e1788u: goto label_1e1788;
        case 0x1e1798u: goto label_1e1798;
        case 0x1e17a8u: goto label_1e17a8;
        case 0x1e17b4u: goto label_1e17b4;
        default: break;
    }

    ctx->pc = 0x1e1750u;

    // 0x1e1750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e175c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e175cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1764: 0x844512e2  lh          $a1, 0x12E2($v0)
    ctx->pc = 0x1e1764u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4834)));
    // 0x1e1768: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1E1768u;
    SET_GPR_U32(ctx, 31, 0x1E1770u);
    ctx->pc = 0x1E176Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1768u;
            // 0x1e176c: 0x8f848e6c  lw          $a0, -0x7194($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1770u; }
        if (ctx->pc != 0x1E1770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1770u; }
        if (ctx->pc != 0x1E1770u) { return; }
    }
    ctx->pc = 0x1E1770u;
label_1e1770:
    // 0x1e1770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1770u;
    {
        const bool branch_taken_0x1e1770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1770u;
            // 0x1e1774: 0x24450660  addiu       $a1, $v0, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1770) {
            ctx->pc = 0x1E1780u;
            goto label_1e1780;
        }
    }
    ctx->pc = 0x1E1778u;
    // 0x1e1778: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E1778u;
    {
        const bool branch_taken_0x1e1778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1778u;
            // 0x1e177c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1778) {
            ctx->pc = 0x1E17B8u;
            goto label_1e17b8;
        }
    }
    ctx->pc = 0x1E1780u;
label_1e1780:
    // 0x1e1780: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1E1780u;
    SET_GPR_U32(ctx, 31, 0x1E1788u);
    ctx->pc = 0x1E1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1780u;
            // 0x1e1784: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1788u; }
        if (ctx->pc != 0x1E1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1788u; }
        if (ctx->pc != 0x1E1788u) { return; }
    }
    ctx->pc = 0x1E1788u;
label_1e1788:
    // 0x1e1788: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1e1788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e178c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e178cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1790: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E1790u;
    SET_GPR_U32(ctx, 31, 0x1E1798u);
    ctx->pc = 0x1E1794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1790u;
            // 0x1e1794: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1798u; }
        if (ctx->pc != 0x1E1798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1798u; }
        if (ctx->pc != 0x1E1798u) { return; }
    }
    ctx->pc = 0x1E1798u;
label_1e1798:
    // 0x1e1798: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1e1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e179c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e179cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17a0: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E17A0u;
    SET_GPR_U32(ctx, 31, 0x1E17A8u);
    ctx->pc = 0x1E17A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17A0u;
            // 0x1e17a4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17A8u; }
        if (ctx->pc != 0x1E17A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17A8u; }
        if (ctx->pc != 0x1E17A8u) { return; }
    }
    ctx->pc = 0x1E17A8u;
label_1e17a8:
    // 0x1e17a8: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e17a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e17ac: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E17ACu;
    SET_GPR_U32(ctx, 31, 0x1E17B4u);
    ctx->pc = 0x1E17B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17ACu;
            // 0x1e17b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17B4u; }
        if (ctx->pc != 0x1E17B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17B4u; }
        if (ctx->pc != 0x1E17B4u) { return; }
    }
    ctx->pc = 0x1E17B4u;
label_1e17b4:
    // 0x1e17b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e17b8:
    // 0x1e17b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e17b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e17bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e17bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e17c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E17C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17C0u;
            // 0x1e17c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E17C8u;
}
