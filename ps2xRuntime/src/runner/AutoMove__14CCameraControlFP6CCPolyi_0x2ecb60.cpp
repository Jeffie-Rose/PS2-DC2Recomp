#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoMove__14CCameraControlFP6CCPolyi
// Address: 0x2ecb60 - 0x2ece64
void AutoMove__14CCameraControlFP6CCPolyi_0x2ecb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoMove__14CCameraControlFP6CCPolyi_0x2ecb60");
#endif

    switch (ctx->pc) {
        case 0x2ecb98u: goto label_2ecb98;
        case 0x2ecbe8u: goto label_2ecbe8;
        case 0x2ecbf8u: goto label_2ecbf8;
        case 0x2ecc00u: goto label_2ecc00;
        case 0x2ecc54u: goto label_2ecc54;
        case 0x2ecc64u: goto label_2ecc64;
        case 0x2ecc90u: goto label_2ecc90;
        case 0x2eccc8u: goto label_2eccc8;
        case 0x2eccd0u: goto label_2eccd0;
        case 0x2ecce8u: goto label_2ecce8;
        case 0x2ecd00u: goto label_2ecd00;
        case 0x2ecd1cu: goto label_2ecd1c;
        case 0x2ecd28u: goto label_2ecd28;
        case 0x2ecd38u: goto label_2ecd38;
        case 0x2ecd48u: goto label_2ecd48;
        case 0x2ecd58u: goto label_2ecd58;
        case 0x2ecd88u: goto label_2ecd88;
        case 0x2ecda4u: goto label_2ecda4;
        case 0x2ecdb4u: goto label_2ecdb4;
        case 0x2ecdc4u: goto label_2ecdc4;
        case 0x2ecdd4u: goto label_2ecdd4;
        case 0x2ece00u: goto label_2ece00;
        default: break;
    }

    ctx->pc = 0x2ecb60u;

    // 0x2ecb60: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2ecb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x2ecb64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ecb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ecb68: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2ecb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2ecb6c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2ecb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2ecb70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2ecb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2ecb74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ecb74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ecb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ecb7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ecb7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ecb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ecb84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ecb84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ecb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ecb8c: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x2ecb8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ecb90: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2ECB90u;
    SET_GPR_U32(ctx, 31, 0x2ECB98u);
    ctx->pc = 0x2ECB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB90u;
            // 0x2ecb94: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB98u; }
        if (ctx->pc != 0x2ECB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB98u; }
        if (ctx->pc != 0x2ECB98u) { return; }
    }
    ctx->pc = 0x2ECB98u;
label_2ecb98:
    // 0x2ecb98: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2ecb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
    // 0x2ecb9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECB9Cu;
    {
        const bool branch_taken_0x2ecb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb9c) {
            ctx->pc = 0x2ECBC4u;
            goto label_2ecbc4;
        }
    }
    ctx->pc = 0x2ECBA4u;
    // 0x2ecba4: 0x7a8301d0  lq          $v1, 0x1D0($s4)
    ctx->pc = 0x2ecba4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 464)));
    // 0x2ecba8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2ecba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ecbac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ecbacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2ecbb0: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x2ecbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecbb4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2ecbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecbb8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecbb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecbbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECBBCu;
    {
        const bool branch_taken_0x2ecbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECBBCu;
            // 0x2ecbc0: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbbc) {
            ctx->pc = 0x2ECBD0u;
            goto label_2ecbd0;
        }
    }
    ctx->pc = 0x2ECBC4u;
label_2ecbc4:
    // 0x2ecbc4: 0x7a830030  lq          $v1, 0x30($s4)
    ctx->pc = 0x2ecbc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2ecbc8: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2ecbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ecbcc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ecbccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2ecbd0:
    // 0x2ecbd0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2ecbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2ecbd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ecbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ecbd8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2ecbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ecbdc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2ecbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ecbe0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECBE0u;
    SET_GPR_U32(ctx, 31, 0x2ECBE8u);
    ctx->pc = 0x2ECBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECBE0u;
            // 0x2ecbe4: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECBE8u; }
        if (ctx->pc != 0x2ECBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECBE8u; }
        if (ctx->pc != 0x2ECBE8u) { return; }
    }
    ctx->pc = 0x2ECBE8u;
label_2ecbe8:
    // 0x2ecbe8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ecbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ecbec: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2ecbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ecbf0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECBF0u;
    SET_GPR_U32(ctx, 31, 0x2ECBF8u);
    ctx->pc = 0x2ECBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECBF0u;
            // 0x2ecbf4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECBF8u; }
        if (ctx->pc != 0x2ECBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECBF8u; }
        if (ctx->pc != 0x2ECBF8u) { return; }
    }
    ctx->pc = 0x2ECBF8u;
label_2ecbf8:
    // 0x2ecbf8: 0xc04c000  jal         func_130000
    ctx->pc = 0x2ECBF8u;
    SET_GPR_U32(ctx, 31, 0x2ECC00u);
    ctx->pc = 0x2ECBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECBF8u;
            // 0x2ecbfc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130000u;
    if (runtime->hasFunction(0x130000u)) {
        auto targetFn = runtime->lookupFunction(0x130000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC00u; }
        if (ctx->pc != 0x2ECC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPf_0x130000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC00u; }
        if (ctx->pc != 0x2ECC00u) { return; }
    }
    ctx->pc = 0x2ECC00u;
label_2ecc00:
    // 0x2ecc00: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2ecc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2ecc04: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ecc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ecc08: 0x34446666  ori         $a0, $v0, 0x6666
    ctx->pc = 0x2ecc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2ecc0c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2ecc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecc10: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2ecc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ecc14: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2ecc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ecc18: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x2ecc18u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecc1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ecc1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecc20: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x2ecc20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ecc24: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2ecc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ecc28: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x2ecc28u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2ecc2c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2ecc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ecc30: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x2ecc30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x2ecc34: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2ecc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ecc38: 0x7a860020  lq          $a2, 0x20($s4)
    ctx->pc = 0x2ecc38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2ecc3c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2ecc3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2ecc40: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2ecc40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2ecc44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2ecc44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2ecc48: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ecc48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecc4c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2ECC4Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC54u);
    ctx->pc = 0x2ECC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC4Cu;
            // 0x2ecc50: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC54u; }
        if (ctx->pc != 0x2ECC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC54u; }
        if (ctx->pc != 0x2ECC54u) { return; }
    }
    ctx->pc = 0x2ECC54u;
label_2ecc54:
    // 0x2ecc54: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2ecc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ecc58: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2ecc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2ecc5c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECC5Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC64u);
    ctx->pc = 0x2ECC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC5Cu;
            // 0x2ecc60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC64u; }
        if (ctx->pc != 0x2ECC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC64u; }
        if (ctx->pc != 0x2ECC64u) { return; }
    }
    ctx->pc = 0x2ECC64u;
label_2ecc64:
    // 0x2ecc64: 0xe7b4012c  swc1        $f20, 0x12C($sp)
    ctx->pc = 0x2ecc64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2ecc68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ecc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ecc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc70: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2ecc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ecc74: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2ecc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecc78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ecc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecc7c: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x2ecc7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x2ecc80: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x2ecc80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ecc84: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecc84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecc88: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x2ECC88u;
    SET_GPR_U32(ctx, 31, 0x2ECC90u);
    ctx->pc = 0x2ECC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC88u;
            // 0x2ecc8c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC90u; }
        if (ctx->pc != 0x2ECC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECC90u; }
        if (ctx->pc != 0x2ECC90u) { return; }
    }
    ctx->pc = 0x2ECC90u;
label_2ecc90:
    // 0x2ecc90: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECC90u;
    {
        const bool branch_taken_0x2ecc90 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2ECC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC90u;
            // 0x2ecc94: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc90) {
            ctx->pc = 0x2ECCA0u;
            goto label_2ecca0;
        }
    }
    ctx->pc = 0x2ECC98u;
    // 0x2ecc98: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2ECC98u;
    {
        const bool branch_taken_0x2ecc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECC98u;
            // 0x2ecc9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc98) {
            ctx->pc = 0x2ECE38u;
            goto label_2ece38;
        }
    }
    ctx->pc = 0x2ECCA0u;
label_2ecca0:
    // 0x2ecca0: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2ecca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ecca4: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2ecca4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ecca8: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2ecca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2eccac: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2eccacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2eccb0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2eccb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2eccb4: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x2eccb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x2eccb8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2eccb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eccbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2eccbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2eccc0: 0xc04c050  jal         func_130140
    ctx->pc = 0x2ECCC0u;
    SET_GPR_U32(ctx, 31, 0x2ECCC8u);
    ctx->pc = 0x2ECCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCC0u;
            // 0x2eccc4: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCC8u; }
        if (ctx->pc != 0x2ECCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCC8u; }
        if (ctx->pc != 0x2ECCC8u) { return; }
    }
    ctx->pc = 0x2ECCC8u;
label_2eccc8:
    // 0x2eccc8: 0xc04c050  jal         func_130140
    ctx->pc = 0x2ECCC8u;
    SET_GPR_U32(ctx, 31, 0x2ECCD0u);
    ctx->pc = 0x2ECCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCC8u;
            // 0x2ecccc: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCD0u; }
        if (ctx->pc != 0x2ECCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCD0u; }
        if (ctx->pc != 0x2ECCD0u) { return; }
    }
    ctx->pc = 0x2ECCD0u;
label_2eccd0:
    // 0x2eccd0: 0x3c023c86  lui         $v0, 0x3C86
    ctx->pc = 0x2eccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15494 << 16));
    // 0x2eccd4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2eccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2eccd8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2eccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2eccdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eccdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ecce0: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x2ECCE0u;
    SET_GPR_U32(ctx, 31, 0x2ECCE8u);
    ctx->pc = 0x2ECCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCE0u;
            // 0x2ecce4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCE8u; }
        if (ctx->pc != 0x2ECCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCE8u; }
        if (ctx->pc != 0x2ECCE8u) { return; }
    }
    ctx->pc = 0x2ECCE8u;
label_2ecce8:
    // 0x2ecce8: 0x3c02bc86  lui         $v0, 0xBC86
    ctx->pc = 0x2ecce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48262 << 16));
    // 0x2eccec: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2eccecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2eccf0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2eccf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2eccf4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eccf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eccf8: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x2ECCF8u;
    SET_GPR_U32(ctx, 31, 0x2ECD00u);
    ctx->pc = 0x2ECCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCF8u;
            // 0x2eccfc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD00u; }
        if (ctx->pc != 0x2ECD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD00u; }
        if (ctx->pc != 0x2ECD00u) { return; }
    }
    ctx->pc = 0x2ECD00u;
label_2ecd00:
    // 0x2ecd00: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2ecd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ecd04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ecd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd08: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ecd08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecd0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ecd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd10: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2ecd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2ecd14: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ecd14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2ecd18: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2ecd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2ecd1c:
    // 0x2ecd1c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2ecd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2ecd20: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2ECD20u;
    SET_GPR_U32(ctx, 31, 0x2ECD28u);
    ctx->pc = 0x2ECD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD20u;
            // 0x2ecd24: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD28u; }
        if (ctx->pc != 0x2ECD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD28u; }
        if (ctx->pc != 0x2ECD28u) { return; }
    }
    ctx->pc = 0x2ECD28u;
label_2ecd28:
    // 0x2ecd28: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2ecd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2ecd2c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2ecd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecd30: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECD30u;
    SET_GPR_U32(ctx, 31, 0x2ECD38u);
    ctx->pc = 0x2ECD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD30u;
            // 0x2ecd34: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD38u; }
        if (ctx->pc != 0x2ECD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD38u; }
        if (ctx->pc != 0x2ECD38u) { return; }
    }
    ctx->pc = 0x2ECD38u;
label_2ecd38:
    // 0x2ecd38: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ecd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ecd3c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2ecd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ecd40: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2ECD40u;
    SET_GPR_U32(ctx, 31, 0x2ECD48u);
    ctx->pc = 0x2ECD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD40u;
            // 0x2ecd44: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD48u; }
        if (ctx->pc != 0x2ECD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD48u; }
        if (ctx->pc != 0x2ECD48u) { return; }
    }
    ctx->pc = 0x2ECD48u;
label_2ecd48:
    // 0x2ecd48: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ecd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ecd4c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2ecd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecd50: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECD50u;
    SET_GPR_U32(ctx, 31, 0x2ECD58u);
    ctx->pc = 0x2ECD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD50u;
            // 0x2ecd54: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD58u; }
        if (ctx->pc != 0x2ECD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD58u; }
        if (ctx->pc != 0x2ECD58u) { return; }
    }
    ctx->pc = 0x2ECD58u;
label_2ecd58:
    // 0x2ecd58: 0x27b501cc  addiu       $s5, $sp, 0x1CC
    ctx->pc = 0x2ecd58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    // 0x2ecd5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ecd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd60: 0xe6b40000  swc1        $f20, 0x0($s5)
    ctx->pc = 0x2ecd60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2ecd64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ecd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd68: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2ecd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ecd6c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2ecd6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecd70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ecd70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecd74: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x2ecd74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x2ecd78: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x2ecd78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ecd7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecd7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd80: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x2ECD80u;
    SET_GPR_U32(ctx, 31, 0x2ECD88u);
    ctx->pc = 0x2ECD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD80u;
            // 0x2ecd84: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD88u; }
        if (ctx->pc != 0x2ECD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD88u; }
        if (ctx->pc != 0x2ECD88u) { return; }
    }
    ctx->pc = 0x2ECD88u;
label_2ecd88:
    // 0x2ecd88: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECD88u;
    {
        const bool branch_taken_0x2ecd88 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2ECD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD88u;
            // 0x2ecd8c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd88) {
            ctx->pc = 0x2ECD98u;
            goto label_2ecd98;
        }
    }
    ctx->pc = 0x2ECD90u;
    // 0x2ecd90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2ECD90u;
    {
        const bool branch_taken_0x2ecd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD90u;
            // 0x2ecd94: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd90) {
            ctx->pc = 0x2ECE20u;
            goto label_2ece20;
        }
    }
    ctx->pc = 0x2ECD98u;
label_2ecd98:
    // 0x2ecd98: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x2ecd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2ecd9c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2ECD9Cu;
    SET_GPR_U32(ctx, 31, 0x2ECDA4u);
    ctx->pc = 0x2ECDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD9Cu;
            // 0x2ecda0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDA4u; }
        if (ctx->pc != 0x2ECDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDA4u; }
        if (ctx->pc != 0x2ECDA4u) { return; }
    }
    ctx->pc = 0x2ECDA4u;
label_2ecda4:
    // 0x2ecda4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2ecda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2ecda8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2ecda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecdac: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECDACu;
    SET_GPR_U32(ctx, 31, 0x2ECDB4u);
    ctx->pc = 0x2ECDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDACu;
            // 0x2ecdb0: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDB4u; }
        if (ctx->pc != 0x2ECDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDB4u; }
        if (ctx->pc != 0x2ECDB4u) { return; }
    }
    ctx->pc = 0x2ECDB4u;
label_2ecdb4:
    // 0x2ecdb4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ecdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ecdb8: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2ecdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ecdbc: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2ECDBCu;
    SET_GPR_U32(ctx, 31, 0x2ECDC4u);
    ctx->pc = 0x2ECDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDBCu;
            // 0x2ecdc0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDC4u; }
        if (ctx->pc != 0x2ECDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDC4u; }
        if (ctx->pc != 0x2ECDC4u) { return; }
    }
    ctx->pc = 0x2ECDC4u;
label_2ecdc4:
    // 0x2ecdc4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2ecdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ecdc8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2ecdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecdcc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECDCCu;
    SET_GPR_U32(ctx, 31, 0x2ECDD4u);
    ctx->pc = 0x2ECDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDCCu;
            // 0x2ecdd0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDD4u; }
        if (ctx->pc != 0x2ECDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDD4u; }
        if (ctx->pc != 0x2ECDD4u) { return; }
    }
    ctx->pc = 0x2ECDD4u;
label_2ecdd4:
    // 0x2ecdd4: 0xe6b40000  swc1        $f20, 0x0($s5)
    ctx->pc = 0x2ecdd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2ecdd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ecdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecddc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ecddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecde0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2ecde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2ecde4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2ecde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecde8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ecde8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecdec: 0x27a901dc  addiu       $t1, $sp, 0x1DC
    ctx->pc = 0x2ecdecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
    // 0x2ecdf0: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x2ecdf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ecdf4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ecdf4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdf8: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x2ECDF8u;
    SET_GPR_U32(ctx, 31, 0x2ECE00u);
    ctx->pc = 0x2ECDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDF8u;
            // 0x2ecdfc: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECE00u; }
        if (ctx->pc != 0x2ECE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECE00u; }
        if (ctx->pc != 0x2ECE00u) { return; }
    }
    ctx->pc = 0x2ECE00u;
label_2ece00:
    // 0x2ece00: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECE00u;
    {
        const bool branch_taken_0x2ece00 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ece00) {
            ctx->pc = 0x2ECE10u;
            goto label_2ece10;
        }
    }
    ctx->pc = 0x2ECE08u;
    // 0x2ece08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECE08u;
    {
        const bool branch_taken_0x2ece08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECE08u;
            // 0x2ece0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece08) {
            ctx->pc = 0x2ECE20u;
            goto label_2ece20;
        }
    }
    ctx->pc = 0x2ECE10u;
label_2ece10:
    // 0x2ece10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ece10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ece14: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x2ece14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2ece18: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2ECE18u;
    {
        const bool branch_taken_0x2ece18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECE18u;
            // 0x2ece1c: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece18) {
            ctx->pc = 0x2ECD1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ecd1c;
        }
    }
    ctx->pc = 0x2ECE20u;
label_2ece20:
    // 0x2ece20: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECE20u;
    {
        const bool branch_taken_0x2ece20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECE20u;
            // 0x2ece24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece20) {
            ctx->pc = 0x2ECE38u;
            goto label_2ece38;
        }
    }
    ctx->pc = 0x2ECE28u;
    // 0x2ece28: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x2ece28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2ece2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ece2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ece30: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2ece30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ece34: 0x7e830020  sq          $v1, 0x20($s4)
    ctx->pc = 0x2ece34u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
label_2ece38:
    // 0x2ece38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ece38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ece3c: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x2ece3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ece40: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2ece40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ece44: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2ece44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ece48: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2ece48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ece4c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2ece4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ece50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ece50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ece54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2ece54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ece58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ece58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ece5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECE5Cu;
            // 0x2ece60: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECE64u;
}
