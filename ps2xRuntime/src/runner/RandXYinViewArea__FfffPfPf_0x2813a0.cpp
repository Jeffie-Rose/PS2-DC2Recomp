#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RandXYinViewArea__FfffPfPf
// Address: 0x2813a0 - 0x281510
void RandXYinViewArea__FfffPfPf_0x2813a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RandXYinViewArea__FfffPfPf_0x2813a0");
#endif

    switch (ctx->pc) {
        case 0x2813dcu: goto label_2813dc;
        case 0x2813e8u: goto label_2813e8;
        case 0x2813f8u: goto label_2813f8;
        case 0x281404u: goto label_281404;
        case 0x281414u: goto label_281414;
        case 0x281420u: goto label_281420;
        case 0x28145cu: goto label_28145c;
        case 0x28146cu: goto label_28146c;
        case 0x281478u: goto label_281478;
        case 0x281488u: goto label_281488;
        case 0x2814b8u: goto label_2814b8;
        case 0x2814dcu: goto label_2814dc;
        default: break;
    }

    ctx->pc = 0x2813a0u;

    // 0x2813a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2813a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2813a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2813a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2813a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2813a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2813ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2813acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2813b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2813b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2813b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2813b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2813b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813bc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2813bcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2813c0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2813c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2813c4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2813c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2813c8: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2813c8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2813cc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2813ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2813d0: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2813d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2813d4: 0xc06421c  jal         func_190870
    ctx->pc = 0x2813D4u;
    SET_GPR_U32(ctx, 31, 0x2813DCu);
    ctx->pc = 0x2813D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2813D4u;
            // 0x2813d8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813DCu; }
        if (ctx->pc != 0x2813DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813DCu; }
        if (ctx->pc != 0x2813DCu) { return; }
    }
    ctx->pc = 0x2813DCu;
label_2813dc:
    // 0x2813dc: 0x8c452e54  lw          $a1, 0x2E54($v0)
    ctx->pc = 0x2813dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11860)));
    // 0x2813e0: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x2813E0u;
    SET_GPR_U32(ctx, 31, 0x2813E8u);
    ctx->pc = 0x2813E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2813E0u;
            // 0x2813e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813E8u; }
        if (ctx->pc != 0x2813E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813E8u; }
        if (ctx->pc != 0x2813E8u) { return; }
    }
    ctx->pc = 0x2813E8u;
label_2813e8:
    // 0x2813e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2813e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813ec: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2813ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2813f0: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x2813F0u;
    SET_GPR_U32(ctx, 31, 0x2813F8u);
    ctx->pc = 0x2813F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2813F0u;
            // 0x2813f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813F8u; }
        if (ctx->pc != 0x2813F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813F8u; }
        if (ctx->pc != 0x2813F8u) { return; }
    }
    ctx->pc = 0x2813F8u;
label_2813f8:
    // 0x2813f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2813f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813fc: 0xc04c578  jal         func_1315E0
    ctx->pc = 0x2813FCu;
    SET_GPR_U32(ctx, 31, 0x281404u);
    ctx->pc = 0x281400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2813FCu;
            // 0x281400: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281404u; }
        if (ctx->pc != 0x281404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281404u; }
        if (ctx->pc != 0x281404u) { return; }
    }
    ctx->pc = 0x281404u;
label_281404:
    // 0x281404: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x281404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x281408: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28140c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x28140Cu;
    SET_GPR_U32(ctx, 31, 0x281414u);
    ctx->pc = 0x281410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28140Cu;
            // 0x281410: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281414u; }
        if (ctx->pc != 0x281414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281414u; }
        if (ctx->pc != 0x281414u) { return; }
    }
    ctx->pc = 0x281414u;
label_281414:
    // 0x281414: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x281414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x281418: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x281418u;
    SET_GPR_U32(ctx, 31, 0x281420u);
    ctx->pc = 0x28141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281418u;
            // 0x28141c: 0xc7ac0070  lwc1        $f12, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281420u; }
        if (ctx->pc != 0x281420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281420u; }
        if (ctx->pc != 0x281420u) { return; }
    }
    ctx->pc = 0x281420u;
label_281420:
    // 0x281420: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x281420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x281424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x281424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x281428: 0x0  nop
    ctx->pc = 0x281428u;
    // NOP
    // 0x28142c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28142cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x281430: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x281434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x281434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281438: 0x0  nop
    ctx->pc = 0x281438u;
    // NOP
    // 0x28143c: 0x4601ab03  div.s       $f12, $f21, $f1
    ctx->pc = 0x28143cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
    // 0x281440: 0x0  nop
    ctx->pc = 0x281440u;
    // NOP
    // 0x281444: 0x0  nop
    ctx->pc = 0x281444u;
    // NOP
    // 0x281448: 0x4600ab43  div.s       $f13, $f21, $f0
    ctx->pc = 0x281448u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x28144c: 0x0  nop
    ctx->pc = 0x28144cu;
    // NOP
    // 0x281450: 0x0  nop
    ctx->pc = 0x281450u;
    // NOP
    // 0x281454: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x281454u;
    SET_GPR_U32(ctx, 31, 0x28145Cu);
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28145Cu; }
        if (ctx->pc != 0x28145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28145Cu; }
        if (ctx->pc != 0x28145Cu) { return; }
    }
    ctx->pc = 0x28145Cu;
label_28145c:
    // 0x28145c: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x28145cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x281460: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x281460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x281464: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x281464u;
    SET_GPR_U32(ctx, 31, 0x28146Cu);
    ctx->pc = 0x281468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281464u;
            // 0x281468: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28146Cu; }
        if (ctx->pc != 0x28146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28146Cu; }
        if (ctx->pc != 0x28146Cu) { return; }
    }
    ctx->pc = 0x28146Cu;
label_28146c:
    // 0x28146c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x28146cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x281470: 0xc047a42  jal         func_11E908
    ctx->pc = 0x281470u;
    SET_GPR_U32(ctx, 31, 0x281478u);
    ctx->pc = 0x281474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281470u;
            // 0x281474: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281478u; }
        if (ctx->pc != 0x281478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281478u; }
        if (ctx->pc != 0x281478u) { return; }
    }
    ctx->pc = 0x281478u;
label_281478:
    // 0x281478: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x281478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28147c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28147cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x281480: 0xc047964  jal         func_11E590
    ctx->pc = 0x281480u;
    SET_GPR_U32(ctx, 31, 0x281488u);
    ctx->pc = 0x281484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281480u;
            // 0x281484: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281488u; }
        if (ctx->pc != 0x281488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281488u; }
        if (ctx->pc != 0x281488u) { return; }
    }
    ctx->pc = 0x281488u;
label_281488:
    // 0x281488: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x281488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x28148c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28148cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281490: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x281490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x281494: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x281494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x281498: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x281498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28149c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28149cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2814a0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2814a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2814a4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2814a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2814a8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2814a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2814ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2814acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2814b0: 0xc04c588  jal         func_131620
    ctx->pc = 0x2814B0u;
    SET_GPR_U32(ctx, 31, 0x2814B8u);
    ctx->pc = 0x2814B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2814B0u;
            // 0x2814b4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131620u;
    if (runtime->hasFunction(0x131620u)) {
        auto targetFn = runtime->lookupFunction(0x131620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814B8u; }
        if (ctx->pc != 0x2814B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngleV__9mgCCameraFv_0x131620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814B8u; }
        if (ctx->pc != 0x2814B8u) { return; }
    }
    ctx->pc = 0x2814B8u;
label_2814b8:
    // 0x2814b8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2814b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2814bc: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x2814bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x2814c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2814c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2814c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2814c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2814c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2814c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2814cc: 0x0  nop
    ctx->pc = 0x2814ccu;
    // NOP
    // 0x2814d0: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x2814d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2814d4: 0xc0478ae  jal         func_11E2B8
    ctx->pc = 0x2814D4u;
    SET_GPR_U32(ctx, 31, 0x2814DCu);
    ctx->pc = 0x2814D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2814D4u;
            // 0x2814d8: 0x46016300  add.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E2B8u;
    if (runtime->hasFunction(0x11E2B8u)) {
        auto targetFn = runtime->lookupFunction(0x11E2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814DCu; }
        if (ctx->pc != 0x2814DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atanf_0x11e2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2814DCu; }
        if (ctx->pc != 0x2814DCu) { return; }
    }
    ctx->pc = 0x2814DCu;
label_2814dc:
    // 0x2814dc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2814dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2814e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2814e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2814e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2814e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2814e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2814e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2814ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2814ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2814f0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2814f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2814f4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2814f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2814f8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2814f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2814fc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2814fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x281500: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x281500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x281504: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x281504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x281508: 0x3e00008  jr          $ra
    ctx->pc = 0x281508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28150Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281508u;
            // 0x28150c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281510u;
}
