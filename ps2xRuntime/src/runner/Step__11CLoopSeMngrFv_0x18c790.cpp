#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CLoopSeMngrFv
// Address: 0x18c790 - 0x18c900
void Step__11CLoopSeMngrFv_0x18c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CLoopSeMngrFv_0x18c790");
#endif

    switch (ctx->pc) {
        case 0x18c7c4u: goto label_18c7c4;
        case 0x18c7e0u: goto label_18c7e0;
        case 0x18c81cu: goto label_18c81c;
        case 0x18c838u: goto label_18c838;
        case 0x18c86cu: goto label_18c86c;
        case 0x18c880u: goto label_18c880;
        case 0x18c8a4u: goto label_18c8a4;
        default: break;
    }

    ctx->pc = 0x18c790u;

    // 0x18c790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18c794: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18c798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18c79c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18c79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18c7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c7a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18c7ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18c7b0: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x18C7B0u;
    {
        const bool branch_taken_0x18c7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7B0u;
            // 0x18c7b4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7b0) {
            ctx->pc = 0x18C8E0u;
            goto label_18c8e0;
        }
    }
    ctx->pc = 0x18C7B8u;
    // 0x18c7b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18c7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7bc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18C7BCu;
    {
        const bool branch_taken_0x18c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7BCu;
            // 0x18c7c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7bc) {
            ctx->pc = 0x18C8D0u;
            goto label_18c8d0;
        }
    }
    ctx->pc = 0x18C7C4u;
label_18c7c4:
    // 0x18c7c4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x18c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x18c7c8: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x18c7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x18c7cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c7d0: 0x480003c  bltz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x18C7D0u;
    {
        const bool branch_taken_0x18c7d0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18c7d0) {
            ctx->pc = 0x18C8C4u;
            goto label_18c8c4;
        }
    }
    ctx->pc = 0x18C7D8u;
    // 0x18c7d8: 0xc063284  jal         func_18CA10
    ctx->pc = 0x18C7D8u;
    SET_GPR_U32(ctx, 31, 0x18C7E0u);
    ctx->pc = 0x18CA10u;
    if (runtime->hasFunction(0x18CA10u)) {
        auto targetFn = runtime->lookupFunction(0x18CA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7E0u; }
        if (ctx->pc != 0x18C7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeNo__FUi_0x18ca10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C7E0u; }
        if (ctx->pc != 0x18C7E0u) { return; }
    }
    ctx->pc = 0x18C7E0u;
label_18c7e0:
    // 0x18c7e0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x18c7e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x18c7e4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18C7E4u;
    {
        const bool branch_taken_0x18c7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C7E4u;
            // 0x18c7e8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7e4) {
            ctx->pc = 0x18C840u;
            goto label_18c840;
        }
    }
    ctx->pc = 0x18C7ECu;
    // 0x18c7ec: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x18c7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18c7f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18c7f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c7f4: 0x0  nop
    ctx->pc = 0x18c7f4u;
    // NOP
    // 0x18c7f8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18c7f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c7fc: 0x0  nop
    ctx->pc = 0x18c7fcu;
    // NOP
    // 0x18c800: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x18C800u;
    {
        const bool branch_taken_0x18c800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c800) {
            ctx->pc = 0x18C824u;
            goto label_18c824;
        }
    }
    ctx->pc = 0x18C808u;
    // 0x18c808: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x18c808u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c80c: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x18c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18c810: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c814: 0xc063830  jal         func_18E0C0
    ctx->pc = 0x18C814u;
    SET_GPR_U32(ctx, 31, 0x18C81Cu);
    ctx->pc = 0x18C818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C814u;
            // 0x18c818: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E0C0u;
    if (runtime->hasFunction(0x18E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x18E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C81Cu; }
        if (ctx->pc != 0x18C81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayVPf__FUiiffi_0x18e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C81Cu; }
        if (ctx->pc != 0x18C81Cu) { return; }
    }
    ctx->pc = 0x18C81Cu;
label_18c81c:
    // 0x18c81c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x18C81Cu;
    {
        const bool branch_taken_0x18c81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c81c) {
            ctx->pc = 0x18C880u;
            goto label_18c880;
        }
    }
    ctx->pc = 0x18C824u;
label_18c824:
    // 0x18c824: 0x0  nop
    ctx->pc = 0x18c824u;
    // NOP
    // 0x18c828: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x18c828u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c82c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c830: 0xc063818  jal         func_18E060
    ctx->pc = 0x18C830u;
    SET_GPR_U32(ctx, 31, 0x18C838u);
    ctx->pc = 0x18C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C830u;
            // 0x18c834: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C838u; }
        if (ctx->pc != 0x18C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C838u; }
        if (ctx->pc != 0x18C838u) { return; }
    }
    ctx->pc = 0x18C838u;
label_18c838:
    // 0x18c838: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x18C838u;
    {
        const bool branch_taken_0x18c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c838) {
            ctx->pc = 0x18C880u;
            goto label_18c880;
        }
    }
    ctx->pc = 0x18C840u;
label_18c840:
    // 0x18c840: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x18c840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18c844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18c844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18c848: 0x0  nop
    ctx->pc = 0x18c848u;
    // NOP
    // 0x18c84c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x18c84cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18c850: 0x0  nop
    ctx->pc = 0x18c850u;
    // NOP
    // 0x18c854: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18C854u;
    {
        const bool branch_taken_0x18c854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18c854) {
            ctx->pc = 0x18C880u;
            goto label_18c880;
        }
    }
    ctx->pc = 0x18C85Cu;
    // 0x18c85c: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x18c85cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c860: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c864: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x18C864u;
    SET_GPR_U32(ctx, 31, 0x18C86Cu);
    ctx->pc = 0x18C868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C864u;
            // 0x18c868: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C86Cu; }
        if (ctx->pc != 0x18C86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C86Cu; }
        if (ctx->pc != 0x18C86Cu) { return; }
    }
    ctx->pc = 0x18C86Cu;
label_18c86c:
    // 0x18c86c: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x18c86cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c870: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x18c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18c874: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c878: 0xc063b58  jal         func_18ED60
    ctx->pc = 0x18C878u;
    SET_GPR_U32(ctx, 31, 0x18C880u);
    ctx->pc = 0x18C87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C878u;
            // 0x18c87c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ED60u;
    if (runtime->hasFunction(0x18ED60u)) {
        auto targetFn = runtime->lookupFunction(0x18ED60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C880u; }
        if (ctx->pc != 0x18C880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePanf__FUiifi_0x18ed60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C880u; }
        if (ctx->pc != 0x18C880u) { return; }
    }
    ctx->pc = 0x18C880u;
label_18c880:
    // 0x18c880: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x18c880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x18c884: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x18c884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18c888: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x18c888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c88c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x18C88Cu;
    {
        const bool branch_taken_0x18c88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c88c) {
            ctx->pc = 0x18C8B8u;
            goto label_18c8b8;
        }
    }
    ctx->pc = 0x18C894u;
    // 0x18c894: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x18c894u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18c898: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18c898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18c89c: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x18C89Cu;
    SET_GPR_U32(ctx, 31, 0x18C8A4u);
    ctx->pc = 0x18C8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C89Cu;
            // 0x18c8a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C8A4u; }
        if (ctx->pc != 0x18C8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C8A4u; }
        if (ctx->pc != 0x18C8A4u) { return; }
    }
    ctx->pc = 0x18C8A4u;
label_18c8a4:
    // 0x18c8a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x18c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c8a8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x18c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x18c8ac: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x18c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x18c8b0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x18c8b4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x18c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_18c8b8:
    // 0x18c8b8: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x18c8b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x18c8bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18c8c0: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x18c8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_18c8c4:
    // 0x18c8c4: 0x0  nop
    ctx->pc = 0x18c8c4u;
    // NOP
    // 0x18c8c8: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x18c8cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18c8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18c8d0:
    // 0x18c8d0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x18c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18c8d4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x18c8d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18c8d8: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x18C8D8u;
    {
        const bool branch_taken_0x18c8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18c8d8) {
            ctx->pc = 0x18C7C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18c7c4;
        }
    }
    ctx->pc = 0x18C8E0u;
label_18c8e0:
    // 0x18c8e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18c8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c8e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18c8e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c8e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c8e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c8ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c8f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c8f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18c8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x18C8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C8F8u;
            // 0x18c8fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C900u;
}
