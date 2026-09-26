#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Setup__10CCameraPasFv
// Address: 0x256790 - 0x256a28
void Setup__10CCameraPasFv_0x256790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Setup__10CCameraPasFv_0x256790");
#endif

    switch (ctx->pc) {
        case 0x2567d4u: goto label_2567d4;
        case 0x2567e4u: goto label_2567e4;
        case 0x256820u: goto label_256820;
        case 0x256870u: goto label_256870;
        case 0x256874u: goto label_256874;
        case 0x256880u: goto label_256880;
        case 0x256888u: goto label_256888;
        case 0x256898u: goto label_256898;
        case 0x2568a4u: goto label_2568a4;
        case 0x2568dcu: goto label_2568dc;
        case 0x2568f0u: goto label_2568f0;
        case 0x256908u: goto label_256908;
        case 0x256948u: goto label_256948;
        case 0x256998u: goto label_256998;
        case 0x25699cu: goto label_25699c;
        case 0x2569a8u: goto label_2569a8;
        case 0x2569b0u: goto label_2569b0;
        case 0x2569c0u: goto label_2569c0;
        case 0x2569ccu: goto label_2569cc;
        case 0x256a04u: goto label_256a04;
        default: break;
    }

    ctx->pc = 0x256790u;

    // 0x256790: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x256790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x256794: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x256798: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x256798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x25679c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25679cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2567a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2567a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2567a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2567a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2567a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2567a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2567ac: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x2567acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x2567b0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2567B0u;
    {
        const bool branch_taken_0x2567b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2567B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2567B0u;
            // 0x2567b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567b0) {
            ctx->pc = 0x2567C0u;
            goto label_2567c0;
        }
    }
    ctx->pc = 0x2567B8u;
    // 0x2567b8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2567B8u;
    {
        const bool branch_taken_0x2567b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2567B8u;
            // 0x2567bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567b8) {
            ctx->pc = 0x256A08u;
            goto label_256a08;
        }
    }
    ctx->pc = 0x2567C0u;
label_2567c0:
    // 0x2567c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2567c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2567c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2567c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2567c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2567cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2567CCu;
    {
        const bool branch_taken_0x2567cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2567D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2567CCu;
            // 0x2567d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2567cc) {
            ctx->pc = 0x256800u;
            goto label_256800;
        }
    }
    ctx->pc = 0x2567D4u;
label_2567d4:
    // 0x2567d4: 0x2122021  addu        $a0, $s0, $s2
    ctx->pc = 0x2567d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2567d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2567d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2567dc: 0xc04c018  jal         func_130060
    ctx->pc = 0x2567DCu;
    SET_GPR_U32(ctx, 31, 0x2567E4u);
    ctx->pc = 0x2567E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2567DCu;
            // 0x2567e0: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2567E4u; }
        if (ctx->pc != 0x2567E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2567E4u; }
        if (ctx->pc != 0x2567E4u) { return; }
    }
    ctx->pc = 0x2567E4u;
label_2567e4:
    // 0x2567e4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2567e4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2567e8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2567e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2567ec: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2567ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2567f0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2567f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2567f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2567f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2567f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2567f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2567fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2567fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_256800:
    // 0x256800: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x256800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x256804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x256804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256808: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x256808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25680c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x25680Cu;
    {
        const bool branch_taken_0x25680c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25680Cu;
            // 0x256810: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25680c) {
            ctx->pc = 0x2567D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2567d4;
        }
    }
    ctx->pc = 0x256814u;
    // 0x256814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x256814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256818: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x256818u;
    {
        const bool branch_taken_0x256818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25681Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256818u;
            // 0x25681c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256818) {
            ctx->pc = 0x256844u;
            goto label_256844;
        }
    }
    ctx->pc = 0x256820u;
label_256820:
    // 0x256820: 0x8e020204  lw          $v0, 0x204($s0)
    ctx->pc = 0x256820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x256824: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x256824u;
    {
        const bool branch_taken_0x256824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256824u;
            // 0x256828: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x256824) {
            ctx->pc = 0x256830u;
            goto label_256830;
        }
    }
    ctx->pc = 0x25682Cu;
    // 0x25682c: 0x1cd  break       0, 7
    ctx->pc = 0x25682cu;
    runtime->handleBreak(rdram, ctx);
label_256830:
    // 0x256830: 0x1812  mflo        $v1
    ctx->pc = 0x256830u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x256834: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x256834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x256838: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x256838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x25683c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25683cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x256840: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x256840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_256844:
    // 0x256844: 0x0  nop
    ctx->pc = 0x256844u;
    // NOP
    // 0x256848: 0x8e070200  lw          $a3, 0x200($s0)
    ctx->pc = 0x256848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x25684c: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x25684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x256850: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x256850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x256854: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x256854u;
    {
        const bool branch_taken_0x256854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256854) {
            ctx->pc = 0x256820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256820;
        }
    }
    ctx->pc = 0x25685Cu;
    // 0x25685c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25685cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256860: 0x26040208  addiu       $a0, $s0, 0x208
    ctx->pc = 0x256860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x256864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256868: 0xc095710  jal         func_255C40
    ctx->pc = 0x256868u;
    SET_GPR_U32(ctx, 31, 0x256870u);
    ctx->pc = 0x25686Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256868u;
            // 0x25686c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255C40u;
    if (runtime->hasFunction(0x255C40u)) {
        auto targetFn = runtime->lookupFunction(0x255C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256870u; }
        if (ctx->pc != 0x256870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256870u; }
        if (ctx->pc != 0x256870u) { return; }
    }
    ctx->pc = 0x256870u;
label_256870:
    // 0x256870: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x256870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_256874:
    // 0x256874: 0x26040208  addiu       $a0, $s0, 0x208
    ctx->pc = 0x256874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x256878: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256878u;
    SET_GPR_U32(ctx, 31, 0x256880u);
    ctx->pc = 0x25687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256878u;
            // 0x25687c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256880u; }
        if (ctx->pc != 0x256880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256880u; }
        if (ctx->pc != 0x256880u) { return; }
    }
    ctx->pc = 0x256880u;
label_256880:
    // 0x256880: 0xc095860  jal         func_256180
    ctx->pc = 0x256880u;
    SET_GPR_U32(ctx, 31, 0x256888u);
    ctx->pc = 0x256884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256880u;
            // 0x256884: 0x26040208  addiu       $a0, $s0, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256180u;
    if (runtime->hasFunction(0x256180u)) {
        auto targetFn = runtime->lookupFunction(0x256180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256888u; }
        if (ctx->pc != 0x256888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9C3DSplineFv_0x256180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256888u; }
        if (ctx->pc != 0x256888u) { return; }
    }
    ctx->pc = 0x256888u;
label_256888:
    // 0x256888: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256888u;
    {
        const bool branch_taken_0x256888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256888u;
            // 0x25688c: 0x26040208  addiu       $a0, $s0, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256888) {
            ctx->pc = 0x2568ACu;
            goto label_2568ac;
        }
    }
    ctx->pc = 0x256890u;
    // 0x256890: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256890u;
    SET_GPR_U32(ctx, 31, 0x256898u);
    ctx->pc = 0x256894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256890u;
            // 0x256894: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256898u; }
        if (ctx->pc != 0x256898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256898u; }
        if (ctx->pc != 0x256898u) { return; }
    }
    ctx->pc = 0x256898u;
label_256898:
    // 0x256898: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x256898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25689c: 0xc04c018  jal         func_130060
    ctx->pc = 0x25689Cu;
    SET_GPR_U32(ctx, 31, 0x2568A4u);
    ctx->pc = 0x2568A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25689Cu;
            // 0x2568a0: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2568A4u; }
        if (ctx->pc != 0x2568A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2568A4u; }
        if (ctx->pc != 0x2568A4u) { return; }
    }
    ctx->pc = 0x2568A4u;
label_2568a4:
    // 0x2568a4: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2568A4u;
    {
        const bool branch_taken_0x2568a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2568A4u;
            // 0x2568a8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568a4) {
            ctx->pc = 0x256874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256874;
        }
    }
    ctx->pc = 0x2568ACu;
label_2568ac:
    // 0x2568ac: 0x0  nop
    ctx->pc = 0x2568acu;
    // NOP
    // 0x2568b0: 0x8e070200  lw          $a3, 0x200($s0)
    ctx->pc = 0x2568b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x2568b4: 0xc6000204  lwc1        $f0, 0x204($s0)
    ctx->pc = 0x2568b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2568b8: 0x26040208  addiu       $a0, $s0, 0x208
    ctx->pc = 0x2568b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x2568bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2568bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568c0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2568c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2568c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2568c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2568c8: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x2568c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2568cc: 0x0  nop
    ctx->pc = 0x2568ccu;
    // NOP
    // 0x2568d0: 0x0  nop
    ctx->pc = 0x2568d0u;
    // NOP
    // 0x2568d4: 0xc095710  jal         func_255C40
    ctx->pc = 0x2568D4u;
    SET_GPR_U32(ctx, 31, 0x2568DCu);
    ctx->pc = 0x255C40u;
    if (runtime->hasFunction(0x255C40u)) {
        auto targetFn = runtime->lookupFunction(0x255C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2568DCu; }
        if (ctx->pc != 0x2568DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2568DCu; }
        if (ctx->pc != 0x2568DCu) { return; }
    }
    ctx->pc = 0x2568DCu;
label_2568dc:
    // 0x2568dc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2568dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2568e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2568e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2568e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2568e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2568E8u;
    {
        const bool branch_taken_0x2568e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2568ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2568E8u;
            // 0x2568ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2568e8) {
            ctx->pc = 0x256924u;
            goto label_256924;
        }
    }
    ctx->pc = 0x2568F0u;
label_2568f0:
    // 0x2568f0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2568f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2568f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2568f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2568f8: 0x24640100  addiu       $a0, $v1, 0x100
    ctx->pc = 0x2568f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2568fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2568fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x256900: 0xc04c018  jal         func_130060
    ctx->pc = 0x256900u;
    SET_GPR_U32(ctx, 31, 0x256908u);
    ctx->pc = 0x256904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256900u;
            // 0x256904: 0x24450100  addiu       $a1, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256908u; }
        if (ctx->pc != 0x256908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256908u; }
        if (ctx->pc != 0x256908u) { return; }
    }
    ctx->pc = 0x256908u;
label_256908:
    // 0x256908: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x256908u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x25690c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x25690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x256910: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x256910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x256914: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x256914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x256918: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x256918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x25691c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x25691cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x256920: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x256920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_256924:
    // 0x256924: 0x0  nop
    ctx->pc = 0x256924u;
    // NOP
    // 0x256928: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x256928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x25692c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x256930: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x256930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x256934: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x256934u;
    {
        const bool branch_taken_0x256934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256934u;
            // 0x256938: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256934) {
            ctx->pc = 0x2568F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2568f0;
        }
    }
    ctx->pc = 0x25693Cu;
    // 0x25693c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25693cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256940: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x256940u;
    {
        const bool branch_taken_0x256940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256940u;
            // 0x256944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256940) {
            ctx->pc = 0x25696Cu;
            goto label_25696c;
        }
    }
    ctx->pc = 0x256948u;
label_256948:
    // 0x256948: 0x8e020204  lw          $v0, 0x204($s0)
    ctx->pc = 0x256948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 516)));
    // 0x25694c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25694Cu;
    {
        const bool branch_taken_0x25694c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x256950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25694Cu;
            // 0x256950: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25694c) {
            ctx->pc = 0x256958u;
            goto label_256958;
        }
    }
    ctx->pc = 0x256954u;
    // 0x256954: 0x1cd  break       0, 7
    ctx->pc = 0x256954u;
    runtime->handleBreak(rdram, ctx);
label_256958:
    // 0x256958: 0x1812  mflo        $v1
    ctx->pc = 0x256958u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x25695c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x25695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x256960: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x256960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x256964: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x256964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x256968: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x256968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_25696c:
    // 0x25696c: 0x0  nop
    ctx->pc = 0x25696cu;
    // NOP
    // 0x256970: 0x8e070200  lw          $a3, 0x200($s0)
    ctx->pc = 0x256970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x256974: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x256974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x256978: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x256978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25697c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x25697Cu;
    {
        const bool branch_taken_0x25697c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25697c) {
            ctx->pc = 0x256948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_256948;
        }
    }
    ctx->pc = 0x256984u;
    // 0x256984: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x256984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256988: 0x260405a4  addiu       $a0, $s0, 0x5A4
    ctx->pc = 0x256988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
    // 0x25698c: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x25698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x256990: 0xc095710  jal         func_255C40
    ctx->pc = 0x256990u;
    SET_GPR_U32(ctx, 31, 0x256998u);
    ctx->pc = 0x256994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256990u;
            // 0x256994: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255C40u;
    if (runtime->hasFunction(0x255C40u)) {
        auto targetFn = runtime->lookupFunction(0x255C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256998u; }
        if (ctx->pc != 0x256998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256998u; }
        if (ctx->pc != 0x256998u) { return; }
    }
    ctx->pc = 0x256998u;
label_256998:
    // 0x256998: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x256998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25699c:
    // 0x25699c: 0x260405a4  addiu       $a0, $s0, 0x5A4
    ctx->pc = 0x25699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
    // 0x2569a0: 0xc0958d4  jal         func_256350
    ctx->pc = 0x2569A0u;
    SET_GPR_U32(ctx, 31, 0x2569A8u);
    ctx->pc = 0x2569A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2569A0u;
            // 0x2569a4: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569A8u; }
        if (ctx->pc != 0x2569A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569A8u; }
        if (ctx->pc != 0x2569A8u) { return; }
    }
    ctx->pc = 0x2569A8u;
label_2569a8:
    // 0x2569a8: 0xc095860  jal         func_256180
    ctx->pc = 0x2569A8u;
    SET_GPR_U32(ctx, 31, 0x2569B0u);
    ctx->pc = 0x2569ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2569A8u;
            // 0x2569ac: 0x260405a4  addiu       $a0, $s0, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256180u;
    if (runtime->hasFunction(0x256180u)) {
        auto targetFn = runtime->lookupFunction(0x256180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569B0u; }
        if (ctx->pc != 0x2569B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9C3DSplineFv_0x256180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569B0u; }
        if (ctx->pc != 0x2569B0u) { return; }
    }
    ctx->pc = 0x2569B0u;
label_2569b0:
    // 0x2569b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2569B0u;
    {
        const bool branch_taken_0x2569b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2569B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2569B0u;
            // 0x2569b4: 0x260405a4  addiu       $a0, $s0, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569b0) {
            ctx->pc = 0x2569D4u;
            goto label_2569d4;
        }
    }
    ctx->pc = 0x2569B8u;
    // 0x2569b8: 0xc0958d4  jal         func_256350
    ctx->pc = 0x2569B8u;
    SET_GPR_U32(ctx, 31, 0x2569C0u);
    ctx->pc = 0x2569BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2569B8u;
            // 0x2569bc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569C0u; }
        if (ctx->pc != 0x2569C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569C0u; }
        if (ctx->pc != 0x2569C0u) { return; }
    }
    ctx->pc = 0x2569C0u;
label_2569c0:
    // 0x2569c0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2569c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2569c4: 0xc04c018  jal         func_130060
    ctx->pc = 0x2569C4u;
    SET_GPR_U32(ctx, 31, 0x2569CCu);
    ctx->pc = 0x2569C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2569C4u;
            // 0x2569c8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569CCu; }
        if (ctx->pc != 0x2569CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2569CCu; }
        if (ctx->pc != 0x2569CCu) { return; }
    }
    ctx->pc = 0x2569CCu;
label_2569cc:
    // 0x2569cc: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x2569CCu;
    {
        const bool branch_taken_0x2569cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2569D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2569CCu;
            // 0x2569d0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2569cc) {
            ctx->pc = 0x25699Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25699c;
        }
    }
    ctx->pc = 0x2569D4u;
label_2569d4:
    // 0x2569d4: 0x0  nop
    ctx->pc = 0x2569d4u;
    // NOP
    // 0x2569d8: 0x8e070200  lw          $a3, 0x200($s0)
    ctx->pc = 0x2569d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x2569dc: 0xc6000204  lwc1        $f0, 0x204($s0)
    ctx->pc = 0x2569dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2569e0: 0x260405a4  addiu       $a0, $s0, 0x5A4
    ctx->pc = 0x2569e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1444));
    // 0x2569e4: 0x26050100  addiu       $a1, $s0, 0x100
    ctx->pc = 0x2569e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2569e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2569e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2569ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2569ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2569f0: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x2569f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2569f4: 0x0  nop
    ctx->pc = 0x2569f4u;
    // NOP
    // 0x2569f8: 0x0  nop
    ctx->pc = 0x2569f8u;
    // NOP
    // 0x2569fc: 0xc095710  jal         func_255C40
    ctx->pc = 0x2569FCu;
    SET_GPR_U32(ctx, 31, 0x256A04u);
    ctx->pc = 0x255C40u;
    if (runtime->hasFunction(0x255C40u)) {
        auto targetFn = runtime->lookupFunction(0x255C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256A04u; }
        if (ctx->pc != 0x256A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256A04u; }
        if (ctx->pc != 0x256A04u) { return; }
    }
    ctx->pc = 0x256A04u;
label_256a04:
    // 0x256a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x256a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_256a08:
    // 0x256a08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x256a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256a0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x256a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x256a10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x256a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256a14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x256a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256a18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x256a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x256a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256a20: 0x3e00008  jr          $ra
    ctx->pc = 0x256A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256A20u;
            // 0x256a24: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256A28u;
}
