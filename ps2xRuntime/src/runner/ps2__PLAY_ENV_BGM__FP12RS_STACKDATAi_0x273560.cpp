#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PLAY_ENV_BGM__FP12RS_STACKDATAi
// Address: 0x273560 - 0x273684
void ps2__PLAY_ENV_BGM__FP12RS_STACKDATAi_0x273560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PLAY_ENV_BGM__FP12RS_STACKDATAi_0x273560");
#endif

    switch (ctx->pc) {
        case 0x273580u: goto label_273580;
        case 0x27358cu: goto label_27358c;
        case 0x2735a4u: goto label_2735a4;
        case 0x2735b4u: goto label_2735b4;
        case 0x2735e8u: goto label_2735e8;
        case 0x2735fcu: goto label_2735fc;
        case 0x273620u: goto label_273620;
        case 0x273628u: goto label_273628;
        case 0x27363cu: goto label_27363c;
        case 0x273650u: goto label_273650;
        default: break;
    }

    ctx->pc = 0x273560u;

    // 0x273560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x273560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x273564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x273564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x273568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x273568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27356c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x273570: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x273570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x273574: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x273574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273578: 0xc097e18  jal         func_25F860
    ctx->pc = 0x273578u;
    SET_GPR_U32(ctx, 31, 0x273580u);
    ctx->pc = 0x27357Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273578u;
            // 0x27357c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273580u; }
        if (ctx->pc != 0x273580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273580u; }
        if (ctx->pc != 0x273580u) { return; }
    }
    ctx->pc = 0x273580u;
label_273580:
    // 0x273580: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273584: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x273584u;
    SET_GPR_U32(ctx, 31, 0x27358Cu);
    ctx->pc = 0x273588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273584u;
            // 0x273588: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27358Cu; }
        if (ctx->pc != 0x27358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27358Cu; }
        if (ctx->pc != 0x27358Cu) { return; }
    }
    ctx->pc = 0x27358Cu;
label_27358c:
    // 0x27358c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x273590: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x273590u;
    {
        const bool branch_taken_0x273590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x273594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273590u;
            // 0x273594: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273590) {
            ctx->pc = 0x2735BCu;
            goto label_2735bc;
        }
    }
    ctx->pc = 0x273598u;
    // 0x273598: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x273598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27359c: 0xc0a9a08  jal         func_2A6820
    ctx->pc = 0x27359Cu;
    SET_GPR_U32(ctx, 31, 0x2735A4u);
    ctx->pc = 0x2735A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27359Cu;
            // 0x2735a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6820u;
    if (runtime->hasFunction(0x2A6820u)) {
        auto targetFn = runtime->lookupFunction(0x2A6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735A4u; }
        if (ctx->pc != 0x2735A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeEnvBGM__6CSceneFi_0x2a6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735A4u; }
        if (ctx->pc != 0x2735A4u) { return; }
    }
    ctx->pc = 0x2735A4u;
label_2735a4:
    // 0x2735a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2735a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2735a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2735a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2735ac: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x2735ACu;
    SET_GPR_U32(ctx, 31, 0x2735B4u);
    ctx->pc = 0x2735B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2735ACu;
            // 0x2735b0: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735B4u; }
        if (ctx->pc != 0x2735B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735B4u; }
        if (ctx->pc != 0x2735B4u) { return; }
    }
    ctx->pc = 0x2735B4u;
label_2735b4:
    // 0x2735b4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2735B4u;
    {
        const bool branch_taken_0x2735b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2735B4u;
            // 0x2735b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735b4) {
            ctx->pc = 0x27366Cu;
            goto label_27366c;
        }
    }
    ctx->pc = 0x2735BCu;
label_2735bc:
    // 0x2735bc: 0x12220016  beq         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2735BCu;
    {
        const bool branch_taken_0x2735bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2735C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2735BCu;
            // 0x2735c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735bc) {
            ctx->pc = 0x273618u;
            goto label_273618;
        }
    }
    ctx->pc = 0x2735C4u;
    // 0x2735c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2735c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2735c8: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2735C8u;
    {
        const bool branch_taken_0x2735c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2735c8) {
            ctx->pc = 0x2735D8u;
            goto label_2735d8;
        }
    }
    ctx->pc = 0x2735D0u;
    // 0x2735d0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2735D0u;
    {
        const bool branch_taken_0x2735d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2735D0u;
            // 0x2735d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735d0) {
            ctx->pc = 0x27366Cu;
            goto label_27366c;
        }
    }
    ctx->pc = 0x2735D8u;
label_2735d8:
    // 0x2735d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2735d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2735dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2735dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2735e0: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x2735E0u;
    SET_GPR_U32(ctx, 31, 0x2735E8u);
    ctx->pc = 0x2735E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2735E0u;
            // 0x2735e4: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735E8u; }
        if (ctx->pc != 0x2735E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735E8u; }
        if (ctx->pc != 0x2735E8u) { return; }
    }
    ctx->pc = 0x2735E8u;
label_2735e8:
    // 0x2735e8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2735e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2735ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2735ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2735f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2735f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2735f4: 0xc0a99a4  jal         func_2A6690
    ctx->pc = 0x2735F4u;
    SET_GPR_U32(ctx, 31, 0x2735FCu);
    ctx->pc = 0x2735F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2735F4u;
            // 0x2735f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6690u;
    if (runtime->hasFunction(0x2A6690u)) {
        auto targetFn = runtime->lookupFunction(0x2A6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735FCu; }
        if (ctx->pc != 0x2735FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBGM__6CSceneFif_0x2a6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2735FCu; }
        if (ctx->pc != 0x2735FCu) { return; }
    }
    ctx->pc = 0x2735FCu;
label_2735fc:
    // 0x2735fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2735fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x273600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x273604: 0xac30e560  sw          $s0, -0x1AA0($at)
    ctx->pc = 0x273604u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960480), GPR_U32(ctx, 16));
    // 0x273608: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x27360c: 0xac22e55c  sw          $v0, -0x1AA4($at)
    ctx->pc = 0x27360cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960476), GPR_U32(ctx, 2));
    // 0x273610: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x273610u;
    {
        const bool branch_taken_0x273610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273610u;
            // 0x273614: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273610) {
            ctx->pc = 0x27366Cu;
            goto label_27366c;
        }
    }
    ctx->pc = 0x273618u;
label_273618:
    // 0x273618: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x273618u;
    SET_GPR_U32(ctx, 31, 0x273620u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273620u; }
        if (ctx->pc != 0x273620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273620u; }
        if (ctx->pc != 0x273620u) { return; }
    }
    ctx->pc = 0x273620u;
label_273620:
    // 0x273620: 0xc0a248c  jal         func_289230
    ctx->pc = 0x273620u;
    SET_GPR_U32(ctx, 31, 0x273628u);
    ctx->pc = 0x273624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273620u;
            // 0x273624: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273628u; }
        if (ctx->pc != 0x273628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273628u; }
        if (ctx->pc != 0x273628u) { return; }
    }
    ctx->pc = 0x273628u;
label_273628:
    // 0x273628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x273628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27362c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27362cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273630: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x273630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273634: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x273634u;
    SET_GPR_U32(ctx, 31, 0x27363Cu);
    ctx->pc = 0x273638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273634u;
            // 0x273638: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27363Cu; }
        if (ctx->pc != 0x27363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27363Cu; }
        if (ctx->pc != 0x27363Cu) { return; }
    }
    ctx->pc = 0x27363Cu;
label_27363c:
    // 0x27363c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27363cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273640: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x273640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x273644: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x273644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x273648: 0xc0a99a4  jal         func_2A6690
    ctx->pc = 0x273648u;
    SET_GPR_U32(ctx, 31, 0x273650u);
    ctx->pc = 0x27364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273648u;
            // 0x27364c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6690u;
    if (runtime->hasFunction(0x2A6690u)) {
        auto targetFn = runtime->lookupFunction(0x2A6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273650u; }
        if (ctx->pc != 0x273650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBGM__6CSceneFif_0x2a6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273650u; }
        if (ctx->pc != 0x273650u) { return; }
    }
    ctx->pc = 0x273650u;
label_273650:
    // 0x273650: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x273650u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273654: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273658: 0xac30e560  sw          $s0, -0x1AA0($at)
    ctx->pc = 0x273658u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960480), GPR_U32(ctx, 16));
    // 0x27365c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x273660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x273664: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x273664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x273668: 0xe420e55c  swc1        $f0, -0x1AA4($at)
    ctx->pc = 0x273668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960476), bits); }
label_27366c:
    // 0x27366c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27366cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x273670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x273678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27367c: 0x3e00008  jr          $ra
    ctx->pc = 0x27367Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27367Cu;
            // 0x273680: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273684u;
}
