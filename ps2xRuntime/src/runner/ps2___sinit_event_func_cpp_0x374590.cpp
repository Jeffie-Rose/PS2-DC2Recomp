#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_event_func.cpp
// Address: 0x374590 - 0x3747b8
void ps2___sinit_event_func_cpp_0x374590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_event_func_cpp_0x374590");
#endif

    switch (ctx->pc) {
        case 0x3745acu: goto label_3745ac;
        case 0x3745b4u: goto label_3745b4;
        case 0x3745bcu: goto label_3745bc;
        case 0x3745e0u: goto label_3745e0;
        case 0x3745e8u: goto label_3745e8;
        case 0x3745f0u: goto label_3745f0;
        case 0x374608u: goto label_374608;
        case 0x374610u: goto label_374610;
        case 0x374628u: goto label_374628;
        case 0x374630u: goto label_374630;
        case 0x374658u: goto label_374658;
        case 0x374660u: goto label_374660;
        case 0x374684u: goto label_374684;
        case 0x37468cu: goto label_37468c;
        case 0x3746acu: goto label_3746ac;
        case 0x3746b8u: goto label_3746b8;
        case 0x3746c4u: goto label_3746c4;
        case 0x3746e0u: goto label_3746e0;
        case 0x3746e8u: goto label_3746e8;
        case 0x374700u: goto label_374700;
        case 0x374720u: goto label_374720;
        case 0x37472cu: goto label_37472c;
        case 0x37474cu: goto label_37474c;
        case 0x37476cu: goto label_37476c;
        case 0x374798u: goto label_374798;
        case 0x3747a4u: goto label_3747a4;
        default: break;
    }

    ctx->pc = 0x374590u;

    // 0x374590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x374594: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x374598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37459c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x37459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x3745a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3745a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3745a4: 0xc097630  jal         func_25D8C0
    ctx->pc = 0x3745A4u;
    SET_GPR_U32(ctx, 31, 0x3745ACu);
    ctx->pc = 0x3745A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3745A4u;
            // 0x3745a8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D8C0u;
    if (runtime->hasFunction(0x25D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x25D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745ACu; }
        if (ctx->pc != 0x3745ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CEohMotherFv_0x25d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745ACu; }
        if (ctx->pc != 0x3745ACu) { return; }
    }
    ctx->pc = 0x3745ACu;
label_3745ac:
    // 0x3745ac: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x3745acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
    // 0x3745b0: 0x2610ea80  addiu       $s0, $s0, -0x1580
    ctx->pc = 0x3745b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961792));
label_3745b4:
    // 0x3745b4: 0xc0a417c  jal         func_2905F0
    ctx->pc = 0x3745B4u;
    SET_GPR_U32(ctx, 31, 0x3745BCu);
    ctx->pc = 0x3745B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3745B4u;
            // 0x3745b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2905F0u;
    if (runtime->hasFunction(0x2905F0u)) {
        auto targetFn = runtime->lookupFunction(0x2905F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745BCu; }
        if (ctx->pc != 0x3745BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__12CEventSpriteFv_0x2905f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745BCu; }
        if (ctx->pc != 0x3745BCu) { return; }
    }
    ctx->pc = 0x3745BCu;
label_3745bc:
    // 0x3745bc: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x3745bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x3745c0: 0x26100088  addiu       $s0, $s0, 0x88
    ctx->pc = 0x3745c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x3745c4: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x3745c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
    // 0x3745c8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3745c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3745cc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3745CCu;
    {
        const bool branch_taken_0x3745cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3745cc) {
            ctx->pc = 0x3745B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3745b4;
        }
    }
    ctx->pc = 0x3745D4u;
    // 0x3745d4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3745d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3745d8: 0xc0a4280  jal         func_290A00
    ctx->pc = 0x3745D8u;
    SET_GPR_U32(ctx, 31, 0x3745E0u);
    ctx->pc = 0x3745DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3745D8u;
            // 0x3745dc: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A00u;
    if (runtime->hasFunction(0x290A00u)) {
        auto targetFn = runtime->lookupFunction(0x290A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745E0u; }
        if (ctx->pc != 0x3745E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__18CEventSpriteMotherFv_0x290a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745E0u; }
        if (ctx->pc != 0x3745E0u) { return; }
    }
    ctx->pc = 0x3745E0u;
label_3745e0:
    // 0x3745e0: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x3745e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
    // 0x3745e4: 0x2610f0d0  addiu       $s0, $s0, -0xF30
    ctx->pc = 0x3745e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963408));
label_3745e8:
    // 0x3745e8: 0xc0a0840  jal         func_282100
    ctx->pc = 0x3745E8u;
    SET_GPR_U32(ctx, 31, 0x3745F0u);
    ctx->pc = 0x3745ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3745E8u;
            // 0x3745ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282100u;
    if (runtime->hasFunction(0x282100u)) {
        auto targetFn = runtime->lookupFunction(0x282100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745F0u; }
        if (ctx->pc != 0x3745F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CRainDropFv_0x282100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3745F0u; }
        if (ctx->pc != 0x3745F0u) { return; }
    }
    ctx->pc = 0x3745F0u;
label_3745f0:
    // 0x3745f0: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x3745f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
    // 0x3745f4: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x3745f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3745f8: 0x26313590  addiu       $s1, $s1, 0x3590
    ctx->pc = 0x3745f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 13712));
    // 0x3745fc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3745fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x374600: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x374600u;
    {
        const bool branch_taken_0x374600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374600) {
            ctx->pc = 0x3745E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3745e8;
        }
    }
    ctx->pc = 0x374608u;
label_374608:
    // 0x374608: 0xc0a0840  jal         func_282100
    ctx->pc = 0x374608u;
    SET_GPR_U32(ctx, 31, 0x374610u);
    ctx->pc = 0x37460Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374608u;
            // 0x37460c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282100u;
    if (runtime->hasFunction(0x282100u)) {
        auto targetFn = runtime->lookupFunction(0x282100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374610u; }
        if (ctx->pc != 0x374610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CRainDropFv_0x282100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374610u; }
        if (ctx->pc != 0x374610u) { return; }
    }
    ctx->pc = 0x374610u;
label_374610:
    // 0x374610: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x374610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
    // 0x374614: 0x263100b0  addiu       $s1, $s1, 0xB0
    ctx->pc = 0x374614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x374618: 0x261057f0  addiu       $s0, $s0, 0x57F0
    ctx->pc = 0x374618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22512));
    // 0x37461c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x37461cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x374620: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x374620u;
    {
        const bool branch_taken_0x374620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374620) {
            ctx->pc = 0x374608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_374608;
        }
    }
    ctx->pc = 0x374628u;
label_374628:
    // 0x374628: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x374628u;
    SET_GPR_U32(ctx, 31, 0x374630u);
    ctx->pc = 0x37462Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374628u;
            // 0x37462c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (runtime->hasFunction(0x281CE0u)) {
        auto targetFn = runtime->lookupFunction(0x281CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374630u; }
        if (ctx->pc != 0x374630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9CParticleFv_0x281ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374630u; }
        if (ctx->pc != 0x374630u) { return; }
    }
    ctx->pc = 0x374630u;
label_374630:
    // 0x374630: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x374630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x374634: 0x34038670  ori         $v1, $zero, 0x8670
    ctx->pc = 0x374634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34416);
    // 0x374638: 0x2442f0c0  addiu       $v0, $v0, -0xF40
    ctx->pc = 0x374638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x37463c: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x37463cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x374640: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374644: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x374644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374648: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x374648u;
    {
        const bool branch_taken_0x374648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374648) {
            ctx->pc = 0x374628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_374628;
        }
    }
    ctx->pc = 0x374650u;
    // 0x374650: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x374650u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
    // 0x374654: 0x26107730  addiu       $s0, $s0, 0x7730
    ctx->pc = 0x374654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30512));
label_374658:
    // 0x374658: 0xc0a0668  jal         func_2819A0
    ctx->pc = 0x374658u;
    SET_GPR_U32(ctx, 31, 0x374660u);
    ctx->pc = 0x37465Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374658u;
            // 0x37465c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2819A0u;
    if (runtime->hasFunction(0x2819A0u)) {
        auto targetFn = runtime->lookupFunction(0x2819A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374660u; }
        if (ctx->pc != 0x374660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__7CRippleFv_0x2819a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374660u; }
        if (ctx->pc != 0x374660u) { return; }
    }
    ctx->pc = 0x374660u;
label_374660:
    // 0x374660: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x374660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x374664: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x374664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x374668: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x374668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
    // 0x37466c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x37466cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374670: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x374670u;
    {
        const bool branch_taken_0x374670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x374670) {
            ctx->pc = 0x374658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_374658;
        }
    }
    ctx->pc = 0x374678u;
    // 0x374678: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x37467c: 0xc0a09bc  jal         func_2826F0
    ctx->pc = 0x37467Cu;
    SET_GPR_U32(ctx, 31, 0x374684u);
    ctx->pc = 0x374680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37467Cu;
            // 0x374680: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2826F0u;
    if (runtime->hasFunction(0x2826F0u)) {
        auto targetFn = runtime->lookupFunction(0x2826F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374684u; }
        if (ctx->pc != 0x374684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CRainFv_0x2826f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374684u; }
        if (ctx->pc != 0x374684u) { return; }
    }
    ctx->pc = 0x374684u;
label_374684:
    // 0x374684: 0xc0a4088  jal         func_290220
    ctx->pc = 0x374684u;
    SET_GPR_U32(ctx, 31, 0x37468Cu);
    ctx->pc = 0x374688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374684u;
            // 0x374688: 0x278497e4  addiu       $a0, $gp, -0x681C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290220u;
    if (runtime->hasFunction(0x290220u)) {
        auto targetFn = runtime->lookupFunction(0x290220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37468Cu; }
        if (ctx->pc != 0x37468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__7CMarkerFv_0x290220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37468Cu; }
        if (ctx->pc != 0x37468Cu) { return; }
    }
    ctx->pc = 0x37468Cu;
label_37468c:
    // 0x37468c: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x37468cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x374690: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x374690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x374694: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x374694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x374698: 0x24a55990  addiu       $a1, $a1, 0x5990
    ctx->pc = 0x374698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22928));
    // 0x37469c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37469cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746a0: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x3746a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3746a4: 0xc040070  jal         func_1001C0
    ctx->pc = 0x3746A4u;
    SET_GPR_U32(ctx, 31, 0x3746ACu);
    ctx->pc = 0x3746A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3746A4u;
            // 0x3746a8: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746ACu; }
        if (ctx->pc != 0x3746ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746ACu; }
        if (ctx->pc != 0x3746ACu) { return; }
    }
    ctx->pc = 0x3746ACu;
label_3746ac:
    // 0x3746ac: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x3746acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x3746b0: 0xc04e640  jal         func_139900
    ctx->pc = 0x3746B0u;
    SET_GPR_U32(ctx, 31, 0x3746B8u);
    ctx->pc = 0x3746B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3746B0u;
            // 0x3746b4: 0x248483a0  addiu       $a0, $a0, -0x7C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746B8u; }
        if (ctx->pc != 0x3746B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746B8u; }
        if (ctx->pc != 0x3746B8u) { return; }
    }
    ctx->pc = 0x3746B8u;
label_3746b8:
    // 0x3746b8: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x3746b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x3746bc: 0xc04e640  jal         func_139900
    ctx->pc = 0x3746BCu;
    SET_GPR_U32(ctx, 31, 0x3746C4u);
    ctx->pc = 0x3746C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3746BCu;
            // 0x3746c0: 0x248497e0  addiu       $a0, $a0, -0x6820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746C4u; }
        if (ctx->pc != 0x3746C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746C4u; }
        if (ctx->pc != 0x3746C4u) { return; }
    }
    ctx->pc = 0x3746C4u;
label_3746c4:
    // 0x3746c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3746c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3746c8: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x3746c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x3746cc: 0x24849830  addiu       $a0, $a0, -0x67D0
    ctx->pc = 0x3746ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940720));
    // 0x3746d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3746d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3746d4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3746d4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3746d8: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x3746D8u;
    SET_GPR_U32(ctx, 31, 0x3746E0u);
    ctx->pc = 0x3746DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3746D8u;
            // 0x3746dc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746E0u; }
        if (ctx->pc != 0x3746E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3746E0u; }
        if (ctx->pc != 0x3746E0u) { return; }
    }
    ctx->pc = 0x3746E0u;
label_3746e0:
    // 0x3746e0: 0x3c1001ef  lui         $s0, 0x1EF
    ctx->pc = 0x3746e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)495 << 16));
    // 0x3746e4: 0x26109850  addiu       $s0, $s0, -0x67B0
    ctx->pc = 0x3746e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940752));
label_3746e8:
    // 0x3746e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3746e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3746ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3746ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746f0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3746f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3746f4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x3746f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x3746f8: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x3746F8u;
    SET_GPR_U32(ctx, 31, 0x374700u);
    ctx->pc = 0x3746FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3746F8u;
            // 0x3746fc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374700u; }
        if (ctx->pc != 0x374700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374700u; }
        if (ctx->pc != 0x374700u) { return; }
    }
    ctx->pc = 0x374700u;
label_374700:
    // 0x374700: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x374700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x374704: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x374704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x374708: 0x244298d0  addiu       $v0, $v0, -0x6730
    ctx->pc = 0x374708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940880));
    // 0x37470c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x37470cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x374710: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x374710u;
    {
        const bool branch_taken_0x374710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374710u;
            // 0x374714: 0x3c0401ef  lui         $a0, 0x1EF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374710) {
            ctx->pc = 0x3746E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3746e8;
        }
    }
    ctx->pc = 0x374718u;
    // 0x374718: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x374718u;
    SET_GPR_U32(ctx, 31, 0x374720u);
    ctx->pc = 0x37471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374718u;
            // 0x37471c: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA760u;
    if (runtime->hasFunction(0x1EA760u)) {
        auto targetFn = runtime->lookupFunction(0x1EA760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374720u; }
        if (ctx->pc != 0x374720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CDngFreeMapFv_0x1ea760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374720u; }
        if (ctx->pc != 0x374720u) { return; }
    }
    ctx->pc = 0x374720u;
label_374720:
    // 0x374720: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x374720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x374724: 0xc096458  jal         func_259160
    ctx->pc = 0x374724u;
    SET_GPR_U32(ctx, 31, 0x37472Cu);
    ctx->pc = 0x374728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374724u;
            // 0x374728: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259160u;
    if (runtime->hasFunction(0x259160u)) {
        auto targetFn = runtime->lookupFunction(0x259160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37472Cu; }
        if (ctx->pc != 0x37472Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12CSceneCmrSeqFv_0x259160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37472Cu; }
        if (ctx->pc != 0x37472Cu) { return; }
    }
    ctx->pc = 0x37472Cu;
label_37472c:
    // 0x37472c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x37472cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x374730: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x374730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x374734: 0x24845430  addiu       $a0, $a0, 0x5430
    ctx->pc = 0x374734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21552));
    // 0x374738: 0x24a5c1c0  addiu       $a1, $a1, -0x3E40
    ctx->pc = 0x374738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951360));
    // 0x37473c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37473cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374740: 0x240705f0  addiu       $a3, $zero, 0x5F0
    ctx->pc = 0x374740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
    // 0x374744: 0xc040070  jal         func_1001C0
    ctx->pc = 0x374744u;
    SET_GPR_U32(ctx, 31, 0x37474Cu);
    ctx->pc = 0x374748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374744u;
            // 0x374748: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37474Cu; }
        if (ctx->pc != 0x37474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37474Cu; }
        if (ctx->pc != 0x37474Cu) { return; }
    }
    ctx->pc = 0x37474Cu;
label_37474c:
    // 0x37474c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x37474cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374750: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x374750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x374754: 0x24841230  addiu       $a0, $a0, 0x1230
    ctx->pc = 0x374754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4656));
    // 0x374758: 0x24a50a60  addiu       $a1, $a1, 0xA60
    ctx->pc = 0x374758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2656));
    // 0x37475c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37475cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374760: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x374760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x374764: 0xc040070  jal         func_1001C0
    ctx->pc = 0x374764u;
    SET_GPR_U32(ctx, 31, 0x37476Cu);
    ctx->pc = 0x374768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374764u;
            // 0x374768: 0x24080030  addiu       $t0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37476Cu; }
        if (ctx->pc != 0x37476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37476Cu; }
        if (ctx->pc != 0x37476Cu) { return; }
    }
    ctx->pc = 0x37476Cu;
label_37476c:
    // 0x37476c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x37476cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x374770: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x374774: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x374774u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
    // 0x374778: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x374778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x37477c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x37477cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x374780: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x374780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
    // 0x374784: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x374784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x374788: 0xac202a38  sw          $zero, 0x2A38($at)
    ctx->pc = 0x374788u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
    // 0x37478c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x37478cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x374790: 0xc097fc0  jal         func_25FF00
    ctx->pc = 0x374790u;
    SET_GPR_U32(ctx, 31, 0x374798u);
    ctx->pc = 0x374794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374790u;
            // 0x374794: 0xac202a3c  sw          $zero, 0x2A3C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FF00u;
    if (runtime->hasFunction(0x25FF00u)) {
        auto targetFn = runtime->lookupFunction(0x25FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374798u; }
        if (ctx->pc != 0x374798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CRasterFv_0x25ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374798u; }
        if (ctx->pc != 0x374798u) { return; }
    }
    ctx->pc = 0x374798u;
label_374798:
    // 0x374798: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x374798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x37479c: 0xc098178  jal         func_2605E0
    ctx->pc = 0x37479Cu;
    SET_GPR_U32(ctx, 31, 0x3747A4u);
    ctx->pc = 0x3747A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37479Cu;
            // 0x3747a0: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2605E0u;
    if (runtime->hasFunction(0x2605E0u)) {
        auto targetFn = runtime->lookupFunction(0x2605E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747A4u; }
        if (ctx->pc != 0x3747A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CScreenEffectFv_0x2605e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3747A4u; }
        if (ctx->pc != 0x3747A4u) { return; }
    }
    ctx->pc = 0x3747A4u;
label_3747a4:
    // 0x3747a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3747a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3747a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3747a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3747ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3747acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3747b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3747B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3747B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3747B0u;
            // 0x3747b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3747B8u;
}
