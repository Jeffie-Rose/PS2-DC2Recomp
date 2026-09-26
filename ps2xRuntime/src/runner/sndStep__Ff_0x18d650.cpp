#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndStep__Ff
// Address: 0x18d650 - 0x18d71c
void sndStep__Ff_0x18d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndStep__Ff_0x18d650");
#endif

    switch (ctx->pc) {
        case 0x18d678u: goto label_18d678;
        case 0x18d680u: goto label_18d680;
        case 0x18d690u: goto label_18d690;
        case 0x18d6a8u: goto label_18d6a8;
        case 0x18d6b8u: goto label_18d6b8;
        case 0x18d6f0u: goto label_18d6f0;
        case 0x18d6f8u: goto label_18d6f8;
        default: break;
    }

    ctx->pc = 0x18d650u;

    // 0x18d650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18d654: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18d658: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18d65c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18d660: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18d664: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18d664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18d668: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18d668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d66c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18d66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18d670: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18d670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x18d674: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18d674u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18d678:
    // 0x18d678: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18D678u;
    SET_GPR_U32(ctx, 31, 0x18D680u);
    ctx->pc = 0x18D67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D678u;
            // 0x18d67c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D680u; }
        if (ctx->pc != 0x18D680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D680u; }
        if (ctx->pc != 0x18D680u) { return; }
    }
    ctx->pc = 0x18D680u;
label_18d680:
    // 0x18d680: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18d680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d684: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x18D684u;
    {
        const bool branch_taken_0x18d684 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D684u;
            // 0x18d688: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d684) {
            ctx->pc = 0x18D6D8u;
            goto label_18d6d8;
        }
    }
    ctx->pc = 0x18D68Cu;
    // 0x18d68c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18d68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18d690:
    // 0x18d690: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x18d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x18d694: 0x8444021c  lh          $a0, 0x21C($v0)
    ctx->pc = 0x18d694u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x18d698: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x18D698u;
    {
        const bool branch_taken_0x18d698 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18D69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D698u;
            // 0x18d69c: 0x2454021c  addiu       $s4, $v0, 0x21C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d698) {
            ctx->pc = 0x18D6C4u;
            goto label_18d6c4;
        }
    }
    ctx->pc = 0x18D6A0u;
    // 0x18d6a0: 0xc063298  jal         func_18CA60
    ctx->pc = 0x18D6A0u;
    SET_GPR_U32(ctx, 31, 0x18D6A8u);
    ctx->pc = 0x18CA60u;
    if (runtime->hasFunction(0x18CA60u)) {
        auto targetFn = runtime->lookupFunction(0x18CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6A8u; }
        if (ctx->pc != 0x18D6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSeq__Fi_0x18ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6A8u; }
        if (ctx->pc != 0x18D6A8u) { return; }
    }
    ctx->pc = 0x18D6A8u;
label_18d6a8:
    // 0x18d6a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18D6A8u;
    {
        const bool branch_taken_0x18d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6A8u;
            // 0x18d6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6a8) {
            ctx->pc = 0x18D6C4u;
            goto label_18d6c4;
        }
    }
    ctx->pc = 0x18D6B0u;
    // 0x18d6b0: 0xc062e84  jal         func_18BA10
    ctx->pc = 0x18D6B0u;
    SET_GPR_U32(ctx, 31, 0x18D6B8u);
    ctx->pc = 0x18D6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6B0u;
            // 0x18d6b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BA10u;
    if (runtime->hasFunction(0x18BA10u)) {
        auto targetFn = runtime->lookupFunction(0x18BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6B8u; }
        if (ctx->pc != 0x18D6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9sndCSeSeqFf_0x18ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6B8u; }
        if (ctx->pc != 0x18D6B8u) { return; }
    }
    ctx->pc = 0x18D6B8u;
label_18d6b8:
    // 0x18d6b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D6B8u;
    {
        const bool branch_taken_0x18d6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6B8u;
            // 0x18d6bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6b8) {
            ctx->pc = 0x18D6C4u;
            goto label_18d6c4;
        }
    }
    ctx->pc = 0x18D6C0u;
    // 0x18d6c0: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x18d6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_18d6c4:
    // 0x18d6c4: 0x0  nop
    ctx->pc = 0x18d6c4u;
    // NOP
    // 0x18d6c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18d6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18d6cc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x18d6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18d6d0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x18D6D0u;
    {
        const bool branch_taken_0x18d6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D6D0u;
            // 0x18d6d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d6d0) {
            ctx->pc = 0x18D690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d690;
        }
    }
    ctx->pc = 0x18D6D8u;
label_18d6d8:
    // 0x18d6d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18d6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18d6dc: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x18d6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18d6e0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x18D6E0u;
    {
        const bool branch_taken_0x18d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d6e0) {
            ctx->pc = 0x18D678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18d678;
        }
    }
    ctx->pc = 0x18D6E8u;
    // 0x18d6e8: 0xc063440  jal         func_18D100
    ctx->pc = 0x18D6E8u;
    SET_GPR_U32(ctx, 31, 0x18D6F0u);
    ctx->pc = 0x18D100u;
    if (runtime->hasFunction(0x18D100u)) {
        auto targetFn = runtime->lookupFunction(0x18D100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6F0u; }
        if (ctx->pc != 0x18D6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeMasterVol__Fv_0x18d100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6F0u; }
        if (ctx->pc != 0x18D6F0u) { return; }
    }
    ctx->pc = 0x18D6F0u;
label_18d6f0:
    // 0x18d6f0: 0xc0635c8  jal         func_18D720
    ctx->pc = 0x18D6F0u;
    SET_GPR_U32(ctx, 31, 0x18D6F8u);
    ctx->pc = 0x18D720u;
    if (runtime->hasFunction(0x18D720u)) {
        auto targetFn = runtime->lookupFunction(0x18D720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6F8u; }
        if (ctx->pc != 0x18D6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndFlush__Fv_0x18d720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6F8u; }
        if (ctx->pc != 0x18D6F8u) { return; }
    }
    ctx->pc = 0x18D6F8u;
label_18d6f8:
    // 0x18d6f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18d6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d6fc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18d6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18d700: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18d700u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d704: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18d704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d708: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18d708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d70c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18d70cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d710: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18d710u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d714: 0x3e00008  jr          $ra
    ctx->pc = 0x18D714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D714u;
            // 0x18d718: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D71Cu;
}
