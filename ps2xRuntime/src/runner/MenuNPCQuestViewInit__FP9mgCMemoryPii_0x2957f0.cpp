#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuNPCQuestViewInit__FP9mgCMemoryPii
// Address: 0x2957f0 - 0x295914
void MenuNPCQuestViewInit__FP9mgCMemoryPii_0x2957f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuNPCQuestViewInit__FP9mgCMemoryPii_0x2957f0");
#endif

    switch (ctx->pc) {
        case 0x2957f0u: goto label_2957f0;
        case 0x2957f4u: goto label_2957f4;
        case 0x2957f8u: goto label_2957f8;
        case 0x2957fcu: goto label_2957fc;
        case 0x295800u: goto label_295800;
        case 0x295804u: goto label_295804;
        case 0x295808u: goto label_295808;
        case 0x29580cu: goto label_29580c;
        case 0x295810u: goto label_295810;
        case 0x295814u: goto label_295814;
        case 0x295818u: goto label_295818;
        case 0x29581cu: goto label_29581c;
        case 0x295820u: goto label_295820;
        case 0x295824u: goto label_295824;
        case 0x295828u: goto label_295828;
        case 0x29582cu: goto label_29582c;
        case 0x295830u: goto label_295830;
        case 0x295834u: goto label_295834;
        case 0x295838u: goto label_295838;
        case 0x29583cu: goto label_29583c;
        case 0x295840u: goto label_295840;
        case 0x295844u: goto label_295844;
        case 0x295848u: goto label_295848;
        case 0x29584cu: goto label_29584c;
        case 0x295850u: goto label_295850;
        case 0x295854u: goto label_295854;
        case 0x295858u: goto label_295858;
        case 0x29585cu: goto label_29585c;
        case 0x295860u: goto label_295860;
        case 0x295864u: goto label_295864;
        case 0x295868u: goto label_295868;
        case 0x29586cu: goto label_29586c;
        case 0x295870u: goto label_295870;
        case 0x295874u: goto label_295874;
        case 0x295878u: goto label_295878;
        case 0x29587cu: goto label_29587c;
        case 0x295880u: goto label_295880;
        case 0x295884u: goto label_295884;
        case 0x295888u: goto label_295888;
        case 0x29588cu: goto label_29588c;
        case 0x295890u: goto label_295890;
        case 0x295894u: goto label_295894;
        case 0x295898u: goto label_295898;
        case 0x29589cu: goto label_29589c;
        case 0x2958a0u: goto label_2958a0;
        case 0x2958a4u: goto label_2958a4;
        case 0x2958a8u: goto label_2958a8;
        case 0x2958acu: goto label_2958ac;
        case 0x2958b0u: goto label_2958b0;
        case 0x2958b4u: goto label_2958b4;
        case 0x2958b8u: goto label_2958b8;
        case 0x2958bcu: goto label_2958bc;
        case 0x2958c0u: goto label_2958c0;
        case 0x2958c4u: goto label_2958c4;
        case 0x2958c8u: goto label_2958c8;
        case 0x2958ccu: goto label_2958cc;
        case 0x2958d0u: goto label_2958d0;
        case 0x2958d4u: goto label_2958d4;
        case 0x2958d8u: goto label_2958d8;
        case 0x2958dcu: goto label_2958dc;
        case 0x2958e0u: goto label_2958e0;
        case 0x2958e4u: goto label_2958e4;
        case 0x2958e8u: goto label_2958e8;
        case 0x2958ecu: goto label_2958ec;
        case 0x2958f0u: goto label_2958f0;
        case 0x2958f4u: goto label_2958f4;
        case 0x2958f8u: goto label_2958f8;
        case 0x2958fcu: goto label_2958fc;
        case 0x295900u: goto label_295900;
        case 0x295904u: goto label_295904;
        case 0x295908u: goto label_295908;
        case 0x29590cu: goto label_29590c;
        case 0x295910u: goto label_295910;
        default: break;
    }

    ctx->pc = 0x2957f0u;

label_2957f0:
    // 0x2957f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2957f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2957f4:
    // 0x2957f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2957f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2957f8:
    // 0x2957f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2957f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2957fc:
    // 0x2957fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2957fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_295800:
    // 0x295800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x295800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_295804:
    // 0x295804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295808:
    // 0x295808: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x295808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29580c:
    // 0x29580c: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
label_295810:
    if (ctx->pc == 0x295810u) {
        ctx->pc = 0x295810u;
            // 0x295810: 0xa38098dc  sb          $zero, -0x6724($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940892), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x295814u;
        goto label_295814;
    }
    ctx->pc = 0x29580Cu;
    {
        const bool branch_taken_0x29580c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x295810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29580Cu;
            // 0x295810: 0xa38098dc  sb          $zero, -0x6724($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940892), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29580c) {
            ctx->pc = 0x295818u;
            goto label_295818;
        }
    }
    ctx->pc = 0x295814u;
label_295814:
    // 0x295814: 0xa38298dc  sb          $v0, -0x6724($gp)
    ctx->pc = 0x295814u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940892), (uint8_t)GPR_U32(ctx, 2));
label_295818:
    // 0x295818: 0xc04e780  jal         func_139E00
label_29581c:
    if (ctx->pc == 0x29581Cu) {
        ctx->pc = 0x29581Cu;
            // 0x29581c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295820u;
        goto label_295820;
    }
    ctx->pc = 0x295818u;
    SET_GPR_U32(ctx, 31, 0x295820u);
    ctx->pc = 0x29581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295818u;
            // 0x29581c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295820u; }
        if (ctx->pc != 0x295820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295820u; }
        if (ctx->pc != 0x295820u) { return; }
    }
    ctx->pc = 0x295820u;
label_295820:
    // 0x295820: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x295820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_295824:
    // 0x295824: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x295824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_295828:
    // 0x295828: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x295828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_29582c:
    // 0x29582c: 0x248452e0  addiu       $a0, $a0, 0x52E0
    ctx->pc = 0x29582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
label_295830:
    // 0x295830: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x295830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_295834:
    // 0x295834: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x295834u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_295838:
    // 0x295838: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x295838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_29583c:
    // 0x29583c: 0xc04e79c  jal         func_139E70
label_295840:
    if (ctx->pc == 0x295840u) {
        ctx->pc = 0x295840u;
            // 0x295840: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x295844u;
        goto label_295844;
    }
    ctx->pc = 0x29583Cu;
    SET_GPR_U32(ctx, 31, 0x295844u);
    ctx->pc = 0x295840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29583Cu;
            // 0x295840: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295844u; }
        if (ctx->pc != 0x295844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295844u; }
        if (ctx->pc != 0x295844u) { return; }
    }
    ctx->pc = 0x295844u;
label_295844:
    // 0x295844: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x295844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_295848:
    // 0x295848: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x295848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_29584c:
    // 0x29584c: 0xc04e748  jal         func_139D20
label_295850:
    if (ctx->pc == 0x295850u) {
        ctx->pc = 0x295850u;
            // 0x295850: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->pc = 0x295854u;
        goto label_295854;
    }
    ctx->pc = 0x29584Cu;
    SET_GPR_U32(ctx, 31, 0x295854u);
    ctx->pc = 0x295850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29584Cu;
            // 0x295850: 0x248452e0  addiu       $a0, $a0, 0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295854u; }
        if (ctx->pc != 0x295854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295854u; }
        if (ctx->pc != 0x295854u) { return; }
    }
    ctx->pc = 0x295854u;
label_295854:
    // 0x295854: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x295854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_295858:
    // 0x295858: 0xc04e638  jal         func_1398E0
label_29585c:
    if (ctx->pc == 0x29585Cu) {
        ctx->pc = 0x29585Cu;
            // 0x29585c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295860u;
        goto label_295860;
    }
    ctx->pc = 0x295858u;
    SET_GPR_U32(ctx, 31, 0x295860u);
    ctx->pc = 0x29585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295858u;
            // 0x29585c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295860u; }
        if (ctx->pc != 0x295860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295860u; }
        if (ctx->pc != 0x295860u) { return; }
    }
    ctx->pc = 0x295860u;
label_295860:
    // 0x295860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_295864:
    if (ctx->pc == 0x295864u) {
        ctx->pc = 0x295864u;
            // 0x295864: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295868u;
        goto label_295868;
    }
    ctx->pc = 0x295860u;
    {
        const bool branch_taken_0x295860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295860u;
            // 0x295864: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295860) {
            ctx->pc = 0x29587Cu;
            goto label_29587c;
        }
    }
    ctx->pc = 0x295868u;
label_295868:
    // 0x295868: 0xc08dc2c  jal         func_2370B0
label_29586c:
    if (ctx->pc == 0x29586Cu) {
        ctx->pc = 0x29586Cu;
            // 0x29586c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295870u;
        goto label_295870;
    }
    ctx->pc = 0x295868u;
    SET_GPR_U32(ctx, 31, 0x295870u);
    ctx->pc = 0x29586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295868u;
            // 0x29586c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295870u; }
        if (ctx->pc != 0x295870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295870u; }
        if (ctx->pc != 0x295870u) { return; }
    }
    ctx->pc = 0x295870u;
label_295870:
    // 0x295870: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x295870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_295874:
    // 0x295874: 0x244261d0  addiu       $v0, $v0, 0x61D0
    ctx->pc = 0x295874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25040));
label_295878:
    // 0x295878: 0xae22010c  sw          $v0, 0x10C($s1)
    ctx->pc = 0x295878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 2));
label_29587c:
    // 0x29587c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29587cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_295880:
    // 0x295880: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x295880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_295884:
    // 0x295884: 0x248452e0  addiu       $a0, $a0, 0x52E0
    ctx->pc = 0x295884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21216));
label_295888:
    // 0x295888: 0xc04e748  jal         func_139D20
label_29588c:
    if (ctx->pc == 0x29588Cu) {
        ctx->pc = 0x29588Cu;
            // 0x29588c: 0xaf9198e0  sw          $s1, -0x6720($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940896), GPR_U32(ctx, 17));
        ctx->pc = 0x295890u;
        goto label_295890;
    }
    ctx->pc = 0x295888u;
    SET_GPR_U32(ctx, 31, 0x295890u);
    ctx->pc = 0x29588Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295888u;
            // 0x29588c: 0xaf9198e0  sw          $s1, -0x6720($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940896), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295890u; }
        if (ctx->pc != 0x295890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295890u; }
        if (ctx->pc != 0x295890u) { return; }
    }
    ctx->pc = 0x295890u;
label_295890:
    // 0x295890: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x295890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_295894:
    // 0x295894: 0xc04e638  jal         func_1398E0
label_295898:
    if (ctx->pc == 0x295898u) {
        ctx->pc = 0x295898u;
            // 0x295898: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29589Cu;
        goto label_29589c;
    }
    ctx->pc = 0x295894u;
    SET_GPR_U32(ctx, 31, 0x29589Cu);
    ctx->pc = 0x295898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295894u;
            // 0x295898: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29589Cu; }
        if (ctx->pc != 0x29589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29589Cu; }
        if (ctx->pc != 0x29589Cu) { return; }
    }
    ctx->pc = 0x29589Cu;
label_29589c:
    // 0x29589c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2958a0:
    if (ctx->pc == 0x2958A0u) {
        ctx->pc = 0x2958A0u;
            // 0x2958a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2958A4u;
        goto label_2958a4;
    }
    ctx->pc = 0x29589Cu;
    {
        const bool branch_taken_0x29589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2958A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29589Cu;
            // 0x2958a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29589c) {
            ctx->pc = 0x2958ACu;
            goto label_2958ac;
        }
    }
    ctx->pc = 0x2958A4u;
label_2958a4:
    // 0x2958a4: 0xc0c69fc  jal         func_31A7F0
label_2958a8:
    if (ctx->pc == 0x2958A8u) {
        ctx->pc = 0x2958A8u;
            // 0x2958a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2958ACu;
        goto label_2958ac;
    }
    ctx->pc = 0x2958A4u;
    SET_GPR_U32(ctx, 31, 0x2958ACu);
    ctx->pc = 0x2958A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2958A4u;
            // 0x2958a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A7F0u;
    if (runtime->hasFunction(0x31A7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31A7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958ACu; }
        if (ctx->pc != 0x2958ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CQuestManagerFv_0x31a7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958ACu; }
        if (ctx->pc != 0x2958ACu) { return; }
    }
    ctx->pc = 0x2958ACu;
label_2958ac:
    // 0x2958ac: 0xc064220  jal         func_190880
label_2958b0:
    if (ctx->pc == 0x2958B0u) {
        ctx->pc = 0x2958B0u;
            // 0x2958b0: 0xaf919894  sw          $s1, -0x676C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940820), GPR_U32(ctx, 17));
        ctx->pc = 0x2958B4u;
        goto label_2958b4;
    }
    ctx->pc = 0x2958ACu;
    SET_GPR_U32(ctx, 31, 0x2958B4u);
    ctx->pc = 0x2958B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2958ACu;
            // 0x2958b0: 0xaf919894  sw          $s1, -0x676C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940820), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958B4u; }
        if (ctx->pc != 0x2958B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958B4u; }
        if (ctx->pc != 0x2958B4u) { return; }
    }
    ctx->pc = 0x2958B4u;
label_2958b4:
    // 0x2958b4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2958b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2958b8:
    // 0x2958b8: 0x34212a40  ori         $at, $at, 0x2A40
    ctx->pc = 0x2958b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10816);
label_2958bc:
    // 0x2958bc: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2958bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2958c0:
    // 0x2958c0: 0xc064220  jal         func_190880
label_2958c4:
    if (ctx->pc == 0x2958C4u) {
        ctx->pc = 0x2958C4u;
            // 0x2958c4: 0xaf829898  sw          $v0, -0x6768($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940824), GPR_U32(ctx, 2));
        ctx->pc = 0x2958C8u;
        goto label_2958c8;
    }
    ctx->pc = 0x2958C0u;
    SET_GPR_U32(ctx, 31, 0x2958C8u);
    ctx->pc = 0x2958C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2958C0u;
            // 0x2958c4: 0xaf829898  sw          $v0, -0x6768($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958C8u; }
        if (ctx->pc != 0x2958C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958C8u; }
        if (ctx->pc != 0x2958C8u) { return; }
    }
    ctx->pc = 0x2958C8u;
label_2958c8:
    // 0x2958c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2958c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2958cc:
    // 0x2958cc: 0x8f8498e0  lw          $a0, -0x6720($gp)
    ctx->pc = 0x2958ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940896)));
label_2958d0:
    // 0x2958d0: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x2958d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_2958d4:
    // 0x2958d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2958d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2958d8:
    // 0x2958d8: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2958d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2958dc:
    // 0x2958dc: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x2958dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
label_2958e0:
    // 0x2958e0: 0x24420ad8  addiu       $v0, $v0, 0xAD8
    ctx->pc = 0x2958e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2776));
label_2958e4:
    // 0x2958e4: 0xc08dc6c  jal         func_2371B0
label_2958e8:
    if (ctx->pc == 0x2958E8u) {
        ctx->pc = 0x2958E8u;
            // 0x2958e8: 0xaf8298d0  sw          $v0, -0x6730($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940880), GPR_U32(ctx, 2));
        ctx->pc = 0x2958ECu;
        goto label_2958ec;
    }
    ctx->pc = 0x2958E4u;
    SET_GPR_U32(ctx, 31, 0x2958ECu);
    ctx->pc = 0x2958E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2958E4u;
            // 0x2958e8: 0xaf8298d0  sw          $v0, -0x6730($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958ECu; }
        if (ctx->pc != 0x2958ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2958ECu; }
        if (ctx->pc != 0x2958ECu) { return; }
    }
    ctx->pc = 0x2958ECu;
label_2958ec:
    // 0x2958ec: 0x8f8498e0  lw          $a0, -0x6720($gp)
    ctx->pc = 0x2958ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940896)));
label_2958f0:
    // 0x2958f0: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x2958f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_2958f4:
    // 0x2958f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2958f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2958f8:
    // 0x2958f8: 0x320f809  jalr        $t9
label_2958fc:
    if (ctx->pc == 0x2958FCu) {
        ctx->pc = 0x295900u;
        goto label_295900;
    }
    ctx->pc = 0x2958F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x295900u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x295900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x295900u; }
            if (ctx->pc != 0x295900u) { return; }
        }
        }
    }
    ctx->pc = 0x295900u;
label_295900:
    // 0x295900: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x295900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_295904:
    // 0x295904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295908:
    // 0x295908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x295908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29590c:
    // 0x29590c: 0x3e00008  jr          $ra
label_295910:
    if (ctx->pc == 0x295910u) {
        ctx->pc = 0x295910u;
            // 0x295910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x295914u;
        goto label_fallthrough_0x29590c;
    }
    ctx->pc = 0x29590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29590Cu;
            // 0x295910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29590c:
    ctx->pc = 0x295914u;
}
