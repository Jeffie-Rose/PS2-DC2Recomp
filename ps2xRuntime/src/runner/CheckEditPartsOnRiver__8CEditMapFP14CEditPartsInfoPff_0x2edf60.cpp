#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEditPartsOnRiver__8CEditMapFP14CEditPartsInfoPff
// Address: 0x2edf60 - 0x2ee27c
void CheckEditPartsOnRiver__8CEditMapFP14CEditPartsInfoPff_0x2edf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEditPartsOnRiver__8CEditMapFP14CEditPartsInfoPff_0x2edf60");
#endif

    switch (ctx->pc) {
        case 0x2edfa4u: goto label_2edfa4;
        case 0x2edfb8u: goto label_2edfb8;
        case 0x2edfd4u: goto label_2edfd4;
        case 0x2edff0u: goto label_2edff0;
        case 0x2ee000u: goto label_2ee000;
        case 0x2ee028u: goto label_2ee028;
        case 0x2ee03cu: goto label_2ee03c;
        case 0x2ee048u: goto label_2ee048;
        case 0x2ee050u: goto label_2ee050;
        case 0x2ee060u: goto label_2ee060;
        case 0x2ee080u: goto label_2ee080;
        case 0x2ee09cu: goto label_2ee09c;
        case 0x2ee0a8u: goto label_2ee0a8;
        case 0x2ee0ccu: goto label_2ee0cc;
        case 0x2ee0ecu: goto label_2ee0ec;
        case 0x2ee0fcu: goto label_2ee0fc;
        case 0x2ee12cu: goto label_2ee12c;
        case 0x2ee15cu: goto label_2ee15c;
        default: break;
    }

    ctx->pc = 0x2edf60u;

    // 0x2edf60: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x2edf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x2edf64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2edf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2edf68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2edf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2edf6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2edf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2edf70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2edf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2edf74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2edf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2edf78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2edf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2edf7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2edf7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2edf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2edf84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2edf84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2edf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2edf8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2edf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2edf90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2edf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2edf94: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2edf94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2edf98: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2edf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edf9c: 0xc06c3d4  jal         func_1B0F50
    ctx->pc = 0x2EDF9Cu;
    SET_GPR_U32(ctx, 31, 0x2EDFA4u);
    ctx->pc = 0x2EDFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDF9Cu;
            // 0x2edfa0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFA4u; }
        if (ctx->pc != 0x2EDFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFA4u; }
        if (ctx->pc != 0x2EDFA4u) { return; }
    }
    ctx->pc = 0x2EDFA4u;
label_2edfa4:
    // 0x2edfa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2edfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfa8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2edfa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2edfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edfb0: 0xc06c4d8  jal         func_1B1360
    ctx->pc = 0x2EDFB0u;
    SET_GPR_U32(ctx, 31, 0x2EDFB8u);
    ctx->pc = 0x2EDFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDFB0u;
            // 0x2edfb4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFB8u; }
        if (ctx->pc != 0x2EDFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFB8u; }
        if (ctx->pc != 0x2EDFB8u) { return; }
    }
    ctx->pc = 0x2EDFB8u;
label_2edfb8:
    // 0x2edfb8: 0x7a8301c0  lq          $v1, 0x1C0($s4)
    ctx->pc = 0x2edfb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 448)));
    // 0x2edfbc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2edfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2edfc0: 0x7a8201d0  lq          $v0, 0x1D0($s4)
    ctx->pc = 0x2edfc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x2edfc4: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x2edfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x2edfc8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2edfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2edfcc: 0xc068d24  jal         func_1A3490
    ctx->pc = 0x2EDFCCu;
    SET_GPR_U32(ctx, 31, 0x2EDFD4u);
    ctx->pc = 0x2EDFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDFCCu;
            // 0x2edfd0: 0x7ca20010  sq          $v0, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3490u;
    if (runtime->hasFunction(0x1A3490u)) {
        auto targetFn = runtime->lookupFunction(0x1A3490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFD4u; }
        if (ctx->pc != 0x2EDFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AreaXZ__14CEditCollisionFv_0x1a3490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFD4u; }
        if (ctx->pc != 0x2EDFD4u) { return; }
    }
    ctx->pc = 0x2EDFD4u;
label_2edfd4:
    // 0x2edfd4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2edfd4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2edfd8: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2edfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2edfdc: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2edfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2edfe0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2edfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2edfe4: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x2edfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2edfe8: 0xc04c278  jal         func_1309E0
    ctx->pc = 0x2EDFE8u;
    SET_GPR_U32(ctx, 31, 0x2EDFF0u);
    ctx->pc = 0x2EDFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDFE8u;
            // 0x2edfec: 0x27a80140  addiu       $t0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFF0u; }
        if (ctx->pc != 0x2EDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EDFF0u; }
        if (ctx->pc != 0x2EDFF0u) { return; }
    }
    ctx->pc = 0x2EDFF0u;
label_2edff0:
    // 0x2edff0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2edff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2edff4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2edff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x2edff8: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2EDFF8u;
    {
        const bool branch_taken_0x2edff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EDFF8u;
            // 0x2edffc: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edff8) {
            ctx->pc = 0x2EE1F0u;
            goto label_2ee1f0;
        }
    }
    ctx->pc = 0x2EE000u;
label_2ee000:
    // 0x2ee000: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ee000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ee004: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2ee004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2ee008: 0x8c440f54  lw          $a0, 0xF54($v0)
    ctx->pc = 0x2ee008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3924)));
    // 0x2ee00c: 0x10800071  beqz        $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2EE00Cu;
    {
        const bool branch_taken_0x2ee00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE00Cu;
            // 0x2ee010: 0x245e0f54  addiu       $fp, $v0, 0xF54 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3924));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee00c) {
            ctx->pc = 0x2EE1D4u;
            goto label_2ee1d4;
        }
    }
    ctx->pc = 0x2EE014u;
    // 0x2ee014: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x2ee014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2ee018: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ee018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ee01c: 0xc7ad0168  lwc1        $f13, 0x168($sp)
    ctx->pc = 0x2ee01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ee020: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x2EE020u;
    SET_GPR_U32(ctx, 31, 0x2EE028u);
    ctx->pc = 0x2EE024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE020u;
            // 0x2ee024: 0x27a50278  addiu       $a1, $sp, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE028u; }
        if (ctx->pc != 0x2EE028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE028u; }
        if (ctx->pc != 0x2EE028u) { return; }
    }
    ctx->pc = 0x2EE028u;
label_2ee028:
    // 0x2ee028: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2ee028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ee02c: 0xc7ac0150  lwc1        $f12, 0x150($sp)
    ctx->pc = 0x2ee02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ee030: 0xc7ad0158  lwc1        $f13, 0x158($sp)
    ctx->pc = 0x2ee030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ee034: 0xc0a5e64  jal         func_297990
    ctx->pc = 0x2EE034u;
    SET_GPR_U32(ctx, 31, 0x2EE03Cu);
    ctx->pc = 0x2EE038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE034u;
            // 0x2ee038: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297990u;
    if (runtime->hasFunction(0x297990u)) {
        auto targetFn = runtime->lookupFunction(0x297990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE03Cu; }
        if (ctx->pc != 0x2EE03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLPos__9CEditGridFPiff_0x297990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE03Cu; }
        if (ctx->pc != 0x2EE03Cu) { return; }
    }
    ctx->pc = 0x2EE03Cu;
label_2ee03c:
    // 0x2ee03c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x2ee03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2ee040: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2EE040u;
    {
        const bool branch_taken_0x2ee040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE040u;
            // 0x2ee044: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee040) {
            ctx->pc = 0x2EE1BCu;
            goto label_2ee1bc;
        }
    }
    ctx->pc = 0x2EE048u;
label_2ee048:
    // 0x2ee048: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2EE048u;
    {
        const bool branch_taken_0x2ee048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE048u;
            // 0x2ee04c: 0x8fb0027c  lw          $s0, 0x27C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee048) {
            ctx->pc = 0x2EE19Cu;
            goto label_2ee19c;
        }
    }
    ctx->pc = 0x2EE050u;
label_2ee050:
    // 0x2ee050: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2ee050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ee054: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2ee054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ee058: 0xc0a5e40  jal         func_297900
    ctx->pc = 0x2EE058u;
    SET_GPR_U32(ctx, 31, 0x2EE060u);
    ctx->pc = 0x2EE05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE058u;
            // 0x2ee05c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297900u;
    if (runtime->hasFunction(0x297900u)) {
        auto targetFn = runtime->lookupFunction(0x297900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE060u; }
        if (ctx->pc != 0x2EE060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__9CEditGridFii_0x297900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE060u; }
        if (ctx->pc != 0x2EE060u) { return; }
    }
    ctx->pc = 0x2EE060u;
label_2ee060:
    // 0x2ee060: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2ee060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x2ee064: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2ee064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2ee068: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2EE068u;
    {
        const bool branch_taken_0x2ee068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee068) {
            ctx->pc = 0x2EE198u;
            goto label_2ee198;
        }
    }
    ctx->pc = 0x2EE070u;
    // 0x2ee070: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2ee070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ee074: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2ee074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ee078: 0xc0a6010  jal         func_298040
    ctx->pc = 0x2EE078u;
    SET_GPR_U32(ctx, 31, 0x2EE080u);
    ctx->pc = 0x2EE07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE078u;
            // 0x2ee07c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298040u;
    if (runtime->hasFunction(0x298040u)) {
        auto targetFn = runtime->lookupFunction(0x298040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE080u; }
        if (ctx->pc != 0x2EE080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        River__9CEditGridFii_0x298040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE080u; }
        if (ctx->pc != 0x2EE080u) { return; }
    }
    ctx->pc = 0x2EE080u;
label_2ee080:
    // 0x2ee080: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2EE080u;
    {
        const bool branch_taken_0x2ee080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee080) {
            ctx->pc = 0x2EE198u;
            goto label_2ee198;
        }
    }
    ctx->pc = 0x2EE088u;
    // 0x2ee088: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2ee088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ee08c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ee08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee090: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2ee090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ee094: 0xc0a601c  jal         func_298070
    ctx->pc = 0x2EE094u;
    SET_GPR_U32(ctx, 31, 0x2EE09Cu);
    ctx->pc = 0x2EE098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE094u;
            // 0x2ee098: 0x27a70170  addiu       $a3, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298070u;
    if (runtime->hasFunction(0x298070u)) {
        auto targetFn = runtime->lookupFunction(0x298070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE09Cu; }
        if (ctx->pc != 0x2EE09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverPos__9CEditGridFiiPA4_f_0x298070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE09Cu; }
        if (ctx->pc != 0x2EE09Cu) { return; }
    }
    ctx->pc = 0x2EE09Cu;
label_2ee09c:
    // 0x2ee09c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ee09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee0a0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ee0a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee0a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ee0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee0a8:
    // 0x2ee0a8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x2ee0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2ee0ac: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2ee0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2ee0b0: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x2ee0b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2ee0b4: 0x8663000c  lh          $v1, 0xC($s3)
    ctx->pc = 0x2ee0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2ee0b8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2ee0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ee0bc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2ee0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2ee0c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee0c4: 0xc041c60  jal         func_107180
    ctx->pc = 0x2EE0C4u;
    SET_GPR_U32(ctx, 31, 0x2EE0CCu);
    ctx->pc = 0x2EE0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE0C4u;
            // 0x2ee0c8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107180u;
    if (runtime->hasFunction(0x107180u)) {
        auto targetFn = runtime->lookupFunction(0x107180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE0CCu; }
        if (ctx->pc != 0x2EE0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyMatrix_0x107180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE0CCu; }
        if (ctx->pc != 0x2EE0CCu) { return; }
    }
    ctx->pc = 0x2EE0CCu;
label_2ee0cc:
    // 0x2ee0cc: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x2ee0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2ee0d0: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x2ee0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2ee0d4: 0x24630170  addiu       $v1, $v1, 0x170
    ctx->pc = 0x2ee0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x2ee0d8: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x2ee0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2ee0dc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2ee0dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee0e0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2ee0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2ee0e4: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x2EE0E4u;
    SET_GPR_U32(ctx, 31, 0x2EE0ECu);
    ctx->pc = 0x2EE0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE0E4u;
            // 0x2ee0e8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE0ECu; }
        if (ctx->pc != 0x2EE0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE0ECu; }
        if (ctx->pc != 0x2EE0ECu) { return; }
    }
    ctx->pc = 0x2EE0ECu;
label_2ee0ec:
    // 0x2ee0ec: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2ee0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2ee0f0: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x2ee0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x2ee0f4: 0xc04c094  jal         func_130250
    ctx->pc = 0x2EE0F4u;
    SET_GPR_U32(ctx, 31, 0x2EE0FCu);
    ctx->pc = 0x2EE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE0F4u;
            // 0x2ee0f8: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE0FCu; }
        if (ctx->pc != 0x2EE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE0FCu; }
        if (ctx->pc != 0x2EE0FCu) { return; }
    }
    ctx->pc = 0x2EE0FCu;
label_2ee0fc:
    // 0x2ee0fc: 0x86640004  lh          $a0, 0x4($s3)
    ctx->pc = 0x2ee0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2ee100: 0x26850200  addiu       $a1, $s4, 0x200
    ctx->pc = 0x2ee100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x2ee104: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x2ee104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
    // 0x2ee108: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x2ee108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2ee10c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee110: 0x26770004  addiu       $s7, $s3, 0x4
    ctx->pc = 0x2ee110u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2ee114: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ee114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ee118: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ee118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee11c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2ee11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2ee120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee124: 0xc068dc8  jal         func_1A3720
    ctx->pc = 0x2EE124u;
    SET_GPR_U32(ctx, 31, 0x2EE12Cu);
    ctx->pc = 0x2EE128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE124u;
            // 0x2ee128: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (runtime->hasFunction(0x1A3720u)) {
        auto targetFn = runtime->lookupFunction(0x1A3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE12Cu; }
        if (ctx->pc != 0x2EE12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE12Cu; }
        if (ctx->pc != 0x2EE12Cu) { return; }
    }
    ctx->pc = 0x2EE12Cu;
label_2ee12c:
    // 0x2ee12c: 0x86e40000  lh          $a0, 0x0($s7)
    ctx->pc = 0x2ee12cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2ee130: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2ee130u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x2ee134: 0x8ea20fcc  lw          $v0, 0xFCC($s5)
    ctx->pc = 0x2ee134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4044)));
    // 0x2ee138: 0x268500c0  addiu       $a1, $s4, 0xC0
    ctx->pc = 0x2ee138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x2ee13c: 0x27a60230  addiu       $a2, $sp, 0x230
    ctx->pc = 0x2ee13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2ee140: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ee140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee144: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ee144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ee148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ee148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ee14c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2ee14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2ee150: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ee150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee154: 0xc068dc8  jal         func_1A3720
    ctx->pc = 0x2EE154u;
    SET_GPR_U32(ctx, 31, 0x2EE15Cu);
    ctx->pc = 0x2EE158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE154u;
            // 0x2ee158: 0x24440110  addiu       $a0, $v0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3720u;
    if (runtime->hasFunction(0x1A3720u)) {
        auto targetFn = runtime->lookupFunction(0x1A3720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE15Cu; }
        if (ctx->pc != 0x2EE15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE15Cu; }
        if (ctx->pc != 0x2EE15Cu) { return; }
    }
    ctx->pc = 0x2EE15Cu;
label_2ee15c:
    // 0x2ee15c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2ee15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2ee160: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2ee160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2ee164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ee164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ee168: 0x0  nop
    ctx->pc = 0x2ee168u;
    // NOP
    // 0x2ee16c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ee16cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee170: 0x0  nop
    ctx->pc = 0x2ee170u;
    // NOP
    // 0x2ee174: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE174u;
    {
        const bool branch_taken_0x2ee174 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE174u;
            // 0x2ee178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee174) {
            ctx->pc = 0x2EE184u;
            goto label_2ee184;
        }
    }
    ctx->pc = 0x2EE17Cu;
    // 0x2ee17c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2EE17Cu;
    {
        const bool branch_taken_0x2ee17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE17Cu;
            // 0x2ee180: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee17c) {
            ctx->pc = 0x2EE248u;
            goto label_2ee248;
        }
    }
    ctx->pc = 0x2EE184u;
label_2ee184:
    // 0x2ee184: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ee184u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ee188: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x2ee188u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x2ee18c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2ee18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ee190: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2EE190u;
    {
        const bool branch_taken_0x2ee190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE190u;
            // 0x2ee194: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee190) {
            ctx->pc = 0x2EE0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee0a8;
        }
    }
    ctx->pc = 0x2EE198u;
label_2ee198:
    // 0x2ee198: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ee198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ee19c:
    // 0x2ee19c: 0x0  nop
    ctx->pc = 0x2ee19cu;
    // NOP
    // 0x2ee1a0: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x2ee1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x2ee1a4: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2ee1a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2ee1a8: 0x1020ffa9  beqz        $at, . + 4 + (-0x57 << 2)
    ctx->pc = 0x2EE1A8u;
    {
        const bool branch_taken_0x2ee1a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1a8) {
            ctx->pc = 0x2EE050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee050;
        }
    }
    ctx->pc = 0x2EE1B0u;
    // 0x2ee1b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ee1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ee1b8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2ee1bc:
    // 0x2ee1bc: 0x0  nop
    ctx->pc = 0x2ee1bcu;
    // NOP
    // 0x2ee1c0: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x2ee1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2ee1c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2ee1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ee1c8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2ee1c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee1cc: 0x1020ff9e  beqz        $at, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2EE1CCu;
    {
        const bool branch_taken_0x2ee1cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1cc) {
            ctx->pc = 0x2EE048u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee048;
        }
    }
    ctx->pc = 0x2EE1D4u;
label_2ee1d4:
    // 0x2ee1d4: 0x0  nop
    ctx->pc = 0x2ee1d4u;
    // NOP
    // 0x2ee1d8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2ee1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ee1dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2ee1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ee1e0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2ee1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2ee1e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ee1e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ee1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ee1ec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2ee1f0:
    // 0x2ee1f0: 0x8ea30f50  lw          $v1, 0xF50($s5)
    ctx->pc = 0x2ee1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3920)));
    // 0x2ee1f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2ee1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ee1f8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ee1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ee1fc: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
    ctx->pc = 0x2EE1FCu;
    {
        const bool branch_taken_0x2ee1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE1FCu;
            // 0x2ee200: 0x4615a041  sub.s       $f1, $f20, $f21 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee1fc) {
            ctx->pc = 0x2EE000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee000;
        }
    }
    ctx->pc = 0x2EE204u;
    // 0x2ee204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ee204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee208: 0x0  nop
    ctx->pc = 0x2ee208u;
    // NOP
    // 0x2ee20c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ee20cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee210: 0x0  nop
    ctx->pc = 0x2ee210u;
    // NOP
    // 0x2ee214: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE214u;
    {
        const bool branch_taken_0x2ee214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ee214) {
            ctx->pc = 0x2EE220u;
            goto label_2ee220;
        }
    }
    ctx->pc = 0x2EE21Cu;
    // 0x2ee21c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2ee21cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2ee220:
    // 0x2ee220: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2ee220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2ee224: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2ee224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2ee228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ee228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ee22c: 0x0  nop
    ctx->pc = 0x2ee22cu;
    // NOP
    // 0x2ee230: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ee230u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ee234: 0x0  nop
    ctx->pc = 0x2ee234u;
    // NOP
    // 0x2ee238: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EE238u;
    {
        const bool branch_taken_0x2ee238 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EE23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE238u;
            // 0x2ee23c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee238) {
            ctx->pc = 0x2EE244u;
            goto label_2ee244;
        }
    }
    ctx->pc = 0x2EE240u;
    // 0x2ee240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ee244:
    // 0x2ee244: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ee244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2ee248:
    // 0x2ee248: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ee248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ee24c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2ee24cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ee250: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ee250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ee254: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2ee254u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ee258: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2ee258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ee25c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ee25cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ee260: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ee260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ee264: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ee264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ee268: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ee268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ee26c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ee26cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ee270: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ee270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee274: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE274u;
            // 0x2ee278: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE27Cu;
}
