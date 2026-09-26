#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii
// Address: 0x14ecf0 - 0x14f1f4
void CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0");
#endif

    switch (ctx->pc) {
        case 0x14ed58u: goto label_14ed58;
        case 0x14ed70u: goto label_14ed70;
        case 0x14ed80u: goto label_14ed80;
        case 0x14ed8cu: goto label_14ed8c;
        case 0x14edfcu: goto label_14edfc;
        case 0x14ee24u: goto label_14ee24;
        case 0x14eeccu: goto label_14eecc;
        case 0x14eee8u: goto label_14eee8;
        case 0x14ef00u: goto label_14ef00;
        case 0x14ef0cu: goto label_14ef0c;
        case 0x14efc0u: goto label_14efc0;
        case 0x14f028u: goto label_14f028;
        case 0x14f03cu: goto label_14f03c;
        case 0x14f08cu: goto label_14f08c;
        case 0x14f098u: goto label_14f098;
        case 0x14f0a4u: goto label_14f0a4;
        case 0x14f100u: goto label_14f100;
        case 0x14f114u: goto label_14f114;
        case 0x14f164u: goto label_14f164;
        case 0x14f170u: goto label_14f170;
        case 0x14f17cu: goto label_14f17c;
        default: break;
    }

    ctx->pc = 0x14ecf0u;

    // 0x14ecf0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x14ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x14ecf4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14ecf8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14ecfc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14ecfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14ed00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14ed00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14ed04: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x14ed04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14ed0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14ed0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14ed10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14ed10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14ed14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14ed14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14ed18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ed1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14ed1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ed20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ed24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14ed24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed28: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14ed28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14ed2c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x14ed2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed30: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14ed30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14ed34: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x14ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
    // 0x14ed38: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x14ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
    // 0x14ed3c: 0xafa8010c  sw          $t0, 0x10C($sp)
    ctx->pc = 0x14ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 8));
    // 0x14ed40: 0xafaa0100  sw          $t2, 0x100($sp)
    ctx->pc = 0x14ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 10));
    // 0x14ed44: 0xafab00fc  sw          $t3, 0xFC($sp)
    ctx->pc = 0x14ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 11));
    // 0x14ed48: 0xc4d4000c  lwc1        $f20, 0xC($a2)
    ctx->pc = 0x14ed48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ed4c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x14ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14ed50: 0xc04c018  jal         func_130060
    ctx->pc = 0x14ED50u;
    SET_GPR_U32(ctx, 31, 0x14ED58u);
    ctx->pc = 0x14ED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED50u;
            // 0x14ed54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED58u; }
        if (ctx->pc != 0x14ED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED58u; }
        if (ctx->pc != 0x14ED58u) { return; }
    }
    ctx->pc = 0x14ED58u;
label_14ed58:
    // 0x14ed58: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x14ed58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14ed5c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x14ed5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x14ed60: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x14ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x14ed64: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x14ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x14ed68: 0xc04bd2c  jal         func_12F4B0
    ctx->pc = 0x14ED68u;
    SET_GPR_U32(ctx, 31, 0x14ED70u);
    ctx->pc = 0x14ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED68u;
            // 0x14ed6c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED70u; }
        if (ctx->pc != 0x14ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED70u; }
        if (ctx->pc != 0x14ED70u) { return; }
    }
    ctx->pc = 0x14ED70u;
label_14ed70:
    // 0x14ed70: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x14ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14ed74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14ed74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed78: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x14ED78u;
    SET_GPR_U32(ctx, 31, 0x14ED80u);
    ctx->pc = 0x14ED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED78u;
            // 0x14ed7c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED80u; }
        if (ctx->pc != 0x14ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED80u; }
        if (ctx->pc != 0x14ED80u) { return; }
    }
    ctx->pc = 0x14ED80u;
label_14ed80:
    // 0x14ed80: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x14ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14ed84: 0xc041be0  jal         func_106F80
    ctx->pc = 0x14ED84u;
    SET_GPR_U32(ctx, 31, 0x14ED8Cu);
    ctx->pc = 0x14ED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14ED84u;
            // 0x14ed88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED8Cu; }
        if (ctx->pc != 0x14ED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14ED8Cu; }
        if (ctx->pc != 0x14ED8Cu) { return; }
    }
    ctx->pc = 0x14ED8Cu;
label_14ed8c:
    // 0x14ed8c: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x14ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ed90: 0x27a20154  addiu       $v0, $sp, 0x154
    ctx->pc = 0x14ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x14ed94: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x14ed94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x14ed98: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x14ed98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x14ed9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eda0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x14eda0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x14eda4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14eda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14eda8: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x14eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x14edac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14edacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14edb0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x14edb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x14edb4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14edb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14edb8: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x14edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14edbc: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x14edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
    // 0x14edc0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x14edc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x14edc4: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x14edc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x14edc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14edcc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x14edccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x14edd0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14edd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14edd4: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x14edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x14edd8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eddc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x14eddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x14ede0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14ede0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14ede4: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x14ede8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14ede8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14edec: 0x10200081  beqz        $at, . + 4 + (0x81 << 2)
    ctx->pc = 0x14EDECu;
    {
        const bool branch_taken_0x14edec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EDECu;
            // 0x14edf0: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14edec) {
            ctx->pc = 0x14EFF4u;
            goto label_14eff4;
        }
    }
    ctx->pc = 0x14EDF4u;
    // 0x14edf4: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x14edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x14edf8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x14edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_14edfc:
    // 0x14edfc: 0x86e30046  lh          $v1, 0x46($s7)
    ctx->pc = 0x14edfcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 70)));
    // 0x14ee00: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x14ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x14ee04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14ee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14ee08: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x14EE08u;
    {
        const bool branch_taken_0x14ee08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE08u;
            // 0x14ee0c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee08) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EE10u;
    // 0x14ee10: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x14ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x14ee14: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x14ee14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee18: 0x26e70010  addiu       $a3, $s7, 0x10
    ctx->pc = 0x14ee18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x14ee1c: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x14EE1Cu;
    SET_GPR_U32(ctx, 31, 0x14EE24u);
    ctx->pc = 0x14EE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE1Cu;
            // 0x14ee20: 0x26e80020  addiu       $t0, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE24u; }
        if (ctx->pc != 0x14EE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EE24u; }
        if (ctx->pc != 0x14EE24u) { return; }
    }
    ctx->pc = 0x14EE24u;
label_14ee24:
    // 0x14ee24: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x14ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ee28: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x14ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ee2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ee2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ee30: 0x0  nop
    ctx->pc = 0x14ee30u;
    // NOP
    // 0x14ee34: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x14EE34u;
    {
        const bool branch_taken_0x14ee34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE34u;
            // 0x14ee38: 0x27a20154  addiu       $v0, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee34) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EE3Cu;
    // 0x14ee3c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14ee3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ee40: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x14ee40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ee44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ee44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ee48: 0x0  nop
    ctx->pc = 0x14ee48u;
    // NOP
    // 0x14ee4c: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x14EE4Cu;
    {
        const bool branch_taken_0x14ee4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE4Cu;
            // 0x14ee50: 0x27a20158  addiu       $v0, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee4c) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EE54u;
    // 0x14ee54: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ee58: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x14ee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ee5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ee5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ee60: 0x0  nop
    ctx->pc = 0x14ee60u;
    // NOP
    // 0x14ee64: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
    ctx->pc = 0x14EE64u;
    {
        const bool branch_taken_0x14ee64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ee64) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EE6Cu;
    // 0x14ee6c: 0xc7a10160  lwc1        $f1, 0x160($sp)
    ctx->pc = 0x14ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ee70: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x14ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ee74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ee74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ee78: 0x0  nop
    ctx->pc = 0x14ee78u;
    // NOP
    // 0x14ee7c: 0x45000057  bc1f        . + 4 + (0x57 << 2)
    ctx->pc = 0x14EE7Cu;
    {
        const bool branch_taken_0x14ee7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE7Cu;
            // 0x14ee80: 0x27a20164  addiu       $v0, $sp, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee7c) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EE84u;
    // 0x14ee84: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ee88: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x14ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ee8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ee8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ee90: 0x0  nop
    ctx->pc = 0x14ee90u;
    // NOP
    // 0x14ee94: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x14EE94u;
    {
        const bool branch_taken_0x14ee94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EE94u;
            // 0x14ee98: 0x27a20168  addiu       $v0, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee94) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EE9Cu;
    // 0x14ee9c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14eea0: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x14eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14eea4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14eea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14eea8: 0x0  nop
    ctx->pc = 0x14eea8u;
    // NOP
    // 0x14eeac: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x14EEACu;
    {
        const bool branch_taken_0x14eeac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14eeac) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EEB4u;
    // 0x14eeb4: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x14eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14eeb8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x14eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14eebc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x14eebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eec0: 0x26e70030  addiu       $a3, $s7, 0x30
    ctx->pc = 0x14eec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x14eec4: 0xc0b7874  jal         func_2DE1D0
    ctx->pc = 0x14EEC4u;
    SET_GPR_U32(ctx, 31, 0x14EECCu);
    ctx->pc = 0x14EEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EEC4u;
            // 0x14eec8: 0x27a80180  addiu       $t0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE1D0u;
    if (runtime->hasFunction(0x2DE1D0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EECCu; }
        if (ctx->pc != 0x14EECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IntersectionPipePoly3__FPfPfPA4_fPfPA4_f_0x2de1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EECCu; }
        if (ctx->pc != 0x14EECCu) { return; }
    }
    ctx->pc = 0x14EECCu;
label_14eecc:
    // 0x14eecc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14eeccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eed0: 0x1ac00042  blez        $s6, . + 4 + (0x42 << 2)
    ctx->pc = 0x14EED0u;
    {
        const bool branch_taken_0x14eed0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x14EED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EED0u;
            // 0x14eed4: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eed0) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EED8u;
    // 0x14eed8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14eed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eedc: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x14EEDCu;
    {
        const bool branch_taken_0x14eedc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EEDCu;
            // 0x14eee0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eedc) {
            ctx->pc = 0x14EF88u;
            goto label_14ef88;
        }
    }
    ctx->pc = 0x14EEE4u;
    // 0x14eee4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14eee4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14eee8:
    // 0x14eee8: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x14eee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x14eeec: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x14eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x14eef0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x14eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x14eef4: 0x24550180  addiu       $s5, $v0, 0x180
    ctx->pc = 0x14eef4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x14eef8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x14EEF8u;
    SET_GPR_U32(ctx, 31, 0x14EF00u);
    ctx->pc = 0x14EEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EEF8u;
            // 0x14eefc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF00u; }
        if (ctx->pc != 0x14EF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF00u; }
        if (ctx->pc != 0x14EF00u) { return; }
    }
    ctx->pc = 0x14EF00u;
label_14ef00:
    // 0x14ef00: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x14ef04: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x14EF04u;
    SET_GPR_U32(ctx, 31, 0x14EF0Cu);
    ctx->pc = 0x14EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF04u;
            // 0x14ef08: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF0Cu; }
        if (ctx->pc != 0x14EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EF0Cu; }
        if (ctx->pc != 0x14EF0Cu) { return; }
    }
    ctx->pc = 0x14EF0Cu;
label_14ef0c:
    // 0x14ef0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14ef0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ef10: 0x26a2000c  addiu       $v0, $s5, 0xC
    ctx->pc = 0x14ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x14ef14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x14ef14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ef18: 0x0  nop
    ctx->pc = 0x14ef18u;
    // NOP
    // 0x14ef1c: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x14EF1Cu;
    {
        const bool branch_taken_0x14ef1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14EF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF1Cu;
            // 0x14ef20: 0xe6a0000c  swc1        $f0, 0xC($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef1c) {
            ctx->pc = 0x14EF74u;
            goto label_14ef74;
        }
    }
    ctx->pc = 0x14EF24u;
    // 0x14ef24: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x14ef24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ef28: 0x0  nop
    ctx->pc = 0x14ef28u;
    // NOP
    // 0x14ef2c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x14EF2Cu;
    {
        const bool branch_taken_0x14ef2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ef2c) {
            ctx->pc = 0x14EF74u;
            goto label_14ef74;
        }
    }
    ctx->pc = 0x14EF34u;
    // 0x14ef34: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x14EF34u;
    {
        const bool branch_taken_0x14ef34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ef34) {
            ctx->pc = 0x14EF50u;
            goto label_14ef50;
        }
    }
    ctx->pc = 0x14EF3Cu;
    // 0x14ef3c: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x14ef3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14ef40: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x14ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14ef44: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x14ef44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ef48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14EF48u;
    {
        const bool branch_taken_0x14ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF48u;
            // 0x14ef4c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef48) {
            ctx->pc = 0x14EF74u;
            goto label_14ef74;
        }
    }
    ctx->pc = 0x14EF50u;
label_14ef50:
    // 0x14ef50: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ef54: 0xc7a0012c  lwc1        $f0, 0x12C($sp)
    ctx->pc = 0x14ef54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ef58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ef58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ef5c: 0x0  nop
    ctx->pc = 0x14ef5cu;
    // NOP
    // 0x14ef60: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14EF60u;
    {
        const bool branch_taken_0x14ef60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ef60) {
            ctx->pc = 0x14EF74u;
            goto label_14ef74;
        }
    }
    ctx->pc = 0x14EF68u;
    // 0x14ef68: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x14ef68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14ef6c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x14ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x14ef70: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x14ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_14ef74:
    // 0x14ef74: 0x0  nop
    ctx->pc = 0x14ef74u;
    // NOP
    // 0x14ef78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14ef78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14ef7c: 0x256102a  slt         $v0, $s2, $s6
    ctx->pc = 0x14ef7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x14ef80: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x14EF80u;
    {
        const bool branch_taken_0x14ef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EF80u;
            // 0x14ef84: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef80) {
            ctx->pc = 0x14EEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14eee8;
        }
    }
    ctx->pc = 0x14EF88u;
label_14ef88:
    // 0x14ef88: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x14EF88u;
    {
        const bool branch_taken_0x14ef88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef88) {
            ctx->pc = 0x14EFDCu;
            goto label_14efdc;
        }
    }
    ctx->pc = 0x14EF90u;
    // 0x14ef90: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x14ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x14ef94: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x14ef94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ef98: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x14EF98u;
    {
        const bool branch_taken_0x14ef98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ef98) {
            ctx->pc = 0x14EFF4u;
            goto label_14eff4;
        }
    }
    ctx->pc = 0x14EFA0u;
    // 0x14efa0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14efa4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x14efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14efa8: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x14efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14efac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x14efacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14efb0: 0xacbe0000  sw          $fp, 0x0($a1)
    ctx->pc = 0x14efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 30));
    // 0x14efb4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x14efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14efb8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14EFB8u;
    SET_GPR_U32(ctx, 31, 0x14EFC0u);
    ctx->pc = 0x14EFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFB8u;
            // 0x14efbc: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EFC0u; }
        if (ctx->pc != 0x14EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EFC0u; }
        if (ctx->pc != 0x14EFC0u) { return; }
    }
    ctx->pc = 0x14EFC0u;
label_14efc0:
    // 0x14efc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x14efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14efc4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14efc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14efc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14efcc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x14efccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x14efd0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x14efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14efd4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14efd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14efd8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x14efd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_14efdc:
    // 0x14efdc: 0x0  nop
    ctx->pc = 0x14efdcu;
    // NOP
    // 0x14efe0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x14efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x14efe4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x14efe4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x14efe8: 0x3c2102a  slt         $v0, $fp, $v0
    ctx->pc = 0x14efe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14efec: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x14EFECu;
    {
        const bool branch_taken_0x14efec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EFECu;
            // 0x14eff0: 0x26f70050  addiu       $s7, $s7, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14efec) {
            ctx->pc = 0x14EDFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14edfc;
        }
    }
    ctx->pc = 0x14EFF4u;
label_14eff4:
    // 0x14eff4: 0x0  nop
    ctx->pc = 0x14eff4u;
    // NOP
    // 0x14eff8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x14eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x14effc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EFFCu;
    {
        const bool branch_taken_0x14effc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14effc) {
            ctx->pc = 0x14F00Cu;
            goto label_14f00c;
        }
    }
    ctx->pc = 0x14F004u;
    // 0x14f004: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x14F004u;
    {
        const bool branch_taken_0x14f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F004u;
            // 0x14f008: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f004) {
            ctx->pc = 0x14F1BCu;
            goto label_14f1bc;
        }
    }
    ctx->pc = 0x14F00Cu;
label_14f00c:
    // 0x14f00c: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14F00Cu;
    {
        const bool branch_taken_0x14f00c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14F010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F00Cu;
            // 0x14f010: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f00c) {
            ctx->pc = 0x14F0E0u;
            goto label_14f0e0;
        }
    }
    ctx->pc = 0x14F014u;
    // 0x14f014: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14f014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f018: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x14F018u;
    {
        const bool branch_taken_0x14f018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F018u;
            // 0x14f01c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f018) {
            ctx->pc = 0x14F0E0u;
            goto label_14f0e0;
        }
    }
    ctx->pc = 0x14F020u;
    // 0x14f020: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x14f020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x14f024: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f028:
    // 0x14f028: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x14f028u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14f02c: 0x2b1082a  slt         $at, $s5, $s1
    ctx->pc = 0x14f02cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f030: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14F030u;
    {
        const bool branch_taken_0x14f030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F030u;
            // 0x14f034: 0x15f100  sll         $fp, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f030) {
            ctx->pc = 0x14F0BCu;
            goto label_14f0bc;
        }
    }
    ctx->pc = 0x14F038u;
    // 0x14f038: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x14f038u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_14f03c:
    // 0x14f03c: 0x0  nop
    ctx->pc = 0x14f03cu;
    // NOP
    // 0x14f040: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x14f040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f044: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x14f044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f048: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x14f048u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f04c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14f04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f050: 0x5eb021  addu        $s6, $v0, $fp
    ctx->pc = 0x14f050u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x14f054: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x14f054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f058: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x14f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f05c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f05cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f060: 0x0  nop
    ctx->pc = 0x14f060u;
    // NOP
    // 0x14f064: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x14F064u;
    {
        const bool branch_taken_0x14f064 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F064u;
            // 0x14f068: 0x2133021  addu        $a2, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f064) {
            ctx->pc = 0x14F0A4u;
            goto label_14f0a4;
        }
    }
    ctx->pc = 0x14F06Cu;
    // 0x14f06c: 0x2123821  addu        $a3, $s0, $s2
    ctx->pc = 0x14f06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14f070: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f074: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x14f074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x14f078: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x14f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14f07c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14f07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f080: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x14f080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x14f084: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F084u;
    SET_GPR_U32(ctx, 31, 0x14F08Cu);
    ctx->pc = 0x14F088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F084u;
            // 0x14f088: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F08Cu; }
        if (ctx->pc != 0x14F08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F08Cu; }
        if (ctx->pc != 0x14F08Cu) { return; }
    }
    ctx->pc = 0x14F08Cu;
label_14f08c:
    // 0x14f08c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f090: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F090u;
    SET_GPR_U32(ctx, 31, 0x14F098u);
    ctx->pc = 0x14F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F090u;
            // 0x14f094: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F098u; }
        if (ctx->pc != 0x14F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F098u; }
        if (ctx->pc != 0x14F098u) { return; }
    }
    ctx->pc = 0x14F098u;
label_14f098:
    // 0x14f098: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14f098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f09c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F09Cu;
    SET_GPR_U32(ctx, 31, 0x14F0A4u);
    ctx->pc = 0x14F0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F09Cu;
            // 0x14f0a0: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0A4u; }
        if (ctx->pc != 0x14F0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F0A4u; }
        if (ctx->pc != 0x14F0A4u) { return; }
    }
    ctx->pc = 0x14F0A4u;
label_14f0a4:
    // 0x14f0a4: 0x0  nop
    ctx->pc = 0x14f0a4u;
    // NOP
    // 0x14f0a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14f0a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f0ac: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x14f0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f0b0: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x14f0b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x14f0b4: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14F0B4u;
    {
        const bool branch_taken_0x14f0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0B4u;
            // 0x14f0b8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0b4) {
            ctx->pc = 0x14F03Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f03c;
        }
    }
    ctx->pc = 0x14F0BCu;
label_14f0bc:
    // 0x14f0bc: 0x0  nop
    ctx->pc = 0x14f0bcu;
    // NOP
    // 0x14f0c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x14f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14f0c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14f0c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14f0c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14f0cc: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x14f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x14f0d0: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14f0d4: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x14f0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f0d8: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14F0D8u;
    {
        const bool branch_taken_0x14f0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0D8u;
            // 0x14f0dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0d8) {
            ctx->pc = 0x14F028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f028;
        }
    }
    ctx->pc = 0x14F0E0u;
label_14f0e0:
    // 0x14f0e0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x14f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x14f0e4: 0x4410034  bgez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14F0E4u;
    {
        const bool branch_taken_0x14f0e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0E4u;
            // 0x14f0e8: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0e4) {
            ctx->pc = 0x14F1B8u;
            goto label_14f1b8;
        }
    }
    ctx->pc = 0x14F0ECu;
    // 0x14f0ec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14f0ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f0f0: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x14F0F0u;
    {
        const bool branch_taken_0x14f0f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F0F0u;
            // 0x14f0f4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f0f0) {
            ctx->pc = 0x14F1B8u;
            goto label_14f1b8;
        }
    }
    ctx->pc = 0x14F0F8u;
    // 0x14f0f8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x14f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x14f0fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f100:
    // 0x14f100: 0x26b60001  addiu       $s6, $s5, 0x1
    ctx->pc = 0x14f100u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f104: 0x2d1082a  slt         $at, $s6, $s1
    ctx->pc = 0x14f104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f108: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x14F108u;
    {
        const bool branch_taken_0x14f108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F108u;
            // 0x14f10c: 0x16f100  sll         $fp, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f108) {
            ctx->pc = 0x14F194u;
            goto label_14f194;
        }
    }
    ctx->pc = 0x14F110u;
    // 0x14f110: 0x169080  sll         $s2, $s6, 2
    ctx->pc = 0x14f110u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_14f114:
    // 0x14f114: 0x0  nop
    ctx->pc = 0x14f114u;
    // NOP
    // 0x14f118: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x14f118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x14f11c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14f120: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x14f120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14f124: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14f124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f128: 0x5ea021  addu        $s4, $v0, $fp
    ctx->pc = 0x14f128u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x14f12c: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x14f12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f130: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x14f130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f134: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f134u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f138: 0x0  nop
    ctx->pc = 0x14f138u;
    // NOP
    // 0x14f13c: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x14F13Cu;
    {
        const bool branch_taken_0x14f13c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F13Cu;
            // 0x14f140: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f13c) {
            ctx->pc = 0x14F17Cu;
            goto label_14f17c;
        }
    }
    ctx->pc = 0x14F144u;
    // 0x14f144: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x14f144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14f148: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x14f148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f14c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x14f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x14f150: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14f150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14f154: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14f154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f158: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14f158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14f15c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F15Cu;
    SET_GPR_U32(ctx, 31, 0x14F164u);
    ctx->pc = 0x14F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F15Cu;
            // 0x14f160: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F164u; }
        if (ctx->pc != 0x14F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F164u; }
        if (ctx->pc != 0x14F164u) { return; }
    }
    ctx->pc = 0x14F164u;
label_14f164:
    // 0x14f164: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14f164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f168: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F168u;
    SET_GPR_U32(ctx, 31, 0x14F170u);
    ctx->pc = 0x14F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F168u;
            // 0x14f16c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F170u; }
        if (ctx->pc != 0x14F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F170u; }
        if (ctx->pc != 0x14F170u) { return; }
    }
    ctx->pc = 0x14F170u;
label_14f170:
    // 0x14f170: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f174: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F174u;
    SET_GPR_U32(ctx, 31, 0x14F17Cu);
    ctx->pc = 0x14F178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F174u;
            // 0x14f178: 0x27a50240  addiu       $a1, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F17Cu; }
        if (ctx->pc != 0x14F17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F17Cu; }
        if (ctx->pc != 0x14F17Cu) { return; }
    }
    ctx->pc = 0x14F17Cu;
label_14f17c:
    // 0x14f17c: 0x0  nop
    ctx->pc = 0x14f17cu;
    // NOP
    // 0x14f180: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x14f180u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x14f184: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x14f184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x14f188: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x14f188u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x14f18c: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x14F18Cu;
    {
        const bool branch_taken_0x14f18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F18Cu;
            // 0x14f190: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f18c) {
            ctx->pc = 0x14F114u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f114;
        }
    }
    ctx->pc = 0x14F194u;
label_14f194:
    // 0x14f194: 0x0  nop
    ctx->pc = 0x14f194u;
    // NOP
    // 0x14f198: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14f19c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14f19cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f1a0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x14f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14f1a4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x14f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x14f1a8: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x14f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x14f1ac: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x14f1acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14f1b0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x14F1B0u;
    {
        const bool branch_taken_0x14f1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1B0u;
            // 0x14f1b4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1b0) {
            ctx->pc = 0x14F100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f100;
        }
    }
    ctx->pc = 0x14F1B8u;
label_14f1b8:
    // 0x14f1b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x14f1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14f1bc:
    // 0x14f1bc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14f1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14f1c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14f1c4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14f1c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14f1c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14f1cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14f1ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14f1d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14f1d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14f1d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14f1d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14f1d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14f1d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f1dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14f1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f1e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14f1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f1e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14f1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f1e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14f1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14F1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F1ECu;
            // 0x14f1f0: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14F1F4u;
}
