#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DMG2__FP12RS_STACKDATAi
// Address: 0x1e32f0 - 0x1e3474
void ps2__SET_DMG2__FP12RS_STACKDATAi_0x1e32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DMG2__FP12RS_STACKDATAi_0x1e32f0");
#endif

    switch (ctx->pc) {
        case 0x1e3328u: goto label_1e3328;
        case 0x1e3338u: goto label_1e3338;
        case 0x1e3350u: goto label_1e3350;
        case 0x1e3360u: goto label_1e3360;
        case 0x1e3370u: goto label_1e3370;
        case 0x1e3380u: goto label_1e3380;
        case 0x1e3398u: goto label_1e3398;
        case 0x1e33b4u: goto label_1e33b4;
        case 0x1e3400u: goto label_1e3400;
        case 0x1e3438u: goto label_1e3438;
        default: break;
    }

    ctx->pc = 0x1e32f0u;

    // 0x1e32f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e32f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e32f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1e32f8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1e32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1e32fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e3300: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e3304: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x1e3304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e3308: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e330c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e330cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3310: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e3310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e3314: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3318: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e3318u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e331c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e331cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e3320: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E3320u;
    SET_GPR_U32(ctx, 31, 0x1E3328u);
    ctx->pc = 0x1E3324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3320u;
            // 0x1e3324: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3328u; }
        if (ctx->pc != 0x1E3328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3328u; }
        if (ctx->pc != 0x1E3328u) { return; }
    }
    ctx->pc = 0x1E3328u;
label_1e3328:
    // 0x1e3328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e3328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e332c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1e332cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3330: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3330u;
    SET_GPR_U32(ctx, 31, 0x1E3338u);
    ctx->pc = 0x1E3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3330u;
            // 0x1e3334: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3338u; }
        if (ctx->pc != 0x1E3338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3338u; }
        if (ctx->pc != 0x1E3338u) { return; }
    }
    ctx->pc = 0x1E3338u;
label_1e3338:
    // 0x1e3338: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e333c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3340: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3344: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x1e3344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e3348: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E3348u;
    SET_GPR_U32(ctx, 31, 0x1E3350u);
    ctx->pc = 0x1E334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3348u;
            // 0x1e334c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3350u; }
        if (ctx->pc != 0x1E3350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3350u; }
        if (ctx->pc != 0x1E3350u) { return; }
    }
    ctx->pc = 0x1E3350u;
label_1e3350:
    // 0x1e3350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e3350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3358: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3358u;
    SET_GPR_U32(ctx, 31, 0x1E3360u);
    ctx->pc = 0x1E335Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3358u;
            // 0x1e335c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3360u; }
        if (ctx->pc != 0x1E3360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3360u; }
        if (ctx->pc != 0x1E3360u) { return; }
    }
    ctx->pc = 0x1E3360u;
label_1e3360:
    // 0x1e3360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e3360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3364: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1e3364u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3368: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3368u;
    SET_GPR_U32(ctx, 31, 0x1E3370u);
    ctx->pc = 0x1E336Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3368u;
            // 0x1e336c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3370u; }
        if (ctx->pc != 0x1E3370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3370u; }
        if (ctx->pc != 0x1E3370u) { return; }
    }
    ctx->pc = 0x1E3370u;
label_1e3370:
    // 0x1e3370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e3370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3374: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1e3374u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1e3378: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E3378u;
    SET_GPR_U32(ctx, 31, 0x1E3380u);
    ctx->pc = 0x1E337Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3378u;
            // 0x1e337c: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3380u; }
        if (ctx->pc != 0x1E3380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3380u; }
        if (ctx->pc != 0x1E3380u) { return; }
    }
    ctx->pc = 0x1E3380u;
label_1e3380:
    // 0x1e3380: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e3380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3384: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e3384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e3388: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3388u;
    {
        const bool branch_taken_0x1e3388 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3388u;
            // 0x1e338c: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3388) {
            ctx->pc = 0x1E339Cu;
            goto label_1e339c;
        }
    }
    ctx->pc = 0x1E3390u;
    // 0x1e3390: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E3390u;
    SET_GPR_U32(ctx, 31, 0x1E3398u);
    ctx->pc = 0x1E3394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3390u;
            // 0x1e3394: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3398u; }
        if (ctx->pc != 0x1E3398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3398u; }
        if (ctx->pc != 0x1E3398u) { return; }
    }
    ctx->pc = 0x1E3398u;
label_1e3398:
    // 0x1e3398: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e3398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e339c:
    // 0x1e339c: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e339cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e33a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e33a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e33a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e33a8: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1e33a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e33ac: 0xc05d420  jal         func_175080
    ctx->pc = 0x1E33ACu;
    SET_GPR_U32(ctx, 31, 0x1E33B4u);
    ctx->pc = 0x1E33B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33ACu;
            // 0x1e33b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33B4u; }
        if (ctx->pc != 0x1E33B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33B4u; }
        if (ctx->pc != 0x1E33B4u) { return; }
    }
    ctx->pc = 0x1E33B4u;
label_1e33b4:
    // 0x1e33b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E33B4u;
    {
        const bool branch_taken_0x1e33b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e33b4) {
            ctx->pc = 0x1E33C4u;
            goto label_1e33c4;
        }
    }
    ctx->pc = 0x1E33BCu;
    // 0x1e33bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1E33BCu;
    {
        const bool branch_taken_0x1e33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E33C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33BCu;
            // 0x1e33c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33bc) {
            ctx->pc = 0x1E3444u;
            goto label_1e3444;
        }
    }
    ctx->pc = 0x1E33C4u;
label_1e33c4:
    // 0x1e33c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e33c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e33c8: 0x0  nop
    ctx->pc = 0x1e33c8u;
    // NOP
    // 0x1e33cc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1e33ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e33d0: 0x0  nop
    ctx->pc = 0x1e33d0u;
    // NOP
    // 0x1e33d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E33D4u;
    {
        const bool branch_taken_0x1e33d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E33D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33D4u;
            // 0x1e33d8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e33d4) {
            ctx->pc = 0x1E33E4u;
            goto label_1e33e4;
        }
    }
    ctx->pc = 0x1E33DCu;
    // 0x1e33dc: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x1e33dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e33e0: 0x0  nop
    ctx->pc = 0x1e33e0u;
    // NOP
label_1e33e4:
    // 0x1e33e4: 0x640000a  bltz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1E33E4u;
    {
        const bool branch_taken_0x1e33e4 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1e33e4) {
            ctx->pc = 0x1E3410u;
            goto label_1e3410;
        }
    }
    ctx->pc = 0x1E33ECu;
    // 0x1e33ec: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e33f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e33f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e33f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e33f8: 0xc05d420  jal         func_175080
    ctx->pc = 0x1E33F8u;
    SET_GPR_U32(ctx, 31, 0x1E3400u);
    ctx->pc = 0x1E33FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E33F8u;
            // 0x1e33fc: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3400u; }
        if (ctx->pc != 0x1E3400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3400u; }
        if (ctx->pc != 0x1E3400u) { return; }
    }
    ctx->pc = 0x1E3400u;
label_1e3400:
    // 0x1e3400: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3400u;
    {
        const bool branch_taken_0x1e3400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3400) {
            ctx->pc = 0x1E3410u;
            goto label_1e3410;
        }
    }
    ctx->pc = 0x1E3408u;
    // 0x1e3408: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1e3408u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e340c: 0x0  nop
    ctx->pc = 0x1e340cu;
    // NOP
label_1e3410:
    // 0x1e3410: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e3410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3414: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e3414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3418: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e3418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e341c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1e341cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3420: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e3420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e3424: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e3424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3428: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1e3428u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1e342c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e342cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3430: 0xc05aa14  jal         func_16A850
    ctx->pc = 0x1E3430u;
    SET_GPR_U32(ctx, 31, 0x1E3438u);
    ctx->pc = 0x1E3434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3430u;
            // 0x1e3434: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A850u;
    if (runtime->hasFunction(0x16A850u)) {
        auto targetFn = runtime->lookupFunction(0x16A850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3438u; }
        if (ctx->pc != 0x1E3438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryDamage2__12CActionCharaFP8mgCFrameP8mgCFramePcfPcffPc_0x16a850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3438u; }
        if (ctx->pc != 0x1E3438u) { return; }
    }
    ctx->pc = 0x1E3438u;
label_1e3438:
    // 0x1e3438: 0xaf828e74  sw          $v0, -0x718C($gp)
    ctx->pc = 0x1e3438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938228), GPR_U32(ctx, 2));
    // 0x1e343c: 0x8f828e74  lw          $v0, -0x718C($gp)
    ctx->pc = 0x1e343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    // 0x1e3440: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e3440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e3444:
    // 0x1e3444: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e3444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e3448: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e3448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1e344c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e344cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3450: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e3454: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e3454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3458: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e3458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e345c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e345cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3460: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e3460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3464: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e3464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3468: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e346c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E346Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E346Cu;
            // 0x1e3470: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3474u;
}
