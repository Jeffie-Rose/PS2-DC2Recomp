#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsRotation__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b300 - 0x25b518
void scsRotation__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsRotation__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b300");
#endif

    switch (ctx->pc) {
        case 0x25b344u: goto label_25b344;
        case 0x25b3c0u: goto label_25b3c0;
        case 0x25b3fcu: goto label_25b3fc;
        case 0x25b49cu: goto label_25b49c;
        default: break;
    }

    ctx->pc = 0x25b300u;

    // 0x25b300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b30c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25b310: 0x4410025  bgez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x25B310u;
    {
        const bool branch_taken_0x25b310 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25B314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B310u;
            // 0x25b314: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b310) {
            ctx->pc = 0x25B3A8u;
            goto label_25b3a8;
        }
    }
    ctx->pc = 0x25B318u;
    // 0x25b318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b31c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b320: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b324: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x25b324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x25b328: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b32c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x25b32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x25b330: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25b330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b334: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b338: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b33c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b340: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25b340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25b344:
    // 0x25b344: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x25b344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x25b348: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x25b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x25b34c: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x25b34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25b350: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x25b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b354: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x25b354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x25b358: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x25b358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25b35c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x25b35cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b360: 0x0  nop
    ctx->pc = 0x25b360u;
    // NOP
    // 0x25b364: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25B364u;
    {
        const bool branch_taken_0x25b364 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B364u;
            // 0x25b368: 0xe4400080  swc1        $f0, 0x80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b364) {
            ctx->pc = 0x25B378u;
            goto label_25b378;
        }
    }
    ctx->pc = 0x25B36Cu;
    // 0x25b36c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25b36cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25b370: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25B370u;
    {
        const bool branch_taken_0x25b370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B370u;
            // 0x25b374: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b370) {
            ctx->pc = 0x25B390u;
            goto label_25b390;
        }
    }
    ctx->pc = 0x25B378u;
label_25b378:
    // 0x25b378: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25b378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b37c: 0x0  nop
    ctx->pc = 0x25b37cu;
    // NOP
    // 0x25b380: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25B380u;
    {
        const bool branch_taken_0x25b380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b380) {
            ctx->pc = 0x25B390u;
            goto label_25b390;
        }
    }
    ctx->pc = 0x25B388u;
    // 0x25b388: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25b388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25b38c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25b390:
    // 0x25b390: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25b394: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x25b394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25b398: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x25B398u;
    {
        const bool branch_taken_0x25b398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B398u;
            // 0x25b39c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b398) {
            ctx->pc = 0x25B344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b344;
        }
    }
    ctx->pc = 0x25B3A0u;
    // 0x25b3a0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x25B3A0u;
    {
        const bool branch_taken_0x25b3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3A0u;
            // 0x25b3a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3a0) {
            ctx->pc = 0x25B508u;
            goto label_25b508;
        }
    }
    ctx->pc = 0x25B3A8u;
label_25b3a8:
    // 0x25b3a8: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x25b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25b3ac: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25b3acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25b3b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25B3B0u;
    {
        const bool branch_taken_0x25b3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3B0u;
            // 0x25b3b4: 0x24850010  addiu       $a1, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3b0) {
            ctx->pc = 0x25B3CCu;
            goto label_25b3cc;
        }
    }
    ctx->pc = 0x25B3B8u;
    // 0x25b3b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25B3B8u;
    SET_GPR_U32(ctx, 31, 0x25B3C0u);
    ctx->pc = 0x25B3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3B8u;
            // 0x25b3bc: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B3C0u; }
        if (ctx->pc != 0x25B3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B3C0u; }
        if (ctx->pc != 0x25B3C0u) { return; }
    }
    ctx->pc = 0x25B3C0u;
label_25b3c0:
    // 0x25b3c0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x25b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x25b3c4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x25B3C4u;
    {
        const bool branch_taken_0x25b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3C4u;
            // 0x25b3c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3c4) {
            ctx->pc = 0x25B508u;
            goto label_25b508;
        }
    }
    ctx->pc = 0x25B3CCu;
label_25b3cc:
    // 0x25b3cc: 0x1c600028  bgtz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x25B3CCu;
    {
        const bool branch_taken_0x25b3cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x25B3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B3CCu;
            // 0x25b3d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b3cc) {
            ctx->pc = 0x25B470u;
            goto label_25b470;
        }
    }
    ctx->pc = 0x25B3D4u;
    // 0x25b3d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25b3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b3d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b3dc: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x25b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x25b3e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b3e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x25b3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x25b3e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25b3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b3ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b3ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b3f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b3f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b3f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25b3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25b3fc:
    // 0x25b3fc: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x25b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x25b400: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x25b400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x25b404: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x25b404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25b408: 0xc4600080  lwc1        $f0, 0x80($v1)
    ctx->pc = 0x25b408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b40c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x25b40cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x25b410: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x25b410u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b414: 0x0  nop
    ctx->pc = 0x25b414u;
    // NOP
    // 0x25b418: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25B418u;
    {
        const bool branch_taken_0x25b418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b418) {
            ctx->pc = 0x25B428u;
            goto label_25b428;
        }
    }
    ctx->pc = 0x25B420u;
    // 0x25b420: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25B420u;
    {
        const bool branch_taken_0x25b420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B420u;
            // 0x25b424: 0x46022101  sub.s       $f4, $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b420) {
            ctx->pc = 0x25B43Cu;
            goto label_25b43c;
        }
    }
    ctx->pc = 0x25B428u;
label_25b428:
    // 0x25b428: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x25b428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b42c: 0x0  nop
    ctx->pc = 0x25b42cu;
    // NOP
    // 0x25b430: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25B430u;
    {
        const bool branch_taken_0x25b430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b430) {
            ctx->pc = 0x25B43Cu;
            goto label_25b43c;
        }
    }
    ctx->pc = 0x25B438u;
    // 0x25b438: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x25b438u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_25b43c:
    // 0x25b43c: 0x0  nop
    ctx->pc = 0x25b43cu;
    // NOP
    // 0x25b440: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25b440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25b444: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x25b444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b448: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x25b448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25b44c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25b450: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25b450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25b454: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x25b454u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x25b458: 0x0  nop
    ctx->pc = 0x25b458u;
    // NOP
    // 0x25b45c: 0x0  nop
    ctx->pc = 0x25b45cu;
    // NOP
    // 0x25b460: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x25B460u;
    {
        const bool branch_taken_0x25b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B460u;
            // 0x25b464: 0xe46000a0  swc1        $f0, 0xA0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b460) {
            ctx->pc = 0x25B3FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b3fc;
        }
    }
    ctx->pc = 0x25B468u;
    // 0x25b468: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x25B468u;
    {
        const bool branch_taken_0x25b468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25b468) {
            ctx->pc = 0x25B4F8u;
            goto label_25b4f8;
        }
    }
    ctx->pc = 0x25B470u;
label_25b470:
    // 0x25b470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25b474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b478: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x25b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x25b47c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x25b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x25b480: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b484: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x25b484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x25b488: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x25b488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25b48c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25b48cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25b490: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x25b490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x25b494: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x25b494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x25b498: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25b498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_25b49c:
    // 0x25b49c: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x25b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x25b4a0: 0xc44400a0  lwc1        $f4, 0xA0($v0)
    ctx->pc = 0x25b4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25b4a4: 0x24430080  addiu       $v1, $v0, 0x80
    ctx->pc = 0x25b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x25b4a8: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x25b4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b4ac: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x25b4acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25b4b0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x25b4b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b4b4: 0x0  nop
    ctx->pc = 0x25b4b4u;
    // NOP
    // 0x25b4b8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x25B4B8u;
    {
        const bool branch_taken_0x25b4b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25B4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B4B8u;
            // 0x25b4bc: 0xe4400080  swc1        $f0, 0x80($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4b8) {
            ctx->pc = 0x25B4CCu;
            goto label_25b4cc;
        }
    }
    ctx->pc = 0x25B4C0u;
    // 0x25b4c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25b4c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25b4c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25B4C4u;
    {
        const bool branch_taken_0x25b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B4C4u;
            // 0x25b4c8: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4c4) {
            ctx->pc = 0x25B4E8u;
            goto label_25b4e8;
        }
    }
    ctx->pc = 0x25B4CCu;
label_25b4cc:
    // 0x25b4cc: 0x0  nop
    ctx->pc = 0x25b4ccu;
    // NOP
    // 0x25b4d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25b4d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25b4d4: 0x0  nop
    ctx->pc = 0x25b4d4u;
    // NOP
    // 0x25b4d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25B4D8u;
    {
        const bool branch_taken_0x25b4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25b4d8) {
            ctx->pc = 0x25B4E8u;
            goto label_25b4e8;
        }
    }
    ctx->pc = 0x25B4E0u;
    // 0x25b4e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25b4e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25b4e4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_25b4e8:
    // 0x25b4e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x25b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x25b4ec: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x25b4ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25b4f0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x25B4F0u;
    {
        const bool branch_taken_0x25b4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25B4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B4F0u;
            // 0x25b4f4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b4f0) {
            ctx->pc = 0x25B49Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25b49c;
        }
    }
    ctx->pc = 0x25B4F8u;
label_25b4f8:
    // 0x25b4f8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x25b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x25b4fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25b500: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x25b500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x25b504: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25b508:
    // 0x25b508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b510: 0x3e00008  jr          $ra
    ctx->pc = 0x25B510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B510u;
            // 0x25b514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B518u;
}
