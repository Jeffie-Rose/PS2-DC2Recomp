#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRotate__14CCameraControlFf
// Address: 0x2ec790 - 0x2ec830
void SetRotate__14CCameraControlFf_0x2ec790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRotate__14CCameraControlFf_0x2ec790");
#endif

    switch (ctx->pc) {
        case 0x2ec7b4u: goto label_2ec7b4;
        case 0x2ec7e4u: goto label_2ec7e4;
        case 0x2ec7ecu: goto label_2ec7ec;
        case 0x2ec7fcu: goto label_2ec7fc;
        case 0x2ec80cu: goto label_2ec80c;
        case 0x2ec81cu: goto label_2ec81c;
        default: break;
    }

    ctx->pc = 0x2ec790u;

    // 0x2ec790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ec790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ec794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ec794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ec798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec7a0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec7a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec7a4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2ec7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2ec7a8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2ec7a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2ec7ac: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x2EC7ACu;
    SET_GPR_U32(ctx, 31, 0x2EC7B4u);
    ctx->pc = 0x2EC7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC7ACu;
            // 0x2ec7b0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7B4u; }
        if (ctx->pc != 0x2EC7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7B4u; }
        if (ctx->pc != 0x2EC7B4u) { return; }
    }
    ctx->pc = 0x2EC7B4u;
label_2ec7b4:
    // 0x2ec7b4: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x2ec7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec7b8: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2ec7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2ec7bc: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x2ec7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec7c0: 0x24429340  addiu       $v0, $v0, -0x6CC0
    ctx->pc = 0x2ec7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939456));
    // 0x2ec7c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ec7c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec7c8: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2ec7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ec7cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ec7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ec7d0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2ec7d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ec7d4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2ec7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2ec7d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2ec7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2ec7dc: 0xc04c050  jal         func_130140
    ctx->pc = 0x2EC7DCu;
    SET_GPR_U32(ctx, 31, 0x2EC7E4u);
    ctx->pc = 0x2EC7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC7DCu;
            // 0x2ec7e0: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7E4u; }
        if (ctx->pc != 0x2EC7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7E4u; }
        if (ctx->pc != 0x2EC7E4u) { return; }
    }
    ctx->pc = 0x2EC7E4u;
label_2ec7e4:
    // 0x2ec7e4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2EC7E4u;
    SET_GPR_U32(ctx, 31, 0x2EC7ECu);
    ctx->pc = 0x2EC7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC7E4u;
            // 0x2ec7e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7ECu; }
        if (ctx->pc != 0x2EC7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7ECu; }
        if (ctx->pc != 0x2EC7ECu) { return; }
    }
    ctx->pc = 0x2EC7ECu;
label_2ec7ec:
    // 0x2ec7ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2ec7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ec7f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2ec7f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2ec7f4: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x2EC7F4u;
    SET_GPR_U32(ctx, 31, 0x2EC7FCu);
    ctx->pc = 0x2EC7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC7F4u;
            // 0x2ec7f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7FCu; }
        if (ctx->pc != 0x2EC7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC7FCu; }
        if (ctx->pc != 0x2EC7FCu) { return; }
    }
    ctx->pc = 0x2EC7FCu;
label_2ec7fc:
    // 0x2ec7fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ec7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ec800: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2ec800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ec804: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x2EC804u;
    SET_GPR_U32(ctx, 31, 0x2EC80Cu);
    ctx->pc = 0x2EC808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC804u;
            // 0x2ec808: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC80Cu; }
        if (ctx->pc != 0x2EC80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC80Cu; }
        if (ctx->pc != 0x2EC80Cu) { return; }
    }
    ctx->pc = 0x2EC80Cu;
label_2ec80c:
    // 0x2ec80c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2ec80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2ec810: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2ec810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2ec814: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2EC814u;
    SET_GPR_U32(ctx, 31, 0x2EC81Cu);
    ctx->pc = 0x2EC818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC814u;
            // 0x2ec818: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC81Cu; }
        if (ctx->pc != 0x2EC81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC81Cu; }
        if (ctx->pc != 0x2EC81Cu) { return; }
    }
    ctx->pc = 0x2EC81Cu;
label_2ec81c:
    // 0x2ec81c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ec81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec820: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec824: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ec824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec828: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC828u;
            // 0x2ec82c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC830u;
}
