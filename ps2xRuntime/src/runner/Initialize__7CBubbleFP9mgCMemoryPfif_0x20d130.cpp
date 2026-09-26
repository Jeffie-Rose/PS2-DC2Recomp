#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__7CBubbleFP9mgCMemoryPfif
// Address: 0x20d130 - 0x20d220
void Initialize__7CBubbleFP9mgCMemoryPfif_0x20d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7CBubbleFP9mgCMemoryPfif_0x20d130");
#endif

    switch (ctx->pc) {
        case 0x20d19cu: goto label_20d19c;
        case 0x20d1bcu: goto label_20d1bc;
        case 0x20d1c4u: goto label_20d1c4;
        case 0x20d1ccu: goto label_20d1cc;
        default: break;
    }

    ctx->pc = 0x20d130u;

    // 0x20d130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20d134: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20d138: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20d138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20d13c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d140: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d144: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x20d144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x20d148: 0xe48c0020  swc1        $f12, 0x20($a0)
    ctx->pc = 0x20d148u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x20d14c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x20d14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d150: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x20d150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x20d154: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x20d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d158: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x20d158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x20d15c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x20d15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d160: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x20d160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x20d164: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20d168: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x20d168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20d16c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d170: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x20d170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x20d174: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x20d174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x20d178: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D178u;
    {
        const bool branch_taken_0x20d178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D178u;
            // 0x20d17c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d178) {
            ctx->pc = 0x20D18Cu;
            goto label_20d18c;
        }
    }
    ctx->pc = 0x20D180u;
    // 0x20d180: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x20d180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x20d184: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D184u;
    {
        const bool branch_taken_0x20d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D184u;
            // 0x20d188: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d184) {
            ctx->pc = 0x20D190u;
            goto label_20d190;
        }
    }
    ctx->pc = 0x20D18Cu;
label_20d18c:
    // 0x20d18c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x20d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_20d190:
    // 0x20d190: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20d190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d194: 0xc04e748  jal         func_139D20
    ctx->pc = 0x20D194u;
    SET_GPR_U32(ctx, 31, 0x20D19Cu);
    ctx->pc = 0x20D198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D194u;
            // 0x20d198: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D19Cu; }
        if (ctx->pc != 0x20D19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D19Cu; }
        if (ctx->pc != 0x20D19Cu) { return; }
    }
    ctx->pc = 0x20D19Cu;
label_20d19c:
    // 0x20d19c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x20d19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x20d1a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20d1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1a4: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x20d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d1a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20d1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d1ac: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x20d1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d1b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20d1b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20d1b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20D1B4u;
    {
        const bool branch_taken_0x20d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D1B4u;
            // 0x20d1b8: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1b4) {
            ctx->pc = 0x20D1E8u;
            goto label_20d1e8;
        }
    }
    ctx->pc = 0x20D1BCu;
label_20d1bc:
    // 0x20d1bc: 0xc0832d8  jal         func_20CB60
    ctx->pc = 0x20D1BCu;
    SET_GPR_U32(ctx, 31, 0x20D1C4u);
    ctx->pc = 0x20D1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D1BCu;
            // 0x20d1c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CB60u;
    if (runtime->hasFunction(0x20CB60u)) {
        auto targetFn = runtime->lookupFunction(0x20CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D1C4u; }
        if (ctx->pc != 0x20D1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__7CBubbleFi_0x20cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D1C4u; }
        if (ctx->pc != 0x20D1C4u) { return; }
    }
    ctx->pc = 0x20D1C4u;
label_20d1c4:
    // 0x20d1c4: 0xc0941c0  jal         func_250700
    ctx->pc = 0x20D1C4u;
    SET_GPR_U32(ctx, 31, 0x20D1CCu);
    ctx->pc = 0x20D1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D1C4u;
            // 0x20d1c8: 0xc60c0024  lwc1        $f12, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D1CCu; }
        if (ctx->pc != 0x20D1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D1CCu; }
        if (ctx->pc != 0x20D1CCu) { return; }
    }
    ctx->pc = 0x20D1CCu;
label_20d1cc:
    // 0x20d1cc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x20d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d1d0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x20d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x20d1d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20d1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x20d1d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20d1d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20d1dc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20d1e0: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x20d1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x20d1e4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x20d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_20d1e8:
    // 0x20d1e8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x20d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x20d1ec: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x20d1ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20d1f0: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x20D1F0u;
    {
        const bool branch_taken_0x20d1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D1F0u;
            // 0x20d1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1f0) {
            ctx->pc = 0x20D1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d1bc;
        }
    }
    ctx->pc = 0x20D1F8u;
    // 0x20d1f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d1fc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x20d1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d200: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x20d200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d204: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20d204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x20d208: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20d208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d20c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20d20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d218: 0x3e00008  jr          $ra
    ctx->pc = 0x20D218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D218u;
            // 0x20d21c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D220u;
}
