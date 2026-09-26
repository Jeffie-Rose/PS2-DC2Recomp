#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraMatrix__14CCameraControlFPA4_f
// Address: 0x2ed250 - 0x2ed318
void GetCameraMatrix__14CCameraControlFPA4_f_0x2ed250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraMatrix__14CCameraControlFPA4_f_0x2ed250");
#endif

    switch (ctx->pc) {
        case 0x2ed278u: goto label_2ed278;
        case 0x2ed284u: goto label_2ed284;
        case 0x2ed2e4u: goto label_2ed2e4;
        case 0x2ed2f0u: goto label_2ed2f0;
        case 0x2ed304u: goto label_2ed304;
        default: break;
    }

    ctx->pc = 0x2ed250u;

    // 0x2ed250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ed250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ed254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ed258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ed258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ed25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ed25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ed260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ed264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed268: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ed268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ed26c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2ed26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ed270: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ED270u;
    SET_GPR_U32(ctx, 31, 0x2ED278u);
    ctx->pc = 0x2ED274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED270u;
            // 0x2ed274: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED278u; }
        if (ctx->pc != 0x2ED278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED278u; }
        if (ctx->pc != 0x2ED278u) { return; }
    }
    ctx->pc = 0x2ED278u;
label_2ed278:
    // 0x2ed278: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ed278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ed27c: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x2ED27Cu;
    SET_GPR_U32(ctx, 31, 0x2ED284u);
    ctx->pc = 0x2ED280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED27Cu;
            // 0x2ed280: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED284u; }
        if (ctx->pc != 0x2ED284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED284u; }
        if (ctx->pc != 0x2ED284u) { return; }
    }
    ctx->pc = 0x2ED284u;
label_2ed284:
    // 0x2ed284: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ed284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed288: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ed288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ed28c: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x2ed28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2ed290: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x2ed290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2ed294: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ed294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed298: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ed298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed29c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2ed29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2ed2a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ed2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed2a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2ed2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2ed2a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ed2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed2ac: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2ed2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2ed2b0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2ed2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed2b4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2ed2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed2b8: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x2ed2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ed2bc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ed2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ed2c0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2ed2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed2c4: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x2ed2c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ed2c8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2ed2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2ed2cc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2ed2ccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2ed2d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2ed2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ed2d4: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x2ed2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2ed2d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ed2d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ed2dc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2ED2DCu;
    SET_GPR_U32(ctx, 31, 0x2ED2E4u);
    ctx->pc = 0x2ED2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED2DCu;
            // 0x2ed2e0: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED2E4u; }
        if (ctx->pc != 0x2ED2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED2E4u; }
        if (ctx->pc != 0x2ED2E4u) { return; }
    }
    ctx->pc = 0x2ED2E4u;
label_2ed2e4:
    // 0x2ed2e4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ed2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ed2e8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2ED2E8u;
    SET_GPR_U32(ctx, 31, 0x2ED2F0u);
    ctx->pc = 0x2ED2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED2E8u;
            // 0x2ed2ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED2F0u; }
        if (ctx->pc != 0x2ED2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED2F0u; }
        if (ctx->pc != 0x2ED2F0u) { return; }
    }
    ctx->pc = 0x2ED2F0u;
label_2ed2f0:
    // 0x2ed2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed2f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ed2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed2f8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2ed2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ed2fc: 0xc041d3e  jal         func_1074F8
    ctx->pc = 0x2ED2FCu;
    SET_GPR_U32(ctx, 31, 0x2ED304u);
    ctx->pc = 0x2ED300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED2FCu;
            // 0x2ed300: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1074F8u;
    if (runtime->hasFunction(0x1074F8u)) {
        auto targetFn = runtime->lookupFunction(0x1074F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED304u; }
        if (ctx->pc != 0x2ED304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CameraMatrix_0x1074f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED304u; }
        if (ctx->pc != 0x2ED304u) { return; }
    }
    ctx->pc = 0x2ED304u;
label_2ed304:
    // 0x2ed304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed310: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED310u;
            // 0x2ed314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED318u;
}
