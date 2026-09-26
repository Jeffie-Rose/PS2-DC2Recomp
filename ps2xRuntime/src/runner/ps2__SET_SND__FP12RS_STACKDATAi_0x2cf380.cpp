#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SND__FP12RS_STACKDATAi
// Address: 0x2cf380 - 0x2cf4d4
void ps2__SET_SND__FP12RS_STACKDATAi_0x2cf380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SND__FP12RS_STACKDATAi_0x2cf380");
#endif

    switch (ctx->pc) {
        case 0x2cf3a8u: goto label_2cf3a8;
        case 0x2cf3b8u: goto label_2cf3b8;
        case 0x2cf3c8u: goto label_2cf3c8;
        case 0x2cf3d8u: goto label_2cf3d8;
        case 0x2cf3f0u: goto label_2cf3f0;
        case 0x2cf40cu: goto label_2cf40c;
        case 0x2cf440u: goto label_2cf440;
        case 0x2cf468u: goto label_2cf468;
        default: break;
    }

    ctx->pc = 0x2cf380u;

    // 0x2cf380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cf380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cf384: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cf384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cf388: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cf388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cf38c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cf38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cf390: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2cf390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cf394: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cf394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cf398: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cf3a0: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CF3A0u;
    SET_GPR_U32(ctx, 31, 0x2CF3A8u);
    ctx->pc = 0x2CF3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3A0u;
            // 0x2cf3a4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3A8u; }
        if (ctx->pc != 0x2CF3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3A8u; }
        if (ctx->pc != 0x2CF3A8u) { return; }
    }
    ctx->pc = 0x2CF3A8u;
label_2cf3a8:
    // 0x2cf3a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cf3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cf3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3b0: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF3B0u;
    SET_GPR_U32(ctx, 31, 0x2CF3B8u);
    ctx->pc = 0x2CF3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3B0u;
            // 0x2cf3b4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3B8u; }
        if (ctx->pc != 0x2CF3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3B8u; }
        if (ctx->pc != 0x2CF3B8u) { return; }
    }
    ctx->pc = 0x2CF3B8u;
label_2cf3b8:
    // 0x2cf3b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cf3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf3bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3c0: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF3C0u;
    SET_GPR_U32(ctx, 31, 0x2CF3C8u);
    ctx->pc = 0x2CF3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3C0u;
            // 0x2cf3c4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3C8u; }
        if (ctx->pc != 0x2CF3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3C8u; }
        if (ctx->pc != 0x2CF3C8u) { return; }
    }
    ctx->pc = 0x2CF3C8u;
label_2cf3c8:
    // 0x2cf3c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cf3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3cc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2cf3ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf3d0: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CF3D0u;
    SET_GPR_U32(ctx, 31, 0x2CF3D8u);
    ctx->pc = 0x2CF3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3D0u;
            // 0x2cf3d4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3D8u; }
        if (ctx->pc != 0x2CF3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3D8u; }
        if (ctx->pc != 0x2CF3D8u) { return; }
    }
    ctx->pc = 0x2CF3D8u;
label_2cf3d8:
    // 0x2cf3d8: 0x2a410005  slti        $at, $s2, 0x5
    ctx->pc = 0x2cf3d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2cf3dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cf3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3e0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CF3E0u;
    {
        const bool branch_taken_0x2cf3e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3E0u;
            // 0x2cf3e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf3e0) {
            ctx->pc = 0x2CF3F4u;
            goto label_2cf3f4;
        }
    }
    ctx->pc = 0x2CF3E8u;
    // 0x2cf3e8: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CF3E8u;
    SET_GPR_U32(ctx, 31, 0x2CF3F0u);
    ctx->pc = 0x2CF3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3E8u;
            // 0x2cf3ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3F0u; }
        if (ctx->pc != 0x2CF3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF3F0u; }
        if (ctx->pc != 0x2CF3F0u) { return; }
    }
    ctx->pc = 0x2CF3F0u;
label_2cf3f0:
    // 0x2cf3f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf3f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cf3f4:
    // 0x2cf3f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cf3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf3fc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf400: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cf400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf404: 0x8c28d430  lw          $t0, -0x2BD0($at)
    ctx->pc = 0x2cf404u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf408: 0x0  nop
    ctx->pc = 0x2cf408u;
    // NOP
label_2cf40c:
    // 0x2cf40c: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2cf40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2cf410: 0x8c420f60  lw          $v0, 0xF60($v0)
    ctx->pc = 0x2cf410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3936)));
    // 0x2cf414: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2CF414u;
    {
        const bool branch_taken_0x2cf414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CF418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF414u;
            // 0x2cf418: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf414) {
            ctx->pc = 0x2CF4A0u;
            goto label_2cf4a0;
        }
    }
    ctx->pc = 0x2CF41Cu;
    // 0x2cf41c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf420: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cf424: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf428: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x2cf428u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cf42c: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x2cf42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x2cf430: 0xac470f60  sw          $a3, 0xF60($v0)
    ctx->pc = 0x2cf430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3936), GPR_U32(ctx, 7));
    // 0x2cf434: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf438: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x2CF438u;
    SET_GPR_U32(ctx, 31, 0x2CF440u);
    ctx->pc = 0x2CF43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF438u;
            // 0x2cf43c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (runtime->hasFunction(0x16B630u)) {
        auto targetFn = runtime->lookupFunction(0x16B630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF440u; }
        if (ctx->pc != 0x2CF440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaitToFrame__12CActionCharaFPcfPc_0x16b630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF440u; }
        if (ctx->pc != 0x2CF440u) { return; }
    }
    ctx->pc = 0x2CF440u;
label_2cf440:
    // 0x2cf440: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf448: 0x8c22d430  lw          $v0, -0x2BD0($at)
    ctx->pc = 0x2cf448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf44c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2cf44cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2cf450: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2cf450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2cf454: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf458: 0xe4400f64  swc1        $f0, 0xF64($v0)
    ctx->pc = 0x2cf458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3940), bits); }
    // 0x2cf45c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2cf45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf460: 0xc05ad8c  jal         func_16B630
    ctx->pc = 0x2CF460u;
    SET_GPR_U32(ctx, 31, 0x2CF468u);
    ctx->pc = 0x2CF464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF460u;
            // 0x2cf464: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B630u;
    if (runtime->hasFunction(0x16B630u)) {
        auto targetFn = runtime->lookupFunction(0x16B630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF468u; }
        if (ctx->pc != 0x2CF468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWaitToFrame__12CActionCharaFPcfPc_0x16b630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF468u; }
        if (ctx->pc != 0x2CF468u) { return; }
    }
    ctx->pc = 0x2CF468u;
label_2cf468:
    // 0x2cf468: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf46c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf470: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf474: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2cf474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2cf478: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf47c: 0xe4600f68  swc1        $f0, 0xF68($v1)
    ctx->pc = 0x2cf47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3944), bits); }
    // 0x2cf480: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf484: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2cf484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2cf488: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cf488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cf48c: 0xac710f70  sw          $s1, 0xF70($v1)
    ctx->pc = 0x2cf48cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3952), GPR_U32(ctx, 17));
    // 0x2cf490: 0x8c23d430  lw          $v1, -0x2BD0($at)
    ctx->pc = 0x2cf490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2cf494: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2cf494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2cf498: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF498u;
    {
        const bool branch_taken_0x2cf498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF498u;
            // 0x2cf49c: 0xac600f6c  sw          $zero, 0xF6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf498) {
            ctx->pc = 0x2CF4B4u;
            goto label_2cf4b4;
        }
    }
    ctx->pc = 0x2CF4A0u;
label_2cf4a0:
    // 0x2cf4a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cf4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cf4a4: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x2cf4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cf4a8: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2CF4A8u;
    {
        const bool branch_taken_0x2cf4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF4A8u;
            // 0x2cf4ac: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4a8) {
            ctx->pc = 0x2CF40Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cf40c;
        }
    }
    ctx->pc = 0x2CF4B0u;
    // 0x2cf4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf4b4:
    // 0x2cf4b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cf4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf4b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2cf4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf4bc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cf4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf4c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cf4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf4c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cf4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf4c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF4CCu;
            // 0x2cf4d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF4D4u;
}
