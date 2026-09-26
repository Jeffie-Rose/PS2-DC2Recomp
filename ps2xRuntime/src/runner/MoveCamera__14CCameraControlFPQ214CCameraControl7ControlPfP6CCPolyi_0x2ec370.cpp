#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveCamera__14CCameraControlFPQ214CCameraControl7ControlPfP6CCPolyi
// Address: 0x2ec370 - 0x2ec708
void MoveCamera__14CCameraControlFPQ214CCameraControl7ControlPfP6CCPolyi_0x2ec370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveCamera__14CCameraControlFPQ214CCameraControl7ControlPfP6CCPolyi_0x2ec370");
#endif

    switch (ctx->pc) {
        case 0x2ec3bcu: goto label_2ec3bc;
        case 0x2ec3ccu: goto label_2ec3cc;
        case 0x2ec3d8u: goto label_2ec3d8;
        case 0x2ec3e8u: goto label_2ec3e8;
        case 0x2ec3f8u: goto label_2ec3f8;
        case 0x2ec408u: goto label_2ec408;
        case 0x2ec410u: goto label_2ec410;
        case 0x2ec418u: goto label_2ec418;
        case 0x2ec460u: goto label_2ec460;
        case 0x2ec480u: goto label_2ec480;
        case 0x2ec4ccu: goto label_2ec4cc;
        case 0x2ec5d0u: goto label_2ec5d0;
        case 0x2ec608u: goto label_2ec608;
        case 0x2ec61cu: goto label_2ec61c;
        case 0x2ec634u: goto label_2ec634;
        case 0x2ec644u: goto label_2ec644;
        case 0x2ec65cu: goto label_2ec65c;
        case 0x2ec680u: goto label_2ec680;
        case 0x2ec6b4u: goto label_2ec6b4;
        case 0x2ec6ccu: goto label_2ec6cc;
        case 0x2ec6dcu: goto label_2ec6dc;
        default: break;
    }

    ctx->pc = 0x2ec370u;

    // 0x2ec370: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ec370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ec374: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ec374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ec378: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ec378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2ec37c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ec37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2ec380: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ec380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec384: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ec384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2ec388: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ec388u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec38c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ec38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ec390: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ec390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec394: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ec394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ec398: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ec398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec3a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2ec3a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2ec3a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec3a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ec3a8: 0x8c8300c0  lw          $v1, 0xC0($a0)
    ctx->pc = 0x2ec3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2ec3ac: 0x106000cb  beqz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x2EC3ACu;
    {
        const bool branch_taken_0x2ec3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC3ACu;
            // 0x2ec3b0: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3ac) {
            ctx->pc = 0x2EC6DCu;
            goto label_2ec6dc;
        }
    }
    ctx->pc = 0x2EC3B4u;
    // 0x2ec3b4: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2EC3B4u;
    SET_GPR_U32(ctx, 31, 0x2EC3BCu);
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3BCu; }
        if (ctx->pc != 0x2EC3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3BCu; }
        if (ctx->pc != 0x2EC3BCu) { return; }
    }
    ctx->pc = 0x2EC3BCu;
label_2ec3bc:
    // 0x2ec3bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ec3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3c4: 0xc04c69c  jal         func_131A70
    ctx->pc = 0x2EC3C4u;
    SET_GPR_U32(ctx, 31, 0x2EC3CCu);
    ctx->pc = 0x2EC3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC3C4u;
            // 0x2ec3c8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A70u;
    if (runtime->hasFunction(0x131A70u)) {
        auto targetFn = runtime->lookupFunction(0x131A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3CCu; }
        if (ctx->pc != 0x2EC3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollow__15mgCCameraFollowFPf_0x131a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3CCu; }
        if (ctx->pc != 0x2EC3CCu) { return; }
    }
    ctx->pc = 0x2EC3CCu;
label_2ec3cc:
    // 0x2ec3cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ec3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3d0: 0xc04c6a0  jal         func_131A80
    ctx->pc = 0x2EC3D0u;
    SET_GPR_U32(ctx, 31, 0x2EC3D8u);
    ctx->pc = 0x2EC3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC3D0u;
            // 0x2ec3d4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A80u;
    if (runtime->hasFunction(0x131A80u)) {
        auto targetFn = runtime->lookupFunction(0x131A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3D8u; }
        if (ctx->pc != 0x2EC3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollowOffset__15mgCCameraFollowFPf_0x131a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3D8u; }
        if (ctx->pc != 0x2EC3D8u) { return; }
    }
    ctx->pc = 0x2EC3D8u;
label_2ec3d8:
    // 0x2ec3d8: 0x26a40030  addiu       $a0, $s5, 0x30
    ctx->pc = 0x2ec3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2ec3dc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ec3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ec3e0: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2EC3E0u;
    SET_GPR_U32(ctx, 31, 0x2EC3E8u);
    ctx->pc = 0x2EC3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC3E0u;
            // 0x2ec3e4: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3E8u; }
        if (ctx->pc != 0x2EC3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3E8u; }
        if (ctx->pc != 0x2EC3E8u) { return; }
    }
    ctx->pc = 0x2EC3E8u;
label_2ec3e8:
    // 0x2ec3e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ec3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec3ec: 0x26a50030  addiu       $a1, $s5, 0x30
    ctx->pc = 0x2ec3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x2ec3f0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC3F0u;
    SET_GPR_U32(ctx, 31, 0x2EC3F8u);
    ctx->pc = 0x2EC3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC3F0u;
            // 0x2ec3f4: 0x26a60020  addiu       $a2, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3F8u; }
        if (ctx->pc != 0x2EC3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC3F8u; }
        if (ctx->pc != 0x2EC3F8u) { return; }
    }
    ctx->pc = 0x2EC3F8u;
label_2ec3f8:
    // 0x2ec3f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ec3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ec3fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2ec3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec400: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2EC400u;
    SET_GPR_U32(ctx, 31, 0x2EC408u);
    ctx->pc = 0x2EC404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC400u;
            // 0x2ec404: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC408u; }
        if (ctx->pc != 0x2EC408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC408u; }
        if (ctx->pc != 0x2EC408u) { return; }
    }
    ctx->pc = 0x2EC408u;
label_2ec408:
    // 0x2ec408: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2EC408u;
    SET_GPR_U32(ctx, 31, 0x2EC410u);
    ctx->pc = 0x2EC40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC408u;
            // 0x2ec40c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC410u; }
        if (ctx->pc != 0x2EC410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC410u; }
        if (ctx->pc != 0x2EC410u) { return; }
    }
    ctx->pc = 0x2EC410u;
label_2ec410:
    // 0x2ec410: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2EC410u;
    SET_GPR_U32(ctx, 31, 0x2EC418u);
    ctx->pc = 0x2EC414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC410u;
            // 0x2ec414: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC418u; }
        if (ctx->pc != 0x2EC418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC418u; }
        if (ctx->pc != 0x2EC418u) { return; }
    }
    ctx->pc = 0x2EC418u;
label_2ec418:
    // 0x2ec418: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ec418u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ec41c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec41cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec420: 0x0  nop
    ctx->pc = 0x2ec420u;
    // NOP
    // 0x2ec424: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2ec424u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec428: 0x0  nop
    ctx->pc = 0x2ec428u;
    // NOP
    // 0x2ec42c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC42Cu;
    {
        const bool branch_taken_0x2ec42c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC42Cu;
            // 0x2ec430: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec42c) {
            ctx->pc = 0x2EC440u;
            goto label_2ec440;
        }
    }
    ctx->pc = 0x2EC434u;
    // 0x2ec434: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2ec434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2ec438: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x2ec438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x2ec43c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2ec43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_2ec440:
    // 0x2ec440: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ec440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec444: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2ec444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec448: 0x0  nop
    ctx->pc = 0x2ec448u;
    // NOP
    // 0x2ec44c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC44Cu;
    {
        const bool branch_taken_0x2ec44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC44Cu;
            // 0x2ec450: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec44c) {
            ctx->pc = 0x2EC460u;
            goto label_2ec460;
        }
    }
    ctx->pc = 0x2EC454u;
    // 0x2ec454: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ec454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec458: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2EC458u;
    SET_GPR_U32(ctx, 31, 0x2EC460u);
    ctx->pc = 0x2EC45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC458u;
            // 0x2ec45c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC460u; }
        if (ctx->pc != 0x2EC460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC460u; }
        if (ctx->pc != 0x2EC460u) { return; }
    }
    ctx->pc = 0x2EC460u;
label_2ec460:
    // 0x2ec460: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2ec460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec464: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2ec464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec468: 0x0  nop
    ctx->pc = 0x2ec468u;
    // NOP
    // 0x2ec46c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC46Cu;
    {
        const bool branch_taken_0x2ec46c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC46Cu;
            // 0x2ec470: 0x4600ab01  sub.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec46c) {
            ctx->pc = 0x2EC480u;
            goto label_2ec480;
        }
    }
    ctx->pc = 0x2EC474u;
    // 0x2ec474: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ec474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec478: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2EC478u;
    SET_GPR_U32(ctx, 31, 0x2EC480u);
    ctx->pc = 0x2EC47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC478u;
            // 0x2ec47c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC480u; }
        if (ctx->pc != 0x2EC480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC480u; }
        if (ctx->pc != 0x2EC480u) { return; }
    }
    ctx->pc = 0x2EC480u;
label_2ec480:
    // 0x2ec480: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2ec480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec484: 0x4603a834  c.lt.s      $f21, $f3
    ctx->pc = 0x2ec484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec488: 0x0  nop
    ctx->pc = 0x2ec488u;
    // NOP
    // 0x2ec48c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC48Cu;
    {
        const bool branch_taken_0x2ec48c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC48Cu;
            // 0x2ec490: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec48c) {
            ctx->pc = 0x2EC498u;
            goto label_2ec498;
        }
    }
    ctx->pc = 0x2EC494u;
    // 0x2ec494: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x2ec494u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_2ec498:
    // 0x2ec498: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x2ec498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec4a0: 0x0  nop
    ctx->pc = 0x2ec4a0u;
    // NOP
    // 0x2ec4a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ec4a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ec4a8: 0x46020d03  div.s       $f20, $f1, $f2
    ctx->pc = 0x2ec4a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2ec4ac: 0x0  nop
    ctx->pc = 0x2ec4acu;
    // NOP
    // 0x2ec4b0: 0x0  nop
    ctx->pc = 0x2ec4b0u;
    // NOP
    // 0x2ec4b4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2ec4b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec4b8: 0x0  nop
    ctx->pc = 0x2ec4b8u;
    // NOP
    // 0x2ec4bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC4BCu;
    {
        const bool branch_taken_0x2ec4bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC4BCu;
            // 0x2ec4c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4bc) {
            ctx->pc = 0x2EC4CCu;
            goto label_2ec4cc;
        }
    }
    ctx->pc = 0x2EC4C4u;
    // 0x2ec4c4: 0xc0bb1c4  jal         func_2EC710
    ctx->pc = 0x2EC4C4u;
    SET_GPR_U32(ctx, 31, 0x2EC4CCu);
    ctx->pc = 0x2EC4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC4C4u;
            // 0x2ec4c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC710u;
    if (runtime->hasFunction(0x2EC710u)) {
        auto targetFn = runtime->lookupFunction(0x2EC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC4CCu; }
        if (ctx->pc != 0x2EC4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotate__14CCameraControlFf_0x2ec710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC4CCu; }
        if (ctx->pc != 0x2EC4CCu) { return; }
    }
    ctx->pc = 0x2EC4CCu;
label_2ec4cc:
    // 0x2ec4cc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2ec4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec4d0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ec4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec4d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec4d8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2ec4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2ec4dc: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x2ec4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec4e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ec4e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec4e4: 0x0  nop
    ctx->pc = 0x2ec4e4u;
    // NOP
    // 0x2ec4e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC4E8u;
    {
        const bool branch_taken_0x2ec4e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec4e8) {
            ctx->pc = 0x2EC4F4u;
            goto label_2ec4f4;
        }
    }
    ctx->pc = 0x2EC4F0u;
    // 0x2ec4f0: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2ec4f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2ec4f4:
    // 0x2ec4f4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ec4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec4f8: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x2ec4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec4fc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2ec4fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec500: 0x0  nop
    ctx->pc = 0x2ec500u;
    // NOP
    // 0x2ec504: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC504u;
    {
        const bool branch_taken_0x2ec504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec504) {
            ctx->pc = 0x2EC510u;
            goto label_2ec510;
        }
    }
    ctx->pc = 0x2EC50Cu;
    // 0x2ec50c: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2ec50cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2ec510:
    // 0x2ec510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec514: 0x0  nop
    ctx->pc = 0x2ec514u;
    // NOP
    // 0x2ec518: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ec518u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec51c: 0x0  nop
    ctx->pc = 0x2ec51cu;
    // NOP
    // 0x2ec520: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x2EC520u;
    {
        const bool branch_taken_0x2ec520 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec520) {
            ctx->pc = 0x2EC588u;
            goto label_2ec588;
        }
    }
    ctx->pc = 0x2EC528u;
    // 0x2ec528: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2ec528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec52c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2ec52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec530: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2ec530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec534: 0x0  nop
    ctx->pc = 0x2ec534u;
    // NOP
    // 0x2ec538: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC538u;
    {
        const bool branch_taken_0x2ec538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC538u;
            // 0x2ec53c: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec538) {
            ctx->pc = 0x2EC558u;
            goto label_2ec558;
        }
    }
    ctx->pc = 0x2EC540u;
    // 0x2ec540: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ec540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ec544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec548: 0x0  nop
    ctx->pc = 0x2ec548u;
    // NOP
    // 0x2ec54c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ec54cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ec550: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2ec550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ec554: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2ec554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2ec558:
    // 0x2ec558: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2ec558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec55c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2ec55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec560: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ec560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec564: 0x0  nop
    ctx->pc = 0x2ec564u;
    // NOP
    // 0x2ec568: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC568u;
    {
        const bool branch_taken_0x2ec568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC568u;
            // 0x2ec56c: 0x46020041  sub.s       $f1, $f0, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec568) {
            ctx->pc = 0x2EC588u;
            goto label_2ec588;
        }
    }
    ctx->pc = 0x2EC570u;
    // 0x2ec570: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ec570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ec574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec578: 0x0  nop
    ctx->pc = 0x2ec578u;
    // NOP
    // 0x2ec57c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ec57cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2ec580: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2ec580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ec584: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2ec584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2ec588:
    // 0x2ec588: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2ec588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec58c: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2ec58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2ec590: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2ec590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec594: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2ec594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec598: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2ec598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ec59c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2ec59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec5a0: 0x4603a841  sub.s       $f1, $f21, $f3
    ctx->pc = 0x2ec5a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
    // 0x2ec5a4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2ec5a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x2ec5a8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2ec5a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x2ec5ac: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x2ec5acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2ec5b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ec5b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ec5b4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2ec5b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2ec5b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2ec5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2ec5bc: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x2ec5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec5c0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ec5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec5c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ec5c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec5c8: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x2EC5C8u;
    SET_GPR_U32(ctx, 31, 0x2EC5D0u);
    ctx->pc = 0x2EC5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC5C8u;
            // 0x2ec5cc: 0xe6a00024  swc1        $f0, 0x24($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC5D0u; }
        if (ctx->pc != 0x2EC5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC5D0u; }
        if (ctx->pc != 0x2EC5D0u) { return; }
    }
    ctx->pc = 0x2EC5D0u;
label_2ec5d0:
    // 0x2ec5d0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2ec5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2ec5d4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC5D4u;
    {
        const bool branch_taken_0x2ec5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5d4) {
            ctx->pc = 0x2EC608u;
            goto label_2ec608;
        }
    }
    ctx->pc = 0x2EC5DCu;
    // 0x2ec5dc: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x2ec5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x2ec5e0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2ec5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2ec5e4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EC5E4u;
    {
        const bool branch_taken_0x2ec5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec5e4) {
            ctx->pc = 0x2EC608u;
            goto label_2ec608;
        }
    }
    ctx->pc = 0x2EC5ECu;
    // 0x2ec5ec: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x2ec5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec5f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2ec5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2ec5f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ec5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2ec5f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ec5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec600: 0xc0bb224  jal         func_2EC890
    ctx->pc = 0x2EC600u;
    SET_GPR_U32(ctx, 31, 0x2EC608u);
    ctx->pc = 0x2EC604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC600u;
            // 0x2ec604: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC890u;
    if (runtime->hasFunction(0x2EC890u)) {
        auto targetFn = runtime->lookupFunction(0x2EC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC608u; }
        if (ctx->pc != 0x2EC608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RotBack__14CCameraControlFf_0x2ec890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC608u; }
        if (ctx->pc != 0x2EC608u) { return; }
    }
    ctx->pc = 0x2EC608u;
label_2ec608:
    // 0x2ec608: 0x8ea300c8  lw          $v1, 0xC8($s5)
    ctx->pc = 0x2ec608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
    // 0x2ec60c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EC60Cu;
    {
        const bool branch_taken_0x2ec60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC60Cu;
            // 0x2ec610: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec60c) {
            ctx->pc = 0x2EC668u;
            goto label_2ec668;
        }
    }
    ctx->pc = 0x2EC614u;
    // 0x2ec614: 0xc04c678  jal         func_1319E0
    ctx->pc = 0x2EC614u;
    SET_GPR_U32(ctx, 31, 0x2EC61Cu);
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC61Cu; }
        if (ctx->pc != 0x2EC61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC61Cu; }
        if (ctx->pc != 0x2EC61Cu) { return; }
    }
    ctx->pc = 0x2EC61Cu;
label_2ec61c:
    // 0x2ec61c: 0xc6ad00cc  lwc1        $f13, 0xCC($s5)
    ctx->pc = 0x2ec61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ec620: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ec620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec624: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ec624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ec628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ec628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec62c: 0xc04c2d8  jal         func_130B60
    ctx->pc = 0x2EC62Cu;
    SET_GPR_U32(ctx, 31, 0x2EC634u);
    ctx->pc = 0x2EC630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC62Cu;
            // 0x2ec630: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC634u; }
        if (ctx->pc != 0x2EC634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC634u; }
        if (ctx->pc != 0x2EC634u) { return; }
    }
    ctx->pc = 0x2EC634u;
label_2ec634:
    // 0x2ec634: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2ec634u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2ec638: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ec638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec63c: 0xc0bb1e4  jal         func_2EC790
    ctx->pc = 0x2EC63Cu;
    SET_GPR_U32(ctx, 31, 0x2EC644u);
    ctx->pc = 0x2EC640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC63Cu;
            // 0x2ec640: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC790u;
    if (runtime->hasFunction(0x2EC790u)) {
        auto targetFn = runtime->lookupFunction(0x2EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC644u; }
        if (ctx->pc != 0x2EC644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotate__14CCameraControlFf_0x2ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC644u; }
        if (ctx->pc != 0x2EC644u) { return; }
    }
    ctx->pc = 0x2EC644u;
label_2ec644:
    // 0x2ec644: 0xc6ad00cc  lwc1        $f13, 0xCC($s5)
    ctx->pc = 0x2ec644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ec648: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2ec648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2ec64c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ec64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2ec650: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ec650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ec654: 0xc04c344  jal         func_130D10
    ctx->pc = 0x2EC654u;
    SET_GPR_U32(ctx, 31, 0x2EC65Cu);
    ctx->pc = 0x2EC658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC654u;
            // 0x2ec658: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC65Cu; }
        if (ctx->pc != 0x2EC65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC65Cu; }
        if (ctx->pc != 0x2EC65Cu) { return; }
    }
    ctx->pc = 0x2EC65Cu;
label_2ec65c:
    // 0x2ec65c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC65Cu;
    {
        const bool branch_taken_0x2ec65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec65c) {
            ctx->pc = 0x2EC668u;
            goto label_2ec668;
        }
    }
    ctx->pc = 0x2EC664u;
    // 0x2ec664: 0xaea000c8  sw          $zero, 0xC8($s5)
    ctx->pc = 0x2ec664u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 200), GPR_U32(ctx, 0));
label_2ec668:
    // 0x2ec668: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2ec668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ec66c: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EC66Cu;
    {
        const bool branch_taken_0x2ec66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC66Cu;
            // 0x2ec670: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec66c) {
            ctx->pc = 0x2EC6DCu;
            goto label_2ec6dc;
        }
    }
    ctx->pc = 0x2EC674u;
    // 0x2ec674: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec678: 0xc0bb39c  jal         func_2ECE70
    ctx->pc = 0x2EC678u;
    SET_GPR_U32(ctx, 31, 0x2EC680u);
    ctx->pc = 0x2EC67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC678u;
            // 0x2ec67c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECE70u;
    if (runtime->hasFunction(0x2ECE70u)) {
        auto targetFn = runtime->lookupFunction(0x2ECE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC680u; }
        if (ctx->pc != 0x2EC680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGround__14CCameraControlFP6CCPolyi_0x2ece70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC680u; }
        if (ctx->pc != 0x2EC680u) { return; }
    }
    ctx->pc = 0x2EC680u;
label_2ec680:
    // 0x2ec680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ec680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec684: 0x0  nop
    ctx->pc = 0x2ec684u;
    // NOP
    // 0x2ec688: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2ec688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec68c: 0x0  nop
    ctx->pc = 0x2ec68cu;
    // NOP
    // 0x2ec690: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC690u;
    {
        const bool branch_taken_0x2ec690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EC694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC690u;
            // 0x2ec694: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec690) {
            ctx->pc = 0x2EC6A8u;
            goto label_2ec6a8;
        }
    }
    ctx->pc = 0x2EC698u;
    // 0x2ec698: 0x8ea200c4  lw          $v0, 0xC4($s5)
    ctx->pc = 0x2ec698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x2ec69c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2ec69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2ec6a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC6A0u;
    {
        const bool branch_taken_0x2ec6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec6a0) {
            ctx->pc = 0x2EC6BCu;
            goto label_2ec6bc;
        }
    }
    ctx->pc = 0x2EC6A8u;
label_2ec6a8:
    // 0x2ec6a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6ac: 0xc0bb244  jal         func_2EC910
    ctx->pc = 0x2EC6ACu;
    SET_GPR_U32(ctx, 31, 0x2EC6B4u);
    ctx->pc = 0x2EC6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6ACu;
            // 0x2ec6b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC910u;
    if (runtime->hasFunction(0x2EC910u)) {
        auto targetFn = runtime->lookupFunction(0x2EC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6B4u; }
        if (ctx->pc != 0x2EC6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckCollision__14CCameraControlFP6CCPolyi_0x2ec910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6B4u; }
        if (ctx->pc != 0x2EC6B4u) { return; }
    }
    ctx->pc = 0x2EC6B4u;
label_2ec6b4:
    // 0x2ec6b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EC6B4u;
    {
        const bool branch_taken_0x2ec6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6B4u;
            // 0x2ec6b8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec6b4) {
            ctx->pc = 0x2EC6E0u;
            goto label_2ec6e0;
        }
    }
    ctx->pc = 0x2EC6BCu;
label_2ec6bc:
    // 0x2ec6bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ec6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6c4: 0xc0bb244  jal         func_2EC910
    ctx->pc = 0x2EC6C4u;
    SET_GPR_U32(ctx, 31, 0x2EC6CCu);
    ctx->pc = 0x2EC6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6C4u;
            // 0x2ec6c8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC910u;
    if (runtime->hasFunction(0x2EC910u)) {
        auto targetFn = runtime->lookupFunction(0x2EC910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6CCu; }
        if (ctx->pc != 0x2EC6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckCollision__14CCameraControlFP6CCPolyi_0x2ec910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6CCu; }
        if (ctx->pc != 0x2EC6CCu) { return; }
    }
    ctx->pc = 0x2EC6CCu;
label_2ec6cc:
    // 0x2ec6cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ec6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ec6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec6d4: 0xc0bb2d8  jal         func_2ECB60
    ctx->pc = 0x2EC6D4u;
    SET_GPR_U32(ctx, 31, 0x2EC6DCu);
    ctx->pc = 0x2EC6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC6D4u;
            // 0x2ec6d8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECB60u;
    if (runtime->hasFunction(0x2ECB60u)) {
        auto targetFn = runtime->lookupFunction(0x2ECB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6DCu; }
        if (ctx->pc != 0x2EC6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoMove__14CCameraControlFP6CCPolyi_0x2ecb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC6DCu; }
        if (ctx->pc != 0x2EC6DCu) { return; }
    }
    ctx->pc = 0x2EC6DCu;
label_2ec6dc:
    // 0x2ec6dc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ec6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ec6e0:
    // 0x2ec6e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2ec6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ec6e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ec6e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ec6e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ec6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec6ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ec6ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ec6f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ec6f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ec6f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ec6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ec6f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ec6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec6fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ec6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec700: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC700u;
            // 0x2ec704: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC708u;
}
