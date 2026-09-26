#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Check_LockOn__FP6CScenefi
// Address: 0x16c350 - 0x16c470
void Check_LockOn__FP6CScenefi_0x16c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_LockOn__FP6CScenefi_0x16c350");
#endif

    switch (ctx->pc) {
        case 0x16c350u: goto label_16c350;
        case 0x16c354u: goto label_16c354;
        case 0x16c358u: goto label_16c358;
        case 0x16c35cu: goto label_16c35c;
        case 0x16c360u: goto label_16c360;
        case 0x16c364u: goto label_16c364;
        case 0x16c368u: goto label_16c368;
        case 0x16c36cu: goto label_16c36c;
        case 0x16c370u: goto label_16c370;
        case 0x16c374u: goto label_16c374;
        case 0x16c378u: goto label_16c378;
        case 0x16c37cu: goto label_16c37c;
        case 0x16c380u: goto label_16c380;
        case 0x16c384u: goto label_16c384;
        case 0x16c388u: goto label_16c388;
        case 0x16c38cu: goto label_16c38c;
        case 0x16c390u: goto label_16c390;
        case 0x16c394u: goto label_16c394;
        case 0x16c398u: goto label_16c398;
        case 0x16c39cu: goto label_16c39c;
        case 0x16c3a0u: goto label_16c3a0;
        case 0x16c3a4u: goto label_16c3a4;
        case 0x16c3a8u: goto label_16c3a8;
        case 0x16c3acu: goto label_16c3ac;
        case 0x16c3b0u: goto label_16c3b0;
        case 0x16c3b4u: goto label_16c3b4;
        case 0x16c3b8u: goto label_16c3b8;
        case 0x16c3bcu: goto label_16c3bc;
        case 0x16c3c0u: goto label_16c3c0;
        case 0x16c3c4u: goto label_16c3c4;
        case 0x16c3c8u: goto label_16c3c8;
        case 0x16c3ccu: goto label_16c3cc;
        case 0x16c3d0u: goto label_16c3d0;
        case 0x16c3d4u: goto label_16c3d4;
        case 0x16c3d8u: goto label_16c3d8;
        case 0x16c3dcu: goto label_16c3dc;
        case 0x16c3e0u: goto label_16c3e0;
        case 0x16c3e4u: goto label_16c3e4;
        case 0x16c3e8u: goto label_16c3e8;
        case 0x16c3ecu: goto label_16c3ec;
        case 0x16c3f0u: goto label_16c3f0;
        case 0x16c3f4u: goto label_16c3f4;
        case 0x16c3f8u: goto label_16c3f8;
        case 0x16c3fcu: goto label_16c3fc;
        case 0x16c400u: goto label_16c400;
        case 0x16c404u: goto label_16c404;
        case 0x16c408u: goto label_16c408;
        case 0x16c40cu: goto label_16c40c;
        case 0x16c410u: goto label_16c410;
        case 0x16c414u: goto label_16c414;
        case 0x16c418u: goto label_16c418;
        case 0x16c41cu: goto label_16c41c;
        case 0x16c420u: goto label_16c420;
        case 0x16c424u: goto label_16c424;
        case 0x16c428u: goto label_16c428;
        case 0x16c42cu: goto label_16c42c;
        case 0x16c430u: goto label_16c430;
        case 0x16c434u: goto label_16c434;
        case 0x16c438u: goto label_16c438;
        case 0x16c43cu: goto label_16c43c;
        case 0x16c440u: goto label_16c440;
        case 0x16c444u: goto label_16c444;
        case 0x16c448u: goto label_16c448;
        case 0x16c44cu: goto label_16c44c;
        case 0x16c450u: goto label_16c450;
        case 0x16c454u: goto label_16c454;
        case 0x16c458u: goto label_16c458;
        case 0x16c45cu: goto label_16c45c;
        case 0x16c460u: goto label_16c460;
        case 0x16c464u: goto label_16c464;
        case 0x16c468u: goto label_16c468;
        case 0x16c46cu: goto label_16c46c;
        default: break;
    }

    ctx->pc = 0x16c350u;

label_16c350:
    // 0x16c350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_16c354:
    // 0x16c354: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16c358:
    // 0x16c358: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_16c35c:
    // 0x16c35c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_16c360:
    // 0x16c360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16c364:
    // 0x16c364: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16c364u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16c368:
    // 0x16c368: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16c368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16c36c:
    // 0x16c36c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x16c36cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_16c370:
    // 0x16c370: 0xc0a0ed8  jal         func_283B60
label_16c374:
    if (ctx->pc == 0x16C374u) {
        ctx->pc = 0x16C374u;
            // 0x16c374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C378u;
        goto label_16c378;
    }
    ctx->pc = 0x16C370u;
    SET_GPR_U32(ctx, 31, 0x16C378u);
    ctx->pc = 0x16C374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C370u;
            // 0x16c374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C378u; }
        if (ctx->pc != 0x16C378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C378u; }
        if (ctx->pc != 0x16C378u) { return; }
    }
    ctx->pc = 0x16C378u;
label_16c378:
    // 0x16c378: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16c378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16c37c:
    // 0x16c37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c380:
    // 0x16c380: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16c380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16c384:
    // 0x16c384: 0x320f809  jalr        $t9
label_16c388:
    if (ctx->pc == 0x16C388u) {
        ctx->pc = 0x16C388u;
            // 0x16c388: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16C38Cu;
        goto label_16c38c;
    }
    ctx->pc = 0x16C384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16C38Cu);
        ctx->pc = 0x16C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C384u;
            // 0x16c388: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16C38Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16C38Cu; }
            if (ctx->pc != 0x16C38Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16C38Cu;
label_16c38c:
    // 0x16c38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16c38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16c390:
    // 0x16c390: 0xc0a0ed8  jal         func_283B60
label_16c394:
    if (ctx->pc == 0x16C394u) {
        ctx->pc = 0x16C394u;
            // 0x16c394: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C398u;
        goto label_16c398;
    }
    ctx->pc = 0x16C390u;
    SET_GPR_U32(ctx, 31, 0x16C398u);
    ctx->pc = 0x16C394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C390u;
            // 0x16c394: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C398u; }
        if (ctx->pc != 0x16C398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C398u; }
        if (ctx->pc != 0x16C398u) { return; }
    }
    ctx->pc = 0x16C398u;
label_16c398:
    // 0x16c398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16c398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16c39c:
    // 0x16c39c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_16c3a0:
    if (ctx->pc == 0x16C3A0u) {
        ctx->pc = 0x16C3A0u;
            // 0x16c3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C3A4u;
        goto label_16c3a4;
    }
    ctx->pc = 0x16C39Cu;
    {
        const bool branch_taken_0x16c39c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C39Cu;
            // 0x16c3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c39c) {
            ctx->pc = 0x16C3ACu;
            goto label_16c3ac;
        }
    }
    ctx->pc = 0x16C3A4u;
label_16c3a4:
    // 0x16c3a4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_16c3a8:
    if (ctx->pc == 0x16C3A8u) {
        ctx->pc = 0x16C3A8u;
            // 0x16c3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x16C3ACu;
        goto label_16c3ac;
    }
    ctx->pc = 0x16C3A4u;
    {
        const bool branch_taken_0x16c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3A4u;
            // 0x16c3a8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3a4) {
            ctx->pc = 0x16C45Cu;
            goto label_16c45c;
        }
    }
    ctx->pc = 0x16C3ACu;
label_16c3ac:
    // 0x16c3ac: 0x8603068a  lh          $v1, 0x68A($s0)
    ctx->pc = 0x16c3acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1674)));
label_16c3b0:
    // 0x16c3b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16c3b4:
    // 0x16c3b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_16c3b8:
    if (ctx->pc == 0x16C3B8u) {
        ctx->pc = 0x16C3B8u;
            // 0x16c3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C3BCu;
        goto label_16c3bc;
    }
    ctx->pc = 0x16C3B4u;
    {
        const bool branch_taken_0x16c3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3B4u;
            // 0x16c3b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3b4) {
            ctx->pc = 0x16C3C4u;
            goto label_16c3c4;
        }
    }
    ctx->pc = 0x16C3BCu;
label_16c3bc:
    // 0x16c3bc: 0x10000026  b           . + 4 + (0x26 << 2)
label_16c3c0:
    if (ctx->pc == 0x16C3C0u) {
        ctx->pc = 0x16C3C4u;
        goto label_16c3c4;
    }
    ctx->pc = 0x16C3BCu;
    {
        const bool branch_taken_0x16c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c3bc) {
            ctx->pc = 0x16C458u;
            goto label_16c458;
        }
    }
    ctx->pc = 0x16C3C4u;
label_16c3c4:
    // 0x16c3c4: 0x8e031330  lw          $v1, 0x1330($s0)
    ctx->pc = 0x16c3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_16c3c8:
    // 0x16c3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16c3cc:
    // 0x16c3cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_16c3d0:
    if (ctx->pc == 0x16C3D0u) {
        ctx->pc = 0x16C3D4u;
        goto label_16c3d4;
    }
    ctx->pc = 0x16C3CCu;
    {
        const bool branch_taken_0x16c3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16c3cc) {
            ctx->pc = 0x16C3DCu;
            goto label_16c3dc;
        }
    }
    ctx->pc = 0x16C3D4u;
label_16c3d4:
    // 0x16c3d4: 0x10000020  b           . + 4 + (0x20 << 2)
label_16c3d8:
    if (ctx->pc == 0x16C3D8u) {
        ctx->pc = 0x16C3D8u;
            // 0x16c3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C3DCu;
        goto label_16c3dc;
    }
    ctx->pc = 0x16C3D4u;
    {
        const bool branch_taken_0x16c3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3D4u;
            // 0x16c3d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3d4) {
            ctx->pc = 0x16C458u;
            goto label_16c458;
        }
    }
    ctx->pc = 0x16C3DCu;
label_16c3dc:
    // 0x16c3dc: 0x8e031348  lw          $v1, 0x1348($s0)
    ctx->pc = 0x16c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_16c3e0:
    // 0x16c3e0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16c3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_16c3e4:
    // 0x16c3e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16c3e8:
    if (ctx->pc == 0x16C3E8u) {
        ctx->pc = 0x16C3ECu;
        goto label_16c3ec;
    }
    ctx->pc = 0x16C3E4u;
    {
        const bool branch_taken_0x16c3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c3e4) {
            ctx->pc = 0x16C3F4u;
            goto label_16c3f4;
        }
    }
    ctx->pc = 0x16C3ECu;
label_16c3ec:
    // 0x16c3ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_16c3f0:
    if (ctx->pc == 0x16C3F0u) {
        ctx->pc = 0x16C3F0u;
            // 0x16c3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C3F4u;
        goto label_16c3f4;
    }
    ctx->pc = 0x16C3ECu;
    {
        const bool branch_taken_0x16c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C3ECu;
            // 0x16c3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3ec) {
            ctx->pc = 0x16C458u;
            goto label_16c458;
        }
    }
    ctx->pc = 0x16C3F4u;
label_16c3f4:
    // 0x16c3f4: 0x86030730  lh          $v1, 0x730($s0)
    ctx->pc = 0x16c3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1840)));
label_16c3f8:
    // 0x16c3f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_16c3fc:
    if (ctx->pc == 0x16C3FCu) {
        ctx->pc = 0x16C400u;
        goto label_16c400;
    }
    ctx->pc = 0x16C3F8u;
    {
        const bool branch_taken_0x16c3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16c3f8) {
            ctx->pc = 0x16C408u;
            goto label_16c408;
        }
    }
    ctx->pc = 0x16C400u;
label_16c400:
    // 0x16c400: 0x10000015  b           . + 4 + (0x15 << 2)
label_16c404:
    if (ctx->pc == 0x16C404u) {
        ctx->pc = 0x16C404u;
            // 0x16c404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C408u;
        goto label_16c408;
    }
    ctx->pc = 0x16C400u;
    {
        const bool branch_taken_0x16c400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C400u;
            // 0x16c404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c400) {
            ctx->pc = 0x16C458u;
            goto label_16c458;
        }
    }
    ctx->pc = 0x16C408u;
label_16c408:
    // 0x16c408: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x16c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_16c40c:
    // 0x16c40c: 0x8063006a  lb          $v1, 0x6A($v1)
    ctx->pc = 0x16c40cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 106)));
label_16c410:
    // 0x16c410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16c414:
    if (ctx->pc == 0x16C414u) {
        ctx->pc = 0x16C414u;
            // 0x16c414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16C418u;
        goto label_16c418;
    }
    ctx->pc = 0x16C410u;
    {
        const bool branch_taken_0x16c410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C410u;
            // 0x16c414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c410) {
            ctx->pc = 0x16C420u;
            goto label_16c420;
        }
    }
    ctx->pc = 0x16C418u;
label_16c418:
    // 0x16c418: 0x1000000f  b           . + 4 + (0xF << 2)
label_16c41c:
    if (ctx->pc == 0x16C41Cu) {
        ctx->pc = 0x16C420u;
        goto label_16c420;
    }
    ctx->pc = 0x16C418u;
    {
        const bool branch_taken_0x16c418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c418) {
            ctx->pc = 0x16C458u;
            goto label_16c458;
        }
    }
    ctx->pc = 0x16C420u;
label_16c420:
    // 0x16c420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16c420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c424:
    // 0x16c424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16c424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c428:
    // 0x16c428: 0xc05d420  jal         func_175080
label_16c42c:
    if (ctx->pc == 0x16C42Cu) {
        ctx->pc = 0x16C42Cu;
            // 0x16c42c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16C430u;
        goto label_16c430;
    }
    ctx->pc = 0x16C428u;
    SET_GPR_U32(ctx, 31, 0x16C430u);
    ctx->pc = 0x16C42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16C428u;
            // 0x16c42c: 0x27a70050  addiu       $a3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C430u; }
        if (ctx->pc != 0x16C430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C430u; }
        if (ctx->pc != 0x16C430u) { return; }
    }
    ctx->pc = 0x16C430u;
label_16c430:
    // 0x16c430: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16c430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16c434:
    // 0x16c434: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x16c434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_16c438:
    // 0x16c438: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x16c438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_16c43c:
    // 0x16c43c: 0xc60012f4  lwc1        $f0, 0x12F4($s0)
    ctx->pc = 0x16c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16c440:
    // 0x16c440: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x16c440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16c444:
    // 0x16c444: 0x0  nop
    ctx->pc = 0x16c444u;
    // NOP
label_16c448:
    // 0x16c448: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16c44c:
    if (ctx->pc == 0x16C44Cu) {
        ctx->pc = 0x16C44Cu;
            // 0x16c44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16C450u;
        goto label_16c450;
    }
    ctx->pc = 0x16C448u;
    {
        const bool branch_taken_0x16c448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C448u;
            // 0x16c44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c448) {
            ctx->pc = 0x16C454u;
            goto label_16c454;
        }
    }
    ctx->pc = 0x16C450u;
label_16c450:
    // 0x16c450: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16c450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c454:
    // 0x16c454: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16c454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_16c458:
    // 0x16c458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16c458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16c45c:
    // 0x16c45c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16c45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16c460:
    // 0x16c460: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16c460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16c464:
    // 0x16c464: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16c464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16c468:
    // 0x16c468: 0x3e00008  jr          $ra
label_16c46c:
    if (ctx->pc == 0x16C46Cu) {
        ctx->pc = 0x16C46Cu;
            // 0x16c46c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16C470u;
        goto label_fallthrough_0x16c468;
    }
    ctx->pc = 0x16C468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C468u;
            // 0x16c46c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16c468:
    ctx->pc = 0x16C470u;
}
