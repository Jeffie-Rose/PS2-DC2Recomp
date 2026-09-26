#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS
// Address: 0x2a6580 - 0x2a6688
void SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580");
#endif

    switch (ctx->pc) {
        case 0x2a65a0u: goto label_2a65a0;
        case 0x2a65e0u: goto label_2a65e0;
        case 0x2a6608u: goto label_2a6608;
        case 0x2a662cu: goto label_2a662c;
        case 0x2a6634u: goto label_2a6634;
        case 0x2a664cu: goto label_2a664c;
        case 0x2a6658u: goto label_2a6658;
        case 0x2a6660u: goto label_2a6660;
        case 0x2a6670u: goto label_2a6670;
        default: break;
    }

    ctx->pc = 0x2a6580u;

    // 0x2a6580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a6580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a6584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a6584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a6588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a6588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a658c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a6590: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a6590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6594: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a6594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6598: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A6598u;
    SET_GPR_U32(ctx, 31, 0x2A65A0u);
    ctx->pc = 0x2A659Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6598u;
            // 0x2a659c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A65A0u; }
        if (ctx->pc != 0x2A65A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A65A0u; }
        if (ctx->pc != 0x2A65A0u) { return; }
    }
    ctx->pc = 0x2A65A0u;
label_2a65a0:
    // 0x2a65a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2a65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a65a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a65a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a65a8: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x2a65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x2a65ac: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2a65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a65b0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a65b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a65b4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2a65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2a65b8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2a65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2a65bc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2a65bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2a65c0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2a65c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2a65c4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2a65c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a65c8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2a65c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2a65cc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2a65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2a65d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A65D0u;
    {
        const bool branch_taken_0x2a65d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A65D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A65D0u;
            // 0x2a65d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65d0) {
            ctx->pc = 0x2A65E4u;
            goto label_2a65e4;
        }
    }
    ctx->pc = 0x2A65D8u;
    // 0x2a65d8: 0xc0a9e1c  jal         func_2A7870
    ctx->pc = 0x2A65D8u;
    SET_GPR_U32(ctx, 31, 0x2A65E0u);
    ctx->pc = 0x2A7870u;
    if (runtime->hasFunction(0x2A7870u)) {
        auto targetFn = runtime->lookupFunction(0x2A7870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A65E0u; }
        if (ctx->pc != 0x2A65E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBgmVolf__6CSceneFv_0x2a7870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A65E0u; }
        if (ctx->pc != 0x2A65E0u) { return; }
    }
    ctx->pc = 0x2A65E0u;
label_2a65e0:
    // 0x2a65e0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2a65e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2a65e4:
    // 0x2a65e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a65e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a65ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A65ECu;
    {
        const bool branch_taken_0x2a65ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a65ec) {
            ctx->pc = 0x2A6608u;
            goto label_2a6608;
        }
    }
    ctx->pc = 0x2A65F4u;
    // 0x2a65f4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a65f8: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2a65f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a65fc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2a65fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a6600: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2A6600u;
    SET_GPR_U32(ctx, 31, 0x2A6608u);
    ctx->pc = 0x2A6604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6600u;
            // 0x2a6604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6608u; }
        if (ctx->pc != 0x2A6608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6608u; }
        if (ctx->pc != 0x2A6608u) { return; }
    }
    ctx->pc = 0x2A6608u;
label_2a6608:
    // 0x2a6608: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a6608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a660c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6610: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6610u;
    {
        const bool branch_taken_0x2a6610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a6610) {
            ctx->pc = 0x2A6634u;
            goto label_2a6634;
        }
    }
    ctx->pc = 0x2A6618u;
    // 0x2a6618: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a6618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a661c: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2a661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6620: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2a6620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a6624: 0xc0a9844  jal         func_2A6110
    ctx->pc = 0x2A6624u;
    SET_GPR_U32(ctx, 31, 0x2A662Cu);
    ctx->pc = 0x2A6628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6624u;
            // 0x2a6628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A662Cu; }
        if (ctx->pc != 0x2A662Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A662Cu; }
        if (ctx->pc != 0x2A662Cu) { return; }
    }
    ctx->pc = 0x2A662Cu;
label_2a662c:
    // 0x2a662c: 0xc0a9884  jal         func_2A6210
    ctx->pc = 0x2A662Cu;
    SET_GPR_U32(ctx, 31, 0x2A6634u);
    ctx->pc = 0x2A6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A662Cu;
            // 0x2a6630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6210u;
    if (runtime->hasFunction(0x2A6210u)) {
        auto targetFn = runtime->lookupFunction(0x2A6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6634u; }
        if (ctx->pc != 0x2A6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseBGM__6CSceneFv_0x2a6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6634u; }
        if (ctx->pc != 0x2A6634u) { return; }
    }
    ctx->pc = 0x2A6634u;
label_2a6634:
    // 0x2a6634: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a6634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a6638: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A6638u;
    {
        const bool branch_taken_0x2a6638 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2a6638) {
            ctx->pc = 0x2A664Cu;
            goto label_2a664c;
        }
    }
    ctx->pc = 0x2A6640u;
    // 0x2a6640: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a6644: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2A6644u;
    SET_GPR_U32(ctx, 31, 0x2A664Cu);
    ctx->pc = 0x2A6648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6644u;
            // 0x2a6648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A664Cu; }
        if (ctx->pc != 0x2A664Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A664Cu; }
        if (ctx->pc != 0x2A664Cu) { return; }
    }
    ctx->pc = 0x2A664Cu;
label_2a664c:
    // 0x2a664c: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x2a664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a6650: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x2A6650u;
    SET_GPR_U32(ctx, 31, 0x2A6658u);
    ctx->pc = 0x2A6654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6650u;
            // 0x2a6654: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6658u; }
        if (ctx->pc != 0x2A6658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6658u; }
        if (ctx->pc != 0x2A6658u) { return; }
    }
    ctx->pc = 0x2A6658u;
label_2a6658:
    // 0x2a6658: 0xc0a9e50  jal         func_2A7940
    ctx->pc = 0x2A6658u;
    SET_GPR_U32(ctx, 31, 0x2A6660u);
    ctx->pc = 0x2A665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6658u;
            // 0x2a665c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (runtime->hasFunction(0x2A7940u)) {
        auto targetFn = runtime->lookupFunction(0x2A7940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6660u; }
        if (ctx->pc != 0x2A6660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepSnd__6CSceneFv_0x2a7940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6660u; }
        if (ctx->pc != 0x2A6660u) { return; }
    }
    ctx->pc = 0x2A6660u;
label_2a6660:
    // 0x2a6660: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2a6660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2a6664: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a6664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a6668: 0xc063594  jal         func_18D650
    ctx->pc = 0x2A6668u;
    SET_GPR_U32(ctx, 31, 0x2A6670u);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6670u; }
        if (ctx->pc != 0x2A6670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6670u; }
        if (ctx->pc != 0x2A6670u) { return; }
    }
    ctx->pc = 0x2A6670u;
label_2a6670:
    // 0x2a6670: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a6670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a6674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a6674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a6678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a667c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a667cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a6680: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A6680u;
            // 0x2a6684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A6688u;
}
