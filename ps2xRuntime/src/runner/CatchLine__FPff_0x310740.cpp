#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CatchLine__FPff
// Address: 0x310740 - 0x310884
void CatchLine__FPff_0x310740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CatchLine__FPff_0x310740");
#endif

    switch (ctx->pc) {
        case 0x310760u: goto label_310760;
        case 0x310778u: goto label_310778;
        case 0x310780u: goto label_310780;
        case 0x3107bcu: goto label_3107bc;
        case 0x3107dcu: goto label_3107dc;
        case 0x3107f0u: goto label_3107f0;
        case 0x310800u: goto label_310800;
        case 0x310814u: goto label_310814;
        case 0x310844u: goto label_310844;
        case 0x310868u: goto label_310868;
        default: break;
    }

    ctx->pc = 0x310740u;

    // 0x310740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x310740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x310744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x310744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x310748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x310748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31074c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x310750: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x310750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310754: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x310754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310758: 0xc0c3e7c  jal         func_30F9F0
    ctx->pc = 0x310758u;
    SET_GPR_U32(ctx, 31, 0x310760u);
    ctx->pc = 0x31075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310758u;
            // 0x31075c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9F0u;
    if (runtime->hasFunction(0x30F9F0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310760u; }
        if (ctx->pc != 0x310760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveHariObj__Fv_0x30f9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310760u; }
        if (ctx->pc != 0x310760u) { return; }
    }
    ctx->pc = 0x310760u;
label_310760:
    // 0x310760: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x310760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
    // 0x310764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310768: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x310768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31076c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31076cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310770: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x310770u;
    SET_GPR_U32(ctx, 31, 0x310778u);
    ctx->pc = 0x310774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310770u;
            // 0x310774: 0x24c6ec70  addiu       $a2, $a2, -0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310778u; }
        if (ctx->pc != 0x310778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310778u; }
        if (ctx->pc != 0x310778u) { return; }
    }
    ctx->pc = 0x310778u;
label_310778:
    // 0x310778: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x310778u;
    SET_GPR_U32(ctx, 31, 0x310780u);
    ctx->pc = 0x31077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310778u;
            // 0x31077c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310780u; }
        if (ctx->pc != 0x310780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310780u; }
        if (ctx->pc != 0x310780u) { return; }
    }
    ctx->pc = 0x310780u;
label_310780:
    // 0x310780: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x310780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310784: 0x0  nop
    ctx->pc = 0x310784u;
    // NOP
    // 0x310788: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x310788u;
    {
        const bool branch_taken_0x310788 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31078Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310788u;
            // 0x31078c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310788) {
            ctx->pc = 0x3107E8u;
            goto label_3107e8;
        }
    }
    ctx->pc = 0x310790u;
    // 0x310790: 0x7a250000  lq          $a1, 0x0($s1)
    ctx->pc = 0x310790u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x310794: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x310794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x310798: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x310798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x31079c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x3107a0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3107a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x3107a4: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x3107a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x3107a8: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x3107a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x3107ac: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3107acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3107b0: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3107b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3107b4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x3107B4u;
    SET_GPR_U32(ctx, 31, 0x3107BCu);
    ctx->pc = 0x3107B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3107B4u;
            // 0x3107b8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3107BCu; }
        if (ctx->pc != 0x3107BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3107BCu; }
        if (ctx->pc != 0x3107BCu) { return; }
    }
    ctx->pc = 0x3107BCu;
label_3107bc:
    // 0x3107bc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3107BCu;
    {
        const bool branch_taken_0x3107bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3107BCu;
            // 0x3107c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107bc) {
            ctx->pc = 0x3107E0u;
            goto label_3107e0;
        }
    }
    ctx->pc = 0x3107C4u;
    // 0x3107c4: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3107c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3107c8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3107c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3107cc: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3107ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x3107d0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x3107d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3107d4: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x3107D4u;
    SET_GPR_U32(ctx, 31, 0x3107DCu);
    ctx->pc = 0x3107D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3107D4u;
            // 0x3107d8: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3107DCu; }
        if (ctx->pc != 0x3107DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3107DCu; }
        if (ctx->pc != 0x3107DCu) { return; }
    }
    ctx->pc = 0x3107DCu;
label_3107dc:
    // 0x3107dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3107dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3107e0:
    // 0x3107e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3107E0u;
    {
        const bool branch_taken_0x3107e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3107E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3107E0u;
            // 0x3107e4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3107e0) {
            ctx->pc = 0x310870u;
            goto label_310870;
        }
    }
    ctx->pc = 0x3107E8u;
label_3107e8:
    // 0x3107e8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x3107E8u;
    SET_GPR_U32(ctx, 31, 0x3107F0u);
    ctx->pc = 0x3107ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3107E8u;
            // 0x3107ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3107F0u; }
        if (ctx->pc != 0x3107F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3107F0u; }
        if (ctx->pc != 0x3107F0u) { return; }
    }
    ctx->pc = 0x3107F0u;
label_3107f0:
    // 0x3107f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3107f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3107f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3107f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3107f8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x3107F8u;
    SET_GPR_U32(ctx, 31, 0x310800u);
    ctx->pc = 0x3107FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3107F8u;
            // 0x3107fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310800u; }
        if (ctx->pc != 0x310800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310800u; }
        if (ctx->pc != 0x310800u) { return; }
    }
    ctx->pc = 0x310800u;
label_310800:
    // 0x310800: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x310800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x310804: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x310804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x310808: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x310808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    // 0x31080c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x31080Cu;
    SET_GPR_U32(ctx, 31, 0x310814u);
    ctx->pc = 0x310810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31080Cu;
            // 0x310810: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310814u; }
        if (ctx->pc != 0x310814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310814u; }
        if (ctx->pc != 0x310814u) { return; }
    }
    ctx->pc = 0x310814u;
label_310814:
    // 0x310814: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x310814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x310818: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x310818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x31081c: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x31081cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310820: 0x2463ec70  addiu       $v1, $v1, -0x1390
    ctx->pc = 0x310820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962288));
    // 0x310824: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x310824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x310828: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x310828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x31082c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x31082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x310830: 0x2484ec90  addiu       $a0, $a0, -0x1370
    ctx->pc = 0x310830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962320));
    // 0x310834: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x310834u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x310838: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x310838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31083c: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x31083Cu;
    SET_GPR_U32(ctx, 31, 0x310844u);
    ctx->pc = 0x310840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31083Cu;
            // 0x310840: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310844u; }
        if (ctx->pc != 0x310844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310844u; }
        if (ctx->pc != 0x310844u) { return; }
    }
    ctx->pc = 0x310844u;
label_310844:
    // 0x310844: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x310844u;
    {
        const bool branch_taken_0x310844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x310844u;
            // 0x310848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310844) {
            ctx->pc = 0x31086Cu;
            goto label_31086c;
        }
    }
    ctx->pc = 0x31084Cu;
    // 0x31084c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x31084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x310850: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x310850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x310854: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x310854u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310858: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x310858u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x31085c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x31085cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310860: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x310860u;
    SET_GPR_U32(ctx, 31, 0x310868u);
    ctx->pc = 0x310864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x310860u;
            // 0x310864: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310868u; }
        if (ctx->pc != 0x310868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x310868u; }
        if (ctx->pc != 0x310868u) { return; }
    }
    ctx->pc = 0x310868u;
label_310868:
    // 0x310868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x310868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31086c:
    // 0x31086c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_310870:
    // 0x310870: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x310870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x310874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x310878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31087c: 0x3e00008  jr          $ra
    ctx->pc = 0x31087Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31087Cu;
            // 0x310880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x310884u;
}
