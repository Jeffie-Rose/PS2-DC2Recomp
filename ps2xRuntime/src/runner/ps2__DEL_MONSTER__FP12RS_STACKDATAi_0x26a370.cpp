#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DEL_MONSTER__FP12RS_STACKDATAi
// Address: 0x26a370 - 0x26a540
void ps2__DEL_MONSTER__FP12RS_STACKDATAi_0x26a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DEL_MONSTER__FP12RS_STACKDATAi_0x26a370");
#endif

    switch (ctx->pc) {
        case 0x26a3b0u: goto label_26a3b0;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a448u: goto label_26a448;
        case 0x26a454u: goto label_26a454;
        case 0x26a460u: goto label_26a460;
        case 0x26a46cu: goto label_26a46c;
        case 0x26a47cu: goto label_26a47c;
        case 0x26a488u: goto label_26a488;
        case 0x26a4a0u: goto label_26a4a0;
        case 0x26a4c8u: goto label_26a4c8;
        case 0x26a4dcu: goto label_26a4dc;
        case 0x26a4f0u: goto label_26a4f0;
        case 0x26a4fcu: goto label_26a4fc;
        case 0x26a518u: goto label_26a518;
        default: break;
    }

    ctx->pc = 0x26a370u;

    // 0x26a370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x26a374: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26a378: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26a37c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26a380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26a384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a388: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a38c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a390: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x26a390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26a394: 0x24532f90  addiu       $s3, $v0, 0x2F90
    ctx->pc = 0x26a394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x26a398: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A398u;
    {
        const bool branch_taken_0x26a398 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A398u;
            // 0x26a39c: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a398) {
            ctx->pc = 0x26A3A8u;
            goto label_26a3a8;
        }
    }
    ctx->pc = 0x26A3A0u;
    // 0x26a3a0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x26A3A0u;
    {
        const bool branch_taken_0x26a3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3A0u;
            // 0x26a3a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a3a0) {
            ctx->pc = 0x26A51Cu;
            goto label_26a51c;
        }
    }
    ctx->pc = 0x26A3A8u;
label_26a3a8:
    // 0x26a3a8: 0xc06da54  jal         func_1B6950
    ctx->pc = 0x26A3A8u;
    SET_GPR_U32(ctx, 31, 0x26A3B0u);
    ctx->pc = 0x26A3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A3A8u;
            // 0x26a3ac: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6950u;
    if (runtime->hasFunction(0x1B6950u)) {
        auto targetFn = runtime->lookupFunction(0x1B6950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3B0u; }
        if (ctx->pc != 0x26A3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__18CRocketLauncherManFv_0x1b6950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A3B0u; }
        if (ctx->pc != 0x26A3B0u) { return; }
    }
    ctx->pc = 0x26A3B0u;
label_26a3b0:
    // 0x26a3b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a3b8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x26a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x26a3bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a3c0: 0x24842600  addiu       $a0, $a0, 0x2600
    ctx->pc = 0x26a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9728));
label_26a3c4:
    // 0x26a3c4: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x26a3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x26a3c8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x26a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x26a3cc: 0xa4e00300  sh          $zero, 0x300($a3)
    ctx->pc = 0x26a3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 768), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a3d0: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x26a3d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x26a3d4: 0xa4e30320  sh          $v1, 0x320($a3)
    ctx->pc = 0x26a3d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 800), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a3d8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x26a3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26a3dc: 0xa4e00302  sh          $zero, 0x302($a3)
    ctx->pc = 0x26a3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 770), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a3e0: 0xa4e30322  sh          $v1, 0x322($a3)
    ctx->pc = 0x26a3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 802), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a3e4: 0xa4e00304  sh          $zero, 0x304($a3)
    ctx->pc = 0x26a3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 772), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a3e8: 0xa4e30324  sh          $v1, 0x324($a3)
    ctx->pc = 0x26a3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 804), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a3ec: 0xa4e00306  sh          $zero, 0x306($a3)
    ctx->pc = 0x26a3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 774), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a3f0: 0xa4e30326  sh          $v1, 0x326($a3)
    ctx->pc = 0x26a3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 806), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a3f4: 0xa4e00308  sh          $zero, 0x308($a3)
    ctx->pc = 0x26a3f4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 776), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a3f8: 0xa4e30328  sh          $v1, 0x328($a3)
    ctx->pc = 0x26a3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 808), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a3fc: 0xa4e0030a  sh          $zero, 0x30A($a3)
    ctx->pc = 0x26a3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 778), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a400: 0xa4e3032a  sh          $v1, 0x32A($a3)
    ctx->pc = 0x26a400u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 810), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a404: 0xa4e0030c  sh          $zero, 0x30C($a3)
    ctx->pc = 0x26a404u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 780), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a408: 0xa4e3032c  sh          $v1, 0x32C($a3)
    ctx->pc = 0x26a408u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 812), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a40c: 0xa4e0030e  sh          $zero, 0x30E($a3)
    ctx->pc = 0x26a40cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 782), (uint16_t)GPR_U32(ctx, 0));
    // 0x26a410: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x26A410u;
    {
        const bool branch_taken_0x26a410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A410u;
            // 0x26a414: 0xa4e3032e  sh          $v1, 0x32E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 814), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a410) {
            ctx->pc = 0x26A3C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26a3c4;
        }
    }
    ctx->pc = 0x26A418u;
    // 0x26a418: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x26a418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x26a41c: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x26a41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
    // 0x26a420: 0x24842990  addiu       $a0, $a0, 0x2990
    ctx->pc = 0x26a420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
    // 0x26a424: 0xc06df9c  jal         func_1B7E70
    ctx->pc = 0x26A424u;
    SET_GPR_U32(ctx, 31, 0x26A42Cu);
    ctx->pc = 0x26A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A424u;
            // 0x26a428: 0xa4202980  sh          $zero, 0x2980($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 10624), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7E70u;
    if (runtime->hasFunction(0x1B7E70u)) {
        auto targetFn = runtime->lookupFunction(0x1B7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A42Cu; }
        if (ctx->pc != 0x26A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CLaserGunManFv_0x1b7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A42Cu; }
        if (ctx->pc != 0x26A42Cu) { return; }
    }
    ctx->pc = 0x26A42Cu;
label_26a42c:
    // 0x26a42c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x26a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x26a430: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A430u;
    {
        const bool branch_taken_0x26a430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A430u;
            // 0x26a434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a430) {
            ctx->pc = 0x26A440u;
            goto label_26a440;
        }
    }
    ctx->pc = 0x26A438u;
    // 0x26a438: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x26A438u;
    {
        const bool branch_taken_0x26a438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A438u;
            // 0x26a43c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a438) {
            ctx->pc = 0x26A520u;
            goto label_26a520;
        }
    }
    ctx->pc = 0x26A440u;
label_26a440:
    // 0x26a440: 0xc076bb0  jal         func_1DAEC0
    ctx->pc = 0x26A440u;
    SET_GPR_U32(ctx, 31, 0x26A448u);
    ctx->pc = 0x26A444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A440u;
            // 0x26a444: 0x8f8597dc  lw          $a1, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAEC0u;
    if (runtime->hasFunction(0x1DAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A448u; }
        if (ctx->pc != 0x26A448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterManFP6CScene_0x1daec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A448u; }
        if (ctx->pc != 0x26A448u) { return; }
    }
    ctx->pc = 0x26A448u;
label_26a448:
    // 0x26a448: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26a44c: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x26A44Cu;
    SET_GPR_U32(ctx, 31, 0x26A454u);
    ctx->pc = 0x26A450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A44Cu;
            // 0x26a450: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A454u; }
        if (ctx->pc != 0x26A454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A454u; }
        if (ctx->pc != 0x26A454u) { return; }
    }
    ctx->pc = 0x26A454u;
label_26a454:
    // 0x26a454: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26a458: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x26A458u;
    SET_GPR_U32(ctx, 31, 0x26A460u);
    ctx->pc = 0x26A45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A458u;
            // 0x26a45c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A460u; }
        if (ctx->pc != 0x26A460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A460u; }
        if (ctx->pc != 0x26A460u) { return; }
    }
    ctx->pc = 0x26A460u;
label_26a460:
    // 0x26a460: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26a460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26a464: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x26A464u;
    SET_GPR_U32(ctx, 31, 0x26A46Cu);
    ctx->pc = 0x26A468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A464u;
            // 0x26a468: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A46Cu; }
        if (ctx->pc != 0x26A46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A46Cu; }
        if (ctx->pc != 0x26A46Cu) { return; }
    }
    ctx->pc = 0x26A46Cu;
label_26a46c:
    // 0x26a46c: 0x8f928db8  lw          $s2, -0x7248($gp)
    ctx->pc = 0x26a46cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x26a470: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a474: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26a474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a478: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x26a478u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a47c:
    // 0x26a47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a480: 0xc04e704  jal         func_139C10
    ctx->pc = 0x26A480u;
    SET_GPR_U32(ctx, 31, 0x26A488u);
    ctx->pc = 0x26A484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A480u;
            // 0x26a484: 0x24050fa0  addiu       $a1, $zero, 0xFA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A488u; }
        if (ctx->pc != 0x26A488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A488u; }
        if (ctx->pc != 0x26A488u) { return; }
    }
    ctx->pc = 0x26A488u;
label_26a488:
    // 0x26a488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a48c: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x26a48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x26a490: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x26a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x26a494: 0x24550004  addiu       $s5, $v0, 0x4
    ctx->pc = 0x26a494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26a498: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x26A498u;
    SET_GPR_U32(ctx, 31, 0x26A4A0u);
    ctx->pc = 0x26A49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A498u;
            // 0x26a49c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4A0u; }
        if (ctx->pc != 0x26A4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4A0u; }
        if (ctx->pc != 0x26A4A0u) { return; }
    }
    ctx->pc = 0x26A4A0u;
label_26a4a0:
    // 0x26a4a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26a4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26a4a4: 0xaea00024  sw          $zero, 0x24($s5)
    ctx->pc = 0x26a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 0));
    // 0x26a4a8: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x26a4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x26a4ac: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x26a4acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x26a4b0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x26A4B0u;
    {
        const bool branch_taken_0x26a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4B0u;
            // 0x26a4b4: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4b0) {
            ctx->pc = 0x26A47Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26a47c;
        }
    }
    ctx->pc = 0x26A4B8u;
    // 0x26a4b8: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x26a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x26a4bc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x26a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x26a4c0: 0xc06ea70  jal         func_1BA9C0
    ctx->pc = 0x26A4C0u;
    SET_GPR_U32(ctx, 31, 0x26A4C8u);
    ctx->pc = 0x26A4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4C0u;
            // 0x26a4c4: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA9C0u;
    if (runtime->hasFunction(0x1BA9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4C8u; }
        if (ctx->pc != 0x26A4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CColPrimManFP6CScene_0x1ba9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4C8u; }
        if (ctx->pc != 0x26A4C8u) { return; }
    }
    ctx->pc = 0x26A4C8u;
label_26a4c8:
    // 0x26a4c8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x26a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x26a4cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26a4d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4d4: 0xc0b8054  jal         func_2E0150
    ctx->pc = 0x26A4D4u;
    SET_GPR_U32(ctx, 31, 0x26A4DCu);
    ctx->pc = 0x26A4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4D4u;
            // 0x26a4d8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0150u;
    if (runtime->hasFunction(0x2E0150u)) {
        auto targetFn = runtime->lookupFunction(0x2E0150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4DCu; }
        if (ctx->pc != 0x26A4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearBaseFromLevel__16CEffectScriptManFiPii_0x2e0150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4DCu; }
        if (ctx->pc != 0x26A4DCu) { return; }
    }
    ctx->pc = 0x26A4DCu;
label_26a4dc:
    // 0x26a4dc: 0x8e7100a0  lw          $s1, 0xA0($s3)
    ctx->pc = 0x26a4dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x26a4e0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x26a4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x26a4e4: 0x2a2100aa  slti        $at, $s1, 0xAA
    ctx->pc = 0x26a4e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x26a4e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A4E8u;
    {
        const bool branch_taken_0x26a4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4E8u;
            // 0x26a4ec: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a4e8) {
            ctx->pc = 0x26A510u;
            goto label_26a510;
        }
    }
    ctx->pc = 0x26A4F0u;
label_26a4f0:
    // 0x26a4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a4f4: 0xc04b950  jal         func_12E540
    ctx->pc = 0x26A4F4u;
    SET_GPR_U32(ctx, 31, 0x26A4FCu);
    ctx->pc = 0x26A4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A4F4u;
            // 0x26a4f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4FCu; }
        if (ctx->pc != 0x26A4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A4FCu; }
        if (ctx->pc != 0x26A4FCu) { return; }
    }
    ctx->pc = 0x26A4FCu;
label_26a4fc:
    // 0x26a4fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26a4fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x26a500: 0x2a2200aa  slti        $v0, $s1, 0xAA
    ctx->pc = 0x26a500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x26a504: 0x0  nop
    ctx->pc = 0x26a504u;
    // NOP
    // 0x26a508: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26A508u;
    {
        const bool branch_taken_0x26a508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a508) {
            ctx->pc = 0x26A4F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26a4f0;
        }
    }
    ctx->pc = 0x26A510u;
label_26a510:
    // 0x26a510: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x26A510u;
    SET_GPR_U32(ctx, 31, 0x26A518u);
    ctx->pc = 0x26A514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A510u;
            // 0x26a514: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A518u; }
        if (ctx->pc != 0x26A518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A518u; }
        if (ctx->pc != 0x26A518u) { return; }
    }
    ctx->pc = 0x26A518u;
label_26a518:
    // 0x26a518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a51c:
    // 0x26a51c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26a51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26a520:
    // 0x26a520: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26a520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a524: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26a524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26a528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a52c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a52cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a538: 0x3e00008  jr          $ra
    ctx->pc = 0x26A538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A538u;
            // 0x26a53c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A540u;
}
