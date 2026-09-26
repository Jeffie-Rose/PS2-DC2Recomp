#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX
// Address: 0x1a3720 - 0x1a3818
void OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OverlapXZ__14CEditCollisionFR14CEditCollisionPA4_fP9mgVu0FBOX_0x1a3720");
#endif

    switch (ctx->pc) {
        case 0x1a3770u: goto label_1a3770;
        case 0x1a3784u: goto label_1a3784;
        case 0x1a3798u: goto label_1a3798;
        case 0x1a37c0u: goto label_1a37c0;
        case 0x1a37d4u: goto label_1a37d4;
        default: break;
    }

    ctx->pc = 0x1a3720u;

    // 0x1a3720: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a3720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1a3724: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a3724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a3728: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1a3728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1a372c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1a372cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1a3730: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a3730u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3734: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1a3734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1a3738: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a3738u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a373c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a3740: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a3740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3744: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a3744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a3748: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a3748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a374c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a374cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a3750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a3754: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1a3754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a3758: 0x8cb30044  lw          $s3, 0x44($a1)
    ctx->pc = 0x1a3758u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1a375c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a375cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a3760: 0x8cb10040  lw          $s1, 0x40($a1)
    ctx->pc = 0x1a3760u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1a3764: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1a3764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1a3768: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A3768u;
    {
        const bool branch_taken_0x1a3768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3768u;
            // 0x1a376c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3768) {
            ctx->pc = 0x1A37E8u;
            goto label_1a37e8;
        }
    }
    ctx->pc = 0x1A3770u;
label_1a3770:
    // 0x1a3770: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a3770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a3774: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1a3774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3778: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a3778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a377c: 0xc04c228  jal         func_1308A0
    ctx->pc = 0x1A377Cu;
    SET_GPR_U32(ctx, 31, 0x1A3784u);
    ctx->pc = 0x1A3780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A377Cu;
            // 0x1a3780: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3784u; }
        if (ctx->pc != 0x1A3784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3784u; }
        if (ctx->pc != 0x1A3784u) { return; }
    }
    ctx->pc = 0x1A3784u;
label_1a3784:
    // 0x1a3784: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a3784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3788: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a3788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a378c: 0x27a600ec  addiu       $a2, $sp, 0xEC
    ctx->pc = 0x1a378cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    // 0x1a3790: 0xc068d50  jal         func_1A3540
    ctx->pc = 0x1A3790u;
    SET_GPR_U32(ctx, 31, 0x1A3798u);
    ctx->pc = 0x1A3794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3790u;
            // 0x1a3794: 0x27a700c0  addiu       $a3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3540u;
    if (runtime->hasFunction(0x1A3540u)) {
        auto targetFn = runtime->lookupFunction(0x1A3540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3798u; }
        if (ctx->pc != 0x1A3798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapPoly3XZ__14CEditCollisionFPA4_fPfP9mgVu0FBOX_0x1a3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3798u; }
        if (ctx->pc != 0x1A3798u) { return; }
    }
    ctx->pc = 0x1A3798u;
label_1a3798:
    // 0x1a3798: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A3798u;
    {
        const bool branch_taken_0x1a3798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3798) {
            ctx->pc = 0x1A37D4u;
            goto label_1a37d4;
        }
    }
    ctx->pc = 0x1A37A0u;
    // 0x1a37a0: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1a37a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a37a4: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1A37A4u;
    {
        const bool branch_taken_0x1a37a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A37A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37A4u;
            // 0x1a37a8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37a4) {
            ctx->pc = 0x1A37D4u;
            goto label_1a37d4;
        }
    }
    ctx->pc = 0x1A37ACu;
    // 0x1a37ac: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A37ACu;
    {
        const bool branch_taken_0x1a37ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37ACu;
            // 0x1a37b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37ac) {
            ctx->pc = 0x1A37C8u;
            goto label_1a37c8;
        }
    }
    ctx->pc = 0x1A37B4u;
    // 0x1a37b4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1a37b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1a37b8: 0xc04e624  jal         func_139890
    ctx->pc = 0x1A37B8u;
    SET_GPR_U32(ctx, 31, 0x1A37C0u);
    ctx->pc = 0x1A37BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37B8u;
            // 0x1a37bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C0u; }
        if (ctx->pc != 0x1A37C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37C0u; }
        if (ctx->pc != 0x1A37C0u) { return; }
    }
    ctx->pc = 0x1A37C0u;
label_1a37c0:
    // 0x1a37c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A37C0u;
    {
        const bool branch_taken_0x1a37c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a37c0) {
            ctx->pc = 0x1A37D4u;
            goto label_1a37d4;
        }
    }
    ctx->pc = 0x1A37C8u;
label_1a37c8:
    // 0x1a37c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a37c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a37cc: 0xc04bd50  jal         func_12F540
    ctx->pc = 0x1A37CCu;
    SET_GPR_U32(ctx, 31, 0x1A37D4u);
    ctx->pc = 0x1A37D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37CCu;
            // 0x1a37d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F540u;
    if (runtime->hasFunction(0x12F540u)) {
        auto targetFn = runtime->lookupFunction(0x12F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37D4u; }
        if (ctx->pc != 0x1A37D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBoxMaxMin__FP9mgVu0FBOXP9mgVu0FBOX_0x12f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A37D4u; }
        if (ctx->pc != 0x1A37D4u) { return; }
    }
    ctx->pc = 0x1A37D4u;
label_1a37d4:
    // 0x1a37d4: 0x0  nop
    ctx->pc = 0x1a37d4u;
    // NOP
    // 0x1a37d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a37d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a37dc: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1a37dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1a37e0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1A37E0u;
    {
        const bool branch_taken_0x1a37e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A37E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A37E0u;
            // 0x1a37e4: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a37e0) {
            ctx->pc = 0x1A3770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3770;
        }
    }
    ctx->pc = 0x1A37E8u;
label_1a37e8:
    // 0x1a37e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a37e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a37ec: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a37ecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1a37f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1a37f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a37f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1a37f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a37f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a37f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a37fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1a37fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3800: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a3800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3804: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a3804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a3808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a380c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a380cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3810: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3810u;
            // 0x1a3814: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3818u;
}
