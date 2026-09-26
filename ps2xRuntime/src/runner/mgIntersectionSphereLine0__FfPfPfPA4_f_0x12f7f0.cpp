#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgIntersectionSphereLine0__FfPfPfPA4_f
// Address: 0x12f7f0 - 0x12f984
void mgIntersectionSphereLine0__FfPfPfPA4_f_0x12f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgIntersectionSphereLine0__FfPfPfPA4_f_0x12f7f0");
#endif

    switch (ctx->pc) {
        case 0x12f828u: goto label_12f828;
        case 0x12f830u: goto label_12f830;
        case 0x12f840u: goto label_12f840;
        case 0x12f84cu: goto label_12f84c;
        case 0x12f884u: goto label_12f884;
        case 0x12f8d8u: goto label_12f8d8;
        case 0x12f8e8u: goto label_12f8e8;
        case 0x12f944u: goto label_12f944;
        case 0x12f958u: goto label_12f958;
        default: break;
    }

    ctx->pc = 0x12f7f0u;

    // 0x12f7f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12f7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12f7f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12f7f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12f7fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12f800: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12f800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f804: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12f808: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12f808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f80c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x12f80cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12f810: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12f810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f814: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x12f814u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12f818: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12f818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f81c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x12f81cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x12f820: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F820u;
    SET_GPR_U32(ctx, 31, 0x12F828u);
    ctx->pc = 0x12F824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F820u;
            // 0x12f824: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F828u; }
        if (ctx->pc != 0x12F828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F828u; }
        if (ctx->pc != 0x12F828u) { return; }
    }
    ctx->pc = 0x12F828u;
label_12f828:
    // 0x12f828: 0xc04c00c  jal         func_130030
    ctx->pc = 0x12F828u;
    SET_GPR_U32(ctx, 31, 0x12F830u);
    ctx->pc = 0x12F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F828u;
            // 0x12f82c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130030u;
    if (runtime->hasFunction(0x130030u)) {
        auto targetFn = runtime->lookupFunction(0x130030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F830u; }
        if (ctx->pc != 0x12F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPf_0x130030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F830u; }
        if (ctx->pc != 0x12F830u) { return; }
    }
    ctx->pc = 0x12F830u;
label_12f830:
    // 0x12f830: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12f830u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12f834: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12f834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f838: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x12F838u;
    SET_GPR_U32(ctx, 31, 0x12F840u);
    ctx->pc = 0x12F83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F838u;
            // 0x12f83c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F840u; }
        if (ctx->pc != 0x12F840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F840u; }
        if (ctx->pc != 0x12F840u) { return; }
    }
    ctx->pc = 0x12F840u;
label_12f840:
    // 0x12f840: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x12f840u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x12f844: 0xc04c00c  jal         func_130030
    ctx->pc = 0x12F844u;
    SET_GPR_U32(ctx, 31, 0x12F84Cu);
    ctx->pc = 0x12F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F844u;
            // 0x12f848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130030u;
    if (runtime->hasFunction(0x130030u)) {
        auto targetFn = runtime->lookupFunction(0x130030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F84Cu; }
        if (ctx->pc != 0x12F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPf_0x130030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F84Cu; }
        if (ctx->pc != 0x12F84Cu) { return; }
    }
    ctx->pc = 0x12F84Cu;
label_12f84c:
    // 0x12f84c: 0x4616b042  mul.s       $f1, $f22, $f22
    ctx->pc = 0x12f84cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x12f850: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12f850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12f854: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x12f854u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x12f858: 0x4600a59d  msub.s      $f22, $f20, $f0
    ctx->pc = 0x12f858u;
    ctx->f[22] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
    // 0x12f85c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f860: 0x0  nop
    ctx->pc = 0x12f860u;
    // NOP
    // 0x12f864: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x12f864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f868: 0x0  nop
    ctx->pc = 0x12f868u;
    // NOP
    // 0x12f86c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12F86Cu;
    {
        const bool branch_taken_0x12f86c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F86Cu;
            // 0x12f870: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f86c) {
            ctx->pc = 0x12F87Cu;
            goto label_12f87c;
        }
    }
    ctx->pc = 0x12F874u;
    // 0x12f874: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x12F874u;
    {
        const bool branch_taken_0x12f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F874u;
            // 0x12f878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f874) {
            ctx->pc = 0x12F960u;
            goto label_12f960;
        }
    }
    ctx->pc = 0x12F87Cu;
label_12f87c:
    // 0x12f87c: 0xc047cc0  jal         func_11F300
    ctx->pc = 0x12F87Cu;
    SET_GPR_U32(ctx, 31, 0x12F884u);
    ctx->pc = 0x11F300u;
    if (runtime->hasFunction(0x11F300u)) {
        auto targetFn = runtime->lookupFunction(0x11F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F884u; }
        if (ctx->pc != 0x12F884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x11f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F884u; }
        if (ctx->pc != 0x12F884u) { return; }
    }
    ctx->pc = 0x12F884u;
label_12f884:
    // 0x12f884: 0x4600a887  neg.s       $f2, $f21
    ctx->pc = 0x12f884u;
    ctx->f[2] = FPU_NEG_S(ctx->f[21]);
    // 0x12f888: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12f888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f88c: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x12f88cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x12f890: 0x46140b03  div.s       $f12, $f1, $f20
    ctx->pc = 0x12f890u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x12f894: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x12f894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12f898: 0x46140503  div.s       $f20, $f0, $f20
    ctx->pc = 0x12f898u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x12f89c: 0x0  nop
    ctx->pc = 0x12f89cu;
    // NOP
    // 0x12f8a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f8a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8a4: 0x0  nop
    ctx->pc = 0x12f8a4u;
    // NOP
    // 0x12f8a8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x12f8a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f8ac: 0x0  nop
    ctx->pc = 0x12f8acu;
    // NOP
    // 0x12f8b0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x12F8B0u;
    {
        const bool branch_taken_0x12f8b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8B0u;
            // 0x12f8b4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8b0) {
            ctx->pc = 0x12F8ECu;
            goto label_12f8ec;
        }
    }
    ctx->pc = 0x12F8B8u;
    // 0x12f8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8bc: 0x0  nop
    ctx->pc = 0x12f8bcu;
    // NOP
    // 0x12f8c0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x12f8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f8c4: 0x0  nop
    ctx->pc = 0x12f8c4u;
    // NOP
    // 0x12f8c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x12F8C8u;
    {
        const bool branch_taken_0x12f8c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8C8u;
            // 0x12f8cc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8c8) {
            ctx->pc = 0x12F8ECu;
            goto label_12f8ec;
        }
    }
    ctx->pc = 0x12F8D0u;
    // 0x12f8d0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x12F8D0u;
    SET_GPR_U32(ctx, 31, 0x12F8D8u);
    ctx->pc = 0x12F8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8D0u;
            // 0x12f8d4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8D8u; }
        if (ctx->pc != 0x12F8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8D8u; }
        if (ctx->pc != 0x12F8D8u) { return; }
    }
    ctx->pc = 0x12F8D8u;
label_12f8d8:
    // 0x12f8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8e0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x12F8E0u;
    SET_GPR_U32(ctx, 31, 0x12F8E8u);
    ctx->pc = 0x12F8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8E0u;
            // 0x12f8e4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8E8u; }
        if (ctx->pc != 0x12F8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8E8u; }
        if (ctx->pc != 0x12F8E8u) { return; }
    }
    ctx->pc = 0x12F8E8u;
label_12f8e8:
    // 0x12f8e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12f8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12f8ec:
    // 0x12f8ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12f8ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f8f0: 0x0  nop
    ctx->pc = 0x12f8f0u;
    // NOP
    // 0x12f8f4: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x12f8f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f8f8: 0x0  nop
    ctx->pc = 0x12f8f8u;
    // NOP
    // 0x12f8fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12F8FCu;
    {
        const bool branch_taken_0x12f8fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8FCu;
            // 0x12f900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8fc) {
            ctx->pc = 0x12F90Cu;
            goto label_12f90c;
        }
    }
    ctx->pc = 0x12F904u;
    // 0x12f904: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12F904u;
    {
        const bool branch_taken_0x12f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F904u;
            // 0x12f908: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f904) {
            ctx->pc = 0x12F964u;
            goto label_12f964;
        }
    }
    ctx->pc = 0x12F90Cu;
label_12f90c:
    // 0x12f90c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12f90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f910: 0x0  nop
    ctx->pc = 0x12f910u;
    // NOP
    // 0x12f914: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x12F914u;
    {
        const bool branch_taken_0x12f914 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F914u;
            // 0x12f918: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f914) {
            ctx->pc = 0x12F960u;
            goto label_12f960;
        }
    }
    ctx->pc = 0x12F91Cu;
    // 0x12f91c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x12f920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12f920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f924: 0x0  nop
    ctx->pc = 0x12f924u;
    // NOP
    // 0x12f928: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12f928u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f92c: 0x0  nop
    ctx->pc = 0x12f92cu;
    // NOP
    // 0x12f930: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x12F930u;
    {
        const bool branch_taken_0x12f930 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F930u;
            // 0x12f934: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f930) {
            ctx->pc = 0x12F95Cu;
            goto label_12f95c;
        }
    }
    ctx->pc = 0x12F938u;
    // 0x12f938: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12f938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12f93c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x12F93Cu;
    SET_GPR_U32(ctx, 31, 0x12F944u);
    ctx->pc = 0x12F940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F93Cu;
            // 0x12f940: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F944u; }
        if (ctx->pc != 0x12F944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F944u; }
        if (ctx->pc != 0x12F944u) { return; }
    }
    ctx->pc = 0x12F944u;
label_12f944:
    // 0x12f944: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x12f944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x12f948: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f94c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x12f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12f950: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x12F950u;
    SET_GPR_U32(ctx, 31, 0x12F958u);
    ctx->pc = 0x12F954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F950u;
            // 0x12f954: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F958u; }
        if (ctx->pc != 0x12F958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F958u; }
        if (ctx->pc != 0x12F958u) { return; }
    }
    ctx->pc = 0x12F958u;
label_12f958:
    // 0x12f958: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12f958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12f95c:
    // 0x12f95c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12f95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12f960:
    // 0x12f960: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12f960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_12f964:
    // 0x12f964: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x12f964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12f968: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12f968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f96c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x12f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12f970: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12f970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f974: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12f978: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12f978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F97Cu;
            // 0x12f980: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F984u;
}
