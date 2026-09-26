#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OverlapPoly3XZ__14CEditCollisionFPA4_fPA4_fPf
// Address: 0x1a3820 - 0x1a3b10
void OverlapPoly3XZ__14CEditCollisionFPA4_fPA4_fPf_0x1a3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OverlapPoly3XZ__14CEditCollisionFPA4_fPA4_fPf_0x1a3820");
#endif

    switch (ctx->pc) {
        case 0x1a387cu: goto label_1a387c;
        case 0x1a389cu: goto label_1a389c;
        case 0x1a38b0u: goto label_1a38b0;
        case 0x1a38ccu: goto label_1a38cc;
        case 0x1a38dcu: goto label_1a38dc;
        case 0x1a3a80u: goto label_1a3a80;
        default: break;
    }

    ctx->pc = 0x1a3820u;

    // 0x1a3820: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1a3824: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a3824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a3828: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a3828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a382c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a3830: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a3830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3834: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a3834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a3838: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a3838u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a383c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a383cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a3840: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a3840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3844: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a3844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a3848: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a384c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a384cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3850: 0x8c900040  lw          $s0, 0x40($a0)
    ctx->pc = 0x1a3850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1a3854: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3854u;
    {
        const bool branch_taken_0x1a3854 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3854u;
            // 0x1a3858: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3854) {
            ctx->pc = 0x1A3864u;
            goto label_1a3864;
        }
    }
    ctx->pc = 0x1A385Cu;
    // 0x1a385c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1A385Cu;
    {
        const bool branch_taken_0x1a385c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A385Cu;
            // 0x1a3860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a385c) {
            ctx->pc = 0x1A3AE8u;
            goto label_1a3ae8;
        }
    }
    ctx->pc = 0x1A3864u;
label_1a3864:
    // 0x1a3864: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a3864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a3868: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a3868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a386c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1a386cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3870: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x1a3870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1a3874: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1A3874u;
    SET_GPR_U32(ctx, 31, 0x1A387Cu);
    ctx->pc = 0x1A3878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3874u;
            // 0x1a3878: 0x26880020  addiu       $t0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A387Cu; }
        if (ctx->pc != 0x1A387Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A387Cu; }
        if (ctx->pc != 0x1A387Cu) { return; }
    }
    ctx->pc = 0x1A387Cu;
label_1a387c:
    // 0x1a387c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A387Cu;
    {
        const bool branch_taken_0x1a387c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A387Cu;
            // 0x1a3880: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a387c) {
            ctx->pc = 0x1A3888u;
            goto label_1a3888;
        }
    }
    ctx->pc = 0x1A3884u;
    // 0x1a3884: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1a3884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1a3888:
    // 0x1a3888: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1a3888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a388c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a388cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3890: 0x26a70010  addiu       $a3, $s5, 0x10
    ctx->pc = 0x1a3890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1a3894: 0xc04c278  jal         func_1309E0
    ctx->pc = 0x1A3894u;
    SET_GPR_U32(ctx, 31, 0x1A389Cu);
    ctx->pc = 0x1A3898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3894u;
            // 0x1a3898: 0x26a80020  addiu       $t0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1309E0u;
    if (runtime->hasFunction(0x1309E0u)) {
        auto targetFn = runtime->lookupFunction(0x1309E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A389Cu; }
        if (ctx->pc != 0x1A389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrix__FPfPfPA4_fPfPf_0x1309e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A389Cu; }
        if (ctx->pc != 0x1A389Cu) { return; }
    }
    ctx->pc = 0x1A389Cu;
label_1a389c:
    // 0x1a389c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a389cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a38a0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a38a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a38a4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1a38a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1a38a8: 0xc068b1c  jal         func_1A2C70
    ctx->pc = 0x1A38A8u;
    SET_GPR_U32(ctx, 31, 0x1A38B0u);
    ctx->pc = 0x1A38ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38A8u;
            // 0x1a38ac: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C70u;
    if (runtime->hasFunction(0x1A2C70u)) {
        auto targetFn = runtime->lookupFunction(0x1A2C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38B0u; }
        if (ctx->pc != 0x1A38B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClipBoxXZ__FPfPfPfPf_0x1a2c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38B0u; }
        if (ctx->pc != 0x1A38B0u) { return; }
    }
    ctx->pc = 0x1A38B0u;
label_1a38b0:
    // 0x1a38b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A38B0u;
    {
        const bool branch_taken_0x1a38b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A38B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38B0u;
            // 0x1a38b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38b0) {
            ctx->pc = 0x1A38C0u;
            goto label_1a38c0;
        }
    }
    ctx->pc = 0x1A38B8u;
    // 0x1a38b8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1A38B8u;
    {
        const bool branch_taken_0x1a38b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38B8u;
            // 0x1a38bc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38b8) {
            ctx->pc = 0x1A3AECu;
            goto label_1a3aec;
        }
    }
    ctx->pc = 0x1A38C0u;
label_1a38c0:
    // 0x1a38c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a38c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a38c4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x1A38C4u;
    {
        const bool branch_taken_0x1a38c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A38C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38C4u;
            // 0x1a38c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38c4) {
            ctx->pc = 0x1A3AB0u;
            goto label_1a3ab0;
        }
    }
    ctx->pc = 0x1A38CCu;
label_1a38cc:
    // 0x1a38cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a38ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a38d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a38d4: 0xc04c228  jal         func_1308A0
    ctx->pc = 0x1A38D4u;
    SET_GPR_U32(ctx, 31, 0x1A38DCu);
    ctx->pc = 0x1A38D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38D4u;
            // 0x1a38d8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38DCu; }
        if (ctx->pc != 0x1A38DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A38DCu; }
        if (ctx->pc != 0x1A38DCu) { return; }
    }
    ctx->pc = 0x1A38DCu;
label_1a38dc:
    // 0x1a38dc: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a38dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a38e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a38e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a38e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a38e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a38e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a38ec: 0x0  nop
    ctx->pc = 0x1a38ecu;
    // NOP
    // 0x1a38f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1a38f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a38f4: 0x0  nop
    ctx->pc = 0x1a38f4u;
    // NOP
    // 0x1a38f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A38F8u;
    {
        const bool branch_taken_0x1a38f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A38FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A38F8u;
            // 0x1a38fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a38f8) {
            ctx->pc = 0x1A3904u;
            goto label_1a3904;
        }
    }
    ctx->pc = 0x1A3900u;
    // 0x1a3900: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3904:
    // 0x1a3904: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3904u;
    {
        const bool branch_taken_0x1a3904 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A3908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3904u;
            // 0x1a3908: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3904) {
            ctx->pc = 0x1A3918u;
            goto label_1a3918;
        }
    }
    ctx->pc = 0x1A390Cu;
    // 0x1a390c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a390cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3910: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3910u;
    {
        const bool branch_taken_0x1a3910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3910u;
            // 0x1a3914: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3910) {
            ctx->pc = 0x1A3930u;
            goto label_1a3930;
        }
    }
    ctx->pc = 0x1A3918u;
label_1a3918:
    // 0x1a3918: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a3918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a391c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a391cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a3920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a3920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3924: 0x0  nop
    ctx->pc = 0x1a3924u;
    // NOP
    // 0x1a3928: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a3928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a392c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a392cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a3930:
    // 0x1a3930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3934: 0x0  nop
    ctx->pc = 0x1a3934u;
    // NOP
    // 0x1a3938: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a393c: 0x0  nop
    ctx->pc = 0x1a393cu;
    // NOP
    // 0x1a3940: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3940u;
    {
        const bool branch_taken_0x1a3940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3940) {
            ctx->pc = 0x1A394Cu;
            goto label_1a394c;
        }
    }
    ctx->pc = 0x1A3948u;
    // 0x1a3948: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a3948u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a394c:
    // 0x1a394c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a394cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3950: 0x0  nop
    ctx->pc = 0x1a3950u;
    // NOP
    // 0x1a3954: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a3954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3958: 0x0  nop
    ctx->pc = 0x1a3958u;
    // NOP
    // 0x1a395c: 0x45000051  bc1f        . + 4 + (0x51 << 2)
    ctx->pc = 0x1A395Cu;
    {
        const bool branch_taken_0x1a395c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a395c) {
            ctx->pc = 0x1A3AA4u;
            goto label_1a3aa4;
        }
    }
    ctx->pc = 0x1A3964u;
    // 0x1a3964: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1a3964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3968: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a3968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a396c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a3970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3974: 0x0  nop
    ctx->pc = 0x1a3974u;
    // NOP
    // 0x1a3978: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a3978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a397c: 0x0  nop
    ctx->pc = 0x1a397cu;
    // NOP
    // 0x1a3980: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3980u;
    {
        const bool branch_taken_0x1a3980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3980u;
            // 0x1a3984: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3980) {
            ctx->pc = 0x1A398Cu;
            goto label_1a398c;
        }
    }
    ctx->pc = 0x1A3988u;
    // 0x1a3988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a398c:
    // 0x1a398c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A398Cu;
    {
        const bool branch_taken_0x1a398c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A3990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A398Cu;
            // 0x1a3990: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a398c) {
            ctx->pc = 0x1A39A0u;
            goto label_1a39a0;
        }
    }
    ctx->pc = 0x1A3994u;
    // 0x1a3994: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3994u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3998u;
    {
        const bool branch_taken_0x1a3998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3998u;
            // 0x1a399c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3998) {
            ctx->pc = 0x1A39B8u;
            goto label_1a39b8;
        }
    }
    ctx->pc = 0x1A39A0u;
label_1a39a0:
    // 0x1a39a0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a39a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a39a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a39a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a39a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a39a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a39ac: 0x0  nop
    ctx->pc = 0x1a39acu;
    // NOP
    // 0x1a39b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a39b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a39b4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a39b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a39b8:
    // 0x1a39b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a39b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a39bc: 0x0  nop
    ctx->pc = 0x1a39bcu;
    // NOP
    // 0x1a39c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a39c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a39c4: 0x0  nop
    ctx->pc = 0x1a39c4u;
    // NOP
    // 0x1a39c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A39C8u;
    {
        const bool branch_taken_0x1a39c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a39c8) {
            ctx->pc = 0x1A39D4u;
            goto label_1a39d4;
        }
    }
    ctx->pc = 0x1A39D0u;
    // 0x1a39d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a39d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a39d4:
    // 0x1a39d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a39d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a39d8: 0x0  nop
    ctx->pc = 0x1a39d8u;
    // NOP
    // 0x1a39dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a39dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a39e0: 0x0  nop
    ctx->pc = 0x1a39e0u;
    // NOP
    // 0x1a39e4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1A39E4u;
    {
        const bool branch_taken_0x1a39e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a39e4) {
            ctx->pc = 0x1A3AA4u;
            goto label_1a3aa4;
        }
    }
    ctx->pc = 0x1A39ECu;
    // 0x1a39ec: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1a39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a39f0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a39f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a39f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a39f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a39fc: 0x0  nop
    ctx->pc = 0x1a39fcu;
    // NOP
    // 0x1a3a00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a3a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3a04: 0x0  nop
    ctx->pc = 0x1a3a04u;
    // NOP
    // 0x1a3a08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3A08u;
    {
        const bool branch_taken_0x1a3a08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A08u;
            // 0x1a3a0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a08) {
            ctx->pc = 0x1A3A14u;
            goto label_1a3a14;
        }
    }
    ctx->pc = 0x1A3A10u;
    // 0x1a3a10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3a14:
    // 0x1a3a14: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3A14u;
    {
        const bool branch_taken_0x1a3a14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A3A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A14u;
            // 0x1a3a18: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a14) {
            ctx->pc = 0x1A3A28u;
            goto label_1a3a28;
        }
    }
    ctx->pc = 0x1A3A1Cu;
    // 0x1a3a1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a3a1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3A20u;
    {
        const bool branch_taken_0x1a3a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A20u;
            // 0x1a3a24: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a20) {
            ctx->pc = 0x1A3A40u;
            goto label_1a3a40;
        }
    }
    ctx->pc = 0x1A3A28u;
label_1a3a28:
    // 0x1a3a28: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1a3a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1a3a2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a3a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a3a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a3a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a34: 0x0  nop
    ctx->pc = 0x1a3a34u;
    // NOP
    // 0x1a3a38: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a3a38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a3a3c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a3a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a3a40:
    // 0x1a3a40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a44: 0x0  nop
    ctx->pc = 0x1a3a44u;
    // NOP
    // 0x1a3a48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3a4c: 0x0  nop
    ctx->pc = 0x1a3a4cu;
    // NOP
    // 0x1a3a50: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3A50u;
    {
        const bool branch_taken_0x1a3a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3a50) {
            ctx->pc = 0x1A3A5Cu;
            goto label_1a3a5c;
        }
    }
    ctx->pc = 0x1A3A58u;
    // 0x1a3a58: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a3a58u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a3a5c:
    // 0x1a3a5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3a5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3a60: 0x0  nop
    ctx->pc = 0x1a3a60u;
    // NOP
    // 0x1a3a64: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1a3a64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3a68: 0x0  nop
    ctx->pc = 0x1a3a68u;
    // NOP
    // 0x1a3a6c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1A3A6Cu;
    {
        const bool branch_taken_0x1a3a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A6Cu;
            // 0x1a3a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a6c) {
            ctx->pc = 0x1A3AA4u;
            goto label_1a3aa4;
        }
    }
    ctx->pc = 0x1A3A74u;
    // 0x1a3a74: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a3a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a3a78: 0xc068b30  jal         func_1A2CC0
    ctx->pc = 0x1A3A78u;
    SET_GPR_U32(ctx, 31, 0x1A3A80u);
    ctx->pc = 0x1A3A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A78u;
            // 0x1a3a7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2CC0u;
    if (runtime->hasFunction(0x1A2CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A80u; }
        if (ctx->pc != 0x1A3A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapPoly3AreaXZ__FPA4_fPA4_fP9mgVu0FBOX_0x1a2cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3A80u; }
        if (ctx->pc != 0x1A3A80u) { return; }
    }
    ctx->pc = 0x1A3A80u;
label_1a3a80:
    // 0x1a3a80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a3a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3a84: 0x0  nop
    ctx->pc = 0x1a3a84u;
    // NOP
    // 0x1a3a88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a3a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3a8c: 0x0  nop
    ctx->pc = 0x1a3a8cu;
    // NOP
    // 0x1a3a90: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3A90u;
    {
        const bool branch_taken_0x1a3a90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3a90) {
            ctx->pc = 0x1A3AA0u;
            goto label_1a3aa0;
        }
    }
    ctx->pc = 0x1A3A98u;
    // 0x1a3a98: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1A3A98u;
    {
        const bool branch_taken_0x1a3a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3A98u;
            // 0x1a3a9c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a98) {
            ctx->pc = 0x1A3AA0u;
            goto label_1a3aa0;
        }
    }
    ctx->pc = 0x1A3AA0u;
label_1a3aa0:
    // 0x1a3aa0: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a3aa0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a3aa4:
    // 0x1a3aa4: 0x0  nop
    ctx->pc = 0x1a3aa4u;
    // NOP
    // 0x1a3aa8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a3aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a3aac: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x1a3aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1a3ab0:
    // 0x1a3ab0: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1a3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1a3ab4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a3ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a3ab8: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x1A3AB8u;
    {
        const bool branch_taken_0x1a3ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3AB8u;
            // 0x1a3abc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ab8) {
            ctx->pc = 0x1A38CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a38cc;
        }
    }
    ctx->pc = 0x1A3AC0u;
    // 0x1a3ac0: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3AC0u;
    {
        const bool branch_taken_0x1a3ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3ac0) {
            ctx->pc = 0x1A3ACCu;
            goto label_1a3acc;
        }
    }
    ctx->pc = 0x1A3AC8u;
    // 0x1a3ac8: 0xe6540000  swc1        $f20, 0x0($s2)
    ctx->pc = 0x1a3ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1a3acc:
    // 0x1a3acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3ad0: 0x0  nop
    ctx->pc = 0x1a3ad0u;
    // NOP
    // 0x1a3ad4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1a3ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3ad8: 0x0  nop
    ctx->pc = 0x1a3ad8u;
    // NOP
    // 0x1a3adc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3ADCu;
    {
        const bool branch_taken_0x1a3adc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3ADCu;
            // 0x1a3ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3adc) {
            ctx->pc = 0x1A3AE8u;
            goto label_1a3ae8;
        }
    }
    ctx->pc = 0x1A3AE4u;
    // 0x1a3ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3ae8:
    // 0x1a3ae8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a3ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a3aec:
    // 0x1a3aec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a3aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3af0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a3af0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3af4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a3af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3af8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a3af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3afc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a3afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3b00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a3b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3b04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a3b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3B08u;
            // 0x1a3b0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3B10u;
}
