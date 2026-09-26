#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BombCheck__FP6CScene
// Address: 0x316860 - 0x3169a8
void BombCheck__FP6CScene_0x316860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BombCheck__FP6CScene_0x316860");
#endif

    switch (ctx->pc) {
        case 0x316860u: goto label_316860;
        case 0x316864u: goto label_316864;
        case 0x316868u: goto label_316868;
        case 0x31686cu: goto label_31686c;
        case 0x316870u: goto label_316870;
        case 0x316874u: goto label_316874;
        case 0x316878u: goto label_316878;
        case 0x31687cu: goto label_31687c;
        case 0x316880u: goto label_316880;
        case 0x316884u: goto label_316884;
        case 0x316888u: goto label_316888;
        case 0x31688cu: goto label_31688c;
        case 0x316890u: goto label_316890;
        case 0x316894u: goto label_316894;
        case 0x316898u: goto label_316898;
        case 0x31689cu: goto label_31689c;
        case 0x3168a0u: goto label_3168a0;
        case 0x3168a4u: goto label_3168a4;
        case 0x3168a8u: goto label_3168a8;
        case 0x3168acu: goto label_3168ac;
        case 0x3168b0u: goto label_3168b0;
        case 0x3168b4u: goto label_3168b4;
        case 0x3168b8u: goto label_3168b8;
        case 0x3168bcu: goto label_3168bc;
        case 0x3168c0u: goto label_3168c0;
        case 0x3168c4u: goto label_3168c4;
        case 0x3168c8u: goto label_3168c8;
        case 0x3168ccu: goto label_3168cc;
        case 0x3168d0u: goto label_3168d0;
        case 0x3168d4u: goto label_3168d4;
        case 0x3168d8u: goto label_3168d8;
        case 0x3168dcu: goto label_3168dc;
        case 0x3168e0u: goto label_3168e0;
        case 0x3168e4u: goto label_3168e4;
        case 0x3168e8u: goto label_3168e8;
        case 0x3168ecu: goto label_3168ec;
        case 0x3168f0u: goto label_3168f0;
        case 0x3168f4u: goto label_3168f4;
        case 0x3168f8u: goto label_3168f8;
        case 0x3168fcu: goto label_3168fc;
        case 0x316900u: goto label_316900;
        case 0x316904u: goto label_316904;
        case 0x316908u: goto label_316908;
        case 0x31690cu: goto label_31690c;
        case 0x316910u: goto label_316910;
        case 0x316914u: goto label_316914;
        case 0x316918u: goto label_316918;
        case 0x31691cu: goto label_31691c;
        case 0x316920u: goto label_316920;
        case 0x316924u: goto label_316924;
        case 0x316928u: goto label_316928;
        case 0x31692cu: goto label_31692c;
        case 0x316930u: goto label_316930;
        case 0x316934u: goto label_316934;
        case 0x316938u: goto label_316938;
        case 0x31693cu: goto label_31693c;
        case 0x316940u: goto label_316940;
        case 0x316944u: goto label_316944;
        case 0x316948u: goto label_316948;
        case 0x31694cu: goto label_31694c;
        case 0x316950u: goto label_316950;
        case 0x316954u: goto label_316954;
        case 0x316958u: goto label_316958;
        case 0x31695cu: goto label_31695c;
        case 0x316960u: goto label_316960;
        case 0x316964u: goto label_316964;
        case 0x316968u: goto label_316968;
        case 0x31696cu: goto label_31696c;
        case 0x316970u: goto label_316970;
        case 0x316974u: goto label_316974;
        case 0x316978u: goto label_316978;
        case 0x31697cu: goto label_31697c;
        case 0x316980u: goto label_316980;
        case 0x316984u: goto label_316984;
        case 0x316988u: goto label_316988;
        case 0x31698cu: goto label_31698c;
        case 0x316990u: goto label_316990;
        case 0x316994u: goto label_316994;
        case 0x316998u: goto label_316998;
        case 0x31699cu: goto label_31699c;
        case 0x3169a0u: goto label_3169a0;
        case 0x3169a4u: goto label_3169a4;
        default: break;
    }

    ctx->pc = 0x316860u;

label_316860:
    // 0x316860: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x316860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_316864:
    // 0x316864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x316864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_316868:
    // 0x316868: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x316868u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31686c:
    // 0x31686c: 0x8f84a284  lw          $a0, -0x5D7C($gp)
    ctx->pc = 0x31686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943364)));
label_316870:
    // 0x316870: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316874:
    // 0x316874: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316878:
    // 0x316878: 0x320f809  jalr        $t9
label_31687c:
    if (ctx->pc == 0x31687Cu) {
        ctx->pc = 0x31687Cu;
            // 0x31687c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x316880u;
        goto label_316880;
    }
    ctx->pc = 0x316878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316880u);
        ctx->pc = 0x31687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316878u;
            // 0x31687c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316880u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316880u; }
            if (ctx->pc != 0x316880u) { return; }
        }
        }
    }
    ctx->pc = 0x316880u;
label_316880:
    // 0x316880: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x316880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_316884:
    // 0x316884: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x316884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_316888:
    // 0x316888: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x316888u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_31688c:
    // 0x31688c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31688cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_316890:
    // 0x316890: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x316890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_316894:
    // 0x316894: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x316894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316898:
    // 0x316898: 0x8f84a290  lw          $a0, -0x5D70($gp)
    ctx->pc = 0x316898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943376)));
label_31689c:
    // 0x31689c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31689cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3168a0:
    // 0x3168a0: 0x0  nop
    ctx->pc = 0x3168a0u;
    // NOP
label_3168a4:
    // 0x3168a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3168a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3168a8:
    // 0x3168a8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3168a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3168ac:
    // 0x3168ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3168acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3168b0:
    // 0x3168b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3168b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3168b4:
    // 0x3168b4: 0x320f809  jalr        $t9
label_3168b8:
    if (ctx->pc == 0x3168B8u) {
        ctx->pc = 0x3168B8u;
            // 0x3168b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3168BCu;
        goto label_3168bc;
    }
    ctx->pc = 0x3168B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3168BCu);
        ctx->pc = 0x3168B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3168B4u;
            // 0x3168b8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3168BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3168BCu; }
            if (ctx->pc != 0x3168BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3168BCu;
label_3168bc:
    // 0x3168bc: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x3168bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_3168c0:
    // 0x3168c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3168c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3168c4:
    // 0x3168c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3168c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3168c8:
    // 0x3168c8: 0xc041c38  jal         func_1070E0
label_3168cc:
    if (ctx->pc == 0x3168CCu) {
        ctx->pc = 0x3168CCu;
            // 0x3168cc: 0x24c6f990  addiu       $a2, $a2, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965648));
        ctx->pc = 0x3168D0u;
        goto label_3168d0;
    }
    ctx->pc = 0x3168C8u;
    SET_GPR_U32(ctx, 31, 0x3168D0u);
    ctx->pc = 0x3168CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3168C8u;
            // 0x3168cc: 0x24c6f990  addiu       $a2, $a2, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168D0u; }
        if (ctx->pc != 0x3168D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168D0u; }
        if (ctx->pc != 0x3168D0u) { return; }
    }
    ctx->pc = 0x3168D0u;
label_3168d0:
    // 0x3168d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3168d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3168d4:
    // 0x3168d4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3168d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3168d8:
    // 0x3168d8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3168d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3168dc:
    // 0x3168dc: 0xc04bd7c  jal         func_12F5F0
label_3168e0:
    if (ctx->pc == 0x3168E0u) {
        ctx->pc = 0x3168E0u;
            // 0x3168e0: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3168E4u;
        goto label_3168e4;
    }
    ctx->pc = 0x3168DCu;
    SET_GPR_U32(ctx, 31, 0x3168E4u);
    ctx->pc = 0x3168E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3168DCu;
            // 0x3168e0: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168E4u; }
        if (ctx->pc != 0x3168E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168E4u; }
        if (ctx->pc != 0x3168E4u) { return; }
    }
    ctx->pc = 0x3168E4u;
label_3168e4:
    // 0x3168e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3168e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3168e8:
    // 0x3168e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3168e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3168ec:
    // 0x3168ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3168ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3168f0:
    // 0x3168f0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3168f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3168f4:
    // 0x3168f4: 0xc04bd7c  jal         func_12F5F0
label_3168f8:
    if (ctx->pc == 0x3168F8u) {
        ctx->pc = 0x3168F8u;
            // 0x3168f8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3168FCu;
        goto label_3168fc;
    }
    ctx->pc = 0x3168F4u;
    SET_GPR_U32(ctx, 31, 0x3168FCu);
    ctx->pc = 0x3168F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3168F4u;
            // 0x3168f8: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168FCu; }
        if (ctx->pc != 0x3168FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168FCu; }
        if (ctx->pc != 0x3168FCu) { return; }
    }
    ctx->pc = 0x3168FCu;
label_3168fc:
    // 0x3168fc: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x3168fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_316900:
    // 0x316900: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_316904:
    // 0x316904: 0x0  nop
    ctx->pc = 0x316904u;
    // NOP
label_316908:
    // 0x316908: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x316908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31690c:
    // 0x31690c: 0x0  nop
    ctx->pc = 0x31690cu;
    // NOP
label_316910:
    // 0x316910: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_316914:
    if (ctx->pc == 0x316914u) {
        ctx->pc = 0x316914u;
            // 0x316914: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x316918u;
        goto label_316918;
    }
    ctx->pc = 0x316910u;
    {
        const bool branch_taken_0x316910 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x316914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316910u;
            // 0x316914: 0x3c0341f0  lui         $v1, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316910) {
            ctx->pc = 0x316930u;
            goto label_316930;
        }
    }
    ctx->pc = 0x316918u;
label_316918:
    // 0x316918: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31691c:
    // 0x31691c: 0x0  nop
    ctx->pc = 0x31691cu;
    // NOP
label_316920:
    // 0x316920: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x316920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316924:
    // 0x316924: 0x0  nop
    ctx->pc = 0x316924u;
    // NOP
label_316928:
    // 0x316928: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_31692c:
    if (ctx->pc == 0x31692Cu) {
        ctx->pc = 0x316930u;
        goto label_316930;
    }
    ctx->pc = 0x316928u;
    {
        const bool branch_taken_0x316928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x316928) {
            ctx->pc = 0x316938u;
            goto label_316938;
        }
    }
    ctx->pc = 0x316930u;
label_316930:
    // 0x316930: 0xc0c5878  jal         func_3161E0
label_316934:
    if (ctx->pc == 0x316934u) {
        ctx->pc = 0x316938u;
        goto label_316938;
    }
    ctx->pc = 0x316930u;
    SET_GPR_U32(ctx, 31, 0x316938u);
    ctx->pc = 0x3161E0u;
    if (runtime->hasFunction(0x3161E0u)) {
        auto targetFn = runtime->lookupFunction(0x3161E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316938u; }
        if (ctx->pc != 0x316938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BombBomb__Fv_0x3161e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316938u; }
        if (ctx->pc != 0x316938u) { return; }
    }
    ctx->pc = 0x316938u;
label_316938:
    // 0x316938: 0x8f83a314  lw          $v1, -0x5CEC($gp)
    ctx->pc = 0x316938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943508)));
label_31693c:
    // 0x31693c: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_316940:
    if (ctx->pc == 0x316940u) {
        ctx->pc = 0x316940u;
            // 0x316940: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x316944u;
        goto label_316944;
    }
    ctx->pc = 0x31693Cu;
    {
        const bool branch_taken_0x31693c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x316940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31693Cu;
            // 0x316940: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31693c) {
            ctx->pc = 0x316998u;
            goto label_316998;
        }
    }
    ctx->pc = 0x316944u;
label_316944:
    // 0x316944: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_316948:
    if (ctx->pc == 0x316948u) {
        ctx->pc = 0x316948u;
            // 0x316948: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x31694Cu;
        goto label_31694c;
    }
    ctx->pc = 0x316944u;
    {
        const bool branch_taken_0x316944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x316948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316944u;
            // 0x316948: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316944) {
            ctx->pc = 0x316998u;
            goto label_316998;
        }
    }
    ctx->pc = 0x31694Cu;
label_31694c:
    // 0x31694c: 0xc04c018  jal         func_130060
label_316950:
    if (ctx->pc == 0x316950u) {
        ctx->pc = 0x316950u;
            // 0x316950: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x316954u;
        goto label_316954;
    }
    ctx->pc = 0x31694Cu;
    SET_GPR_U32(ctx, 31, 0x316954u);
    ctx->pc = 0x316950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31694Cu;
            // 0x316950: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316954u; }
        if (ctx->pc != 0x316954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316954u; }
        if (ctx->pc != 0x316954u) { return; }
    }
    ctx->pc = 0x316954u;
label_316954:
    // 0x316954: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x316954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
label_316958:
    // 0x316958: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x316958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31695c:
    // 0x31695c: 0x0  nop
    ctx->pc = 0x31695cu;
    // NOP
label_316960:
    // 0x316960: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x316960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316964:
    // 0x316964: 0x0  nop
    ctx->pc = 0x316964u;
    // NOP
label_316968:
    // 0x316968: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_31696c:
    if (ctx->pc == 0x31696Cu) {
        ctx->pc = 0x316970u;
        goto label_316970;
    }
    ctx->pc = 0x316968u;
    {
        const bool branch_taken_0x316968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x316968) {
            ctx->pc = 0x316998u;
            goto label_316998;
        }
    }
    ctx->pc = 0x316970u;
label_316970:
    // 0x316970: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x316970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316974:
    // 0x316974: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x316974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316978:
    // 0x316978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x316978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31697c:
    // 0x31697c: 0x0  nop
    ctx->pc = 0x31697cu;
    // NOP
label_316980:
    // 0x316980: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_316984:
    if (ctx->pc == 0x316984u) {
        ctx->pc = 0x316984u;
            // 0x316984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316988u;
        goto label_316988;
    }
    ctx->pc = 0x316980u;
    {
        const bool branch_taken_0x316980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316980u;
            // 0x316984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316980) {
            ctx->pc = 0x31698Cu;
            goto label_31698c;
        }
    }
    ctx->pc = 0x316988u;
label_316988:
    // 0x316988: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x316988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31698c:
    // 0x31698c: 0xc0c54fc  jal         func_3153F0
label_316990:
    if (ctx->pc == 0x316990u) {
        ctx->pc = 0x316994u;
        goto label_316994;
    }
    ctx->pc = 0x31698Cu;
    SET_GPR_U32(ctx, 31, 0x316994u);
    ctx->pc = 0x3153F0u;
    if (runtime->hasFunction(0x3153F0u)) {
        auto targetFn = runtime->lookupFunction(0x3153F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316994u; }
        if (ctx->pc != 0x316994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuggyDamage__Fi_0x3153f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316994u; }
        if (ctx->pc != 0x316994u) { return; }
    }
    ctx->pc = 0x316994u;
label_316994:
    // 0x316994: 0xaf80a314  sw          $zero, -0x5CEC($gp)
    ctx->pc = 0x316994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943508), GPR_U32(ctx, 0));
label_316998:
    // 0x316998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x316998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31699c:
    // 0x31699c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31699cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3169a0:
    // 0x3169a0: 0x3e00008  jr          $ra
label_3169a4:
    if (ctx->pc == 0x3169A4u) {
        ctx->pc = 0x3169A4u;
            // 0x3169a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3169A8u;
        goto label_fallthrough_0x3169a0;
    }
    ctx->pc = 0x3169A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3169A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3169A0u;
            // 0x3169a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3169a0:
    ctx->pc = 0x3169A8u;
}
