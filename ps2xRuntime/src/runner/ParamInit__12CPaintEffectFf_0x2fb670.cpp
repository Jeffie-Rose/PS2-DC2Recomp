#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ParamInit__12CPaintEffectFf
// Address: 0x2fb670 - 0x2fb768
void ParamInit__12CPaintEffectFf_0x2fb670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParamInit__12CPaintEffectFf_0x2fb670");
#endif

    switch (ctx->pc) {
        case 0x2fb6a4u: goto label_2fb6a4;
        case 0x2fb6b0u: goto label_2fb6b0;
        case 0x2fb6b8u: goto label_2fb6b8;
        case 0x2fb6e0u: goto label_2fb6e0;
        case 0x2fb708u: goto label_2fb708;
        default: break;
    }

    ctx->pc = 0x2fb670u;

    // 0x2fb670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fb670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fb674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb678: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2fb678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2fb67c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fb67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2fb680: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fb680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2fb684: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fb684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb688: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fb688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fb68c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fb690: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fb690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb694: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2fb694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fb698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb69c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2fb69cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2fb6a0: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x2fb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
label_2fb6a4:
    // 0x2fb6a4: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x2fb6a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2fb6a8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2FB6A8u;
    SET_GPR_U32(ctx, 31, 0x2FB6B0u);
    ctx->pc = 0x2FB6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6A8u;
            // 0x2fb6ac: 0x26440100  addiu       $a0, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B0u; }
        if (ctx->pc != 0x2FB6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B0u; }
        if (ctx->pc != 0x2FB6B0u) { return; }
    }
    ctx->pc = 0x2FB6B0u;
label_2fb6b0:
    // 0x2fb6b0: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2FB6B0u;
    SET_GPR_U32(ctx, 31, 0x2FB6B8u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B8u; }
        if (ctx->pc != 0x2FB6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6B8u; }
        if (ctx->pc != 0x2FB6B8u) { return; }
    }
    ctx->pc = 0x2FB6B8u;
label_2fb6b8:
    // 0x2fb6b8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2fb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2fb6bc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2fb6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2fb6c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fb6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb6c4: 0x0  nop
    ctx->pc = 0x2fb6c4u;
    // NOP
    // 0x2fb6c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fb6c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fb6cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fb6ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fb6d0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2fb6d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2fb6d4: 0xe640010c  swc1        $f0, 0x10C($s2)
    ctx->pc = 0x2fb6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 268), bits); }
    // 0x2fb6d8: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2FB6D8u;
    SET_GPR_U32(ctx, 31, 0x2FB6E0u);
    ctx->pc = 0x2FB6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB6D8u;
            // 0x2fb6dc: 0xae420104  sw          $v0, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6E0u; }
        if (ctx->pc != 0x2FB6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB6E0u; }
        if (ctx->pc != 0x2FB6E0u) { return; }
    }
    ctx->pc = 0x2FB6E0u;
label_2fb6e0:
    // 0x2fb6e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2fb6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2fb6e4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2fb6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2fb6e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fb6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb6ec: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2fb6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fb6f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fb6f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fb6f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2fb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2fb6f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2fb6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fb6fc: 0xe6400280  swc1        $f0, 0x280($s2)
    ctx->pc = 0x2fb6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 640), bits); }
    // 0x2fb700: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2FB700u;
    SET_GPR_U32(ctx, 31, 0x2FB708u);
    ctx->pc = 0x2FB704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB700u;
            // 0x2fb704: 0xae420284  sw          $v0, 0x284($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB708u; }
        if (ctx->pc != 0x2FB708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB708u; }
        if (ctx->pc != 0x2FB708u) { return; }
    }
    ctx->pc = 0x2FB708u;
label_2fb708:
    // 0x2fb708: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2fb708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2fb70c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2fb70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2fb710: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2fb710u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fb714: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb718: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fb718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb71c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2fb71cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2fb720: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2fb720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2fb724: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x2fb724u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2fb728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2fb728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fb72c: 0xe6400288  swc1        $f0, 0x288($s2)
    ctx->pc = 0x2fb72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 648), bits); }
    // 0x2fb730: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2FB730u;
    {
        const bool branch_taken_0x2fb730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB730u;
            // 0x2fb734: 0xae40028c  sw          $zero, 0x28C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb730) {
            ctx->pc = 0x2FB6A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fb6a4;
        }
    }
    ctx->pc = 0x2FB738u;
    // 0x2fb738: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2fb738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2fb73c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fb73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fb740: 0xae6400f0  sw          $a0, 0xF0($s3)
    ctx->pc = 0x2fb740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 4));
    // 0x2fb744: 0xae6300f4  sw          $v1, 0xF4($s3)
    ctx->pc = 0x2fb744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 3));
    // 0x2fb748: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2fb748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb74c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2fb74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb750: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fb750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb754: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fb754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fb758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb75c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb75cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb760: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB760u;
            // 0x2fb764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB768u;
}
