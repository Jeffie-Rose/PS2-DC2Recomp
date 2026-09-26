#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetKeyFrame__FP8Mot_ListP20FRAME_VECTOR_EX_DATAP9mgCMemory
// Address: 0x14d430 - 0x14d508
void SetKeyFrame__FP8Mot_ListP20FRAME_VECTOR_EX_DATAP9mgCMemory_0x14d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetKeyFrame__FP8Mot_ListP20FRAME_VECTOR_EX_DATAP9mgCMemory_0x14d430");
#endif

    switch (ctx->pc) {
        case 0x14d468u: goto label_14d468;
        case 0x14d484u: goto label_14d484;
        case 0x14d498u: goto label_14d498;
        default: break;
    }

    ctx->pc = 0x14d430u;

    // 0x14d430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d434: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14d434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14d438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d440: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14d440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d444: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d44c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x14d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x14d450: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d454: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14d458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d45c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x14d45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x14d460: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D460u;
    SET_GPR_U32(ctx, 31, 0x14D468u);
    ctx->pc = 0x14D464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D460u;
            // 0x14d464: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D468u; }
        if (ctx->pc != 0x14D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D468u; }
        if (ctx->pc != 0x14D468u) { return; }
    }
    ctx->pc = 0x14D468u;
label_14d468:
    // 0x14d468: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x14d468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x14d46c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d470: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14d474: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d478: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x14d478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x14d47c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x14D47Cu;
    SET_GPR_U32(ctx, 31, 0x14D484u);
    ctx->pc = 0x14D480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14D47Cu;
            // 0x14d480: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D484u; }
        if (ctx->pc != 0x14D484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14D484u; }
        if (ctx->pc != 0x14D484u) { return; }
    }
    ctx->pc = 0x14D484u;
label_14d484:
    // 0x14d484: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x14d484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x14d488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d48c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14d48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d490: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14D490u;
    {
        const bool branch_taken_0x14d490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D490u;
            // 0x14d494: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d490) {
            ctx->pc = 0x14D4E0u;
            goto label_14d4e0;
        }
    }
    ctx->pc = 0x14D498u;
label_14d498:
    // 0x14d498: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x14d498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14d49c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x14d49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4a0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x14d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14d4a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d4a8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x14d4ac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14d4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x14d4b0: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x14d4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x14d4b4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x14d4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4b8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x14d4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x14d4bc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x14d4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x14d4c0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x14d4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x14d4c4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x14d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x14d4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x14d4cc: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x14d4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d4d0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x14d4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x14d4d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d4d8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x14d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x14d4dc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x14d4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_14d4e0:
    // 0x14d4e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x14d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14d4e4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x14d4e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14d4e8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14D4E8u;
    {
        const bool branch_taken_0x14d4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d4e8) {
            ctx->pc = 0x14D498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d498;
        }
    }
    ctx->pc = 0x14D4F0u;
    // 0x14d4f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d4f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d4f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d4f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d4f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d4fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d4fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d500: 0x3e00008  jr          $ra
    ctx->pc = 0x14D500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D500u;
            // 0x14d504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D508u;
}
