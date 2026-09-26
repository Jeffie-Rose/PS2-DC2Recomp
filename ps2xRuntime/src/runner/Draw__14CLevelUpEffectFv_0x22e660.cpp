#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__14CLevelUpEffectFv
// Address: 0x22e660 - 0x22e864
void Draw__14CLevelUpEffectFv_0x22e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__14CLevelUpEffectFv_0x22e660");
#endif

    switch (ctx->pc) {
        case 0x22e6a8u: goto label_22e6a8;
        case 0x22e6b4u: goto label_22e6b4;
        case 0x22e6c0u: goto label_22e6c0;
        case 0x22e6ccu: goto label_22e6cc;
        case 0x22e6d8u: goto label_22e6d8;
        case 0x22e6e4u: goto label_22e6e4;
        case 0x22e6ecu: goto label_22e6ec;
        case 0x22e728u: goto label_22e728;
        case 0x22e75cu: goto label_22e75c;
        case 0x22e76cu: goto label_22e76c;
        case 0x22e778u: goto label_22e778;
        case 0x22e788u: goto label_22e788;
        case 0x22e794u: goto label_22e794;
        case 0x22e7b0u: goto label_22e7b0;
        case 0x22e820u: goto label_22e820;
        case 0x22e844u: goto label_22e844;
        default: break;
    }

    ctx->pc = 0x22e660u;

    // 0x22e660: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x22e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x22e664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22e668: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22e668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22e66c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22e66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22e670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22e670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22e674: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22e674u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22e678: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22e678u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22e67c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22e67cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22e680: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x22E680u;
    {
        const bool branch_taken_0x22e680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E680u;
            // 0x22e684: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e680) {
            ctx->pc = 0x22E844u;
            goto label_22e844;
        }
    }
    ctx->pc = 0x22E688u;
    // 0x22e688: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x22e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x22e68c: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x22E68Cu;
    {
        const bool branch_taken_0x22e68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e68c) {
            ctx->pc = 0x22E844u;
            goto label_22e844;
        }
    }
    ctx->pc = 0x22E694u;
    // 0x22e694: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x22e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x22e698: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x22E698u;
    {
        const bool branch_taken_0x22e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E698u;
            // 0x22e69c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e698) {
            ctx->pc = 0x22E7B8u;
            goto label_22e7b8;
        }
    }
    ctx->pc = 0x22E6A0u;
    // 0x22e6a0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x22E6A0u;
    SET_GPR_U32(ctx, 31, 0x22E6A8u);
    ctx->pc = 0x22E6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6A0u;
            // 0x22e6a4: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6A8u; }
        if (ctx->pc != 0x22E6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6A8u; }
        if (ctx->pc != 0x22E6A8u) { return; }
    }
    ctx->pc = 0x22E6A8u;
label_22e6a8:
    // 0x22e6a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e6ac: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22E6ACu;
    SET_GPR_U32(ctx, 31, 0x22E6B4u);
    ctx->pc = 0x22E6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6ACu;
            // 0x22e6b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6B4u; }
        if (ctx->pc != 0x22E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6B4u; }
        if (ctx->pc != 0x22E6B4u) { return; }
    }
    ctx->pc = 0x22E6B4u;
label_22e6b4:
    // 0x22e6b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e6b8: 0xc04d44c  jal         func_135130
    ctx->pc = 0x22E6B8u;
    SET_GPR_U32(ctx, 31, 0x22E6C0u);
    ctx->pc = 0x22E6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6B8u;
            // 0x22e6bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6C0u; }
        if (ctx->pc != 0x22E6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6C0u; }
        if (ctx->pc != 0x22E6C0u) { return; }
    }
    ctx->pc = 0x22E6C0u;
label_22e6c0:
    // 0x22e6c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e6c4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x22E6C4u;
    SET_GPR_U32(ctx, 31, 0x22E6CCu);
    ctx->pc = 0x22E6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6C4u;
            // 0x22e6c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6CCu; }
        if (ctx->pc != 0x22E6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6CCu; }
        if (ctx->pc != 0x22E6CCu) { return; }
    }
    ctx->pc = 0x22E6CCu;
label_22e6cc:
    // 0x22e6cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e6d0: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x22E6D0u;
    SET_GPR_U32(ctx, 31, 0x22E6D8u);
    ctx->pc = 0x22E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6D0u;
            // 0x22e6d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6D8u; }
        if (ctx->pc != 0x22E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6D8u; }
        if (ctx->pc != 0x22E6D8u) { return; }
    }
    ctx->pc = 0x22E6D8u;
label_22e6d8:
    // 0x22e6d8: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x22e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x22e6dc: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x22E6DCu;
    SET_GPR_U32(ctx, 31, 0x22E6E4u);
    ctx->pc = 0x22E6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6DCu;
            // 0x22e6e0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6E4u; }
        if (ctx->pc != 0x22E6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E6E4u; }
        if (ctx->pc != 0x22E6E4u) { return; }
    }
    ctx->pc = 0x22E6E4u;
label_22e6e4:
    // 0x22e6e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e6e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e6e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e6ec:
    // 0x22e6ec: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22e6f0: 0x2442d410  addiu       $v0, $v0, -0x2BF0
    ctx->pc = 0x22e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956048));
    // 0x22e6f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22e6f8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x22e6f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e6fc: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22E6FCu;
    {
        const bool branch_taken_0x22e6fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x22E700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E6FCu;
            // 0x22e700: 0x3c033fc0  lui         $v1, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e6fc) {
            ctx->pc = 0x22E794u;
            goto label_22e794;
        }
    }
    ctx->pc = 0x22E704u;
    // 0x22e704: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22e704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x22e708: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22e708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22e70c: 0x2442cff0  addiu       $v0, $v0, -0x3010
    ctx->pc = 0x22e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954992));
    // 0x22e710: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x22e710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22e714: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x22e714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22e718: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22e718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22e71c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22e71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e720: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x22E720u;
    SET_GPR_U32(ctx, 31, 0x22E728u);
    ctx->pc = 0x22E724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E720u;
            // 0x22e724: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E728u; }
        if (ctx->pc != 0x22E728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E728u; }
        if (ctx->pc != 0x22E728u) { return; }
    }
    ctx->pc = 0x22E728u;
label_22e728:
    // 0x22e728: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x22E728u;
    {
        const bool branch_taken_0x22e728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e728) {
            ctx->pc = 0x22E794u;
            goto label_22e794;
        }
    }
    ctx->pc = 0x22E730u;
    // 0x22e730: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x22e730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22e734: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22e734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22e738: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x22e738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
    // 0x22e73c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e740: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22e740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22e744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e748: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22e748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e74c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x22e74cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22e750: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x22e750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22e754: 0xc04d320  jal         func_134C80
    ctx->pc = 0x22E754u;
    SET_GPR_U32(ctx, 31, 0x22E75Cu);
    ctx->pc = 0x22E758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E754u;
            // 0x22e758: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E75Cu; }
        if (ctx->pc != 0x22E75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E75Cu; }
        if (ctx->pc != 0x22E75Cu) { return; }
    }
    ctx->pc = 0x22E75Cu;
label_22e75c:
    // 0x22e75c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e760: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x22e760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22e764: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22E764u;
    SET_GPR_U32(ctx, 31, 0x22E76Cu);
    ctx->pc = 0x22E768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E764u;
            // 0x22e768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E76Cu; }
        if (ctx->pc != 0x22E76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E76Cu; }
        if (ctx->pc != 0x22E76Cu) { return; }
    }
    ctx->pc = 0x22E76Cu;
label_22e76c:
    // 0x22e76c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e770: 0xc04d318  jal         func_134C60
    ctx->pc = 0x22E770u;
    SET_GPR_U32(ctx, 31, 0x22E778u);
    ctx->pc = 0x22E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E770u;
            // 0x22e774: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E778u; }
        if (ctx->pc != 0x22E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E778u; }
        if (ctx->pc != 0x22E778u) { return; }
    }
    ctx->pc = 0x22E778u;
label_22e778:
    // 0x22e778: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e77c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x22e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22e780: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x22E780u;
    SET_GPR_U32(ctx, 31, 0x22E788u);
    ctx->pc = 0x22E784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E780u;
            // 0x22e784: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E788u; }
        if (ctx->pc != 0x22E788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E788u; }
        if (ctx->pc != 0x22E788u) { return; }
    }
    ctx->pc = 0x22E788u;
label_22e788:
    // 0x22e788: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x22e788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x22e78c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x22E78Cu;
    SET_GPR_U32(ctx, 31, 0x22E794u);
    ctx->pc = 0x22E790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E78Cu;
            // 0x22e790: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E794u; }
        if (ctx->pc != 0x22E794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E794u; }
        if (ctx->pc != 0x22E794u) { return; }
    }
    ctx->pc = 0x22E794u;
label_22e794:
    // 0x22e794: 0x0  nop
    ctx->pc = 0x22e794u;
    // NOP
    // 0x22e798: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x22e79c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x22e79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x22e7a0: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x22E7A0u;
    {
        const bool branch_taken_0x22e7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7A0u;
            // 0x22e7a4: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7a0) {
            ctx->pc = 0x22E6ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e6ec;
        }
    }
    ctx->pc = 0x22E7A8u;
    // 0x22e7a8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x22E7A8u;
    SET_GPR_U32(ctx, 31, 0x22E7B0u);
    ctx->pc = 0x22E7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7A8u;
            // 0x22e7ac: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E7B0u; }
        if (ctx->pc != 0x22E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E7B0u; }
        if (ctx->pc != 0x22E7B0u) { return; }
    }
    ctx->pc = 0x22E7B0u;
label_22e7b0:
    // 0x22e7b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x22E7B0u;
    {
        const bool branch_taken_0x22e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7B0u;
            // 0x22e7b4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7b0) {
            ctx->pc = 0x22E848u;
            goto label_22e848;
        }
    }
    ctx->pc = 0x22E7B8u;
label_22e7b8:
    // 0x22e7b8: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x22e7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e7bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22e7c0: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x22e7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22e7c4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x22e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x22e7c8: 0xc6540010  lwc1        $f20, 0x10($s2)
    ctx->pc = 0x22e7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22e7cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22e7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22e7d0: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x22e7d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x22e7d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22e7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22e7d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22e7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x22e7dc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E7DCu;
    {
        const bool branch_taken_0x22e7dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E7DCu;
            // 0x22e7e0: 0x46010541  sub.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e7dc) {
            ctx->pc = 0x22E7F8u;
            goto label_22e7f8;
        }
    }
    ctx->pc = 0x22E7E4u;
    // 0x22e7e4: 0x2443ffec  addiu       $v1, $v0, -0x14
    ctx->pc = 0x22e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x22e7e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x22e7ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e7f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22e7f4: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x22e7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_22e7f8:
    // 0x22e7f8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x22e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22e7fc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x22e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x22e800: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x22e800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x22e804: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x22e804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x22e808: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x22e808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22e80c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x22e810: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22e810u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e814: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22e814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22e818: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22E818u;
    SET_GPR_U32(ctx, 31, 0x22E820u);
    ctx->pc = 0x22E81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E818u;
            // 0x22e81c: 0x244600e4  addiu       $a2, $v0, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E820u; }
        if (ctx->pc != 0x22E820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E820u; }
        if (ctx->pc != 0x22E820u) { return; }
    }
    ctx->pc = 0x22E820u;
label_22e820:
    // 0x22e820: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x22e820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x22e824: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x22e824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22e828: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22e828u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22e82c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22e82cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e830: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x22e830u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x22e834: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x22e834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x22e838: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x22e838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e83c: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x22E83Cu;
    SET_GPR_U32(ctx, 31, 0x22E844u);
    ctx->pc = 0x22E840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E83Cu;
            // 0x22e840: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E844u; }
        if (ctx->pc != 0x22E844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E844u; }
        if (ctx->pc != 0x22E844u) { return; }
    }
    ctx->pc = 0x22E844u;
label_22e844:
    // 0x22e844: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e848:
    // 0x22e848: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22e84c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22e84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e850: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22e850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22e854: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22e858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e85c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E85Cu;
            // 0x22e860: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22E864u;
}
