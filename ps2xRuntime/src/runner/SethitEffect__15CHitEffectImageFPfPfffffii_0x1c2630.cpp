#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SethitEffect__15CHitEffectImageFPfPfffffii
// Address: 0x1c2630 - 0x1c2940
void SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SethitEffect__15CHitEffectImageFPfPfffffii_0x1c2630");
#endif

    switch (ctx->pc) {
        case 0x1c268cu: goto label_1c268c;
        case 0x1c2698u: goto label_1c2698;
        case 0x1c26a4u: goto label_1c26a4;
        case 0x1c26dcu: goto label_1c26dc;
        case 0x1c2728u: goto label_1c2728;
        case 0x1c2730u: goto label_1c2730;
        case 0x1c2750u: goto label_1c2750;
        case 0x1c2770u: goto label_1c2770;
        case 0x1c27c4u: goto label_1c27c4;
        case 0x1c27ccu: goto label_1c27cc;
        case 0x1c27ecu: goto label_1c27ec;
        case 0x1c280cu: goto label_1c280c;
        case 0x1c2834u: goto label_1c2834;
        case 0x1c2848u: goto label_1c2848;
        case 0x1c289cu: goto label_1c289c;
        case 0x1c28b8u: goto label_1c28b8;
        default: break;
    }

    ctx->pc = 0x1c2630u;

    // 0x1c2630: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c2634: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c2634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c2638: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1c2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1c263c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1c263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1c2640: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1c2644: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c2644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2648: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1c264c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c264cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2650: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1c2650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1c2654: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1c2654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2658: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c265c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c265cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c2660: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1c2660u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2664: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c2664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2668: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1c2668u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c266c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1c266cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c2670: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c2670u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c2674: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c2674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c2678: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x1c2678u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x1c267c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x1c267cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x1c2680: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x1c2680u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x1c2684: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C2684u;
    SET_GPR_U32(ctx, 31, 0x1C268Cu);
    ctx->pc = 0x1C2688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2684u;
            // 0x1c2688: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C268Cu; }
        if (ctx->pc != 0x1C268Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C268Cu; }
        if (ctx->pc != 0x1C268Cu) { return; }
    }
    ctx->pc = 0x1C268Cu;
label_1c268c:
    // 0x1c268c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c268cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2690: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C2690u;
    SET_GPR_U32(ctx, 31, 0x1C2698u);
    ctx->pc = 0x1C2694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2690u;
            // 0x1c2694: 0x26a40010  addiu       $a0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2698u; }
        if (ctx->pc != 0x1C2698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2698u; }
        if (ctx->pc != 0x1C2698u) { return; }
    }
    ctx->pc = 0x1C2698u;
label_1c2698:
    // 0x1c2698: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1c2698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1c269c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C269Cu;
    SET_GPR_U32(ctx, 31, 0x1C26A4u);
    ctx->pc = 0x1C26A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C269Cu;
            // 0x1c26a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26A4u; }
        if (ctx->pc != 0x1C26A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26A4u; }
        if (ctx->pc != 0x1C26A4u) { return; }
    }
    ctx->pc = 0x1C26A4u;
label_1c26a4:
    // 0x1c26a4: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x1c26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x1c26a8: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x1c26a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c26ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C26ACu;
    {
        const bool branch_taken_0x1c26ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c26ac) {
            ctx->pc = 0x1C26B8u;
            goto label_1c26b8;
        }
    }
    ctx->pc = 0x1C26B4u;
    // 0x1c26b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c26b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c26b8:
    // 0x1c26b8: 0xe6b80030  swc1        $f24, 0x30($s5)
    ctx->pc = 0x1c26b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x1c26bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c26bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c26c0: 0xe6b70038  swc1        $f23, 0x38($s5)
    ctx->pc = 0x1c26c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x1c26c4: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1c26c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1c26c8: 0xe6b60034  swc1        $f22, 0x34($s5)
    ctx->pc = 0x1c26c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x1c26cc: 0xe6b4003c  swc1        $f20, 0x3C($s5)
    ctx->pc = 0x1c26ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x1c26d0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1c26d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1c26d4: 0xc041e96  jal         func_107A58
    ctx->pc = 0x1C26D4u;
    SET_GPR_U32(ctx, 31, 0x1C26DCu);
    ctx->pc = 0x1C26D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C26D4u;
            // 0x1c26d8: 0xaeb30028  sw          $s3, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26DCu; }
        if (ctx->pc != 0x1C26DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C26DCu; }
        if (ctx->pc != 0x1C26DCu) { return; }
    }
    ctx->pc = 0x1C26DCu;
label_1c26dc:
    // 0x1c26dc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1c26dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c26e0: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x1c26e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x1c26e4: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1c26e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c26e8: 0x27b200a8  addiu       $s2, $sp, 0xA8
    ctx->pc = 0x1c26e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1c26ec: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1c26ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c26f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c26f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c26f4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c26f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1c26f8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x1c26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c26fc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c26fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2704: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x1c2704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x1c2708: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1c2708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c270c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1c270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2710: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2714: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1c2714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1c2718: 0xaeb30024  sw          $s3, 0x24($s5)
    ctx->pc = 0x1c2718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 19));
    // 0x1c271c: 0x8eb00020  lw          $s0, 0x20($s5)
    ctx->pc = 0x1c271cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1c2720: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
    ctx->pc = 0x1C2720u;
    {
        const bool branch_taken_0x1c2720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2720u;
            // 0x1c2724: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2720) {
            ctx->pc = 0x1C28E8u;
            goto label_1c28e8;
        }
    }
    ctx->pc = 0x1C2728u;
label_1c2728:
    // 0x1c2728: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C2728u;
    SET_GPR_U32(ctx, 31, 0x1C2730u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2730u; }
        if (ctx->pc != 0x1C2730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2730u; }
        if (ctx->pc != 0x1C2730u) { return; }
    }
    ctx->pc = 0x1C2730u;
label_1c2730:
    // 0x1c2730: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->pc = 0x1c2730u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1c2734: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2738: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c2738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c273c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1c273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2740: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c2740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c2744: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2748: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C2748u;
    SET_GPR_U32(ctx, 31, 0x1C2750u);
    ctx->pc = 0x1C274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2748u;
            // 0x1c274c: 0x46180501  sub.s       $f20, $f0, $f24 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2750u; }
        if (ctx->pc != 0x1C2750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2750u; }
        if (ctx->pc != 0x1C2750u) { return; }
    }
    ctx->pc = 0x1C2750u;
label_1c2750:
    // 0x1c2750: 0x4600c082  mul.s       $f2, $f24, $f0
    ctx->pc = 0x1c2750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1c2754: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c2758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c275c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2760: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c2760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c2764: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2768: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C2768u;
    SET_GPR_U32(ctx, 31, 0x1C2770u);
    ctx->pc = 0x1C276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2768u;
            // 0x1c276c: 0x46180541  sub.s       $f21, $f0, $f24 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2770u; }
        if (ctx->pc != 0x1C2770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2770u; }
        if (ctx->pc != 0x1C2770u) { return; }
    }
    ctx->pc = 0x1C2770u;
label_1c2770:
    // 0x1c2770: 0x4600c0c2  mul.s       $f3, $f24, $f0
    ctx->pc = 0x1c2770u;
    ctx->f[3] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x1c2774: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2778: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1c2778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c277c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c277cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2780: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c2780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2784: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1c2784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2788: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c2788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c278c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1c278cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2790: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1c2790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1c2794: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1c2794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1c2798: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c2798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c279c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x1c279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c27a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c27a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c27a4: 0x46180841  sub.s       $f1, $f1, $f24
    ctx->pc = 0x1c27a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[24]);
    // 0x1c27a8: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1c27a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1c27ac: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c27acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c27b0: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1c27b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c27b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c27b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c27b8: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1c27b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1c27bc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C27BCu;
    SET_GPR_U32(ctx, 31, 0x1C27C4u);
    ctx->pc = 0x1C27C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27BCu;
            // 0x1c27c0: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27C4u; }
        if (ctx->pc != 0x1C27C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27C4u; }
        if (ctx->pc != 0x1C27C4u) { return; }
    }
    ctx->pc = 0x1C27C4u;
label_1c27c4:
    // 0x1c27c4: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C27C4u;
    SET_GPR_U32(ctx, 31, 0x1C27CCu);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27CCu; }
        if (ctx->pc != 0x1C27CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27CCu; }
        if (ctx->pc != 0x1C27CCu) { return; }
    }
    ctx->pc = 0x1C27CCu;
label_1c27cc:
    // 0x1c27cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c27d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c27d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c27d4: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x1c27d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c27d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c27d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c27dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c27dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c27e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c27e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c27e4: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C27E4u;
    SET_GPR_U32(ctx, 31, 0x1C27ECu);
    ctx->pc = 0x1C27E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27E4u;
            // 0x1c27e8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27ECu; }
        if (ctx->pc != 0x1C27ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27ECu; }
        if (ctx->pc != 0x1C27ECu) { return; }
    }
    ctx->pc = 0x1C27ECu;
label_1c27ec:
    // 0x1c27ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c27f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c27f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c27f4: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x1c27f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c27f8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c27f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c27fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c27fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c2800: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c2800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c2804: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C2804u;
    SET_GPR_U32(ctx, 31, 0x1C280Cu);
    ctx->pc = 0x1C2808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2804u;
            // 0x1c2808: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C280Cu; }
        if (ctx->pc != 0x1C280Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C280Cu; }
        if (ctx->pc != 0x1C280Cu) { return; }
    }
    ctx->pc = 0x1C280Cu;
label_1c280c:
    // 0x1c280c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c2810: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c2810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c2814: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1c2814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2818: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c2818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c281c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2820: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c2820u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c2824: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c2824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c2828: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1c2828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1c282c: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C282Cu;
    SET_GPR_U32(ctx, 31, 0x1C2834u);
    ctx->pc = 0x1C2830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C282Cu;
            // 0x1c2830: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2834u; }
        if (ctx->pc != 0x1C2834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2834u; }
        if (ctx->pc != 0x1C2834u) { return; }
    }
    ctx->pc = 0x1C2834u;
label_1c2834:
    // 0x1c2834: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x1c2834u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2838: 0x0  nop
    ctx->pc = 0x1c2838u;
    // NOP
    // 0x1c283c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c283cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c2840: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C2840u;
    SET_GPR_U32(ctx, 31, 0x1C2848u);
    ctx->pc = 0x1C2844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2840u;
            // 0x1c2844: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2848u; }
        if (ctx->pc != 0x1C2848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C2848u; }
        if (ctx->pc != 0x1C2848u) { return; }
    }
    ctx->pc = 0x1C2848u;
label_1c2848:
    // 0x1c2848: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1c2848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1c284c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C284Cu;
    {
        const bool branch_taken_0x1c284c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1C2850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C284Cu;
            // 0x1c2850: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c284c) {
            ctx->pc = 0x1C285Cu;
            goto label_1c285c;
        }
    }
    ctx->pc = 0x1C2854u;
    // 0x1c2854: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1c2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c2858: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c2858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c285c:
    // 0x1c285c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c285cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2860: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c2860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2864: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1c2864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c2868: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1c2868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1c286c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c286cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2870: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x1c2870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c2874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c2878: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1c2878u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c287c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1c287cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x1c2880: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x1c2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c2884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c2888: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x1c2888u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
    // 0x1c288c: 0x0  nop
    ctx->pc = 0x1c288cu;
    // NOP
    // 0x1c2890: 0x0  nop
    ctx->pc = 0x1c2890u;
    // NOP
    // 0x1c2894: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C2894u;
    SET_GPR_U32(ctx, 31, 0x1C289Cu);
    ctx->pc = 0x1C2898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2894u;
            // 0x1c2898: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C289Cu; }
        if (ctx->pc != 0x1C289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C289Cu; }
        if (ctx->pc != 0x1C289Cu) { return; }
    }
    ctx->pc = 0x1C289Cu;
label_1c289c:
    // 0x1c289c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c28a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c28a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c28a4: 0x0  nop
    ctx->pc = 0x1c28a4u;
    // NOP
    // 0x1c28a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c28a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c28ac: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1c28acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1c28b0: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C28B0u;
    SET_GPR_U32(ctx, 31, 0x1C28B8u);
    ctx->pc = 0x1C28B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28B0u;
            // 0x1c28b4: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28B8u; }
        if (ctx->pc != 0x1C28B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C28B8u; }
        if (ctx->pc != 0x1C28B8u) { return; }
    }
    ctx->pc = 0x1C28B8u;
label_1c28b8:
    // 0x1c28b8: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x1c28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x1c28bc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1c28c0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c28c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c28c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c28c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c28c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c28c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c28cc: 0x0  nop
    ctx->pc = 0x1c28ccu;
    // NOP
    // 0x1c28d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c28d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c28d4: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x1c28d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1c28d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c28d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c28dc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c28dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c28e0: 0x1460ff91  bnez        $v1, . + 4 + (-0x6F << 2)
    ctx->pc = 0x1C28E0u;
    {
        const bool branch_taken_0x1c28e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C28E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C28E0u;
            // 0x1c28e4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c28e0) {
            ctx->pc = 0x1C2728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2728;
        }
    }
    ctx->pc = 0x1C28E8u;
label_1c28e8:
    // 0x1c28e8: 0xaea00050  sw          $zero, 0x50($s5)
    ctx->pc = 0x1c28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 0));
    // 0x1c28ec: 0xaea00054  sw          $zero, 0x54($s5)
    ctx->pc = 0x1c28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 0));
    // 0x1c28f0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1c28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c28f4: 0xaea40058  sw          $a0, 0x58($s5)
    ctx->pc = 0x1c28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 4));
    // 0x1c28f8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1c28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1c28fc: 0xaea4005c  sw          $a0, 0x5C($s5)
    ctx->pc = 0x1c28fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 4));
    // 0x1c2900: 0xaea30040  sw          $v1, 0x40($s5)
    ctx->pc = 0x1c2900u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
    // 0x1c2904: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c2904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c2908: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1c2908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1c290c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1c290cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2910: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1c2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1c2914: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1c2914u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2918: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1c2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c291c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c291cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2920: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c2920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c2924: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1c2924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2928: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c2928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c292c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1c292cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2930: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c2930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2934: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c2934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2938: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C293Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2938u;
            // 0x1c293c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2940u;
}
