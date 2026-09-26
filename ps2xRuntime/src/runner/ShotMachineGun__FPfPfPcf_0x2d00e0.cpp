#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ShotMachineGun__FPfPfPcf
// Address: 0x2d00e0 - 0x2d0220
void ShotMachineGun__FPfPfPcf_0x2d00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShotMachineGun__FPfPfPcf_0x2d00e0");
#endif

    switch (ctx->pc) {
        case 0x2d011cu: goto label_2d011c;
        case 0x2d0128u: goto label_2d0128;
        case 0x2d0144u: goto label_2d0144;
        case 0x2d015cu: goto label_2d015c;
        case 0x2d016cu: goto label_2d016c;
        case 0x2d0180u: goto label_2d0180;
        case 0x2d01bcu: goto label_2d01bc;
        case 0x2d01d8u: goto label_2d01d8;
        case 0x2d0200u: goto label_2d0200;
        default: break;
    }

    ctx->pc = 0x2d00e0u;

    // 0x2d00e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d00e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d00e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d00e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d00e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d00ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d00ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d00f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d00f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d00f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d00f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d00f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d00fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d0100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d0104: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d0104u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d0108: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x2d0108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x2d010c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2d010cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d0110: 0x24842600  addiu       $a0, $a0, 0x2600
    ctx->pc = 0x2d0110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
    // 0x2d0114: 0xc06da90  jal         func_1B6A40
    ctx->pc = 0x2D0114u;
    SET_GPR_U32(ctx, 31, 0x2D011Cu);
    ctx->pc = 0x2D0118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0114u;
            // 0x2d0118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A40u;
    if (runtime->hasFunction(0x1B6A40u)) {
        auto targetFn = runtime->lookupFunction(0x1B6A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D011Cu; }
        if (ctx->pc != 0x2D011Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__11CMachineGunFPfPf_0x1b6a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D011Cu; }
        if (ctx->pc != 0x2D011Cu) { return; }
    }
    ctx->pc = 0x2D011Cu;
label_2d011c:
    // 0x2d011c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2d011cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x2d0120: 0xc06e9c0  jal         func_1BA700
    ctx->pc = 0x2D0120u;
    SET_GPR_U32(ctx, 31, 0x2D0128u);
    ctx->pc = 0x2D0124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0120u;
            // 0x2d0124: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA700u;
    if (runtime->hasFunction(0x1BA700u)) {
        auto targetFn = runtime->lookupFunction(0x1BA700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0128u; }
        if (ctx->pc != 0x2D0128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPrim__11CColPrimManFv_0x1ba700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0128u; }
        if (ctx->pc != 0x2D0128u) { return; }
    }
    ctx->pc = 0x2D0128u;
label_2d0128:
    // 0x2d0128: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d0128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d012c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D012Cu;
    {
        const bool branch_taken_0x2d012c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D012Cu;
            // 0x2d0130: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d012c) {
            ctx->pc = 0x2D0180u;
            goto label_2d0180;
        }
    }
    ctx->pc = 0x2D0134u;
    // 0x2d0134: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d0134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d0138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d013c: 0xc06e718  jal         func_1B9C60
    ctx->pc = 0x2D013Cu;
    SET_GPR_U32(ctx, 31, 0x2D0144u);
    ctx->pc = 0x2D0140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D013Cu;
            // 0x2d0140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9C60u;
    if (runtime->hasFunction(0x1B9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1B9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0144u; }
        if (ctx->pc != 0x2D0144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamage__8CColPrimFPci_0x1b9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0144u; }
        if (ctx->pc != 0x2D0144u) { return; }
    }
    ctx->pc = 0x2D0144u;
label_2d0144:
    // 0x2d0144: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d0144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d0148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d0148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d014c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d014cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d0150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0154: 0xc06e788  jal         func_1B9E20
    ctx->pc = 0x2D0154u;
    SET_GPR_U32(ctx, 31, 0x2D015Cu);
    ctx->pc = 0x2D0158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0154u;
            // 0x2d0158: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9E20u;
    if (runtime->hasFunction(0x1B9E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B9E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D015Cu; }
        if (ctx->pc != 0x2D015Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCoord__8CColPrimFPfPff_0x1b9e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D015Cu; }
        if (ctx->pc != 0x2D015Cu) { return; }
    }
    ctx->pc = 0x2D015Cu;
label_2d015c:
    // 0x2d015c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0160: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d0160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0164: 0xc07a260  jal         func_1E8980
    ctx->pc = 0x2D0164u;
    SET_GPR_U32(ctx, 31, 0x2D016Cu);
    ctx->pc = 0x2D0168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0164u;
            // 0x2d0168: 0xe65400a4  swc1        $f20, 0xA4($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8980u;
    if (runtime->hasFunction(0x1E8980u)) {
        auto targetFn = runtime->lookupFunction(0x1E8980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D016Cu; }
        if (ctx->pc != 0x2D016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDamageParam__FP8CColPrimi_0x1e8980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D016Cu; }
        if (ctx->pc != 0x2D016Cu) { return; }
    }
    ctx->pc = 0x2D016Cu;
label_2d016c:
    // 0x2d016c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2d016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d0170: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2d0170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0174: 0x84450046  lh          $a1, 0x46($v0)
    ctx->pc = 0x2d0174u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x2d0178: 0xc07a1f8  jal         func_1E87E0
    ctx->pc = 0x2D0178u;
    SET_GPR_U32(ctx, 31, 0x2D0180u);
    ctx->pc = 0x2D017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0178u;
            // 0x2d017c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87E0u;
    if (runtime->hasFunction(0x1E87E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0180u; }
        if (ctx->pc != 0x2D0180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParam2__Fii_0x1e87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0180u; }
        if (ctx->pc != 0x2D0180u) { return; }
    }
    ctx->pc = 0x2D0180u;
label_2d0180:
    // 0x2d0180: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x2d0180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x2d0184: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x2d0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
    // 0x2d0188: 0x84232980  lh          $v1, 0x2980($at)
    ctx->pc = 0x2d0188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 10624)));
    // 0x2d018c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d018cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2d0190: 0x24422920  addiu       $v0, $v0, 0x2920
    ctx->pc = 0x2d0190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10528));
    // 0x2d0194: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x2d0194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x2d0198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d0198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d019c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d019cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d01a0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d01a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d01a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d01a8: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x2d01a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x2d01ac: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d01acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d01b0: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d01b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d01b4: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2D01B4u;
    SET_GPR_U32(ctx, 31, 0x2D01BCu);
    ctx->pc = 0x2D01B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D01B4u;
            // 0x2d01b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01BCu; }
        if (ctx->pc != 0x2D01BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01BCu; }
        if (ctx->pc != 0x2D01BCu) { return; }
    }
    ctx->pc = 0x2D01BCu;
label_2d01bc:
    // 0x2d01bc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d01bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d01c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d01c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01c4: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2d01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d01c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d01c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01cc: 0x8c4407dc  lw          $a0, 0x7DC($v0)
    ctx->pc = 0x2d01ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2012)));
    // 0x2d01d0: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2D01D0u;
    SET_GPR_U32(ctx, 31, 0x2D01D8u);
    ctx->pc = 0x2D01D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D01D0u;
            // 0x2d01d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01D8u; }
        if (ctx->pc != 0x2D01D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D01D8u; }
        if (ctx->pc != 0x2D01D8u) { return; }
    }
    ctx->pc = 0x2D01D8u;
label_2d01d8:
    // 0x2d01d8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d01d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2d01dc: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2d01dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2d01e0: 0x8c6405a0  lw          $a0, 0x5A0($v1)
    ctx->pc = 0x2d01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
    // 0x2d01e4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D01E4u;
    {
        const bool branch_taken_0x2d01e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d01e4) {
            ctx->pc = 0x2D0200u;
            goto label_2d0200;
        }
    }
    ctx->pc = 0x2D01ECu;
    // 0x2d01ec: 0x8c650588  lw          $a1, 0x588($v1)
    ctx->pc = 0x2d01ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1416)));
    // 0x2d01f0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2d01f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d01f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2d01f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d01f8: 0xc0631a8  jal         func_18C6A0
    ctx->pc = 0x2D01F8u;
    SET_GPR_U32(ctx, 31, 0x2D0200u);
    ctx->pc = 0x2D01FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D01F8u;
            // 0x2d01fc: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0200u; }
        if (ctx->pc != 0x2D0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0200u; }
        if (ctx->pc != 0x2D0200u) { return; }
    }
    ctx->pc = 0x2D0200u;
label_2d0200:
    // 0x2d0200: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d0200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0204: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d0204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0208: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d0208u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d020c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d020cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0210: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d0210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d0214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0218: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0218u;
            // 0x2d021c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0220u;
}
