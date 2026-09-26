#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgIntersectionSphereLine__FPfPfPfPA4_f
// Address: 0x12f990 - 0x12fa50
void mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990");
#endif

    switch (ctx->pc) {
        case 0x12f9ccu: goto label_12f9cc;
        case 0x12f9dcu: goto label_12f9dc;
        case 0x12f9f0u: goto label_12f9f0;
        case 0x12fa04u: goto label_12fa04;
        case 0x12fa10u: goto label_12fa10;
        default: break;
    }

    ctx->pc = 0x12f990u;

    // 0x12f990: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12f994: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12f998: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x12f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x12f99c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12f9a0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x12f9a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12f9a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12f9ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12f9b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12f9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x12f9b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12f9b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9bc: 0xc494000c  lwc1        $f20, 0xC($a0)
    ctx->pc = 0x12f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12f9c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12f9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9c4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F9C4u;
    SET_GPR_U32(ctx, 31, 0x12F9CCu);
    ctx->pc = 0x12F9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9C4u;
            // 0x12f9c8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9CCu; }
        if (ctx->pc != 0x12F9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9CCu; }
        if (ctx->pc != 0x12F9CCu) { return; }
    }
    ctx->pc = 0x12F9CCu;
label_12f9cc:
    // 0x12f9cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12f9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12f9d4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F9D4u;
    SET_GPR_U32(ctx, 31, 0x12F9DCu);
    ctx->pc = 0x12F9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9D4u;
            // 0x12f9d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9DCu; }
        if (ctx->pc != 0x12F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9DCu; }
        if (ctx->pc != 0x12F9DCu) { return; }
    }
    ctx->pc = 0x12F9DCu;
label_12f9dc:
    // 0x12f9dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12f9dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12f9e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12f9e4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x12f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12f9e8: 0xc04bdfc  jal         func_12F7F0
    ctx->pc = 0x12F9E8u;
    SET_GPR_U32(ctx, 31, 0x12F9F0u);
    ctx->pc = 0x12F9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9E8u;
            // 0x12f9ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F7F0u;
    if (runtime->hasFunction(0x12F7F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9F0u; }
        if (ctx->pc != 0x12F9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionSphereLine0__FfPfPfPA4_f_0x12f7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F9F0u; }
        if (ctx->pc != 0x12F9F0u) { return; }
    }
    ctx->pc = 0x12F9F0u;
label_12f9f0:
    // 0x12f9f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9f4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x12f9f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x12f9f8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x12F9F8u;
    {
        const bool branch_taken_0x12f9f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F9F8u;
            // 0x12f9fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9f8) {
            ctx->pc = 0x12FA24u;
            goto label_12fa24;
        }
    }
    ctx->pc = 0x12FA00u;
    // 0x12fa00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12fa00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12fa04:
    // 0x12fa04: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x12fa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x12fa08: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x12FA08u;
    SET_GPR_U32(ctx, 31, 0x12FA10u);
    ctx->pc = 0x12FA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA08u;
            // 0x12fa0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA10u; }
        if (ctx->pc != 0x12FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA10u; }
        if (ctx->pc != 0x12FA10u) { return; }
    }
    ctx->pc = 0x12FA10u;
label_12fa10:
    // 0x12fa10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12fa10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12fa14: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x12fa14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x12fa18: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x12fa18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x12fa1c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12FA1Cu;
    {
        const bool branch_taken_0x12fa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fa1c) {
            ctx->pc = 0x12FA04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12fa04;
        }
    }
    ctx->pc = 0x12FA24u;
label_12fa24:
    // 0x12fa24: 0x0  nop
    ctx->pc = 0x12fa24u;
    // NOP
    // 0x12fa28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12fa28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12fa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fa30: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12fa30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12fa34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x12fa34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fa38: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12fa38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fa3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12fa3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fa40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12fa40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fa44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12fa44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fa48: 0x3e00008  jr          $ra
    ctx->pc = 0x12FA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA48u;
            // 0x12fa4c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FA50u;
}
