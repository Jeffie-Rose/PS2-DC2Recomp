#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgDistLinePoint__FPfPfPfPf
// Address: 0x12f5f0 - 0x12f754
void mgDistLinePoint__FPfPfPfPf_0x12f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgDistLinePoint__FPfPfPfPf_0x12f5f0");
#endif

    switch (ctx->pc) {
        case 0x12f62cu: goto label_12f62c;
        case 0x12f63cu: goto label_12f63c;
        case 0x12f64cu: goto label_12f64c;
        case 0x12f654u: goto label_12f654;
        case 0x12f668u: goto label_12f668;
        case 0x12f6b4u: goto label_12f6b4;
        case 0x12f6c4u: goto label_12f6c4;
        case 0x12f6e4u: goto label_12f6e4;
        case 0x12f6f4u: goto label_12f6f4;
        case 0x12f708u: goto label_12f708;
        case 0x12f718u: goto label_12f718;
        case 0x12f728u: goto label_12f728;
        case 0x12f730u: goto label_12f730;
        default: break;
    }

    ctx->pc = 0x12f5f0u;

    // 0x12f5f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x12f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x12f5f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12f5f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12f5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12f5fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12f600: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12f600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f604: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12f604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12f608: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12f608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f60c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12f610: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12f610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f614: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x12f614u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12f618: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12f618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f61c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12f61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12f620: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12f620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f624: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F624u;
    SET_GPR_U32(ctx, 31, 0x12F62Cu);
    ctx->pc = 0x12F628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F624u;
            // 0x12f628: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F62Cu; }
        if (ctx->pc != 0x12F62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F62Cu; }
        if (ctx->pc != 0x12F62Cu) { return; }
    }
    ctx->pc = 0x12F62Cu;
label_12f62c:
    // 0x12f62c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12f62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12f630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f634: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F634u;
    SET_GPR_U32(ctx, 31, 0x12F63Cu);
    ctx->pc = 0x12F638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F634u;
            // 0x12f638: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F63Cu; }
        if (ctx->pc != 0x12F63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F63Cu; }
        if (ctx->pc != 0x12F63Cu) { return; }
    }
    ctx->pc = 0x12F63Cu;
label_12f63c:
    // 0x12f63c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x12f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12f640: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x12f640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12f644: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F644u;
    SET_GPR_U32(ctx, 31, 0x12F64Cu);
    ctx->pc = 0x12F648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F644u;
            // 0x12f648: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F64Cu; }
        if (ctx->pc != 0x12F64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F64Cu; }
        if (ctx->pc != 0x12F64Cu) { return; }
    }
    ctx->pc = 0x12F64Cu;
label_12f64c:
    // 0x12f64c: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x12F64Cu;
    SET_GPR_U32(ctx, 31, 0x12F654u);
    ctx->pc = 0x12F650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F64Cu;
            // 0x12f650: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F654u; }
        if (ctx->pc != 0x12F654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F654u; }
        if (ctx->pc != 0x12F654u) { return; }
    }
    ctx->pc = 0x12F654u;
label_12f654:
    // 0x12f654: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12f654u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12f658: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12f658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12f65c: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x12f65cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x12f660: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12F660u;
    SET_GPR_U32(ctx, 31, 0x12F668u);
    ctx->pc = 0x12F664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F660u;
            // 0x12f664: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F668u; }
        if (ctx->pc != 0x12F668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F668u; }
        if (ctx->pc != 0x12F668u) { return; }
    }
    ctx->pc = 0x12F668u;
label_12f668:
    // 0x12f668: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12f668u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x12f66c: 0x0  nop
    ctx->pc = 0x12f66cu;
    // NOP
    // 0x12f670: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x12f670u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x12f674: 0x0  nop
    ctx->pc = 0x12f674u;
    // NOP
    // 0x12f678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f67c: 0x0  nop
    ctx->pc = 0x12f67cu;
    // NOP
    // 0x12f680: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x12f680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f684: 0x0  nop
    ctx->pc = 0x12f684u;
    // NOP
    // 0x12f688: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x12F688u;
    {
        const bool branch_taken_0x12f688 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F688u;
            // 0x12f68c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f688) {
            ctx->pc = 0x12F6ACu;
            goto label_12f6ac;
        }
    }
    ctx->pc = 0x12F690u;
    // 0x12f690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12f694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f698: 0x0  nop
    ctx->pc = 0x12f698u;
    // NOP
    // 0x12f69c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x12f69cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f6a0: 0x0  nop
    ctx->pc = 0x12f6a0u;
    // NOP
    // 0x12f6a4: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x12F6A4u;
    {
        const bool branch_taken_0x12f6a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f6a4) {
            ctx->pc = 0x12F6FCu;
            goto label_12f6fc;
        }
    }
    ctx->pc = 0x12F6ACu;
label_12f6ac:
    // 0x12f6ac: 0xc04c018  jal         func_130060
    ctx->pc = 0x12F6ACu;
    SET_GPR_U32(ctx, 31, 0x12F6B4u);
    ctx->pc = 0x12F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6ACu;
            // 0x12f6b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6B4u; }
        if (ctx->pc != 0x12F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6B4u; }
        if (ctx->pc != 0x12F6B4u) { return; }
    }
    ctx->pc = 0x12F6B4u;
label_12f6b4:
    // 0x12f6b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12f6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6bc: 0xc04c018  jal         func_130060
    ctx->pc = 0x12F6BCu;
    SET_GPR_U32(ctx, 31, 0x12F6C4u);
    ctx->pc = 0x12F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6BCu;
            // 0x12f6c0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6C4u; }
        if (ctx->pc != 0x12F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6C4u; }
        if (ctx->pc != 0x12F6C4u) { return; }
    }
    ctx->pc = 0x12F6C4u;
label_12f6c4:
    // 0x12f6c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x12f6c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x12f6c8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x12f6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f6cc: 0x0  nop
    ctx->pc = 0x12f6ccu;
    // NOP
    // 0x12f6d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12F6D0u;
    {
        const bool branch_taken_0x12f6d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6D0u;
            // 0x12f6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6d0) {
            ctx->pc = 0x12F6ECu;
            goto label_12f6ec;
        }
    }
    ctx->pc = 0x12F6D8u;
    // 0x12f6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6dc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x12F6DCu;
    SET_GPR_U32(ctx, 31, 0x12F6E4u);
    ctx->pc = 0x12F6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6DCu;
            // 0x12f6e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6E4u; }
        if (ctx->pc != 0x12F6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6E4u; }
        if (ctx->pc != 0x12F6E4u) { return; }
    }
    ctx->pc = 0x12F6E4u;
label_12f6e4:
    // 0x12f6e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12F6E4u;
    {
        const bool branch_taken_0x12f6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6E4u;
            // 0x12f6e8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6e4) {
            ctx->pc = 0x12F730u;
            goto label_12f730;
        }
    }
    ctx->pc = 0x12F6ECu;
label_12f6ec:
    // 0x12f6ec: 0xc041c5c  jal         func_107170
    ctx->pc = 0x12F6ECu;
    SET_GPR_U32(ctx, 31, 0x12F6F4u);
    ctx->pc = 0x12F6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6ECu;
            // 0x12f6f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6F4u; }
        if (ctx->pc != 0x12F6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F6F4u; }
        if (ctx->pc != 0x12F6F4u) { return; }
    }
    ctx->pc = 0x12F6F4u;
label_12f6f4:
    // 0x12f6f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12F6F4u;
    {
        const bool branch_taken_0x12f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F6F4u;
            // 0x12f6f8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6f4) {
            ctx->pc = 0x12F730u;
            goto label_12f730;
        }
    }
    ctx->pc = 0x12F6FCu;
label_12f6fc:
    // 0x12f6fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12f700: 0xc041c4a  jal         func_107128
    ctx->pc = 0x12F700u;
    SET_GPR_U32(ctx, 31, 0x12F708u);
    ctx->pc = 0x12F704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F700u;
            // 0x12f704: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F708u; }
        if (ctx->pc != 0x12F708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F708u; }
        if (ctx->pc != 0x12F708u) { return; }
    }
    ctx->pc = 0x12F708u;
label_12f708:
    // 0x12f708: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12f708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12f70c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x12f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12f710: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x12F710u;
    SET_GPR_U32(ctx, 31, 0x12F718u);
    ctx->pc = 0x12F714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F710u;
            // 0x12f714: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F718u; }
        if (ctx->pc != 0x12F718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F718u; }
        if (ctx->pc != 0x12F718u) { return; }
    }
    ctx->pc = 0x12F718u;
label_12f718:
    // 0x12f718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f71c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12f71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f720: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x12F720u;
    SET_GPR_U32(ctx, 31, 0x12F728u);
    ctx->pc = 0x12F724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F720u;
            // 0x12f724: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F728u; }
        if (ctx->pc != 0x12F728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F728u; }
        if (ctx->pc != 0x12F728u) { return; }
    }
    ctx->pc = 0x12F728u;
label_12f728:
    // 0x12f728: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x12F728u;
    SET_GPR_U32(ctx, 31, 0x12F730u);
    ctx->pc = 0x12F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F728u;
            // 0x12f72c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F730u; }
        if (ctx->pc != 0x12F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F730u; }
        if (ctx->pc != 0x12F730u) { return; }
    }
    ctx->pc = 0x12F730u;
label_12f730:
    // 0x12f730: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12f730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f734: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x12f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12f738: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12f738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f73c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12f740: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12f740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f744: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12f744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12f748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f74c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F74Cu;
            // 0x12f750: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F754u;
}
