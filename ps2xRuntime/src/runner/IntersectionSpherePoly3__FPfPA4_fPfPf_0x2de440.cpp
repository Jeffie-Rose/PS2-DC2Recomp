#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IntersectionSpherePoly3__FPfPA4_fPfPf
// Address: 0x2de440 - 0x2de644
void IntersectionSpherePoly3__FPfPA4_fPfPf_0x2de440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IntersectionSpherePoly3__FPfPA4_fPfPf_0x2de440");
#endif

    switch (ctx->pc) {
        case 0x2de48cu: goto label_2de48c;
        case 0x2de498u: goto label_2de498;
        case 0x2de4ecu: goto label_2de4ec;
        case 0x2de500u: goto label_2de500;
        case 0x2de534u: goto label_2de534;
        case 0x2de54cu: goto label_2de54c;
        case 0x2de564u: goto label_2de564;
        case 0x2de584u: goto label_2de584;
        case 0x2de5a4u: goto label_2de5a4;
        case 0x2de5ccu: goto label_2de5cc;
        case 0x2de5ecu: goto label_2de5ec;
        case 0x2de60cu: goto label_2de60c;
        default: break;
    }

    ctx->pc = 0x2de440u;

    // 0x2de440: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2de440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2de444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2de444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2de448: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2de448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2de44c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2de44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2de450: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2de450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de454: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2de454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2de458: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2de458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de45c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2de45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2de460: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2de460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de464: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2de464u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2de468: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2de468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de46c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2de46cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2de470: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2de470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de474: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2de474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2de478: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2de478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de47c: 0xc494000c  lwc1        $f20, 0xC($a0)
    ctx->pc = 0x2de47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2de480: 0x4614a542  mul.s       $f21, $f20, $f20
    ctx->pc = 0x2de480u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2de484: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2DE484u;
    SET_GPR_U32(ctx, 31, 0x2DE48Cu);
    ctx->pc = 0x2DE488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE484u;
            // 0x2de488: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE48Cu; }
        if (ctx->pc != 0x2DE48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE48Cu; }
        if (ctx->pc != 0x2DE48Cu) { return; }
    }
    ctx->pc = 0x2DE48Cu;
label_2de48c:
    // 0x2de48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de490: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2DE490u;
    SET_GPR_U32(ctx, 31, 0x2DE498u);
    ctx->pc = 0x2DE494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE490u;
            // 0x2de494: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE498u; }
        if (ctx->pc != 0x2DE498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE498u; }
        if (ctx->pc != 0x2DE498u) { return; }
    }
    ctx->pc = 0x2DE498u;
label_2de498:
    // 0x2de498: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2de498u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2de49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2de49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de4a0: 0x0  nop
    ctx->pc = 0x2de4a0u;
    // NOP
    // 0x2de4a4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2de4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de4a8: 0x0  nop
    ctx->pc = 0x2de4a8u;
    // NOP
    // 0x2de4ac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE4ACu;
    {
        const bool branch_taken_0x2de4ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4ACu;
            // 0x2de4b0: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4ac) {
            ctx->pc = 0x2DE4B8u;
            goto label_2de4b8;
        }
    }
    ctx->pc = 0x2DE4B4u;
    // 0x2de4b4: 0x4600b007  neg.s       $f0, $f22
    ctx->pc = 0x2de4b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
label_2de4b8:
    // 0x2de4b8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2de4b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de4bc: 0x0  nop
    ctx->pc = 0x2de4bcu;
    // NOP
    // 0x2de4c0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE4C0u;
    {
        const bool branch_taken_0x2de4c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4C0u;
            // 0x2de4c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4c0) {
            ctx->pc = 0x2DE4D0u;
            goto label_2de4d0;
        }
    }
    ctx->pc = 0x2DE4C8u;
    // 0x2de4c8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2DE4C8u;
    {
        const bool branch_taken_0x2de4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4C8u;
            // 0x2de4cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de4c8) {
            ctx->pc = 0x2DE620u;
            goto label_2de620;
        }
    }
    ctx->pc = 0x2DE4D0u;
label_2de4d0:
    // 0x2de4d0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2de4d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2de4d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2de4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2de4d8: 0x4600b507  neg.s       $f20, $f22
    ctx->pc = 0x2de4d8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[22]);
    // 0x2de4dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2de4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2de4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2de4e4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2DE4E4u;
    SET_GPR_U32(ctx, 31, 0x2DE4ECu);
    ctx->pc = 0x2DE4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4E4u;
            // 0x2de4e8: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4ECu; }
        if (ctx->pc != 0x2DE4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE4ECu; }
        if (ctx->pc != 0x2DE4ECu) { return; }
    }
    ctx->pc = 0x2DE4ECu;
label_2de4ec:
    // 0x2de4ec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2de4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2de4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de4f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2de4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2de4f8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2DE4F8u;
    SET_GPR_U32(ctx, 31, 0x2DE500u);
    ctx->pc = 0x2DE4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE4F8u;
            // 0x2de4fc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE500u; }
        if (ctx->pc != 0x2DE500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE500u; }
        if (ctx->pc != 0x2DE500u) { return; }
    }
    ctx->pc = 0x2DE500u;
label_2de500:
    // 0x2de500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2de500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de504: 0x0  nop
    ctx->pc = 0x2de504u;
    // NOP
    // 0x2de508: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2de508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de50c: 0x0  nop
    ctx->pc = 0x2de50cu;
    // NOP
    // 0x2de510: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE510u;
    {
        const bool branch_taken_0x2de510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de510) {
            ctx->pc = 0x2DE520u;
            goto label_2de520;
        }
    }
    ctx->pc = 0x2DE518u;
    // 0x2de518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE518u;
    {
        const bool branch_taken_0x2de518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE518u;
            // 0x2de51c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de518) {
            ctx->pc = 0x2DE528u;
            goto label_2de528;
        }
    }
    ctx->pc = 0x2DE520u;
label_2de520:
    // 0x2de520: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x2de520u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x2de524: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2de524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2de528:
    // 0x2de528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2de528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de52c: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x2DE52Cu;
    SET_GPR_U32(ctx, 31, 0x2DE534u);
    ctx->pc = 0x2DE530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE52Cu;
            // 0x2de530: 0xe614000c  swc1        $f20, 0xC($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE534u; }
        if (ctx->pc != 0x2DE534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE534u; }
        if (ctx->pc != 0x2DE534u) { return; }
    }
    ctx->pc = 0x2DE534u;
label_2de534:
    // 0x2de534: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2de534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de538: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2de538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2de53c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de540: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x2de540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2de544: 0xc04bedc  jal         func_12FB70
    ctx->pc = 0x2DE544u;
    SET_GPR_U32(ctx, 31, 0x2DE54Cu);
    ctx->pc = 0x2DE548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE544u;
            // 0x2de548: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FB70u;
    if (runtime->hasFunction(0x12FB70u)) {
        auto targetFn = runtime->lookupFunction(0x12FB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE54Cu; }
        if (ctx->pc != 0x2DE54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCheckPointPoly3_XYZ__FPfPfPfPfPf_0x12fb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE54Cu; }
        if (ctx->pc != 0x2DE54Cu) { return; }
    }
    ctx->pc = 0x2DE54Cu;
label_2de54c:
    // 0x2de54c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE54Cu;
    {
        const bool branch_taken_0x2de54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE54Cu;
            // 0x2de550: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de54c) {
            ctx->pc = 0x2DE55Cu;
            goto label_2de55c;
        }
    }
    ctx->pc = 0x2DE554u;
    // 0x2de554: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2DE554u;
    {
        const bool branch_taken_0x2de554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE554u;
            // 0x2de558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de554) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE55Cu;
label_2de55c:
    // 0x2de55c: 0xc04c038  jal         func_1300E0
    ctx->pc = 0x2DE55Cu;
    SET_GPR_U32(ctx, 31, 0x2DE564u);
    ctx->pc = 0x2DE560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE55Cu;
            // 0x2de560: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300E0u;
    if (runtime->hasFunction(0x1300E0u)) {
        auto targetFn = runtime->lookupFunction(0x1300E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE564u; }
        if (ctx->pc != 0x2DE564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPfPf_0x1300e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE564u; }
        if (ctx->pc != 0x2DE564u) { return; }
    }
    ctx->pc = 0x2DE564u;
label_2de564:
    // 0x2de564: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2de564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de568: 0x0  nop
    ctx->pc = 0x2de568u;
    // NOP
    // 0x2de56c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE56Cu;
    {
        const bool branch_taken_0x2de56c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE56Cu;
            // 0x2de570: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de56c) {
            ctx->pc = 0x2DE57Cu;
            goto label_2de57c;
        }
    }
    ctx->pc = 0x2DE574u;
    // 0x2de574: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2DE574u;
    {
        const bool branch_taken_0x2de574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE574u;
            // 0x2de578: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de574) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE57Cu;
label_2de57c:
    // 0x2de57c: 0xc04c038  jal         func_1300E0
    ctx->pc = 0x2DE57Cu;
    SET_GPR_U32(ctx, 31, 0x2DE584u);
    ctx->pc = 0x2DE580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE57Cu;
            // 0x2de580: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300E0u;
    if (runtime->hasFunction(0x1300E0u)) {
        auto targetFn = runtime->lookupFunction(0x1300E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE584u; }
        if (ctx->pc != 0x2DE584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPfPf_0x1300e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE584u; }
        if (ctx->pc != 0x2DE584u) { return; }
    }
    ctx->pc = 0x2DE584u;
label_2de584:
    // 0x2de584: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2de584u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de588: 0x0  nop
    ctx->pc = 0x2de588u;
    // NOP
    // 0x2de58c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE58Cu;
    {
        const bool branch_taken_0x2de58c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE58Cu;
            // 0x2de590: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de58c) {
            ctx->pc = 0x2DE59Cu;
            goto label_2de59c;
        }
    }
    ctx->pc = 0x2DE594u;
    // 0x2de594: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2DE594u;
    {
        const bool branch_taken_0x2de594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE594u;
            // 0x2de598: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de594) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE59Cu;
label_2de59c:
    // 0x2de59c: 0xc04c038  jal         func_1300E0
    ctx->pc = 0x2DE59Cu;
    SET_GPR_U32(ctx, 31, 0x2DE5A4u);
    ctx->pc = 0x2DE5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE59Cu;
            // 0x2de5a0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300E0u;
    if (runtime->hasFunction(0x1300E0u)) {
        auto targetFn = runtime->lookupFunction(0x1300E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5A4u; }
        if (ctx->pc != 0x2DE5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector2__FPfPf_0x1300e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5A4u; }
        if (ctx->pc != 0x2DE5A4u) { return; }
    }
    ctx->pc = 0x2DE5A4u;
label_2de5a4:
    // 0x2de5a4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2de5a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de5a8: 0x0  nop
    ctx->pc = 0x2de5a8u;
    // NOP
    // 0x2de5ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE5ACu;
    {
        const bool branch_taken_0x2de5ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DE5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5ACu;
            // 0x2de5b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5ac) {
            ctx->pc = 0x2DE5BCu;
            goto label_2de5bc;
        }
    }
    ctx->pc = 0x2DE5B4u;
    // 0x2de5b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2DE5B4u;
    {
        const bool branch_taken_0x2de5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5B4u;
            // 0x2de5b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5b4) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE5BCu;
label_2de5bc:
    // 0x2de5bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2de5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de5c0: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x2de5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2de5c4: 0xc04be64  jal         func_12F990
    ctx->pc = 0x2DE5C4u;
    SET_GPR_U32(ctx, 31, 0x2DE5CCu);
    ctx->pc = 0x2DE5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5C4u;
            // 0x2de5c8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F990u;
    if (runtime->hasFunction(0x12F990u)) {
        auto targetFn = runtime->lookupFunction(0x12F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5CCu; }
        if (ctx->pc != 0x2DE5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5CCu; }
        if (ctx->pc != 0x2DE5CCu) { return; }
    }
    ctx->pc = 0x2DE5CCu;
label_2de5cc:
    // 0x2de5cc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE5CCu;
    {
        const bool branch_taken_0x2de5cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DE5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5CCu;
            // 0x2de5d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5cc) {
            ctx->pc = 0x2DE5DCu;
            goto label_2de5dc;
        }
    }
    ctx->pc = 0x2DE5D4u;
    // 0x2de5d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2DE5D4u;
    {
        const bool branch_taken_0x2de5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5D4u;
            // 0x2de5d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5d4) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE5DCu;
label_2de5dc:
    // 0x2de5dc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x2de5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2de5e0: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x2de5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2de5e4: 0xc04be64  jal         func_12F990
    ctx->pc = 0x2DE5E4u;
    SET_GPR_U32(ctx, 31, 0x2DE5ECu);
    ctx->pc = 0x2DE5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5E4u;
            // 0x2de5e8: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F990u;
    if (runtime->hasFunction(0x12F990u)) {
        auto targetFn = runtime->lookupFunction(0x12F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5ECu; }
        if (ctx->pc != 0x2DE5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE5ECu; }
        if (ctx->pc != 0x2DE5ECu) { return; }
    }
    ctx->pc = 0x2DE5ECu;
label_2de5ec:
    // 0x2de5ec: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE5ECu;
    {
        const bool branch_taken_0x2de5ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DE5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5ECu;
            // 0x2de5f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5ec) {
            ctx->pc = 0x2DE5FCu;
            goto label_2de5fc;
        }
    }
    ctx->pc = 0x2DE5F4u;
    // 0x2de5f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE5F4u;
    {
        const bool branch_taken_0x2de5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE5F4u;
            // 0x2de5f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de5f4) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE5FCu;
label_2de5fc:
    // 0x2de5fc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2de5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2de600: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2de600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de604: 0xc04be64  jal         func_12F990
    ctx->pc = 0x2DE604u;
    SET_GPR_U32(ctx, 31, 0x2DE60Cu);
    ctx->pc = 0x2DE608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE604u;
            // 0x2de608: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F990u;
    if (runtime->hasFunction(0x12F990u)) {
        auto targetFn = runtime->lookupFunction(0x12F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE60Cu; }
        if (ctx->pc != 0x2DE60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DE60Cu; }
        if (ctx->pc != 0x2DE60Cu) { return; }
    }
    ctx->pc = 0x2DE60Cu;
label_2de60c:
    // 0x2de60c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE60Cu;
    {
        const bool branch_taken_0x2de60c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2DE610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE60Cu;
            // 0x2de610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de60c) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE614u;
    // 0x2de614: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DE614u;
    {
        const bool branch_taken_0x2de614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE614u;
            // 0x2de618: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de614) {
            ctx->pc = 0x2DE61Cu;
            goto label_2de61c;
        }
    }
    ctx->pc = 0x2DE61Cu;
label_2de61c:
    // 0x2de61c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2de61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2de620:
    // 0x2de620: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2de620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2de624: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2de624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de628: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2de628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2de62c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2de62cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de630: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2de630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2de634: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2de634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de638: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2de638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de63c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE63Cu;
            // 0x2de640: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE644u;
}
