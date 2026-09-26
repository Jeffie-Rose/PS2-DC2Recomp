#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_SET_VECT2__FP12RS_STACKDATAi
// Address: 0x1e6880 - 0x1e690c
void ps2__ESM_SET_VECT2__FP12RS_STACKDATAi_0x1e6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_SET_VECT2__FP12RS_STACKDATAi_0x1e6880");
#endif

    switch (ctx->pc) {
        case 0x1e68a4u: goto label_1e68a4;
        case 0x1e68b4u: goto label_1e68b4;
        case 0x1e68c4u: goto label_1e68c4;
        case 0x1e68d0u: goto label_1e68d0;
        case 0x1e68fcu: goto label_1e68fc;
        default: break;
    }

    ctx->pc = 0x1e6880u;

    // 0x1e6880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e6884: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e6884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e6888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e688c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E688Cu;
    {
        const bool branch_taken_0x1e688c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E688Cu;
            // 0x1e6890: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e688c) {
            ctx->pc = 0x1E689Cu;
            goto label_1e689c;
        }
    }
    ctx->pc = 0x1E6894u;
    // 0x1e6894: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E6894u;
    {
        const bool branch_taken_0x1e6894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6894u;
            // 0x1e6898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6894) {
            ctx->pc = 0x1E68FCu;
            goto label_1e68fc;
        }
    }
    ctx->pc = 0x1E689Cu;
label_1e689c:
    // 0x1e689c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E689Cu;
    SET_GPR_U32(ctx, 31, 0x1E68A4u);
    ctx->pc = 0x1E68A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E689Cu;
            // 0x1e68a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68A4u; }
        if (ctx->pc != 0x1E68A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68A4u; }
        if (ctx->pc != 0x1E68A4u) { return; }
    }
    ctx->pc = 0x1E68A4u;
label_1e68a4:
    // 0x1e68a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e68a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e68a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68ac: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E68ACu;
    SET_GPR_U32(ctx, 31, 0x1E68B4u);
    ctx->pc = 0x1E68B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68ACu;
            // 0x1e68b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68B4u; }
        if (ctx->pc != 0x1E68B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68B4u; }
        if (ctx->pc != 0x1E68B4u) { return; }
    }
    ctx->pc = 0x1E68B4u;
label_1e68b4:
    // 0x1e68b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e68b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e68b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e68bc: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E68BCu;
    SET_GPR_U32(ctx, 31, 0x1E68C4u);
    ctx->pc = 0x1E68C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68BCu;
            // 0x1e68c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68C4u; }
        if (ctx->pc != 0x1E68C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68C4u; }
        if (ctx->pc != 0x1E68C4u) { return; }
    }
    ctx->pc = 0x1E68C4u;
label_1e68c4:
    // 0x1e68c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e68c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68c8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E68C8u;
    SET_GPR_U32(ctx, 31, 0x1E68D0u);
    ctx->pc = 0x1E68CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68C8u;
            // 0x1e68cc: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68D0u; }
        if (ctx->pc != 0x1E68D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68D0u; }
        if (ctx->pc != 0x1E68D0u) { return; }
    }
    ctx->pc = 0x1E68D0u;
label_1e68d0:
    // 0x1e68d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e68d4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e68d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e68d8: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1e68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1e68dc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e68dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e68e0: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e68e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e68e8: 0x8c660670  lw          $a2, 0x670($v1)
    ctx->pc = 0x1e68e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1648)));
    // 0x1e68ec: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e68f0: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e68f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e68f4: 0xc0b88d8  jal         func_2E2360
    ctx->pc = 0x1E68F4u;
    SET_GPR_U32(ctx, 31, 0x1E68FCu);
    ctx->pc = 0x1E68F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68F4u;
            // 0x1e68f8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2360u;
    if (runtime->hasFunction(0x2E2360u)) {
        auto targetFn = runtime->lookupFunction(0x2E2360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68FCu; }
        if (ctx->pc != 0x1E68FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect2__16CEffectScriptManFPfii_0x2e2360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68FCu; }
        if (ctx->pc != 0x1E68FCu) { return; }
    }
    ctx->pc = 0x1E68FCu;
label_1e68fc:
    // 0x1e68fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e68fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e6900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6904: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6904u;
            // 0x1e6908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E690Cu;
}
