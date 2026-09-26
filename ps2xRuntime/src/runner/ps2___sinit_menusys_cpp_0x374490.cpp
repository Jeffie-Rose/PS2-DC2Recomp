#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menusys.cpp
// Address: 0x374490 - 0x37457c
void ps2___sinit_menusys_cpp_0x374490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menusys_cpp_0x374490");
#endif

    switch (ctx->pc) {
        case 0x3744b0u: goto label_3744b0;
        case 0x3744bcu: goto label_3744bc;
        case 0x3744c8u: goto label_3744c8;
        case 0x3744dcu: goto label_3744dc;
        case 0x3744e8u: goto label_3744e8;
        case 0x3744f4u: goto label_3744f4;
        case 0x374500u: goto label_374500;
        case 0x37450cu: goto label_37450c;
        case 0x374518u: goto label_374518;
        case 0x374524u: goto label_374524;
        case 0x374530u: goto label_374530;
        case 0x37453cu: goto label_37453c;
        case 0x374548u: goto label_374548;
        case 0x374564u: goto label_374564;
        case 0x374570u: goto label_374570;
        default: break;
    }

    ctx->pc = 0x374490u;

    // 0x374490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374494: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37449c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3744a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x3744a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x3744a4: 0x2484d820  addiu       $a0, $a0, -0x27E0
    ctx->pc = 0x3744a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x3744a8: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x3744A8u;
    SET_GPR_U32(ctx, 31, 0x3744B0u);
    ctx->pc = 0x3744ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744A8u;
            // 0x3744ac: 0xac22d8ac  sw          $v0, -0x2754($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294957228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744B0u; }
        if (ctx->pc != 0x3744B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744B0u; }
        if (ctx->pc != 0x3744B0u) { return; }
    }
    ctx->pc = 0x3744B0u;
label_3744b0:
    // 0x3744b0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3744b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3744b4: 0xc08e970  jal         func_23A5C0
    ctx->pc = 0x3744B4u;
    SET_GPR_U32(ctx, 31, 0x3744BCu);
    ctx->pc = 0x3744B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744B4u;
            // 0x3744b8: 0x2484d8c0  addiu       $a0, $a0, -0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A5C0u;
    if (runtime->hasFunction(0x23A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x23A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744BCu; }
        if (ctx->pc != 0x3744BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15CMENU_USERPARAMFv_0x23a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744BCu; }
        if (ctx->pc != 0x3744BCu) { return; }
    }
    ctx->pc = 0x3744BCu;
label_3744bc:
    // 0x3744bc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3744bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3744c0: 0xc04e640  jal         func_139900
    ctx->pc = 0x3744C0u;
    SET_GPR_U32(ctx, 31, 0x3744C8u);
    ctx->pc = 0x3744C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744C0u;
            // 0x3744c4: 0x2484d8e0  addiu       $a0, $a0, -0x2720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744C8u; }
        if (ctx->pc != 0x3744C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744C8u; }
        if (ctx->pc != 0x3744C8u) { return; }
    }
    ctx->pc = 0x3744C8u;
label_3744c8:
    // 0x3744c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3744c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3744cc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3744ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3744d0: 0x2484db30  addiu       $a0, $a0, -0x24D0
    ctx->pc = 0x3744d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957872));
    // 0x3744d4: 0xc04e640  jal         func_139900
    ctx->pc = 0x3744D4u;
    SET_GPR_U32(ctx, 31, 0x3744DCu);
    ctx->pc = 0x3744D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744D4u;
            // 0x3744d8: 0xaf8295b8  sw          $v0, -0x6A48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744DCu; }
        if (ctx->pc != 0x3744DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744DCu; }
        if (ctx->pc != 0x3744DCu) { return; }
    }
    ctx->pc = 0x3744DCu;
label_3744dc:
    // 0x3744dc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3744dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3744e0: 0xc04e640  jal         func_139900
    ctx->pc = 0x3744E0u;
    SET_GPR_U32(ctx, 31, 0x3744E8u);
    ctx->pc = 0x3744E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744E0u;
            // 0x3744e4: 0x2484db60  addiu       $a0, $a0, -0x24A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744E8u; }
        if (ctx->pc != 0x3744E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744E8u; }
        if (ctx->pc != 0x3744E8u) { return; }
    }
    ctx->pc = 0x3744E8u;
label_3744e8:
    // 0x3744e8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3744e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3744ec: 0xc04e640  jal         func_139900
    ctx->pc = 0x3744ECu;
    SET_GPR_U32(ctx, 31, 0x3744F4u);
    ctx->pc = 0x3744F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744ECu;
            // 0x3744f0: 0x2484db90  addiu       $a0, $a0, -0x2470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744F4u; }
        if (ctx->pc != 0x3744F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3744F4u; }
        if (ctx->pc != 0x3744F4u) { return; }
    }
    ctx->pc = 0x3744F4u;
label_3744f4:
    // 0x3744f4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3744f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3744f8: 0xc04e640  jal         func_139900
    ctx->pc = 0x3744F8u;
    SET_GPR_U32(ctx, 31, 0x374500u);
    ctx->pc = 0x3744FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3744F8u;
            // 0x3744fc: 0x2484dbc0  addiu       $a0, $a0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374500u; }
        if (ctx->pc != 0x374500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374500u; }
        if (ctx->pc != 0x374500u) { return; }
    }
    ctx->pc = 0x374500u;
label_374500:
    // 0x374500: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374504: 0xc04e640  jal         func_139900
    ctx->pc = 0x374504u;
    SET_GPR_U32(ctx, 31, 0x37450Cu);
    ctx->pc = 0x374508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374504u;
            // 0x374508: 0x2484dbf0  addiu       $a0, $a0, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37450Cu; }
        if (ctx->pc != 0x37450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37450Cu; }
        if (ctx->pc != 0x37450Cu) { return; }
    }
    ctx->pc = 0x37450Cu;
label_37450c:
    // 0x37450c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x37450cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374510: 0xc065c24  jal         func_197090
    ctx->pc = 0x374510u;
    SET_GPR_U32(ctx, 31, 0x374518u);
    ctx->pc = 0x374514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374510u;
            // 0x374514: 0x2484dc70  addiu       $a0, $a0, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374518u; }
        if (ctx->pc != 0x374518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374518u; }
        if (ctx->pc != 0x374518u) { return; }
    }
    ctx->pc = 0x374518u;
label_374518:
    // 0x374518: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x37451c: 0xc065c24  jal         func_197090
    ctx->pc = 0x37451Cu;
    SET_GPR_U32(ctx, 31, 0x374524u);
    ctx->pc = 0x374520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37451Cu;
            // 0x374520: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374524u; }
        if (ctx->pc != 0x374524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374524u; }
        if (ctx->pc != 0x374524u) { return; }
    }
    ctx->pc = 0x374524u;
label_374524:
    // 0x374524: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374528: 0xc065c24  jal         func_197090
    ctx->pc = 0x374528u;
    SET_GPR_U32(ctx, 31, 0x374530u);
    ctx->pc = 0x37452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374528u;
            // 0x37452c: 0x2484dd70  addiu       $a0, $a0, -0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374530u; }
        if (ctx->pc != 0x374530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374530u; }
        if (ctx->pc != 0x374530u) { return; }
    }
    ctx->pc = 0x374530u;
label_374530:
    // 0x374530: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374534: 0xc065c24  jal         func_197090
    ctx->pc = 0x374534u;
    SET_GPR_U32(ctx, 31, 0x37453Cu);
    ctx->pc = 0x374538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374534u;
            // 0x374538: 0x2484de60  addiu       $a0, $a0, -0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37453Cu; }
        if (ctx->pc != 0x37453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37453Cu; }
        if (ctx->pc != 0x37453Cu) { return; }
    }
    ctx->pc = 0x37453Cu;
label_37453c:
    // 0x37453c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x37453cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374540: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x374540u;
    SET_GPR_U32(ctx, 31, 0x374548u);
    ctx->pc = 0x374544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374540u;
            // 0x374544: 0x2484df70  addiu       $a0, $a0, -0x2090 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374548u; }
        if (ctx->pc != 0x374548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374548u; }
        if (ctx->pc != 0x374548u) { return; }
    }
    ctx->pc = 0x374548u;
label_374548:
    // 0x374548: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x374548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x37454c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x37454cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374550: 0x24425fa0  addiu       $v0, $v0, 0x5FA0
    ctx->pc = 0x374550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24480));
    // 0x374554: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x374554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x374558: 0x2484e274  addiu       $a0, $a0, -0x1D8C
    ctx->pc = 0x374558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959732));
    // 0x37455c: 0xc065c24  jal         func_197090
    ctx->pc = 0x37455Cu;
    SET_GPR_U32(ctx, 31, 0x374564u);
    ctx->pc = 0x374560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37455Cu;
            // 0x374560: 0xac22e07c  sw          $v0, -0x1F84($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374564u; }
        if (ctx->pc != 0x374564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374564u; }
        if (ctx->pc != 0x374564u) { return; }
    }
    ctx->pc = 0x374564u;
label_374564:
    // 0x374564: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x374564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x374568: 0xc04e640  jal         func_139900
    ctx->pc = 0x374568u;
    SET_GPR_U32(ctx, 31, 0x374570u);
    ctx->pc = 0x37456Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374568u;
            // 0x37456c: 0x2484e2e0  addiu       $a0, $a0, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374570u; }
        if (ctx->pc != 0x374570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374570u; }
        if (ctx->pc != 0x374570u) { return; }
    }
    ctx->pc = 0x374570u;
label_374570:
    // 0x374570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374574: 0x3e00008  jr          $ra
    ctx->pc = 0x374574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374574u;
            // 0x374578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37457Cu;
}
