#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventScriptSetup__FP18SYSTEM_SCRIPT_INFO
// Address: 0x1d3830 - 0x1d3928
void EventScriptSetup__FP18SYSTEM_SCRIPT_INFO_0x1d3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventScriptSetup__FP18SYSTEM_SCRIPT_INFO_0x1d3830");
#endif

    switch (ctx->pc) {
        case 0x1d3848u: goto label_1d3848;
        case 0x1d3858u: goto label_1d3858;
        case 0x1d3864u: goto label_1d3864;
        case 0x1d3870u: goto label_1d3870;
        case 0x1d3890u: goto label_1d3890;
        case 0x1d38acu: goto label_1d38ac;
        case 0x1d38c4u: goto label_1d38c4;
        case 0x1d38e4u: goto label_1d38e4;
        case 0x1d38fcu: goto label_1d38fc;
        case 0x1d3908u: goto label_1d3908;
        default: break;
    }

    ctx->pc = 0x1d3830u;

    // 0x1d3830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d383c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d383cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3840: 0xc0953f8  jal         func_254FE0
    ctx->pc = 0x1D3840u;
    SET_GPR_U32(ctx, 31, 0x1D3848u);
    ctx->pc = 0x1D3844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3840u;
            // 0x1d3844: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254FE0u;
    if (runtime->hasFunction(0x254FE0u)) {
        auto targetFn = runtime->lookupFunction(0x254FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3848u; }
        if (ctx->pc != 0x1D3848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEvent__FP6CScene_0x254fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3848u; }
        if (ctx->pc != 0x1D3848u) { return; }
    }
    ctx->pc = 0x1D3848u;
label_1d3848:
    // 0x1d3848: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d3848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
    // 0x1d384c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d3850: 0xc06e5c4  jal         func_1B9710
    ctx->pc = 0x1D3850u;
    SET_GPR_U32(ctx, 31, 0x1D3858u);
    ctx->pc = 0x1D3854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3850u;
            // 0x1d3854: 0x2484f390  addiu       $a0, $a0, -0xC70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9710u;
    if (runtime->hasFunction(0x1B9710u)) {
        auto targetFn = runtime->lookupFunction(0x1B9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3858u; }
        if (ctx->pc != 0x1D3858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopVoice__16CRoboVoiceSystemFi_0x1b9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3858u; }
        if (ctx->pc != 0x1D3858u) { return; }
    }
    ctx->pc = 0x1D3858u;
label_1d3858:
    // 0x1d3858: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d3858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d385c: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x1D385Cu;
    SET_GPR_U32(ctx, 31, 0x1D3864u);
    ctx->pc = 0x1D3860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D385Cu;
            // 0x1d3860: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D780u;
    if (runtime->hasFunction(0x17D780u)) {
        auto targetFn = runtime->lookupFunction(0x17D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3864u; }
        if (ctx->pc != 0x1D3864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetFade__10CFadeInOutFv_0x17d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3864u; }
        if (ctx->pc != 0x1D3864u) { return; }
    }
    ctx->pc = 0x1D3864u;
label_1d3864:
    // 0x1d3864: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1d3864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d3868: 0xc09542c  jal         func_2550B0
    ctx->pc = 0x1D3868u;
    SET_GPR_U32(ctx, 31, 0x1D3870u);
    ctx->pc = 0x1D386Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3868u;
            // 0x1d386c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3870u; }
        if (ctx->pc != 0x1D3870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3870u; }
        if (ctx->pc != 0x1D3870u) { return; }
    }
    ctx->pc = 0x1D3870u;
label_1d3870:
    // 0x1d3870: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3870u;
    {
        const bool branch_taken_0x1d3870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3870u;
            // 0x1d3874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3870) {
            ctx->pc = 0x1D3918u;
            goto label_1d3918;
        }
    }
    ctx->pc = 0x1D3878u;
    // 0x1d3878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d387c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1d387cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1d3880: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1d3880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3884: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x1d3884u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3888: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1D3888u;
    SET_GPR_U32(ctx, 31, 0x1D3890u);
    ctx->pc = 0x1D388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3888u;
            // 0x1d388c: 0x248472e0  addiu       $a0, $a0, 0x72E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3890u; }
        if (ctx->pc != 0x1D3890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3890u; }
        if (ctx->pc != 0x1D3890u) { return; }
    }
    ctx->pc = 0x1D3890u;
label_1d3890:
    // 0x1d3890: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d3890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d3894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3898: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d3898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1d389c: 0xac23f6e0  sw          $v1, -0x920($at)
    ctx->pc = 0x1d389cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 3));
    // 0x1d38a0: 0xac402e58  sw          $zero, 0x2E58($v0)
    ctx->pc = 0x1d38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11864), GPR_U32(ctx, 0));
    // 0x1d38a4: 0xc074fb0  jal         func_1D3EC0
    ctx->pc = 0x1D38A4u;
    SET_GPR_U32(ctx, 31, 0x1D38ACu);
    ctx->pc = 0x1D38A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38A4u;
            // 0x1d38a8: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EC0u;
    if (runtime->hasFunction(0x1D3EC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38ACu; }
        if (ctx->pc != 0x1D38ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetEyeView__FP12CActionChara_0x1d3ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38ACu; }
        if (ctx->pc != 0x1D38ACu) { return; }
    }
    ctx->pc = 0x1D38ACu;
label_1d38ac:
    // 0x1d38ac: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d38acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1d38b0: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d38b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
    // 0x1d38b4: 0x24845a20  addiu       $a0, $a0, 0x5A20
    ctx->pc = 0x1d38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
    // 0x1d38b8: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x1d38b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
    // 0x1d38bc: 0xc049c18  jal         func_127060
    ctx->pc = 0x1D38BCu;
    SET_GPR_U32(ctx, 31, 0x1D38C4u);
    ctx->pc = 0x1D38C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38BCu;
            // 0x1d38c0: 0x240601f0  addiu       $a2, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38C4u; }
        if (ctx->pc != 0x1D38C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38C4u; }
        if (ctx->pc != 0x1D38C4u) { return; }
    }
    ctx->pc = 0x1D38C4u;
label_1d38c4:
    // 0x1d38c4: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d38c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d38c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d38cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d38ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d38d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d38d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d38d4: 0xac452e54  sw          $a1, 0x2E54($v0)
    ctx->pc = 0x1d38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 5));
    // 0x1d38d8: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1d38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
    // 0x1d38dc: 0xc0a3370  jal         func_28CDC0
    ctx->pc = 0x1D38DCu;
    SET_GPR_U32(ctx, 31, 0x1D38E4u);
    ctx->pc = 0x1D38E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38DCu;
            // 0x1d38e0: 0xac430580  sw          $v1, 0x580($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CDC0u;
    if (runtime->hasFunction(0x28CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x28CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38E4u; }
        if (ctx->pc != 0x1D38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoopSoundManager__Fi_0x28cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38E4u; }
        if (ctx->pc != 0x1D38E4u) { return; }
    }
    ctx->pc = 0x1D38E4u;
label_1d38e4:
    // 0x1d38e4: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d38e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d38ec: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x1d38ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1d38f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1d38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1d38f4: 0xc05acf0  jal         func_16B3C0
    ctx->pc = 0x1D38F4u;
    SET_GPR_U32(ctx, 31, 0x1D38FCu);
    ctx->pc = 0x1D38F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D38F4u;
            // 0x1d38f8: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B3C0u;
    if (runtime->hasFunction(0x16B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x16B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38FCu; }
        if (ctx->pc != 0x1D38FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveThrowItem__12CActionCharaFv_0x16b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D38FCu; }
        if (ctx->pc != 0x1D38FCu) { return; }
    }
    ctx->pc = 0x1D38FCu;
label_1d38fc:
    // 0x1d38fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
    // 0x1d3900: 0xc0a2e18  jal         func_28B860
    ctx->pc = 0x1D3900u;
    SET_GPR_U32(ctx, 31, 0x1D3908u);
    ctx->pc = 0x1D3904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3900u;
            // 0x1d3904: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B860u;
    if (runtime->hasFunction(0x28B860u)) {
        auto targetFn = runtime->lookupFunction(0x28B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3908u; }
        if (ctx->pc != 0x1D3908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__18MessageTaskManagerFv_0x28b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3908u; }
        if (ctx->pc != 0x1D3908u) { return; }
    }
    ctx->pc = 0x1D3908u;
label_1d3908:
    // 0x1d3908: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
    // 0x1d390c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3914: 0xa4640044  sh          $a0, 0x44($v1)
    ctx->pc = 0x1d3914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 4));
label_1d3918:
    // 0x1d3918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d391c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d391cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3920: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3920u;
            // 0x1d3924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3928u;
}
