#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii
// Address: 0x14f5f0 - 0x14fbf8
void MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii_0x14f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii_0x14f5f0");
#endif

    switch (ctx->pc) {
        case 0x14f680u: goto label_14f680;
        case 0x14f69cu: goto label_14f69c;
        case 0x14f720u: goto label_14f720;
        case 0x14f724u: goto label_14f724;
        case 0x14f74cu: goto label_14f74c;
        case 0x14f858u: goto label_14f858;
        case 0x14f884u: goto label_14f884;
        case 0x14f898u: goto label_14f898;
        case 0x14faacu: goto label_14faac;
        case 0x14fae8u: goto label_14fae8;
        case 0x14fb2cu: goto label_14fb2c;
        case 0x14fb50u: goto label_14fb50;
        case 0x14fbbcu: goto label_14fbbc;
        default: break;
    }

    ctx->pc = 0x14f5f0u;

    // 0x14f5f0: 0x27bdf980  addiu       $sp, $sp, -0x680
    ctx->pc = 0x14f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965632));
    // 0x14f5f4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x14f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x14f5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14f5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f5fc: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x14f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x14f600: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x14f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x14f604: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x14f604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x14f608: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x14f608u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f60c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x14f60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x14f610: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x14f610u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f614: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14f614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14f618: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14f618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f61c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14f61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14f620: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14f620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f624: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14f624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14f628: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14f628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f62c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14f62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14f630: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x14f630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f634: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14f634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14f638: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x14f638u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14f63c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x14f63cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14f640: 0xc4f40000  lwc1        $f20, 0x0($a3)
    ctx->pc = 0x14f640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14f644: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14f644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f648: 0x0  nop
    ctx->pc = 0x14f648u;
    // NOP
    // 0x14f64c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x14F64Cu;
    {
        const bool branch_taken_0x14f64c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F64Cu;
            // 0x14f650: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f64c) {
            ctx->pc = 0x14F65Cu;
            goto label_14f65c;
        }
    }
    ctx->pc = 0x14F654u;
    // 0x14f654: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x14f654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x14f658: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x14f658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14f65c:
    // 0x14f65c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x14f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f660: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14f660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f664: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14f664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f668: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x14f668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x14f66c: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x14f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f670: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x14f670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x14f674: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x14f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f678: 0xc041be0  jal         func_106F80
    ctx->pc = 0x14F678u;
    SET_GPR_U32(ctx, 31, 0x14F680u);
    ctx->pc = 0x14F67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F678u;
            // 0x14f67c: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F680u; }
        if (ctx->pc != 0x14F680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F680u; }
        if (ctx->pc != 0x14F680u) { return; }
    }
    ctx->pc = 0x14F680u;
label_14f680:
    // 0x14f680: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x14f680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x14f684: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x14f684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f688: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x14f688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x14f68c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14f68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f694: 0xc041c4a  jal         func_107128
    ctx->pc = 0x14F694u;
    SET_GPR_U32(ctx, 31, 0x14F69Cu);
    ctx->pc = 0x14F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F694u;
            // 0x14f698: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F69Cu; }
        if (ctx->pc != 0x14F69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F69Cu; }
        if (ctx->pc != 0x14F69Cu) { return; }
    }
    ctx->pc = 0x14F69Cu;
label_14f69c:
    // 0x14f69c: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x14f69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f6a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f6a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f6a8: 0x27be00e8  addiu       $fp, $sp, 0xE8
    ctx->pc = 0x14f6a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x14f6ac: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x14f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x14f6b0: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x14f6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x14f6b4: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x14f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x14f6b8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x14f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14f6bc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x14f6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14f6c0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x14f6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x14f6c4: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x14f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f6c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f6cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f6d0: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x14f6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f6d4: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x14f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14f6d8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f6dc: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x14f6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f6e0: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x14f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x14f6e4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x14f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f6e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f6ec: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x14f6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x14f6f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f6f4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x14f6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f6f8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x14f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x14f6fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f6fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f700: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f704: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x14f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14f708: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f70c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x14f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f710: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f714: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x14f714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x14f718: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x14F718u;
    SET_GPR_U32(ctx, 31, 0x14F720u);
    ctx->pc = 0x14F71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F718u;
            // 0x14f71c: 0xafa300dc  sw          $v1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F720u; }
        if (ctx->pc != 0x14F720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F720u; }
        if (ctx->pc != 0x14F720u) { return; }
    }
    ctx->pc = 0x14F720u;
label_14f720:
    // 0x14f720: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14f720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f724:
    // 0x14f724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f728: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f72c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x14f72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x14f730: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x14f730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14f734: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x14f734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14f738: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x14f738u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14f73c: 0x27aa0200  addiu       $t2, $sp, 0x200
    ctx->pc = 0x14f73cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x14f740: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x14f740u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f744: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x14F744u;
    SET_GPR_U32(ctx, 31, 0x14F74Cu);
    ctx->pc = 0x14F748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F744u;
            // 0x14f748: 0xffb60000  sd          $s6, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F74Cu; }
        if (ctx->pc != 0x14F74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F74Cu; }
        if (ctx->pc != 0x14F74Cu) { return; }
    }
    ctx->pc = 0x14F74Cu;
label_14f74c:
    // 0x14f74c: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14F74Cu;
    {
        const bool branch_taken_0x14f74c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x14f74c) {
            ctx->pc = 0x14F7ACu;
            goto label_14f7ac;
        }
    }
    ctx->pc = 0x14F754u;
    // 0x14f754: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x14f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f758: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f760: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x14f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x14f764: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x14f764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x14f768: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f76c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x14f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x14f770: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x14f770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f774: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x14f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f778: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x14f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14f77c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x14f77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f780: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x14f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f784: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x14f784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x14f788: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x14f788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x14f78c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f790: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14f790u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14f794: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x14f794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x14f798: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f79c: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x14f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14f7a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7a4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14F7A4u;
    {
        const bool branch_taken_0x14f7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F7A4u;
            // 0x14f7a8: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f7a4) {
            ctx->pc = 0x14F814u;
            goto label_14f814;
        }
    }
    ctx->pc = 0x14F7ACu;
label_14f7ac:
    // 0x14f7ac: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x14f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7b0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x14f7b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14f7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14f7bc: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x14f7bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14f7c0: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x14f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x14f7c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14f7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14f7c8: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x14f7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x14f7cc: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x14f7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14f7d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14f7d4: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x14f7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x14f7d8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x14f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f7dc: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x14f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f7e4: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x14f7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x14f7e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f7ec: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x14f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f7f0: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x14f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x14f7f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f7f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f7f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14f7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14f7fc: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x14f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x14f800: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f804: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x14f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14f808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14f80c: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x14F80Cu;
    {
        const bool branch_taken_0x14f80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F80Cu;
            // 0x14f810: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f80c) {
            ctx->pc = 0x14F724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14f724;
        }
    }
    ctx->pc = 0x14F814u;
label_14f814:
    // 0x14f814: 0x0  nop
    ctx->pc = 0x14f814u;
    // NOP
    // 0x14f818: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x14f818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x14f81c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x14f820: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14f824: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x14f824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14f828: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x14f828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f82c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x14f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x14f830: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14f834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f838: 0x0  nop
    ctx->pc = 0x14f838u;
    // NOP
    // 0x14f83c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14f83cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f840: 0x0  nop
    ctx->pc = 0x14f840u;
    // NOP
    // 0x14f844: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14F844u;
    {
        const bool branch_taken_0x14f844 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F844u;
            // 0x14f848: 0x27a40660  addiu       $a0, $sp, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f844) {
            ctx->pc = 0x14F850u;
            goto label_14f850;
        }
    }
    ctx->pc = 0x14F84Cu;
    // 0x14f84c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x14f84cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_14f850:
    // 0x14f850: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14F850u;
    SET_GPR_U32(ctx, 31, 0x14F858u);
    ctx->pc = 0x14F854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F850u;
            // 0x14f854: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F858u; }
        if (ctx->pc != 0x14F858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F858u; }
        if (ctx->pc != 0x14F858u) { return; }
    }
    ctx->pc = 0x14F858u;
label_14f858:
    // 0x14f858: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14f858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14f85c: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x14F85Cu;
    {
        const bool branch_taken_0x14f85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F85Cu;
            // 0x14f860: 0x3c0241a0  lui         $v0, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f85c) {
            ctx->pc = 0x14FA30u;
            goto label_14fa30;
        }
    }
    ctx->pc = 0x14F864u;
    // 0x14f864: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x14f864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    // 0x14f868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f86c: 0x27a50610  addiu       $a1, $sp, 0x610
    ctx->pc = 0x14f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    // 0x14f870: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x14f870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14f874: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14f874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f878: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14f878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f87c: 0xc053f00  jal         func_14FC00
    ctx->pc = 0x14F87Cu;
    SET_GPR_U32(ctx, 31, 0x14F884u);
    ctx->pc = 0x14F880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F87Cu;
            // 0x14f880: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC00u;
    if (runtime->hasFunction(0x14FC00u)) {
        auto targetFn = runtime->lookupFunction(0x14FC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F884u; }
        if (ctx->pc != 0x14F884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFootPoly__FPffP6CCPolyPfP6CCPolyii_0x14fc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F884u; }
        if (ctx->pc != 0x14F884u) { return; }
    }
    ctx->pc = 0x14F884u;
label_14f884:
    // 0x14f884: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x14F884u;
    {
        const bool branch_taken_0x14f884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F884u;
            // 0x14f888: 0x27b00640  addiu       $s0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f884) {
            ctx->pc = 0x14FA30u;
            goto label_14fa30;
        }
    }
    ctx->pc = 0x14F88Cu;
    // 0x14f88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f890: 0xc041be0  jal         func_106F80
    ctx->pc = 0x14F890u;
    SET_GPR_U32(ctx, 31, 0x14F898u);
    ctx->pc = 0x14F894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F890u;
            // 0x14f894: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F898u; }
        if (ctx->pc != 0x14F898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F898u; }
        if (ctx->pc != 0x14F898u) { return; }
    }
    ctx->pc = 0x14F898u;
label_14f898:
    // 0x14f898: 0x27a50610  addiu       $a1, $sp, 0x610
    ctx->pc = 0x14f898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    // 0x14f89c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f8a0: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x14f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f8a4: 0x27a60650  addiu       $a2, $sp, 0x650
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
    // 0x14f8a8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x14f8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f8ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14f8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f8b0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x14f8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f8b4: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x14f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14f8b8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x14f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f8bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f8c0: 0xe6640010  swc1        $f4, 0x10($s3)
    ctx->pc = 0x14f8c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x14f8c4: 0xe6630014  swc1        $f3, 0x14($s3)
    ctx->pc = 0x14f8c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x14f8c8: 0xe6620018  swc1        $f2, 0x18($s3)
    ctx->pc = 0x14f8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x14f8cc: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x14f8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x14f8d0: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x14f8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f8d4: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x14f8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f8d8: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x14f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f8dc: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x14f8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f8e0: 0xe6640020  swc1        $f4, 0x20($s3)
    ctx->pc = 0x14f8e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x14f8e4: 0xe6630024  swc1        $f3, 0x24($s3)
    ctx->pc = 0x14f8e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
    // 0x14f8e8: 0xe6620028  swc1        $f2, 0x28($s3)
    ctx->pc = 0x14f8e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x14f8ec: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x14f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x14f8f0: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x14f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f8f4: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x14f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f8f8: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x14f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f8fc: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x14f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f900: 0xe6640030  swc1        $f4, 0x30($s3)
    ctx->pc = 0x14f900u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x14f904: 0xe6630034  swc1        $f3, 0x34($s3)
    ctx->pc = 0x14f904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x14f908: 0xe6620038  swc1        $f2, 0x38($s3)
    ctx->pc = 0x14f908u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x14f90c: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x14f90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x14f910: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x14f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f914: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x14f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f918: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x14f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f91c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x14f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f920: 0xe6640040  swc1        $f4, 0x40($s3)
    ctx->pc = 0x14f920u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
    // 0x14f924: 0xe6630044  swc1        $f3, 0x44($s3)
    ctx->pc = 0x14f924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x14f928: 0xe6620048  swc1        $f2, 0x48($s3)
    ctx->pc = 0x14f928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
    // 0x14f92c: 0xe660004c  swc1        $f0, 0x4C($s3)
    ctx->pc = 0x14f92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    // 0x14f930: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x14f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f934: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x14f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f938: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x14f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f93c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x14f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f940: 0xe6640050  swc1        $f4, 0x50($s3)
    ctx->pc = 0x14f940u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x14f944: 0xe6630054  swc1        $f3, 0x54($s3)
    ctx->pc = 0x14f944u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x14f948: 0xe6620058  swc1        $f2, 0x58($s3)
    ctx->pc = 0x14f948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x14f94c: 0xe660005c  swc1        $f0, 0x5C($s3)
    ctx->pc = 0x14f94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 92), bits); }
    // 0x14f950: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x14f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f954: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x14f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f958: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x14f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f95c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x14f95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f960: 0xe6640070  swc1        $f4, 0x70($s3)
    ctx->pc = 0x14f960u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 112), bits); }
    // 0x14f964: 0xe6630074  swc1        $f3, 0x74($s3)
    ctx->pc = 0x14f964u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 116), bits); }
    // 0x14f968: 0xe6620078  swc1        $f2, 0x78($s3)
    ctx->pc = 0x14f968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
    // 0x14f96c: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x14f96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
    // 0x14f970: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x14f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f974: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x14f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f978: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x14f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f97c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x14f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f980: 0xe6640080  swc1        $f4, 0x80($s3)
    ctx->pc = 0x14f980u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
    // 0x14f984: 0xe6630084  swc1        $f3, 0x84($s3)
    ctx->pc = 0x14f984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x14f988: 0xe6620088  swc1        $f2, 0x88($s3)
    ctx->pc = 0x14f988u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 136), bits); }
    // 0x14f98c: 0xe660008c  swc1        $f0, 0x8C($s3)
    ctx->pc = 0x14f98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 140), bits); }
    // 0x14f990: 0xc4a40020  lwc1        $f4, 0x20($a1)
    ctx->pc = 0x14f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f994: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x14f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f998: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x14f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f99c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x14f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9a0: 0xe6640090  swc1        $f4, 0x90($s3)
    ctx->pc = 0x14f9a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 144), bits); }
    // 0x14f9a4: 0xe6630094  swc1        $f3, 0x94($s3)
    ctx->pc = 0x14f9a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
    // 0x14f9a8: 0xe6620098  swc1        $f2, 0x98($s3)
    ctx->pc = 0x14f9a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 152), bits); }
    // 0x14f9ac: 0xe660009c  swc1        $f0, 0x9C($s3)
    ctx->pc = 0x14f9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 156), bits); }
    // 0x14f9b0: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x14f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f9b4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x14f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f9b8: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x14f9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f9bc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x14f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9c0: 0xe66400a0  swc1        $f4, 0xA0($s3)
    ctx->pc = 0x14f9c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 160), bits); }
    // 0x14f9c4: 0xe66300a4  swc1        $f3, 0xA4($s3)
    ctx->pc = 0x14f9c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 164), bits); }
    // 0x14f9c8: 0xe66200a8  swc1        $f2, 0xA8($s3)
    ctx->pc = 0x14f9c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 168), bits); }
    // 0x14f9cc: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x14f9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x14f9d0: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x14f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14f9d4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x14f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14f9d8: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x14f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f9dc: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x14f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f9e0: 0xe66400b0  swc1        $f4, 0xB0($s3)
    ctx->pc = 0x14f9e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 176), bits); }
    // 0x14f9e4: 0xe66300b4  swc1        $f3, 0xB4($s3)
    ctx->pc = 0x14f9e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 180), bits); }
    // 0x14f9e8: 0xe66200b8  swc1        $f2, 0xB8($s3)
    ctx->pc = 0x14f9e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 184), bits); }
    // 0x14f9ec: 0xe66000bc  swc1        $f0, 0xBC($s3)
    ctx->pc = 0x14f9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 188), bits); }
    // 0x14f9f0: 0xae640060  sw          $a0, 0x60($s3)
    ctx->pc = 0x14f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 4));
    // 0x14f9f4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x14f9f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x14f9f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f9fc: 0x7e6200c0  sq          $v0, 0xC0($s3)
    ctx->pc = 0x14f9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 192), GPR_VEC(ctx, 2));
    // 0x14fa00: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x14fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x14fa04: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x14fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fa08: 0xc6a20004  lwc1        $f2, 0x4($s5)
    ctx->pc = 0x14fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fa0c: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x14fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa10: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x14fa10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x14fa14: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14fa14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14fa18: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x14fa18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x14fa1c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14fa1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fa20: 0x0  nop
    ctx->pc = 0x14fa20u;
    // NOP
    // 0x14fa24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FA24u;
    {
        const bool branch_taken_0x14fa24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fa24) {
            ctx->pc = 0x14FA30u;
            goto label_14fa30;
        }
    }
    ctx->pc = 0x14FA2Cu;
    // 0x14fa2c: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x14fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
label_14fa30:
    // 0x14fa30: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x14fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14fa34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14FA34u;
    {
        const bool branch_taken_0x14fa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa34) {
            ctx->pc = 0x14FA58u;
            goto label_14fa58;
        }
    }
    ctx->pc = 0x14FA3Cu;
    // 0x14fa3c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x14fa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa40: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x14fa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x14fa44: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x14fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa48: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x14fa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x14fa4c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x14fa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14FA50u;
    {
        const bool branch_taken_0x14fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA50u;
            // 0x14fa54: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa50) {
            ctx->pc = 0x14FA74u;
            goto label_14fa74;
        }
    }
    ctx->pc = 0x14FA58u;
label_14fa58:
    // 0x14fa58: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x14fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa5c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x14fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x14fa60: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x14fa60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x14fa64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa68: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x14fa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x14fa6c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x14fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fa70: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x14fa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_14fa74:
    // 0x14fa74: 0x7a830000  lq          $v1, 0x0($s4)
    ctx->pc = 0x14fa74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14fa78: 0x27a60670  addiu       $a2, $sp, 0x670
    ctx->pc = 0x14fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
    // 0x14fa7c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x14fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x14fa80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fa84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fa88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14fa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14fa8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14fa90: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x14fa90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14fa94: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x14fa94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa98: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14fa9c: 0xc7a10674  lwc1        $f1, 0x674($sp)
    ctx->pc = 0x14fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14faa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14faa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x14faa4: 0xc05405c  jal         func_150170
    ctx->pc = 0x14FAA4u;
    SET_GPR_U32(ctx, 31, 0x14FAACu);
    ctx->pc = 0x14FAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAA4u;
            // 0x14faa8: 0xe7a00674  swc1        $f0, 0x674($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1652), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x150170u;
    if (runtime->hasFunction(0x150170u)) {
        auto targetFn = runtime->lookupFunction(0x150170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAACu; }
        if (ctx->pc != 0x14FAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWidth__FP6CCPolyiPffPfi_0x150170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAACu; }
        if (ctx->pc != 0x14FAACu) { return; }
    }
    ctx->pc = 0x14FAACu;
label_14faac:
    // 0x14faac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FAACu;
    {
        const bool branch_taken_0x14faac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAACu;
            // 0x14fab0: 0xae6200d0  sw          $v0, 0xD0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14faac) {
            ctx->pc = 0x14FAC4u;
            goto label_14fac4;
        }
    }
    ctx->pc = 0x14FAB4u;
    // 0x14fab4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x14fab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fab8: 0xe7a00670  swc1        $f0, 0x670($sp)
    ctx->pc = 0x14fab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1648), bits); }
    // 0x14fabc: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x14fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fac0: 0xe7a00678  swc1        $f0, 0x678($sp)
    ctx->pc = 0x14fac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1656), bits); }
label_14fac4:
    // 0x14fac4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14fac8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14facc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14faccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14fad0: 0xafa2067c  sw          $v0, 0x67C($sp)
    ctx->pc = 0x14fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1660), GPR_U32(ctx, 2));
    // 0x14fad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14fad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fad8: 0x27a60670  addiu       $a2, $sp, 0x670
    ctx->pc = 0x14fad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1648));
    // 0x14fadc: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x14fadcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x14fae0: 0xc05425c  jal         func_150970
    ctx->pc = 0x14FAE0u;
    SET_GPR_U32(ctx, 31, 0x14FAE8u);
    ctx->pc = 0x14FAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAE0u;
            // 0x14fae4: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150970u;
    if (runtime->hasFunction(0x150970u)) {
        auto targetFn = runtime->lookupFunction(0x150970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAE8u; }
        if (ctx->pc != 0x14FAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckWidthPipe__FP6CCPolyiPffPfi_0x150970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAE8u; }
        if (ctx->pc != 0x14FAE8u) { return; }
    }
    ctx->pc = 0x14FAE8u;
label_14fae8:
    // 0x14fae8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FAE8u;
    {
        const bool branch_taken_0x14fae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fae8) {
            ctx->pc = 0x14FB04u;
            goto label_14fb04;
        }
    }
    ctx->pc = 0x14FAF0u;
    // 0x14faf0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x14faf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14faf4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x14faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x14faf8: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x14faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fafc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FAFCu;
    {
        const bool branch_taken_0x14fafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAFCu;
            // 0x14fb00: 0xe6800008  swc1        $f0, 0x8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fafc) {
            ctx->pc = 0x14FB14u;
            goto label_14fb14;
        }
    }
    ctx->pc = 0x14FB04u;
label_14fb04:
    // 0x14fb04: 0xc7a00670  lwc1        $f0, 0x670($sp)
    ctx->pc = 0x14fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb08: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x14fb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x14fb0c: 0xc7a00678  lwc1        $f0, 0x678($sp)
    ctx->pc = 0x14fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fb10: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x14fb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_14fb14:
    // 0x14fb14: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x14fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14fb18: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14FB18u;
    {
        const bool branch_taken_0x14fb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB18u;
            // 0x14fb1c: 0x3c024208  lui         $v0, 0x4208 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb18) {
            ctx->pc = 0x14FB9Cu;
            goto label_14fb9c;
        }
    }
    ctx->pc = 0x14FB20u;
    // 0x14fb20: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    // 0x14fb24: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14FB24u;
    SET_GPR_U32(ctx, 31, 0x14FB2Cu);
    ctx->pc = 0x14FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB24u;
            // 0x14fb28: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB2Cu; }
        if (ctx->pc != 0x14FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB2Cu; }
        if (ctx->pc != 0x14FB2Cu) { return; }
    }
    ctx->pc = 0x14FB2Cu;
label_14fb2c:
    // 0x14fb2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x14fb30: 0x27a40660  addiu       $a0, $sp, 0x660
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1632));
    // 0x14fb34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14fb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14fb38: 0x27a50610  addiu       $a1, $sp, 0x610
    ctx->pc = 0x14fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1552));
    // 0x14fb3c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x14fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14fb40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14fb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb44: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14fb44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb48: 0xc053f00  jal         func_14FC00
    ctx->pc = 0x14FB48u;
    SET_GPR_U32(ctx, 31, 0x14FB50u);
    ctx->pc = 0x14FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB48u;
            // 0x14fb4c: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FC00u;
    if (runtime->hasFunction(0x14FC00u)) {
        auto targetFn = runtime->lookupFunction(0x14FC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB50u; }
        if (ctx->pc != 0x14FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFootPoly__FPffP6CCPolyPfP6CCPolyii_0x14fc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FB50u; }
        if (ctx->pc != 0x14FB50u) { return; }
    }
    ctx->pc = 0x14FB50u;
label_14fb50:
    // 0x14fb50: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x14FB50u;
    {
        const bool branch_taken_0x14fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB50u;
            // 0x14fb54: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb50) {
            ctx->pc = 0x14FB98u;
            goto label_14fb98;
        }
    }
    ctx->pc = 0x14FB58u;
    // 0x14fb58: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14fb5c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x14fb5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fb64: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x14fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x14fb68: 0x7e6300c0  sq          $v1, 0xC0($s3)
    ctx->pc = 0x14fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 192), GPR_VEC(ctx, 3));
    // 0x14fb6c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x14fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fb70: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x14fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fb74: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x14fb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fb78: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x14fb78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x14fb7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14fb7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14fb80: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x14fb80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x14fb84: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x14fb84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fb88: 0x0  nop
    ctx->pc = 0x14fb88u;
    // NOP
    // 0x14fb8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FB8Cu;
    {
        const bool branch_taken_0x14fb8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fb8c) {
            ctx->pc = 0x14FB98u;
            goto label_14fb98;
        }
    }
    ctx->pc = 0x14FB94u;
    // 0x14fb94: 0xe6830004  swc1        $f3, 0x4($s4)
    ctx->pc = 0x14fb94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_14fb98:
    // 0x14fb98: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x14fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
label_14fb9c:
    // 0x14fb9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fba0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14fba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14fba4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x14fba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fba8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14fba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x14fbacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbb0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x14fbb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbb4: 0xc053fcc  jal         func_14FF30
    ctx->pc = 0x14FBB4u;
    SET_GPR_U32(ctx, 31, 0x14FBBCu);
    ctx->pc = 0x14FBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBB4u;
            // 0x14fbb8: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14FF30u;
    if (runtime->hasFunction(0x14FF30u)) {
        auto targetFn = runtime->lookupFunction(0x14FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBBCu; }
        if (ctx->pc != 0x14FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCPolyAttr__FP13MoveCheckInfoPfPffP6CCPolyii_0x14ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBBCu; }
        if (ctx->pc != 0x14FBBCu) { return; }
    }
    ctx->pc = 0x14FBBCu;
label_14fbbc:
    // 0x14fbbc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x14fbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14fbc0: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x14fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14fbc4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x14fbc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14fbc8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x14fbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14fbcc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x14fbccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14fbd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14fbd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbd4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x14fbd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14fbd8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x14fbd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fbdc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14fbdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fbe0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14fbe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fbe4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14fbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fbe8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14fbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fbec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14fbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x14FBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBF0u;
            // 0x14fbf4: 0x27bd0680  addiu       $sp, $sp, 0x680 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14FBF8u;
}
