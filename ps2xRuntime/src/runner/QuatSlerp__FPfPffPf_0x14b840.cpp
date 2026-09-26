#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QuatSlerp__FPfPffPf
// Address: 0x14b840 - 0x14b9fc
void QuatSlerp__FPfPffPf_0x14b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuatSlerp__FPfPffPf_0x14b840");
#endif

    switch (ctx->pc) {
        case 0x14b94cu: goto label_14b94c;
        case 0x14b958u: goto label_14b958;
        case 0x14b978u: goto label_14b978;
        case 0x14b984u: goto label_14b984;
        default: break;
    }

    ctx->pc = 0x14b840u;

    // 0x14b840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14b844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14b848: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b84c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b854: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14b854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b85c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14b85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b860: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x14b860u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14b864: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14b864u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14b868: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14b868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14b86c: 0xc4870004  lwc1        $f7, 0x4($a0)
    ctx->pc = 0x14b86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14b870: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x14b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14b874: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x14b874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14b878: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x14b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b87c: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x14b87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14b880: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x14b880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14b884: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x14b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b888: 0x4606381a  mula.s      $f7, $f6
    ctx->pc = 0x14b888u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x14b88c: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x14b88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x14b890: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x14b890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x14b894: 0x4604291c  madd.s      $f4, $f5, $f4
    ctx->pc = 0x14b894u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x14b898: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14b898u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14b89c: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x14b89cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x14b8a0: 0x46060b1c  madd.s      $f12, $f1, $f6
    ctx->pc = 0x14b8a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[6]));
    // 0x14b8a4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x14b8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b8a8: 0x0  nop
    ctx->pc = 0x14b8a8u;
    // NOP
    // 0x14b8ac: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x14B8ACu;
    {
        const bool branch_taken_0x14b8ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8ACu;
            // 0x14b8b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8ac) {
            ctx->pc = 0x14B8E4u;
            goto label_14b8e4;
        }
    }
    ctx->pc = 0x14B8B4u;
    // 0x14b8b4: 0x46003007  neg.s       $f0, $f6
    ctx->pc = 0x14b8b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[6]);
    // 0x14b8b8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x14b8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14b8bc: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x14b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b8c0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x14b8c0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x14b8c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14b8c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14b8c8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x14b8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x14b8cc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x14b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b8d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14b8d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14b8d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x14b8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x14b8d8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x14b8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b8dc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14b8dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14b8e0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x14b8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_14b8e4:
    // 0x14b8e4: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x14b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x14b8e8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x14b8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x14b8ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14b8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b8f0: 0x0  nop
    ctx->pc = 0x14b8f0u;
    // NOP
    // 0x14b8f4: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x14b8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b8f8: 0x0  nop
    ctx->pc = 0x14b8f8u;
    // NOP
    // 0x14b8fc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x14B8FCu;
    {
        const bool branch_taken_0x14b8fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8FCu;
            // 0x14b900: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8fc) {
            ctx->pc = 0x14B928u;
            goto label_14b928;
        }
    }
    ctx->pc = 0x14B904u;
    // 0x14b904: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x14b904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b908: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x14b908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14b90c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x14b90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b910: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x14b910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x14b914: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x14b914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b918: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x14b918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14b91c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14b91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b920: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x14B920u;
    {
        const bool branch_taken_0x14b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B920u;
            // 0x14b924: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b920) {
            ctx->pc = 0x14B9D8u;
            goto label_14b9d8;
        }
    }
    ctx->pc = 0x14B928u;
label_14b928:
    // 0x14b928: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14b928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14b92c: 0x0  nop
    ctx->pc = 0x14b92cu;
    // NOP
    // 0x14b930: 0x460c1001  sub.s       $f0, $f2, $f12
    ctx->pc = 0x14b930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x14b934: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14b934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14b938: 0x0  nop
    ctx->pc = 0x14b938u;
    // NOP
    // 0x14b93c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x14B93Cu;
    {
        const bool branch_taken_0x14b93c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B93Cu;
            // 0x14b940: 0x46151501  sub.s       $f20, $f2, $f21 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b93c) {
            ctx->pc = 0x14B988u;
            goto label_14b988;
        }
    }
    ctx->pc = 0x14B944u;
    // 0x14b944: 0xc047c36  jal         func_11F0D8
    ctx->pc = 0x14B944u;
    SET_GPR_U32(ctx, 31, 0x14B94Cu);
    ctx->pc = 0x11F0D8u;
    if (runtime->hasFunction(0x11F0D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F0D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B94Cu; }
        if (ctx->pc != 0x14B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        acosf_0x11f0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B94Cu; }
        if (ctx->pc != 0x14B94Cu) { return; }
    }
    ctx->pc = 0x14B94Cu;
label_14b94c:
    // 0x14b94c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14b94cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14b950: 0xc047a42  jal         func_11E908
    ctx->pc = 0x14B950u;
    SET_GPR_U32(ctx, 31, 0x14B958u);
    ctx->pc = 0x14B954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B950u;
            // 0x14b954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B958u; }
        if (ctx->pc != 0x14B958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B958u; }
        if (ctx->pc != 0x14B958u) { return; }
    }
    ctx->pc = 0x14B958u;
label_14b958:
    // 0x14b958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14b958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14b95c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14b95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b960: 0x0  nop
    ctx->pc = 0x14b960u;
    // NOP
    // 0x14b964: 0x46000d83  div.s       $f22, $f1, $f0
    ctx->pc = 0x14b964u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14b968: 0x0  nop
    ctx->pc = 0x14b968u;
    // NOP
    // 0x14b96c: 0x46150801  sub.s       $f0, $f1, $f21
    ctx->pc = 0x14b96cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x14b970: 0xc047a42  jal         func_11E908
    ctx->pc = 0x14B970u;
    SET_GPR_U32(ctx, 31, 0x14B978u);
    ctx->pc = 0x14B974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B970u;
            // 0x14b974: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B978u; }
        if (ctx->pc != 0x14B978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B978u; }
        if (ctx->pc != 0x14B978u) { return; }
    }
    ctx->pc = 0x14B978u;
label_14b978:
    // 0x14b978: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x14b978u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x14b97c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x14B97Cu;
    SET_GPR_U32(ctx, 31, 0x14B984u);
    ctx->pc = 0x14B980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B97Cu;
            // 0x14b980: 0x4600b502  mul.s       $f20, $f22, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B984u; }
        if (ctx->pc != 0x14B984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B984u; }
        if (ctx->pc != 0x14B984u) { return; }
    }
    ctx->pc = 0x14B984u;
label_14b984:
    // 0x14b984: 0x4600b542  mul.s       $f21, $f22, $f0
    ctx->pc = 0x14b984u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_14b988:
    // 0x14b988: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x14b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b98c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x14b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b990: 0x4601a01a  mula.s      $f20, $f1
    ctx->pc = 0x14b990u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x14b994: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x14b994u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x14b998: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x14b998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x14b99c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x14b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b9a0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x14b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b9a4: 0x4601a01a  mula.s      $f20, $f1
    ctx->pc = 0x14b9a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x14b9a8: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x14b9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x14b9ac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x14b9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x14b9b0: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x14b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b9b4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x14b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b9b8: 0x4601a01a  mula.s      $f20, $f1
    ctx->pc = 0x14b9b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x14b9bc: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x14b9bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x14b9c0: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x14b9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14b9c4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x14b9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b9c8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x14b9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b9cc: 0x4601a01a  mula.s      $f20, $f1
    ctx->pc = 0x14b9ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x14b9d0: 0x4600a81c  madd.s      $f0, $f21, $f0
    ctx->pc = 0x14b9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[0]));
    // 0x14b9d4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x14b9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_14b9d8:
    // 0x14b9d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14b9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14b9dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x14b9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14b9e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14b9e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b9e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14b9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14b9e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b9ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14b9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14b9f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9F4u;
            // 0x14b9f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B9FCu;
}
