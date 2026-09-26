#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Play__12CSceneObjSeqFv
// Address: 0x25c710 - 0x25c904
void Play__12CSceneObjSeqFv_0x25c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Play__12CSceneObjSeqFv_0x25c710");
#endif

    switch (ctx->pc) {
        case 0x25c710u: goto label_25c710;
        case 0x25c714u: goto label_25c714;
        case 0x25c718u: goto label_25c718;
        case 0x25c71cu: goto label_25c71c;
        case 0x25c720u: goto label_25c720;
        case 0x25c724u: goto label_25c724;
        case 0x25c728u: goto label_25c728;
        case 0x25c72cu: goto label_25c72c;
        case 0x25c730u: goto label_25c730;
        case 0x25c734u: goto label_25c734;
        case 0x25c738u: goto label_25c738;
        case 0x25c73cu: goto label_25c73c;
        case 0x25c740u: goto label_25c740;
        case 0x25c744u: goto label_25c744;
        case 0x25c748u: goto label_25c748;
        case 0x25c74cu: goto label_25c74c;
        case 0x25c750u: goto label_25c750;
        case 0x25c754u: goto label_25c754;
        case 0x25c758u: goto label_25c758;
        case 0x25c75cu: goto label_25c75c;
        case 0x25c760u: goto label_25c760;
        case 0x25c764u: goto label_25c764;
        case 0x25c768u: goto label_25c768;
        case 0x25c76cu: goto label_25c76c;
        case 0x25c770u: goto label_25c770;
        case 0x25c774u: goto label_25c774;
        case 0x25c778u: goto label_25c778;
        case 0x25c77cu: goto label_25c77c;
        case 0x25c780u: goto label_25c780;
        case 0x25c784u: goto label_25c784;
        case 0x25c788u: goto label_25c788;
        case 0x25c78cu: goto label_25c78c;
        case 0x25c790u: goto label_25c790;
        case 0x25c794u: goto label_25c794;
        case 0x25c798u: goto label_25c798;
        case 0x25c79cu: goto label_25c79c;
        case 0x25c7a0u: goto label_25c7a0;
        case 0x25c7a4u: goto label_25c7a4;
        case 0x25c7a8u: goto label_25c7a8;
        case 0x25c7acu: goto label_25c7ac;
        case 0x25c7b0u: goto label_25c7b0;
        case 0x25c7b4u: goto label_25c7b4;
        case 0x25c7b8u: goto label_25c7b8;
        case 0x25c7bcu: goto label_25c7bc;
        case 0x25c7c0u: goto label_25c7c0;
        case 0x25c7c4u: goto label_25c7c4;
        case 0x25c7c8u: goto label_25c7c8;
        case 0x25c7ccu: goto label_25c7cc;
        case 0x25c7d0u: goto label_25c7d0;
        case 0x25c7d4u: goto label_25c7d4;
        case 0x25c7d8u: goto label_25c7d8;
        case 0x25c7dcu: goto label_25c7dc;
        case 0x25c7e0u: goto label_25c7e0;
        case 0x25c7e4u: goto label_25c7e4;
        case 0x25c7e8u: goto label_25c7e8;
        case 0x25c7ecu: goto label_25c7ec;
        case 0x25c7f0u: goto label_25c7f0;
        case 0x25c7f4u: goto label_25c7f4;
        case 0x25c7f8u: goto label_25c7f8;
        case 0x25c7fcu: goto label_25c7fc;
        case 0x25c800u: goto label_25c800;
        case 0x25c804u: goto label_25c804;
        case 0x25c808u: goto label_25c808;
        case 0x25c80cu: goto label_25c80c;
        case 0x25c810u: goto label_25c810;
        case 0x25c814u: goto label_25c814;
        case 0x25c818u: goto label_25c818;
        case 0x25c81cu: goto label_25c81c;
        case 0x25c820u: goto label_25c820;
        case 0x25c824u: goto label_25c824;
        case 0x25c828u: goto label_25c828;
        case 0x25c82cu: goto label_25c82c;
        case 0x25c830u: goto label_25c830;
        case 0x25c834u: goto label_25c834;
        case 0x25c838u: goto label_25c838;
        case 0x25c83cu: goto label_25c83c;
        case 0x25c840u: goto label_25c840;
        case 0x25c844u: goto label_25c844;
        case 0x25c848u: goto label_25c848;
        case 0x25c84cu: goto label_25c84c;
        case 0x25c850u: goto label_25c850;
        case 0x25c854u: goto label_25c854;
        case 0x25c858u: goto label_25c858;
        case 0x25c85cu: goto label_25c85c;
        case 0x25c860u: goto label_25c860;
        case 0x25c864u: goto label_25c864;
        case 0x25c868u: goto label_25c868;
        case 0x25c86cu: goto label_25c86c;
        case 0x25c870u: goto label_25c870;
        case 0x25c874u: goto label_25c874;
        case 0x25c878u: goto label_25c878;
        case 0x25c87cu: goto label_25c87c;
        case 0x25c880u: goto label_25c880;
        case 0x25c884u: goto label_25c884;
        case 0x25c888u: goto label_25c888;
        case 0x25c88cu: goto label_25c88c;
        case 0x25c890u: goto label_25c890;
        case 0x25c894u: goto label_25c894;
        case 0x25c898u: goto label_25c898;
        case 0x25c89cu: goto label_25c89c;
        case 0x25c8a0u: goto label_25c8a0;
        case 0x25c8a4u: goto label_25c8a4;
        case 0x25c8a8u: goto label_25c8a8;
        case 0x25c8acu: goto label_25c8ac;
        case 0x25c8b0u: goto label_25c8b0;
        case 0x25c8b4u: goto label_25c8b4;
        case 0x25c8b8u: goto label_25c8b8;
        case 0x25c8bcu: goto label_25c8bc;
        case 0x25c8c0u: goto label_25c8c0;
        case 0x25c8c4u: goto label_25c8c4;
        case 0x25c8c8u: goto label_25c8c8;
        case 0x25c8ccu: goto label_25c8cc;
        case 0x25c8d0u: goto label_25c8d0;
        case 0x25c8d4u: goto label_25c8d4;
        case 0x25c8d8u: goto label_25c8d8;
        case 0x25c8dcu: goto label_25c8dc;
        case 0x25c8e0u: goto label_25c8e0;
        case 0x25c8e4u: goto label_25c8e4;
        case 0x25c8e8u: goto label_25c8e8;
        case 0x25c8ecu: goto label_25c8ec;
        case 0x25c8f0u: goto label_25c8f0;
        case 0x25c8f4u: goto label_25c8f4;
        case 0x25c8f8u: goto label_25c8f8;
        case 0x25c8fcu: goto label_25c8fc;
        case 0x25c900u: goto label_25c900;
        default: break;
    }

    ctx->pc = 0x25c710u;

label_25c710:
    // 0x25c710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25c714:
    // 0x25c714: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_25c718:
    // 0x25c718: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25c718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25c71c:
    // 0x25c71c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25c71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_25c720:
    // 0x25c720: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25c724:
    // 0x25c724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c728:
    // 0x25c728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25c72c:
    // 0x25c72c: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x25c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_25c730:
    // 0x25c730: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x25c730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_25c734:
    // 0x25c734: 0x1420006b  bnez        $at, . + 4 + (0x6B << 2)
label_25c738:
    if (ctx->pc == 0x25C738u) {
        ctx->pc = 0x25C738u;
            // 0x25c738: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C73Cu;
        goto label_25c73c;
    }
    ctx->pc = 0x25C734u;
    {
        const bool branch_taken_0x25c734 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C734u;
            // 0x25c738: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c734) {
            ctx->pc = 0x25C8E4u;
            goto label_25c8e4;
        }
    }
    ctx->pc = 0x25C73Cu;
label_25c73c:
    // 0x25c73c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_25c740:
    // 0x25c740: 0x26860070  addiu       $a2, $s4, 0x70
    ctx->pc = 0x25c740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_25c744:
    // 0x25c744: 0xc097808  jal         func_25E020
label_25c748:
    if (ctx->pc == 0x25C748u) {
        ctx->pc = 0x25C748u;
            // 0x25c748: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->pc = 0x25C74Cu;
        goto label_25c74c;
    }
    ctx->pc = 0x25C744u;
    SET_GPR_U32(ctx, 31, 0x25C74Cu);
    ctx->pc = 0x25C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C744u;
            // 0x25c748: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E020u;
    if (runtime->hasFunction(0x25E020u)) {
        auto targetFn = runtime->lookupFunction(0x25E020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C74Cu; }
        if (ctx->pc != 0x25C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__10CEohMotherFiPf_0x25e020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C74Cu; }
        if (ctx->pc != 0x25C74Cu) { return; }
    }
    ctx->pc = 0x25C74Cu;
label_25c74c:
    // 0x25c74c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c750:
    // 0x25c750: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_25c754:
    if (ctx->pc == 0x25C754u) {
        ctx->pc = 0x25C754u;
            // 0x25c754: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C758u;
        goto label_25c758;
    }
    ctx->pc = 0x25C750u;
    {
        const bool branch_taken_0x25c750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25C754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C750u;
            // 0x25c754: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c750) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C758u;
label_25c758:
    // 0x25c758: 0xc0970a8  jal         func_25C2A0
label_25c75c:
    if (ctx->pc == 0x25C75Cu) {
        ctx->pc = 0x25C760u;
        goto label_25c760;
    }
    ctx->pc = 0x25C758u;
    SET_GPR_U32(ctx, 31, 0x25C760u);
    ctx->pc = 0x25C2A0u;
    if (runtime->hasFunction(0x25C2A0u)) {
        auto targetFn = runtime->lookupFunction(0x25C2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C760u; }
        if (ctx->pc != 0x25C760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__12CSceneObjSeqFv_0x25c2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C760u; }
        if (ctx->pc != 0x25C760u) { return; }
    }
    ctx->pc = 0x25C760u;
label_25c760:
    // 0x25c760: 0x10000061  b           . + 4 + (0x61 << 2)
label_25c764:
    if (ctx->pc == 0x25C764u) {
        ctx->pc = 0x25C764u;
            // 0x25c764: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x25C768u;
        goto label_25c768;
    }
    ctx->pc = 0x25C760u;
    {
        const bool branch_taken_0x25c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C760u;
            // 0x25c764: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c760) {
            ctx->pc = 0x25C8E8u;
            goto label_25c8e8;
        }
    }
    ctx->pc = 0x25C768u;
label_25c768:
    // 0x25c768: 0x8e850064  lw          $a1, 0x64($s4)
    ctx->pc = 0x25c768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_25c76c:
    // 0x25c76c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_25c770:
    // 0x25c770: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_25c774:
    // 0x25c774: 0xc097870  jal         func_25E1C0
label_25c778:
    if (ctx->pc == 0x25C778u) {
        ctx->pc = 0x25C778u;
            // 0x25c778: 0x26860080  addiu       $a2, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->pc = 0x25C77Cu;
        goto label_25c77c;
    }
    ctx->pc = 0x25C774u;
    SET_GPR_U32(ctx, 31, 0x25C77Cu);
    ctx->pc = 0x25C778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C774u;
            // 0x25c778: 0x26860080  addiu       $a2, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E1C0u;
    if (runtime->hasFunction(0x25E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x25E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C77Cu; }
        if (ctx->pc != 0x25C77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRot__10CEohMotherFiPf_0x25e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C77Cu; }
        if (ctx->pc != 0x25C77Cu) { return; }
    }
    ctx->pc = 0x25C77Cu;
label_25c77c:
    // 0x25c77c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25c77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c780:
    // 0x25c780: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x25c780u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_25c784:
    // 0x25c784: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_25c788:
    if (ctx->pc == 0x25C788u) {
        ctx->pc = 0x25C788u;
            // 0x25c788: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x25C78Cu;
        goto label_25c78c;
    }
    ctx->pc = 0x25C784u;
    {
        const bool branch_taken_0x25c784 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C784u;
            // 0x25c788: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c784) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C78Cu;
label_25c78c:
    // 0x25c78c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_25c790:
    // 0x25c790: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x25c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
label_25c794:
    // 0x25c794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c798:
    // 0x25c798: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25c798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25c79c:
    // 0x25c79c: 0x400008  jr          $v0
label_25c7a0:
    if (ctx->pc == 0x25C7A0u) {
        ctx->pc = 0x25C7A4u;
        goto label_25c7a4;
    }
    ctx->pc = 0x25C79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C7A4u: goto label_25c7a4;
            case 0x25C7B4u: goto label_25c7b4;
            case 0x25C7C4u: goto label_25c7c4;
            case 0x25C7D4u: goto label_25c7d4;
            case 0x25C7E4u: goto label_25c7e4;
            case 0x25C7F4u: goto label_25c7f4;
            case 0x25C804u: goto label_25c804;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25C7A4u;
label_25c7a4:
    // 0x25c7a4: 0x0  nop
    ctx->pc = 0x25c7a4u;
    // NOP
label_25c7a8:
    // 0x25c7a8: 0x26920008  addiu       $s2, $s4, 0x8
    ctx->pc = 0x25c7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_25c7ac:
    // 0x25c7ac: 0x10000018  b           . + 4 + (0x18 << 2)
label_25c7b0:
    if (ctx->pc == 0x25C7B0u) {
        ctx->pc = 0x25C7B0u;
            // 0x25c7b0: 0x2693000c  addiu       $s3, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x25C7B4u;
        goto label_25c7b4;
    }
    ctx->pc = 0x25C7ACu;
    {
        const bool branch_taken_0x25c7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7ACu;
            // 0x25c7b0: 0x2693000c  addiu       $s3, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7ac) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C7B4u;
label_25c7b4:
    // 0x25c7b4: 0x0  nop
    ctx->pc = 0x25c7b4u;
    // NOP
label_25c7b8:
    // 0x25c7b8: 0x26920010  addiu       $s2, $s4, 0x10
    ctx->pc = 0x25c7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_25c7bc:
    // 0x25c7bc: 0x10000014  b           . + 4 + (0x14 << 2)
label_25c7c0:
    if (ctx->pc == 0x25C7C0u) {
        ctx->pc = 0x25C7C0u;
            // 0x25c7c0: 0x26930014  addiu       $s3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->pc = 0x25C7C4u;
        goto label_25c7c4;
    }
    ctx->pc = 0x25C7BCu;
    {
        const bool branch_taken_0x25c7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7BCu;
            // 0x25c7c0: 0x26930014  addiu       $s3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7bc) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C7C4u;
label_25c7c4:
    // 0x25c7c4: 0x0  nop
    ctx->pc = 0x25c7c4u;
    // NOP
label_25c7c8:
    // 0x25c7c8: 0x26920018  addiu       $s2, $s4, 0x18
    ctx->pc = 0x25c7c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_25c7cc:
    // 0x25c7cc: 0x10000010  b           . + 4 + (0x10 << 2)
label_25c7d0:
    if (ctx->pc == 0x25C7D0u) {
        ctx->pc = 0x25C7D0u;
            // 0x25c7d0: 0x2693001c  addiu       $s3, $s4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
        ctx->pc = 0x25C7D4u;
        goto label_25c7d4;
    }
    ctx->pc = 0x25C7CCu;
    {
        const bool branch_taken_0x25c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7CCu;
            // 0x25c7d0: 0x2693001c  addiu       $s3, $s4, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7cc) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C7D4u;
label_25c7d4:
    // 0x25c7d4: 0x0  nop
    ctx->pc = 0x25c7d4u;
    // NOP
label_25c7d8:
    // 0x25c7d8: 0x26920020  addiu       $s2, $s4, 0x20
    ctx->pc = 0x25c7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_25c7dc:
    // 0x25c7dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_25c7e0:
    if (ctx->pc == 0x25C7E0u) {
        ctx->pc = 0x25C7E0u;
            // 0x25c7e0: 0x26930024  addiu       $s3, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->pc = 0x25C7E4u;
        goto label_25c7e4;
    }
    ctx->pc = 0x25C7DCu;
    {
        const bool branch_taken_0x25c7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7DCu;
            // 0x25c7e0: 0x26930024  addiu       $s3, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7dc) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C7E4u;
label_25c7e4:
    // 0x25c7e4: 0x0  nop
    ctx->pc = 0x25c7e4u;
    // NOP
label_25c7e8:
    // 0x25c7e8: 0x26920028  addiu       $s2, $s4, 0x28
    ctx->pc = 0x25c7e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_25c7ec:
    // 0x25c7ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_25c7f0:
    if (ctx->pc == 0x25C7F0u) {
        ctx->pc = 0x25C7F0u;
            // 0x25c7f0: 0x2693002c  addiu       $s3, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->pc = 0x25C7F4u;
        goto label_25c7f4;
    }
    ctx->pc = 0x25C7ECu;
    {
        const bool branch_taken_0x25c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7ECu;
            // 0x25c7f0: 0x2693002c  addiu       $s3, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7ec) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C7F4u;
label_25c7f4:
    // 0x25c7f4: 0x0  nop
    ctx->pc = 0x25c7f4u;
    // NOP
label_25c7f8:
    // 0x25c7f8: 0x26920030  addiu       $s2, $s4, 0x30
    ctx->pc = 0x25c7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_25c7fc:
    // 0x25c7fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_25c800:
    if (ctx->pc == 0x25C800u) {
        ctx->pc = 0x25C800u;
            // 0x25c800: 0x26930034  addiu       $s3, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->pc = 0x25C804u;
        goto label_25c804;
    }
    ctx->pc = 0x25C7FCu;
    {
        const bool branch_taken_0x25c7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C7FCu;
            // 0x25c800: 0x26930034  addiu       $s3, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c7fc) {
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C804u;
label_25c804:
    // 0x25c804: 0x0  nop
    ctx->pc = 0x25c804u;
    // NOP
label_25c808:
    // 0x25c808: 0x26920038  addiu       $s2, $s4, 0x38
    ctx->pc = 0x25c808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_25c80c:
    // 0x25c80c: 0x2693003c  addiu       $s3, $s4, 0x3C
    ctx->pc = 0x25c80cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_25c810:
    // 0x25c810: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x25c810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25c814:
    // 0x25c814: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_25c818:
    if (ctx->pc == 0x25C818u) {
        ctx->pc = 0x25C81Cu;
        goto label_25c81c;
    }
    ctx->pc = 0x25C814u;
    {
        const bool branch_taken_0x25c814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c814) {
            ctx->pc = 0x25C880u;
            goto label_25c880;
        }
    }
    ctx->pc = 0x25C81Cu;
label_25c81c:
    // 0x25c81c: 0x0  nop
    ctx->pc = 0x25c81cu;
    // NOP
label_25c820:
    // 0x25c820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_25c824:
    // 0x25c824: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_25c828:
    if (ctx->pc == 0x25C828u) {
        ctx->pc = 0x25C828u;
            // 0x25c828: 0x28410027  slti        $at, $v0, 0x27 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)39) ? 1 : 0);
        ctx->pc = 0x25C82Cu;
        goto label_25c82c;
    }
    ctx->pc = 0x25C824u;
    {
        const bool branch_taken_0x25c824 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C824u;
            // 0x25c828: 0x28410027  slti        $at, $v0, 0x27 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)39) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c824) {
            ctx->pc = 0x25C860u;
            goto label_25c860;
        }
    }
    ctx->pc = 0x25C82Cu;
label_25c82c:
    // 0x25c82c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_25c830:
    if (ctx->pc == 0x25C830u) {
        ctx->pc = 0x25C830u;
            // 0x25c830: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x25C834u;
        goto label_25c834;
    }
    ctx->pc = 0x25C82Cu;
    {
        const bool branch_taken_0x25c82c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C82Cu;
            // 0x25c830: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c82c) {
            ctx->pc = 0x25C860u;
            goto label_25c860;
        }
    }
    ctx->pc = 0x25C834u;
label_25c834:
    // 0x25c834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c838:
    // 0x25c838: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x25c838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_25c83c:
    // 0x25c83c: 0x24421b30  addiu       $v0, $v0, 0x1B30
    ctx->pc = 0x25c83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6960));
label_25c840:
    // 0x25c840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25c844:
    // 0x25c844: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25c848:
    // 0x25c848: 0x40f809  jalr        $v0
label_25c84c:
    if (ctx->pc == 0x25C84Cu) {
        ctx->pc = 0x25C84Cu;
            // 0x25c84c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C850u;
        goto label_25c850;
    }
    ctx->pc = 0x25C848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C850u);
        ctx->pc = 0x25C84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C848u;
            // 0x25c84c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25C850u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25C850u; }
            if (ctx->pc != 0x25C850u) { return; }
        }
        }
    }
    ctx->pc = 0x25C850u;
label_25c850:
    // 0x25c850: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_25c854:
    if (ctx->pc == 0x25C854u) {
        ctx->pc = 0x25C858u;
        goto label_25c858;
    }
    ctx->pc = 0x25C850u;
    {
        const bool branch_taken_0x25c850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c850) {
            ctx->pc = 0x25C880u;
            goto label_25c880;
        }
    }
    ctx->pc = 0x25C858u;
label_25c858:
    // 0x25c858: 0x10000003  b           . + 4 + (0x3 << 2)
label_25c85c:
    if (ctx->pc == 0x25C85Cu) {
        ctx->pc = 0x25C860u;
        goto label_25c860;
    }
    ctx->pc = 0x25C858u;
    {
        const bool branch_taken_0x25c858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c858) {
            ctx->pc = 0x25C868u;
            goto label_25c868;
        }
    }
    ctx->pc = 0x25C860u;
label_25c860:
    // 0x25c860: 0x10000007  b           . + 4 + (0x7 << 2)
label_25c864:
    if (ctx->pc == 0x25C864u) {
        ctx->pc = 0x25C864u;
            // 0x25c864: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C868u;
        goto label_25c868;
    }
    ctx->pc = 0x25C860u;
    {
        const bool branch_taken_0x25c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C860u;
            // 0x25c864: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c860) {
            ctx->pc = 0x25C880u;
            goto label_25c880;
        }
    }
    ctx->pc = 0x25C868u;
label_25c868:
    // 0x25c868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c86c:
    // 0x25c86c: 0xc0970f0  jal         func_25C3C0
label_25c870:
    if (ctx->pc == 0x25C870u) {
        ctx->pc = 0x25C870u;
            // 0x25c870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25C874u;
        goto label_25c874;
    }
    ctx->pc = 0x25C86Cu;
    SET_GPR_U32(ctx, 31, 0x25C874u);
    ctx->pc = 0x25C870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C86Cu;
            // 0x25c870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C3C0u;
    if (runtime->hasFunction(0x25C3C0u)) {
        auto targetFn = runtime->lookupFunction(0x25C3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C874u; }
        if (ctx->pc != 0x25C874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextSeq__12CSceneObjSeqFP12_SEN_OBJ_SEQ_0x25c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C874u; }
        if (ctx->pc != 0x25C874u) { return; }
    }
    ctx->pc = 0x25C874u;
label_25c874:
    // 0x25c874: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25c874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c878:
    // 0x25c878: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
label_25c87c:
    if (ctx->pc == 0x25C87Cu) {
        ctx->pc = 0x25C880u;
        goto label_25c880;
    }
    ctx->pc = 0x25C878u;
    {
        const bool branch_taken_0x25c878 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c878) {
            ctx->pc = 0x25C81Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c81c;
        }
    }
    ctx->pc = 0x25C880u;
label_25c880:
    // 0x25c880: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
label_25c884:
    if (ctx->pc == 0x25C884u) {
        ctx->pc = 0x25C884u;
            // 0x25c884: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x25C888u;
        goto label_25c888;
    }
    ctx->pc = 0x25C880u;
    {
        const bool branch_taken_0x25c880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C880u;
            // 0x25c884: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c880) {
            ctx->pc = 0x25C88Cu;
            goto label_25c88c;
        }
    }
    ctx->pc = 0x25C888u;
label_25c888:
    // 0x25c888: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x25c888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_25c88c:
    // 0x25c88c: 0x0  nop
    ctx->pc = 0x25c88cu;
    // NOP
label_25c890:
    // 0x25c890: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x25c890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_25c894:
    // 0x25c894: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x25c894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_25c898:
    // 0x25c898: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_25c89c:
    if (ctx->pc == 0x25C89Cu) {
        ctx->pc = 0x25C89Cu;
            // 0x25c89c: 0x2e210007  sltiu       $at, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->pc = 0x25C8A0u;
        goto label_25c8a0;
    }
    ctx->pc = 0x25C898u;
    {
        const bool branch_taken_0x25c898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C898u;
            // 0x25c89c: 0x2e210007  sltiu       $at, $s1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c898) {
            ctx->pc = 0x25C784u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c784;
        }
    }
    ctx->pc = 0x25C8A0u;
label_25c8a0:
    // 0x25c8a0: 0xc04c374  jal         func_130DD0
label_25c8a4:
    if (ctx->pc == 0x25C8A4u) {
        ctx->pc = 0x25C8A4u;
            // 0x25c8a4: 0xc68c0084  lwc1        $f12, 0x84($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x25C8A8u;
        goto label_25c8a8;
    }
    ctx->pc = 0x25C8A0u;
    SET_GPR_U32(ctx, 31, 0x25C8A8u);
    ctx->pc = 0x25C8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8A0u;
            // 0x25c8a4: 0xc68c0084  lwc1        $f12, 0x84($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8A8u; }
        if (ctx->pc != 0x25C8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8A8u; }
        if (ctx->pc != 0x25C8A8u) { return; }
    }
    ctx->pc = 0x25C8A8u;
label_25c8a8:
    // 0x25c8a8: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x25c8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
label_25c8ac:
    // 0x25c8ac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c8acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_25c8b0:
    // 0x25c8b0: 0x8e850064  lw          $a1, 0x64($s4)
    ctx->pc = 0x25c8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_25c8b4:
    // 0x25c8b4: 0xc68c0070  lwc1        $f12, 0x70($s4)
    ctx->pc = 0x25c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c8b8:
    // 0x25c8b8: 0xc68d0074  lwc1        $f13, 0x74($s4)
    ctx->pc = 0x25c8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25c8bc:
    // 0x25c8bc: 0xc68e0078  lwc1        $f14, 0x78($s4)
    ctx->pc = 0x25c8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25c8c0:
    // 0x25c8c0: 0xc0976e0  jal         func_25DB80
label_25c8c4:
    if (ctx->pc == 0x25C8C4u) {
        ctx->pc = 0x25C8C4u;
            // 0x25c8c4: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->pc = 0x25C8C8u;
        goto label_25c8c8;
    }
    ctx->pc = 0x25C8C0u;
    SET_GPR_U32(ctx, 31, 0x25C8C8u);
    ctx->pc = 0x25C8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8C0u;
            // 0x25c8c4: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DB80u;
    if (runtime->hasFunction(0x25DB80u)) {
        auto targetFn = runtime->lookupFunction(0x25DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8C8u; }
        if (ctx->pc != 0x25C8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__10CEohMotherFifff_0x25db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8C8u; }
        if (ctx->pc != 0x25C8C8u) { return; }
    }
    ctx->pc = 0x25C8C8u;
label_25c8c8:
    // 0x25c8c8: 0x8e850064  lw          $a1, 0x64($s4)
    ctx->pc = 0x25c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
label_25c8cc:
    // 0x25c8cc: 0xc68c0080  lwc1        $f12, 0x80($s4)
    ctx->pc = 0x25c8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25c8d0:
    // 0x25c8d0: 0xc68d0084  lwc1        $f13, 0x84($s4)
    ctx->pc = 0x25c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_25c8d4:
    // 0x25c8d4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_25c8d8:
    // 0x25c8d8: 0xc68e0088  lwc1        $f14, 0x88($s4)
    ctx->pc = 0x25c8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_25c8dc:
    // 0x25c8dc: 0xc097780  jal         func_25DE00
label_25c8e0:
    if (ctx->pc == 0x25C8E0u) {
        ctx->pc = 0x25C8E0u;
            // 0x25c8e0: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->pc = 0x25C8E4u;
        goto label_25c8e4;
    }
    ctx->pc = 0x25C8DCu;
    SET_GPR_U32(ctx, 31, 0x25C8E4u);
    ctx->pc = 0x25C8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8DCu;
            // 0x25c8e0: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DE00u;
    if (runtime->hasFunction(0x25DE00u)) {
        auto targetFn = runtime->lookupFunction(0x25DE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8E4u; }
        if (ctx->pc != 0x25C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRot__10CEohMotherFifff_0x25de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8E4u; }
        if (ctx->pc != 0x25C8E4u) { return; }
    }
    ctx->pc = 0x25C8E4u;
label_25c8e4:
    // 0x25c8e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25c8e8:
    // 0x25c8e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25c8e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25c8ec:
    // 0x25c8ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25c8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c8f0:
    // 0x25c8f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c8f4:
    // 0x25c8f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25c8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c8f8:
    // 0x25c8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25c8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25c8fc:
    // 0x25c8fc: 0x3e00008  jr          $ra
label_25c900:
    if (ctx->pc == 0x25C900u) {
        ctx->pc = 0x25C900u;
            // 0x25c900: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x25C904u;
        goto label_fallthrough_0x25c8fc;
    }
    ctx->pc = 0x25C8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C8FCu;
            // 0x25c900: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25c8fc:
    ctx->pc = 0x25C904u;
}
