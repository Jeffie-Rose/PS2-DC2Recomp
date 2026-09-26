#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsCharaAttach__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x259020 - 0x2590f0
void scsCharaAttach__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x259020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsCharaAttach__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x259020");
#endif

    switch (ctx->pc) {
        case 0x259020u: goto label_259020;
        case 0x259024u: goto label_259024;
        case 0x259028u: goto label_259028;
        case 0x25902cu: goto label_25902c;
        case 0x259030u: goto label_259030;
        case 0x259034u: goto label_259034;
        case 0x259038u: goto label_259038;
        case 0x25903cu: goto label_25903c;
        case 0x259040u: goto label_259040;
        case 0x259044u: goto label_259044;
        case 0x259048u: goto label_259048;
        case 0x25904cu: goto label_25904c;
        case 0x259050u: goto label_259050;
        case 0x259054u: goto label_259054;
        case 0x259058u: goto label_259058;
        case 0x25905cu: goto label_25905c;
        case 0x259060u: goto label_259060;
        case 0x259064u: goto label_259064;
        case 0x259068u: goto label_259068;
        case 0x25906cu: goto label_25906c;
        case 0x259070u: goto label_259070;
        case 0x259074u: goto label_259074;
        case 0x259078u: goto label_259078;
        case 0x25907cu: goto label_25907c;
        case 0x259080u: goto label_259080;
        case 0x259084u: goto label_259084;
        case 0x259088u: goto label_259088;
        case 0x25908cu: goto label_25908c;
        case 0x259090u: goto label_259090;
        case 0x259094u: goto label_259094;
        case 0x259098u: goto label_259098;
        case 0x25909cu: goto label_25909c;
        case 0x2590a0u: goto label_2590a0;
        case 0x2590a4u: goto label_2590a4;
        case 0x2590a8u: goto label_2590a8;
        case 0x2590acu: goto label_2590ac;
        case 0x2590b0u: goto label_2590b0;
        case 0x2590b4u: goto label_2590b4;
        case 0x2590b8u: goto label_2590b8;
        case 0x2590bcu: goto label_2590bc;
        case 0x2590c0u: goto label_2590c0;
        case 0x2590c4u: goto label_2590c4;
        case 0x2590c8u: goto label_2590c8;
        case 0x2590ccu: goto label_2590cc;
        case 0x2590d0u: goto label_2590d0;
        case 0x2590d4u: goto label_2590d4;
        case 0x2590d8u: goto label_2590d8;
        case 0x2590dcu: goto label_2590dc;
        case 0x2590e0u: goto label_2590e0;
        case 0x2590e4u: goto label_2590e4;
        case 0x2590e8u: goto label_2590e8;
        case 0x2590ecu: goto label_2590ec;
        default: break;
    }

    ctx->pc = 0x259020u;

label_259020:
    // 0x259020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x259020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_259024:
    // 0x259024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_259028:
    // 0x259028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25902c:
    // 0x25902c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25902cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_259030:
    // 0x259030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x259030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_259034:
    // 0x259034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_259038:
    // 0x259038: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x259038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_25903c:
    // 0x25903c: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
label_259040:
    if (ctx->pc == 0x259040u) {
        ctx->pc = 0x259040u;
            // 0x259040: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259044u;
        goto label_259044;
    }
    ctx->pc = 0x25903Cu;
    {
        const bool branch_taken_0x25903c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x259040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25903Cu;
            // 0x259040: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25903c) {
            ctx->pc = 0x259060u;
            goto label_259060;
        }
    }
    ctx->pc = 0x259044u;
label_259044:
    // 0x259044: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x259044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_259048:
    // 0x259048: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x259048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25904c:
    // 0x25904c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_259050:
    if (ctx->pc == 0x259050u) {
        ctx->pc = 0x259054u;
        goto label_259054;
    }
    ctx->pc = 0x25904Cu;
    {
        const bool branch_taken_0x25904c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25904c) {
            ctx->pc = 0x259060u;
            goto label_259060;
        }
    }
    ctx->pc = 0x259054u;
label_259054:
    // 0x259054: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x259054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_259058:
    // 0x259058: 0x1000001f  b           . + 4 + (0x1F << 2)
label_25905c:
    if (ctx->pc == 0x25905Cu) {
        ctx->pc = 0x25905Cu;
            // 0x25905c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259060u;
        goto label_259060;
    }
    ctx->pc = 0x259058u;
    {
        const bool branch_taken_0x259058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25905Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259058u;
            // 0x25905c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259058) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x259060u;
label_259060:
    // 0x259060: 0xc0956d4  jal         func_255B50
label_259064:
    if (ctx->pc == 0x259064u) {
        ctx->pc = 0x259064u;
            // 0x259064: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x259068u;
        goto label_259068;
    }
    ctx->pc = 0x259060u;
    SET_GPR_U32(ctx, 31, 0x259068u);
    ctx->pc = 0x259064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259060u;
            // 0x259064: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259068u; }
        if (ctx->pc != 0x259068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259068u; }
        if (ctx->pc != 0x259068u) { return; }
    }
    ctx->pc = 0x259068u;
label_259068:
    // 0x259068: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x259068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25906c:
    // 0x25906c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_259070:
    if (ctx->pc == 0x259070u) {
        ctx->pc = 0x259070u;
            // 0x259070: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x259074u;
        goto label_259074;
    }
    ctx->pc = 0x25906Cu;
    {
        const bool branch_taken_0x25906c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x259070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25906Cu;
            // 0x259070: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25906c) {
            ctx->pc = 0x25907Cu;
            goto label_25907c;
        }
    }
    ctx->pc = 0x259074u;
label_259074:
    // 0x259074: 0x10000018  b           . + 4 + (0x18 << 2)
label_259078:
    if (ctx->pc == 0x259078u) {
        ctx->pc = 0x259078u;
            // 0x259078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25907Cu;
        goto label_25907c;
    }
    ctx->pc = 0x259074u;
    {
        const bool branch_taken_0x259074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x259078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x259074u;
            // 0x259078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259074) {
            ctx->pc = 0x2590D8u;
            goto label_2590d8;
        }
    }
    ctx->pc = 0x25907Cu;
label_25907c:
    // 0x25907c: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x25907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_259080:
    // 0x259080: 0xc041c3e  jal         func_1070F8
label_259084:
    if (ctx->pc == 0x259084u) {
        ctx->pc = 0x259084u;
            // 0x259084: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x259088u;
        goto label_259088;
    }
    ctx->pc = 0x259080u;
    SET_GPR_U32(ctx, 31, 0x259088u);
    ctx->pc = 0x259084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x259080u;
            // 0x259084: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259088u; }
        if (ctx->pc != 0x259088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259088u; }
        if (ctx->pc != 0x259088u) { return; }
    }
    ctx->pc = 0x259088u;
label_259088:
    // 0x259088: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x259088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_25908c:
    // 0x25908c: 0xc041be0  jal         func_106F80
label_259090:
    if (ctx->pc == 0x259090u) {
        ctx->pc = 0x259090u;
            // 0x259090: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x259094u;
        goto label_259094;
    }
    ctx->pc = 0x25908Cu;
    SET_GPR_U32(ctx, 31, 0x259094u);
    ctx->pc = 0x259090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25908Cu;
            // 0x259090: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259094u; }
        if (ctx->pc != 0x259094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x259094u; }
        if (ctx->pc != 0x259094u) { return; }
    }
    ctx->pc = 0x259094u;
label_259094:
    // 0x259094: 0xc64c0034  lwc1        $f12, 0x34($s2)
    ctx->pc = 0x259094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_259098:
    // 0x259098: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x259098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_25909c:
    // 0x25909c: 0xc041c4a  jal         func_107128
label_2590a0:
    if (ctx->pc == 0x2590A0u) {
        ctx->pc = 0x2590A0u;
            // 0x2590a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2590A4u;
        goto label_2590a4;
    }
    ctx->pc = 0x25909Cu;
    SET_GPR_U32(ctx, 31, 0x2590A4u);
    ctx->pc = 0x2590A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25909Cu;
            // 0x2590a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590A4u; }
        if (ctx->pc != 0x2590A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590A4u; }
        if (ctx->pc != 0x2590A4u) { return; }
    }
    ctx->pc = 0x2590A4u;
label_2590a4:
    // 0x2590a4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2590a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2590a8:
    // 0x2590a8: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x2590a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2590ac:
    // 0x2590ac: 0xc041c38  jal         func_1070E0
label_2590b0:
    if (ctx->pc == 0x2590B0u) {
        ctx->pc = 0x2590B0u;
            // 0x2590b0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2590B4u;
        goto label_2590b4;
    }
    ctx->pc = 0x2590ACu;
    SET_GPR_U32(ctx, 31, 0x2590B4u);
    ctx->pc = 0x2590B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2590ACu;
            // 0x2590b0: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590B4u; }
        if (ctx->pc != 0x2590B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2590B4u; }
        if (ctx->pc != 0x2590B4u) { return; }
    }
    ctx->pc = 0x2590B4u;
label_2590b4:
    // 0x2590b4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2590b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2590b8:
    // 0x2590b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2590b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2590bc:
    // 0x2590bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2590bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2590c0:
    // 0x2590c0: 0x320f809  jalr        $t9
label_2590c4:
    if (ctx->pc == 0x2590C4u) {
        ctx->pc = 0x2590C4u;
            // 0x2590c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2590C8u;
        goto label_2590c8;
    }
    ctx->pc = 0x2590C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2590C8u);
        ctx->pc = 0x2590C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2590C0u;
            // 0x2590c4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2590C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2590C8u; }
            if (ctx->pc != 0x2590C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2590C8u;
label_2590c8:
    // 0x2590c8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2590c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2590cc:
    // 0x2590cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2590ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2590d0:
    // 0x2590d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2590d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2590d4:
    // 0x2590d4: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2590d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_2590d8:
    // 0x2590d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2590d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2590dc:
    // 0x2590dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2590dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2590e0:
    // 0x2590e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2590e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2590e4:
    // 0x2590e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2590e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2590e8:
    // 0x2590e8: 0x3e00008  jr          $ra
label_2590ec:
    if (ctx->pc == 0x2590ECu) {
        ctx->pc = 0x2590ECu;
            // 0x2590ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2590F0u;
        goto label_fallthrough_0x2590e8;
    }
    ctx->pc = 0x2590E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2590ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2590E8u;
            // 0x2590ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2590e8:
    ctx->pc = 0x2590F0u;
}
