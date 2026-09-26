#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemInit__FP9mgCMemoryPii
// Address: 0x245260 - 0x24583c
void MenuItemInit__FP9mgCMemoryPii_0x245260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemInit__FP9mgCMemoryPii_0x245260");
#endif

    switch (ctx->pc) {
        case 0x24528cu: goto label_24528c;
        case 0x2452a0u: goto label_2452a0;
        case 0x2452a8u: goto label_2452a8;
        case 0x2452c8u: goto label_2452c8;
        case 0x2452dcu: goto label_2452dc;
        case 0x2452e8u: goto label_2452e8;
        case 0x2452f0u: goto label_2452f0;
        case 0x245308u: goto label_245308;
        case 0x245314u: goto label_245314;
        case 0x245334u: goto label_245334;
        case 0x245354u: goto label_245354;
        case 0x245364u: goto label_245364;
        case 0x24537cu: goto label_24537c;
        case 0x2453a8u: goto label_2453a8;
        case 0x2453b8u: goto label_2453b8;
        case 0x2453d4u: goto label_2453d4;
        case 0x2453f0u: goto label_2453f0;
        case 0x2453f8u: goto label_2453f8;
        case 0x245400u: goto label_245400;
        case 0x245410u: goto label_245410;
        case 0x24541cu: goto label_24541c;
        case 0x245428u: goto label_245428;
        case 0x24544cu: goto label_24544c;
        case 0x245460u: goto label_245460;
        case 0x245470u: goto label_245470;
        case 0x245478u: goto label_245478;
        case 0x2454acu: goto label_2454ac;
        case 0x2454bcu: goto label_2454bc;
        case 0x245524u: goto label_245524;
        case 0x24555cu: goto label_24555c;
        case 0x245570u: goto label_245570;
        case 0x2455ccu: goto label_2455cc;
        case 0x2455ecu: goto label_2455ec;
        case 0x2455f4u: goto label_2455f4;
        case 0x245608u: goto label_245608;
        case 0x245618u: goto label_245618;
        case 0x245624u: goto label_245624;
        case 0x245648u: goto label_245648;
        case 0x245650u: goto label_245650;
        case 0x245664u: goto label_245664;
        case 0x24569cu: goto label_24569c;
        case 0x2456d0u: goto label_2456d0;
        case 0x2456f8u: goto label_2456f8;
        case 0x24577cu: goto label_24577c;
        case 0x245798u: goto label_245798;
        case 0x2457a4u: goto label_2457a4;
        case 0x2457b0u: goto label_2457b0;
        case 0x2457d0u: goto label_2457d0;
        case 0x2457f4u: goto label_2457f4;
        case 0x245804u: goto label_245804;
        case 0x245814u: goto label_245814;
        case 0x245820u: goto label_245820;
        default: break;
    }

    ctx->pc = 0x245260u;

    // 0x245260: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x245260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x245264: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x245264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x245268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x245268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24526c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x245270: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x245270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x245278: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x245278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24527c: 0xaf809678  sw          $zero, -0x6988($gp)
    ctx->pc = 0x24527cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940280), GPR_U32(ctx, 0));
    // 0x245280: 0x8c900020  lw          $s0, 0x20($a0)
    ctx->pc = 0x245280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x245284: 0xc04e748  jal         func_139D20
    ctx->pc = 0x245284u;
    SET_GPR_U32(ctx, 31, 0x24528Cu);
    ctx->pc = 0x245288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245284u;
            // 0x245288: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24528Cu; }
        if (ctx->pc != 0x24528Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24528Cu; }
        if (ctx->pc != 0x24528Cu) { return; }
    }
    ctx->pc = 0x24528Cu;
label_24528c:
    // 0x24528c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x24528cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x245290: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x245294: 0x2484db60  addiu       $a0, $a0, -0x24A0
    ctx->pc = 0x245294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957920));
    // 0x245298: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x245298u;
    SET_GPR_U32(ctx, 31, 0x2452A0u);
    ctx->pc = 0x24529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245298u;
            // 0x24529c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452A0u; }
        if (ctx->pc != 0x2452A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452A0u; }
        if (ctx->pc != 0x2452A0u) { return; }
    }
    ctx->pc = 0x2452A0u;
label_2452a0:
    // 0x2452a0: 0xc04e640  jal         func_139900
    ctx->pc = 0x2452A0u;
    SET_GPR_U32(ctx, 31, 0x2452A8u);
    ctx->pc = 0x2452A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452A0u;
            // 0x2452a4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452A8u; }
        if (ctx->pc != 0x2452A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452A8u; }
        if (ctx->pc != 0x2452A8u) { return; }
    }
    ctx->pc = 0x2452A8u;
label_2452a8:
    // 0x2452a8: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2452a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2452ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2452acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2452b0: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2452b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2452b4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2452b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2452b8: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2452b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2452bc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2452bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2452c0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2452C0u;
    SET_GPR_U32(ctx, 31, 0x2452C8u);
    ctx->pc = 0x2452C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452C0u;
            // 0x2452c4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452C8u; }
        if (ctx->pc != 0x2452C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452C8u; }
        if (ctx->pc != 0x2452C8u) { return; }
    }
    ctx->pc = 0x2452C8u;
label_2452c8:
    // 0x2452c8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2452c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2452cc: 0x2442df70  addiu       $v0, $v0, -0x2090
    ctx->pc = 0x2452ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958960));
    // 0x2452d0: 0xaf8295c0  sw          $v0, -0x6A40($gp)
    ctx->pc = 0x2452d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940096), GPR_U32(ctx, 2));
    // 0x2452d4: 0xc08ff00  jal         func_23FC00
    ctx->pc = 0x2452D4u;
    SET_GPR_U32(ctx, 31, 0x2452DCu);
    ctx->pc = 0x2452D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452D4u;
            // 0x2452d8: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FC00u;
    if (runtime->hasFunction(0x23FC00u)) {
        auto targetFn = runtime->lookupFunction(0x23FC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452DCu; }
        if (ctx->pc != 0x2452DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CMenuItemInfoFv_0x23fc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452DCu; }
        if (ctx->pc != 0x2452DCu) { return; }
    }
    ctx->pc = 0x2452DCu;
label_2452dc:
    // 0x2452dc: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x2452dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2452e0: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x2452E0u;
    SET_GPR_U32(ctx, 31, 0x2452E8u);
    ctx->pc = 0x2452E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2452E0u;
            // 0x2452e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452E8u; }
        if (ctx->pc != 0x2452E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452E8u; }
        if (ctx->pc != 0x2452E8u) { return; }
    }
    ctx->pc = 0x2452E8u;
label_2452e8:
    // 0x2452e8: 0xc064268  jal         func_1909A0
    ctx->pc = 0x2452E8u;
    SET_GPR_U32(ctx, 31, 0x2452F0u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452F0u; }
        if (ctx->pc != 0x2452F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2452F0u; }
        if (ctx->pc != 0x2452F0u) { return; }
    }
    ctx->pc = 0x2452F0u;
label_2452f0:
    // 0x2452f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2452f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2452f4: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2452F4u;
    {
        const bool branch_taken_0x2452f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2452F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2452F4u;
            // 0x2452f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452f4) {
            ctx->pc = 0x245338u;
            goto label_245338;
        }
    }
    ctx->pc = 0x2452FCu;
    // 0x2452fc: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2452fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x245300: 0xc0a0c9c  jal         func_283270
    ctx->pc = 0x245300u;
    SET_GPR_U32(ctx, 31, 0x245308u);
    ctx->pc = 0x245304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245300u;
            // 0x245304: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245308u; }
        if (ctx->pc != 0x245308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245308u; }
        if (ctx->pc != 0x245308u) { return; }
    }
    ctx->pc = 0x245308u;
label_245308:
    // 0x245308: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x245308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x24530c: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x24530Cu;
    SET_GPR_U32(ctx, 31, 0x245314u);
    ctx->pc = 0x245310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24530Cu;
            // 0x245310: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245314u; }
        if (ctx->pc != 0x245314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245314u; }
        if (ctx->pc != 0x245314u) { return; }
    }
    ctx->pc = 0x245314u;
label_245314:
    // 0x245314: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x245314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x245318: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24531c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x24531cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x245320: 0x2484d8e0  addiu       $a0, $a0, -0x2720
    ctx->pc = 0x245320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957280));
    // 0x245324: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x245324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x245328: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x245328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x24532c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x24532Cu;
    SET_GPR_U32(ctx, 31, 0x245334u);
    ctx->pc = 0x245330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24532Cu;
            // 0x245330: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245334u; }
        if (ctx->pc != 0x245334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245334u; }
        if (ctx->pc != 0x245334u) { return; }
    }
    ctx->pc = 0x245334u;
label_245334:
    // 0x245334: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x245334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_245338:
    // 0x245338: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x245338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24533c: 0xa7828364  sh          $v0, -0x7C9C($gp)
    ctx->pc = 0x24533cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935396), (uint16_t)GPR_U32(ctx, 2));
    // 0x245340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245344: 0x24a5b258  addiu       $a1, $a1, -0x4DA8
    ctx->pc = 0x245344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947416));
    // 0x245348: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x245348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24534c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x24534Cu;
    SET_GPR_U32(ctx, 31, 0x245354u);
    ctx->pc = 0x245350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24534Cu;
            // 0x245350: 0xaf8095a8  sw          $zero, -0x6A58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245354u; }
        if (ctx->pc != 0x245354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245354u; }
        if (ctx->pc != 0x245354u) { return; }
    }
    ctx->pc = 0x245354u;
label_245354:
    // 0x245354: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x245354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x245358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24535c: 0xc094f98  jal         func_253E60
    ctx->pc = 0x24535Cu;
    SET_GPR_U32(ctx, 31, 0x245364u);
    ctx->pc = 0x245360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24535Cu;
            // 0x245360: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245364u; }
        if (ctx->pc != 0x245364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245364u; }
        if (ctx->pc != 0x245364u) { return; }
    }
    ctx->pc = 0x245364u;
label_245364:
    // 0x245364: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245368: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x245368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24536c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24536cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245370: 0x24a5b268  addiu       $a1, $a1, -0x4D98
    ctx->pc = 0x245370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947432));
    // 0x245374: 0xc052734  jal         func_149CD0
    ctx->pc = 0x245374u;
    SET_GPR_U32(ctx, 31, 0x24537Cu);
    ctx->pc = 0x245378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245374u;
            // 0x245378: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24537Cu; }
        if (ctx->pc != 0x24537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24537Cu; }
        if (ctx->pc != 0x24537Cu) { return; }
    }
    ctx->pc = 0x24537Cu;
label_24537c:
    // 0x24537c: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245380: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x245380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x245384: 0x2484db30  addiu       $a0, $a0, -0x24D0
    ctx->pc = 0x245384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957872));
    // 0x245388: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x245388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x24538c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x24538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245390: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x245390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x245394: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x245394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x245398: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x245398u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24539c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x24539cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2453a0: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2453A0u;
    SET_GPR_U32(ctx, 31, 0x2453A8u);
    ctx->pc = 0x2453A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453A0u;
            // 0x2453a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453A8u; }
        if (ctx->pc != 0x2453A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453A8u; }
        if (ctx->pc != 0x2453A8u) { return; }
    }
    ctx->pc = 0x2453A8u;
label_2453a8:
    // 0x2453a8: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x2453a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2453ac: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2453acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2453b0: 0xc090e38  jal         func_2438E0
    ctx->pc = 0x2453B0u;
    SET_GPR_U32(ctx, 31, 0x2453B8u);
    ctx->pc = 0x2453B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453B0u;
            // 0x2453b4: 0x24a5db30  addiu       $a1, $a1, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2438E0u;
    if (runtime->hasFunction(0x2438E0u)) {
        auto targetFn = runtime->lookupFunction(0x2438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453B8u; }
        if (ctx->pc != 0x2453B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeMalloc__13CMenuItemInfoFP9mgCMemory_0x2438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453B8u; }
        if (ctx->pc != 0x2453B8u) { return; }
    }
    ctx->pc = 0x2453B8u;
label_2453b8:
    // 0x2453b8: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2453b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2453bc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2453bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2453c0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2453c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2453c4: 0x24a5b278  addiu       $a1, $a1, -0x4D88
    ctx->pc = 0x2453c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947448));
    // 0x2453c8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2453c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2453cc: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x2453CCu;
    SET_GPR_U32(ctx, 31, 0x2453D4u);
    ctx->pc = 0x2453D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453CCu;
            // 0x2453d0: 0x24460140  addiu       $a2, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453D4u; }
        if (ctx->pc != 0x2453D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453D4u; }
        if (ctx->pc != 0x2453D4u) { return; }
    }
    ctx->pc = 0x2453D4u;
label_2453d4:
    // 0x2453d4: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2453d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2453d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2453d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2453dc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2453dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2453e0: 0x24a5b280  addiu       $a1, $a1, -0x4D80
    ctx->pc = 0x2453e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947456));
    // 0x2453e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2453e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2453e8: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x2453E8u;
    SET_GPR_U32(ctx, 31, 0x2453F0u);
    ctx->pc = 0x2453ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453E8u;
            // 0x2453ec: 0x24460150  addiu       $a2, $v0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453F0u; }
        if (ctx->pc != 0x2453F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453F0u; }
        if (ctx->pc != 0x2453F0u) { return; }
    }
    ctx->pc = 0x2453F0u;
label_2453f0:
    // 0x2453f0: 0xc090d24  jal         func_243490
    ctx->pc = 0x2453F0u;
    SET_GPR_U32(ctx, 31, 0x2453F8u);
    ctx->pc = 0x2453F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2453F0u;
            // 0x2453f4: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243490u;
    if (runtime->hasFunction(0x243490u)) {
        auto targetFn = runtime->lookupFunction(0x243490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453F8u; }
        if (ctx->pc != 0x2453F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFormInfo__13CMenuItemInfoFv_0x243490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2453F8u; }
        if (ctx->pc != 0x2453F8u) { return; }
    }
    ctx->pc = 0x2453F8u;
label_2453f8:
    // 0x2453f8: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x2453F8u;
    SET_GPR_U32(ctx, 31, 0x245400u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245400u; }
        if (ctx->pc != 0x245400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245400u; }
        if (ctx->pc != 0x245400u) { return; }
    }
    ctx->pc = 0x245400u;
label_245400:
    // 0x245400: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x245400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245404: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x245404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x245408: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x245408u;
    SET_GPR_U32(ctx, 31, 0x245410u);
    ctx->pc = 0x24540Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245408u;
            // 0x24540c: 0x24a5b288  addiu       $a1, $a1, -0x4D78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245410u; }
        if (ctx->pc != 0x245410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245410u; }
        if (ctx->pc != 0x245410u) { return; }
    }
    ctx->pc = 0x245410u;
label_245410:
    // 0x245410: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x245410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245414: 0xc090bd4  jal         func_242F50
    ctx->pc = 0x245414u;
    SET_GPR_U32(ctx, 31, 0x24541Cu);
    ctx->pc = 0x245418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245414u;
            // 0x245418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242F50u;
    if (runtime->hasFunction(0x242F50u)) {
        auto targetFn = runtime->lookupFunction(0x242F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24541Cu; }
        if (ctx->pc != 0x24541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterDataMenu__13CMenuItemInfoFPUi_0x242f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24541Cu; }
        if (ctx->pc != 0x24541Cu) { return; }
    }
    ctx->pc = 0x24541Cu;
label_24541c:
    // 0x24541c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24541cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x245420: 0xc08f020  jal         func_23C080
    ctx->pc = 0x245420u;
    SET_GPR_U32(ctx, 31, 0x245428u);
    ctx->pc = 0x245424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245420u;
            // 0x245424: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C080u;
    if (runtime->hasFunction(0x23C080u)) {
        auto targetFn = runtime->lookupFunction(0x23C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245428u; }
        if (ctx->pc != 0x245428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuMoveMethod__12CMenuKeyFuncFi_0x23c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245428u; }
        if (ctx->pc != 0x245428u) { return; }
    }
    ctx->pc = 0x245428u;
label_245428:
    // 0x245428: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x245428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24542c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245430: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x245430u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x245434: 0x8f9094f8  lw          $s0, -0x6B08($gp)
    ctx->pc = 0x245434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x245438: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x245438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x24543c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24543Cu;
    {
        const bool branch_taken_0x24543c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24543Cu;
            // 0x245440: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24543c) {
            ctx->pc = 0x24544Cu;
            goto label_24544c;
        }
    }
    ctx->pc = 0x245444u;
    // 0x245444: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x245444u;
    SET_GPR_U32(ctx, 31, 0x24544Cu);
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24544Cu; }
        if (ctx->pc != 0x24544Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24544Cu; }
        if (ctx->pc != 0x24544Cu) { return; }
    }
    ctx->pc = 0x24544Cu;
label_24544c:
    // 0x24544c: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x24544cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x245450: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245450u;
    {
        const bool branch_taken_0x245450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245450u;
            // 0x245454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245450) {
            ctx->pc = 0x245460u;
            goto label_245460;
        }
    }
    ctx->pc = 0x245458u;
    // 0x245458: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x245458u;
    SET_GPR_U32(ctx, 31, 0x245460u);
    ctx->pc = 0x24545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245458u;
            // 0x24545c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B60u;
    if (runtime->hasFunction(0x225B60u)) {
        auto targetFn = runtime->lookupFunction(0x225B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245460u; }
        if (ctx->pc != 0x245460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormFadeIn__16CMenuPosDataFormFii_0x225b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245460u; }
        if (ctx->pc != 0x245460u) { return; }
    }
    ctx->pc = 0x245460u;
label_245460:
    // 0x245460: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x245460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245464: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x245464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x245468: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x245468u;
    SET_GPR_U32(ctx, 31, 0x245470u);
    ctx->pc = 0x24546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245468u;
            // 0x24546c: 0x24a5b298  addiu       $a1, $a1, -0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245470u; }
        if (ctx->pc != 0x245470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245470u; }
        if (ctx->pc != 0x245470u) { return; }
    }
    ctx->pc = 0x245470u;
label_245470:
    // 0x245470: 0xc090c40  jal         func_243100
    ctx->pc = 0x245470u;
    SET_GPR_U32(ctx, 31, 0x245478u);
    ctx->pc = 0x245474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245470u;
            // 0x245474: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245478u; }
        if (ctx->pc != 0x245478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245478u; }
        if (ctx->pc != 0x245478u) { return; }
    }
    ctx->pc = 0x245478u;
label_245478:
    // 0x245478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24547c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x245480: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245484: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x245484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x245488: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x245488u;
    {
        const bool branch_taken_0x245488 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245488u;
            // 0x24548c: 0xa4430172  sh          $v1, 0x172($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 370), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245488) {
            ctx->pc = 0x2454B4u;
            goto label_2454b4;
        }
    }
    ctx->pc = 0x245490u;
    // 0x245490: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x245490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x245494: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x245494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x245498: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x245498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x24549c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2454a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2454a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2454a4: 0xc0664ec  jal         func_1993B0
    ctx->pc = 0x2454A4u;
    SET_GPR_U32(ctx, 31, 0x2454ACu);
    ctx->pc = 0x2454A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454A4u;
            // 0x2454a8: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993B0u;
    if (runtime->hasFunction(0x1993B0u)) {
        auto targetFn = runtime->lookupFunction(0x1993B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454ACu; }
        if (ctx->pc != 0x2454ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetModelNo__13CGameDataUsedFv_0x1993b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454ACu; }
        if (ctx->pc != 0x2454ACu) { return; }
    }
    ctx->pc = 0x2454ACu;
label_2454ac:
    // 0x2454ac: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x2454acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2454b0: 0xa4620172  sh          $v0, 0x172($v1)
    ctx->pc = 0x2454b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 370), (uint16_t)GPR_U32(ctx, 2));
label_2454b4:
    // 0x2454b4: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x2454B4u;
    SET_GPR_U32(ctx, 31, 0x2454BCu);
    ctx->pc = 0x2454B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2454B4u;
            // 0x2454b8: 0xa3809b71  sb          $zero, -0x648F($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454BCu; }
        if (ctx->pc != 0x2454BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2454BCu; }
        if (ctx->pc != 0x2454BCu) { return; }
    }
    ctx->pc = 0x2454BCu;
label_2454bc:
    // 0x2454bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2454BCu;
    {
        const bool branch_taken_0x2454bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2454C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2454BCu;
            // 0x2454c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454bc) {
            ctx->pc = 0x2454D4u;
            goto label_2454d4;
        }
    }
    ctx->pc = 0x2454C4u;
    // 0x2454c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2454c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2454c8: 0xa3829b71  sb          $v0, -0x648F($gp)
    ctx->pc = 0x2454c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 2));
    // 0x2454cc: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2454ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2454d0: 0xa4430172  sh          $v1, 0x172($v0)
    ctx->pc = 0x2454d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 370), (uint16_t)GPR_U32(ctx, 3));
label_2454d4:
    // 0x2454d4: 0xa3809b70  sb          $zero, -0x6490($gp)
    ctx->pc = 0x2454d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 0));
    // 0x2454d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2454d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2454dc: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x2454dcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
    // 0x2454e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2454e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2454e4: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2454e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
    // 0x2454e8: 0x27828398  addiu       $v0, $gp, -0x7C68
    ctx->pc = 0x2454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935448));
    // 0x2454ec: 0xa3839b77  sb          $v1, -0x6489($gp)
    ctx->pc = 0x2454ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 3));
    // 0x2454f0: 0xa3839b72  sb          $v1, -0x648E($gp)
    ctx->pc = 0x2454f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 3));
    // 0x2454f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2454f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2454f8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2454f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2454fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2454fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245500: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245504: 0xa4440110  sh          $a0, 0x110($v0)
    ctx->pc = 0x245504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 272), (uint16_t)GPR_U32(ctx, 4));
    // 0x245508: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24550c: 0xa4440112  sh          $a0, 0x112($v0)
    ctx->pc = 0x24550cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 274), (uint16_t)GPR_U32(ctx, 4));
    // 0x245510: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x245510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245514: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x245514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x245518: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x245518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24551c: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x24551Cu;
    SET_GPR_U32(ctx, 31, 0x245524u);
    ctx->pc = 0x245520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24551Cu;
            // 0x245520: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245524u; }
        if (ctx->pc != 0x245524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245524u; }
        if (ctx->pc != 0x245524u) { return; }
    }
    ctx->pc = 0x245524u;
label_245524:
    // 0x245524: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x245524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x245528: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x245528u;
    {
        const bool branch_taken_0x245528 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245528u;
            // 0x24552c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245528) {
            ctx->pc = 0x245548u;
            goto label_245548;
        }
    }
    ctx->pc = 0x245530u;
    // 0x245530: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x245530u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x245534: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x245534u;
    {
        const bool branch_taken_0x245534 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245534) {
            ctx->pc = 0x245544u;
            goto label_245544;
        }
    }
    ctx->pc = 0x24553Cu;
    // 0x24553c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245540: 0xa4500114  sh          $s0, 0x114($v0)
    ctx->pc = 0x245540u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 276), (uint16_t)GPR_U32(ctx, 16));
label_245544:
    // 0x245544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x245544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_245548:
    // 0x245548: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x245548u;
    {
        const bool branch_taken_0x245548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x245548) {
            ctx->pc = 0x245564u;
            goto label_245564;
        }
    }
    ctx->pc = 0x245550u;
    // 0x245550: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x245550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x245554: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x245554u;
    SET_GPR_U32(ctx, 31, 0x24555Cu);
    ctx->pc = 0x245558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245554u;
            // 0x245558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24555Cu; }
        if (ctx->pc != 0x24555Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24555Cu; }
        if (ctx->pc != 0x24555Cu) { return; }
    }
    ctx->pc = 0x24555Cu;
label_24555c:
    // 0x24555c: 0x8c420588  lw          $v0, 0x588($v0)
    ctx->pc = 0x24555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
    // 0x245560: 0xaf8296bc  sw          $v0, -0x6944($gp)
    ctx->pc = 0x245560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940348), GPR_U32(ctx, 2));
label_245564:
    // 0x245564: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x245564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245568: 0xc08ff3c  jal         func_23FCF0
    ctx->pc = 0x245568u;
    SET_GPR_U32(ctx, 31, 0x245570u);
    ctx->pc = 0x24556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245568u;
            // 0x24556c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FCF0u;
    if (runtime->hasFunction(0x23FCF0u)) {
        auto targetFn = runtime->lookupFunction(0x23FCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245570u; }
        if (ctx->pc != 0x245570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEquipListNo__13CMenuItemInfoFi_0x23fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245570u; }
        if (ctx->pc != 0x245570u) { return; }
    }
    ctx->pc = 0x245570u;
label_245570:
    // 0x245570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x245570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245574: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x245574u;
    {
        const bool branch_taken_0x245574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x245578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245574u;
            // 0x245578: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245574) {
            ctx->pc = 0x24558Cu;
            goto label_24558c;
        }
    }
    ctx->pc = 0x24557Cu;
    // 0x24557c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245580: 0x8c23d8c8  lw          $v1, -0x2738($at)
    ctx->pc = 0x245580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x245584: 0x84630032  lh          $v1, 0x32($v1)
    ctx->pc = 0x245584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x245588: 0xa4430138  sh          $v1, 0x138($v0)
    ctx->pc = 0x245588u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 312), (uint16_t)GPR_U32(ctx, 3));
label_24558c:
    // 0x24558c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24558Cu;
    {
        const bool branch_taken_0x24558c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24558c) {
            ctx->pc = 0x2455A0u;
            goto label_2455a0;
        }
    }
    ctx->pc = 0x245594u;
    // 0x245594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245598: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x245598u;
    {
        const bool branch_taken_0x245598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x245598) {
            ctx->pc = 0x2455C0u;
            goto label_2455c0;
        }
    }
    ctx->pc = 0x2455A0u;
label_2455a0:
    // 0x2455a0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2455a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2455a8: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x2455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x2455ac: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2455acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2455b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2455b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2455b4: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2455b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2455b8: 0x846301de  lh          $v1, 0x1DE($v1)
    ctx->pc = 0x2455b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 478)));
    // 0x2455bc: 0xa4430138  sh          $v1, 0x138($v0)
    ctx->pc = 0x2455bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 312), (uint16_t)GPR_U32(ctx, 3));
label_2455c0:
    // 0x2455c0: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x2455c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2455c4: 0xc090320  jal         func_240C80
    ctx->pc = 0x2455C4u;
    SET_GPR_U32(ctx, 31, 0x2455CCu);
    ctx->pc = 0x2455C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2455C4u;
            // 0x2455c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455CCu; }
        if (ctx->pc != 0x2455CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455CCu; }
        if (ctx->pc != 0x2455CCu) { return; }
    }
    ctx->pc = 0x2455CCu;
label_2455cc:
    // 0x2455cc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2455ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2455d0: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2455d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2455d4: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2455d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2455d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2455d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2455dc: 0x2484db90  addiu       $a0, $a0, -0x2470
    ctx->pc = 0x2455dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
    // 0x2455e0: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x2455e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
    // 0x2455e4: 0xc0ac028  jal         func_2B00A0
    ctx->pc = 0x2455E4u;
    SET_GPR_U32(ctx, 31, 0x2455ECu);
    ctx->pc = 0x2455E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2455E4u;
            // 0x2455e8: 0x24c6cac0  addiu       $a2, $a2, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455ECu; }
        if (ctx->pc != 0x2455ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455ECu; }
        if (ctx->pc != 0x2455ECu) { return; }
    }
    ctx->pc = 0x2455ECu;
label_2455ec:
    // 0x2455ec: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2455ECu;
    SET_GPR_U32(ctx, 31, 0x2455F4u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455F4u; }
        if (ctx->pc != 0x2455F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455F4u; }
        if (ctx->pc != 0x2455F4u) { return; }
    }
    ctx->pc = 0x2455F4u;
label_2455f4:
    // 0x2455f4: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x2455f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x2455f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2455f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2455fc: 0x84850110  lh          $a1, 0x110($a0)
    ctx->pc = 0x2455fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x245600: 0xc093114  jal         func_24C450
    ctx->pc = 0x245600u;
    SET_GPR_U32(ctx, 31, 0x245608u);
    ctx->pc = 0x245604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245600u;
            // 0x245604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245608u; }
        if (ctx->pc != 0x245608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245608u; }
        if (ctx->pc != 0x245608u) { return; }
    }
    ctx->pc = 0x245608u;
label_245608:
    // 0x245608: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x245608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24560c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24560cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245610: 0xc08d150  jal         func_234540
    ctx->pc = 0x245610u;
    SET_GPR_U32(ctx, 31, 0x245618u);
    ctx->pc = 0x234540u;
    if (runtime->hasFunction(0x234540u)) {
        auto targetFn = runtime->lookupFunction(0x234540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245618u; }
        if (ctx->pc != 0x245618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCamInit__Ff_0x234540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245618u; }
        if (ctx->pc != 0x245618u) { return; }
    }
    ctx->pc = 0x245618u;
label_245618:
    // 0x245618: 0xa780958c  sh          $zero, -0x6A74($gp)
    ctx->pc = 0x245618u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940044), (uint16_t)GPR_U32(ctx, 0));
    // 0x24561c: 0xc08d20c  jal         func_234830
    ctx->pc = 0x24561Cu;
    SET_GPR_U32(ctx, 31, 0x245624u);
    ctx->pc = 0x245620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24561Cu;
            // 0x245620: 0xa7809588  sh          $zero, -0x6A78($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234830u;
    if (runtime->hasFunction(0x234830u)) {
        auto targetFn = runtime->lookupFunction(0x234830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245624u; }
        if (ctx->pc != 0x245624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CursorSaveOptionState__Fv_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245624u; }
        if (ctx->pc != 0x245624u) { return; }
    }
    ctx->pc = 0x245624u;
label_245624:
    // 0x245624: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x245624u;
    {
        const bool branch_taken_0x245624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245624u;
            // 0x245628: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245624) {
            ctx->pc = 0x245640u;
            goto label_245640;
        }
    }
    ctx->pc = 0x24562Cu;
    // 0x24562c: 0x8f8394b0  lw          $v1, -0x6B50($gp)
    ctx->pc = 0x24562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939824)));
    // 0x245630: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x245630u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x245634: 0xa782958c  sh          $v0, -0x6A74($gp)
    ctx->pc = 0x245634u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940044), (uint16_t)GPR_U32(ctx, 2));
    // 0x245638: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x245638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x24563c: 0xa7829588  sh          $v0, -0x6A78($gp)
    ctx->pc = 0x24563cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 2));
label_245640:
    // 0x245640: 0xc068644  jal         func_1A1910
    ctx->pc = 0x245640u;
    SET_GPR_U32(ctx, 31, 0x245648u);
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245648u; }
        if (ctx->pc != 0x245648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245648u; }
        if (ctx->pc != 0x245648u) { return; }
    }
    ctx->pc = 0x245648u;
label_245648:
    // 0x245648: 0xc08ca8c  jal         func_232A30
    ctx->pc = 0x245648u;
    SET_GPR_U32(ctx, 31, 0x245650u);
    ctx->pc = 0x24564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245648u;
            // 0x24564c: 0xa782835c  sh          $v0, -0x7CA4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294935388), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245650u; }
        if (ctx->pc != 0x245650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245650u; }
        if (ctx->pc != 0x245650u) { return; }
    }
    ctx->pc = 0x245650u;
label_245650:
    // 0x245650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x245650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245654: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x245654u;
    {
        const bool branch_taken_0x245654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x245658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245654u;
            // 0x245658: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245654) {
            ctx->pc = 0x2456A0u;
            goto label_2456a0;
        }
    }
    ctx->pc = 0x24565Cu;
    // 0x24565c: 0xc068644  jal         func_1A1910
    ctx->pc = 0x24565Cu;
    SET_GPR_U32(ctx, 31, 0x245664u);
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245664u; }
        if (ctx->pc != 0x245664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245664u; }
        if (ctx->pc != 0x245664u) { return; }
    }
    ctx->pc = 0x245664u;
label_245664:
    // 0x245664: 0xa782835c  sh          $v0, -0x7CA4($gp)
    ctx->pc = 0x245664u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935388), (uint16_t)GPR_U32(ctx, 2));
    // 0x245668: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x245668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24566c: 0x8783835c  lh          $v1, -0x7CA4($gp)
    ctx->pc = 0x24566cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935388)));
    // 0x245670: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x245670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x245674: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x245674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x245678: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x245678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24567c: 0x0  nop
    ctx->pc = 0x24567cu;
    // NOP
    // 0x245680: 0x0  nop
    ctx->pc = 0x245680u;
    // NOP
    // 0x245684: 0x1010  mfhi        $v0
    ctx->pc = 0x245684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x245688: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x245688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x24568c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245690: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x245690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x245694: 0xc068644  jal         func_1A1910
    ctx->pc = 0x245694u;
    SET_GPR_U32(ctx, 31, 0x24569Cu);
    ctx->pc = 0x245698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245694u;
            // 0x245698: 0xa7829588  sh          $v0, -0x6A78($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24569Cu; }
        if (ctx->pc != 0x24569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24569Cu; }
        if (ctx->pc != 0x24569Cu) { return; }
    }
    ctx->pc = 0x24569Cu;
label_24569c:
    // 0x24569c: 0xa782958c  sh          $v0, -0x6A74($gp)
    ctx->pc = 0x24569cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940044), (uint16_t)GPR_U32(ctx, 2));
label_2456a0:
    // 0x2456a0: 0x8785835c  lh          $a1, -0x7CA4($gp)
    ctx->pc = 0x2456a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935388)));
    // 0x2456a4: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x2456a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x2456a8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x2456a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x2456ac: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x2456acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2456b0: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x2456b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2456b4: 0x0  nop
    ctx->pc = 0x2456b4u;
    // NOP
    // 0x2456b8: 0x1010  mfhi        $v0
    ctx->pc = 0x2456b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2456bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2456bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2456c0: 0xa7828360  sh          $v0, -0x7CA0($gp)
    ctx->pc = 0x2456c0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935392), (uint16_t)GPR_U32(ctx, 2));
    // 0x2456c4: 0x87868360  lh          $a2, -0x7CA0($gp)
    ctx->pc = 0x2456c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935392)));
    // 0x2456c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2456C8u;
    {
        const bool branch_taken_0x2456c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2456CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2456C8u;
            // 0x2456cc: 0x24c2fffb  addiu       $v0, $a2, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2456c8) {
            ctx->pc = 0x2456DCu;
            goto label_2456dc;
        }
    }
    ctx->pc = 0x2456D0u;
label_2456d0:
    // 0x2456d0: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2456d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
    // 0x2456d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2456d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2456d8: 0xa7839588  sh          $v1, -0x6A78($gp)
    ctx->pc = 0x2456d8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940040), (uint16_t)GPR_U32(ctx, 3));
label_2456dc:
    // 0x2456dc: 0x0  nop
    ctx->pc = 0x2456dcu;
    // NOP
    // 0x2456e0: 0x87839588  lh          $v1, -0x6A78($gp)
    ctx->pc = 0x2456e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
    // 0x2456e4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2456e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2456e8: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2456E8u;
    {
        const bool branch_taken_0x2456e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2456e8) {
            ctx->pc = 0x2456D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2456d0;
        }
    }
    ctx->pc = 0x2456F0u;
    // 0x2456f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2456F0u;
    {
        const bool branch_taken_0x2456f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2456f0) {
            ctx->pc = 0x245704u;
            goto label_245704;
        }
    }
    ctx->pc = 0x2456F8u;
label_2456f8:
    // 0x2456f8: 0x8782958c  lh          $v0, -0x6A74($gp)
    ctx->pc = 0x2456f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940044)));
    // 0x2456fc: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x2456fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x245700: 0xa782958c  sh          $v0, -0x6A74($gp)
    ctx->pc = 0x245700u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940044), (uint16_t)GPR_U32(ctx, 2));
label_245704:
    // 0x245704: 0x0  nop
    ctx->pc = 0x245704u;
    // NOP
    // 0x245708: 0x8784958c  lh          $a0, -0x6A74($gp)
    ctx->pc = 0x245708u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940044)));
    // 0x24570c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x24570cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x245710: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x245710u;
    {
        const bool branch_taken_0x245710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x245710) {
            ctx->pc = 0x2456F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2456f8;
        }
    }
    ctx->pc = 0x245718u;
    // 0x245718: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x245718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24571c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x24571cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x245720: 0xa4250d56  sh          $a1, 0xD56($at)
    ctx->pc = 0x245720u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3414), (uint16_t)GPR_U32(ctx, 5));
    // 0x245724: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x245724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x245728: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x245728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x24572c: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x24572cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
    // 0x245730: 0xa0260d5a  sb          $a2, 0xD5A($at)
    ctx->pc = 0x245730u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 3418), (uint8_t)GPR_U32(ctx, 6));
    // 0x245734: 0xac440070  sw          $a0, 0x70($v0)
    ctx->pc = 0x245734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 4));
    // 0x245738: 0x87849588  lh          $a0, -0x6A78($gp)
    ctx->pc = 0x245738u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
    // 0x24573c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x245740: 0xac440074  sw          $a0, 0x74($v0)
    ctx->pc = 0x245740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 4));
    // 0x245744: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x245744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x245748: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x245748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24574c: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x24574cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x245750: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x245750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x245754: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x245754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x245758: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x245758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24575c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24575cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x245760: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x245760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
    // 0x245764: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x245764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x245768: 0x87868360  lh          $a2, -0x7CA0($gp)
    ctx->pc = 0x245768u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935392)));
    // 0x24576c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x24576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x245770: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x245770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x245774: 0xc089b7c  jal         func_226DF0
    ctx->pc = 0x245774u;
    SET_GPR_U32(ctx, 31, 0x24577Cu);
    ctx->pc = 0x245778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245774u;
            // 0x245778: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226DF0u;
    if (runtime->hasFunction(0x226DF0u)) {
        auto targetFn = runtime->lookupFunction(0x226DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24577Cu; }
        if (ctx->pc != 0x24577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdSetInfo__Fiiii_0x226df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24577Cu; }
        if (ctx->pc != 0x24577Cu) { return; }
    }
    ctx->pc = 0x24577Cu;
label_24577c:
    // 0x24577c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245780: 0xa38093f8  sb          $zero, -0x6C08($gp)
    ctx->pc = 0x245780u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939640), (uint8_t)GPR_U32(ctx, 0));
    // 0x245784: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245784u;
    {
        const bool branch_taken_0x245784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x245788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245784u;
            // 0x245788: 0xa385962c  sb          $a1, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245784) {
            ctx->pc = 0x245798u;
            goto label_245798;
        }
    }
    ctx->pc = 0x24578Cu;
    // 0x24578c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24578cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245790: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x245790u;
    SET_GPR_U32(ctx, 31, 0x245798u);
    ctx->pc = 0x245794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245790u;
            // 0x245794: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245798u; }
        if (ctx->pc != 0x245798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245798u; }
        if (ctx->pc != 0x245798u) { return; }
    }
    ctx->pc = 0x245798u;
label_245798:
    // 0x245798: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x245798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24579c: 0xc08900c  jal         func_224030
    ctx->pc = 0x24579Cu;
    SET_GPR_U32(ctx, 31, 0x2457A4u);
    ctx->pc = 0x2457A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24579Cu;
            // 0x2457a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457A4u; }
        if (ctx->pc != 0x2457A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457A4u; }
        if (ctx->pc != 0x2457A4u) { return; }
    }
    ctx->pc = 0x2457A4u;
label_2457a4:
    // 0x2457a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2457a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457a8: 0xc08e9f0  jal         func_23A7C0
    ctx->pc = 0x2457A8u;
    SET_GPR_U32(ctx, 31, 0x2457B0u);
    ctx->pc = 0x2457ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2457A8u;
            // 0x2457ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A7C0u;
    if (runtime->hasFunction(0x23A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x23A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457B0u; }
        if (ctx->pc != 0x2457B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpectolInfo__FP13CGameDataUsedP13CGameDataUsed_0x23a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457B0u; }
        if (ctx->pc != 0x2457B0u) { return; }
    }
    ctx->pc = 0x2457B0u;
label_2457b0:
    // 0x2457b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2457b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2457b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2457b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457b8: 0x8c22d8c0  lw          $v0, -0x2740($at)
    ctx->pc = 0x2457b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x2457bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2457bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457c0: 0x244201dc  addiu       $v0, $v0, 0x1DC
    ctx->pc = 0x2457c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 476));
    // 0x2457c4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2457c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2457c8: 0xc092fb4  jal         func_24BED0
    ctx->pc = 0x2457C8u;
    SET_GPR_U32(ctx, 31, 0x2457D0u);
    ctx->pc = 0x2457CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2457C8u;
            // 0x2457cc: 0xac22dc44  sw          $v0, -0x23BC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24BED0u;
    if (runtime->hasFunction(0x24BED0u)) {
        auto targetFn = runtime->lookupFunction(0x24BED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457D0u; }
        if (ctx->pc != 0x2457D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWeaponStatusInfoFormSet__FP13CGameDataUsedP11CDataWeapon_0x24bed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457D0u; }
        if (ctx->pc != 0x2457D0u) { return; }
    }
    ctx->pc = 0x2457D0u;
label_2457d0:
    // 0x2457d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2457d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2457d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2457d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457d8: 0xa020dc22  sb          $zero, -0x23DE($at)
    ctx->pc = 0x2457d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958114), (uint8_t)GPR_U32(ctx, 0));
    // 0x2457dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2457dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2457e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2457e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2457e4: 0xac20dc28  sw          $zero, -0x23D8($at)
    ctx->pc = 0x2457e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958120), GPR_U32(ctx, 0));
    // 0x2457e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2457e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2457ec: 0xc08bd6c  jal         func_22F5B0
    ctx->pc = 0x2457ECu;
    SET_GPR_U32(ctx, 31, 0x2457F4u);
    ctx->pc = 0x2457F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2457ECu;
            // 0x2457f0: 0xa420dc20  sh          $zero, -0x23E0($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294958112), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F5B0u;
    if (runtime->hasFunction(0x22F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457F4u; }
        if (ctx->pc != 0x2457F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFishBoiledEffect__FPiP10mgCTexture_0x22f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2457F4u; }
        if (ctx->pc != 0x2457F4u) { return; }
    }
    ctx->pc = 0x2457F4u;
label_2457f4:
    // 0x2457f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2457f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2457f8: 0x8c22d8c0  lw          $v0, -0x2740($at)
    ctx->pc = 0x2457f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
    // 0x2457fc: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x2457FCu;
    SET_GPR_U32(ctx, 31, 0x245804u);
    ctx->pc = 0x245800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2457FCu;
            // 0x245800: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245804u; }
        if (ctx->pc != 0x245804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245804u; }
        if (ctx->pc != 0x245804u) { return; }
    }
    ctx->pc = 0x245804u;
label_245804:
    // 0x245804: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x245804u;
    {
        const bool branch_taken_0x245804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x245808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245804u;
            // 0x245808: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245804) {
            ctx->pc = 0x245818u;
            goto label_245818;
        }
    }
    ctx->pc = 0x24580Cu;
    // 0x24580c: 0xc065b84  jal         func_196E10
    ctx->pc = 0x24580Cu;
    SET_GPR_U32(ctx, 31, 0x245814u);
    ctx->pc = 0x245810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24580Cu;
            // 0x245810: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E10u;
    if (runtime->hasFunction(0x196E10u)) {
        auto targetFn = runtime->lookupFunction(0x196E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245814u; }
        if (ctx->pc != 0x245814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFishingGamePreEquip__FP13CGameDataUsed_0x196e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245814u; }
        if (ctx->pc != 0x245814u) { return; }
    }
    ctx->pc = 0x245814u;
label_245814:
    // 0x245814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x245814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245818:
    // 0x245818: 0xc088080  jal         func_220200
    ctx->pc = 0x245818u;
    SET_GPR_U32(ctx, 31, 0x245820u);
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245820u; }
        if (ctx->pc != 0x245820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245820u; }
        if (ctx->pc != 0x245820u) { return; }
    }
    ctx->pc = 0x245820u;
label_245820:
    // 0x245820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x245820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x245824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x245824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24582c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24582cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245834: 0x3e00008  jr          $ra
    ctx->pc = 0x245834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245834u;
            // 0x245838: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24583Cu;
}
