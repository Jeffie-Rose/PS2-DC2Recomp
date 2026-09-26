#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgInitFishing__FP11SubGameInfo
// Address: 0x2fc760 - 0x2fc920
void sgInitFishing__FP11SubGameInfo_0x2fc760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgInitFishing__FP11SubGameInfo_0x2fc760");
#endif

    switch (ctx->pc) {
        case 0x2fc760u: goto label_2fc760;
        case 0x2fc764u: goto label_2fc764;
        case 0x2fc768u: goto label_2fc768;
        case 0x2fc76cu: goto label_2fc76c;
        case 0x2fc770u: goto label_2fc770;
        case 0x2fc774u: goto label_2fc774;
        case 0x2fc778u: goto label_2fc778;
        case 0x2fc77cu: goto label_2fc77c;
        case 0x2fc780u: goto label_2fc780;
        case 0x2fc784u: goto label_2fc784;
        case 0x2fc788u: goto label_2fc788;
        case 0x2fc78cu: goto label_2fc78c;
        case 0x2fc790u: goto label_2fc790;
        case 0x2fc794u: goto label_2fc794;
        case 0x2fc798u: goto label_2fc798;
        case 0x2fc79cu: goto label_2fc79c;
        case 0x2fc7a0u: goto label_2fc7a0;
        case 0x2fc7a4u: goto label_2fc7a4;
        case 0x2fc7a8u: goto label_2fc7a8;
        case 0x2fc7acu: goto label_2fc7ac;
        case 0x2fc7b0u: goto label_2fc7b0;
        case 0x2fc7b4u: goto label_2fc7b4;
        case 0x2fc7b8u: goto label_2fc7b8;
        case 0x2fc7bcu: goto label_2fc7bc;
        case 0x2fc7c0u: goto label_2fc7c0;
        case 0x2fc7c4u: goto label_2fc7c4;
        case 0x2fc7c8u: goto label_2fc7c8;
        case 0x2fc7ccu: goto label_2fc7cc;
        case 0x2fc7d0u: goto label_2fc7d0;
        case 0x2fc7d4u: goto label_2fc7d4;
        case 0x2fc7d8u: goto label_2fc7d8;
        case 0x2fc7dcu: goto label_2fc7dc;
        case 0x2fc7e0u: goto label_2fc7e0;
        case 0x2fc7e4u: goto label_2fc7e4;
        case 0x2fc7e8u: goto label_2fc7e8;
        case 0x2fc7ecu: goto label_2fc7ec;
        case 0x2fc7f0u: goto label_2fc7f0;
        case 0x2fc7f4u: goto label_2fc7f4;
        case 0x2fc7f8u: goto label_2fc7f8;
        case 0x2fc7fcu: goto label_2fc7fc;
        case 0x2fc800u: goto label_2fc800;
        case 0x2fc804u: goto label_2fc804;
        case 0x2fc808u: goto label_2fc808;
        case 0x2fc80cu: goto label_2fc80c;
        case 0x2fc810u: goto label_2fc810;
        case 0x2fc814u: goto label_2fc814;
        case 0x2fc818u: goto label_2fc818;
        case 0x2fc81cu: goto label_2fc81c;
        case 0x2fc820u: goto label_2fc820;
        case 0x2fc824u: goto label_2fc824;
        case 0x2fc828u: goto label_2fc828;
        case 0x2fc82cu: goto label_2fc82c;
        case 0x2fc830u: goto label_2fc830;
        case 0x2fc834u: goto label_2fc834;
        case 0x2fc838u: goto label_2fc838;
        case 0x2fc83cu: goto label_2fc83c;
        case 0x2fc840u: goto label_2fc840;
        case 0x2fc844u: goto label_2fc844;
        case 0x2fc848u: goto label_2fc848;
        case 0x2fc84cu: goto label_2fc84c;
        case 0x2fc850u: goto label_2fc850;
        case 0x2fc854u: goto label_2fc854;
        case 0x2fc858u: goto label_2fc858;
        case 0x2fc85cu: goto label_2fc85c;
        case 0x2fc860u: goto label_2fc860;
        case 0x2fc864u: goto label_2fc864;
        case 0x2fc868u: goto label_2fc868;
        case 0x2fc86cu: goto label_2fc86c;
        case 0x2fc870u: goto label_2fc870;
        case 0x2fc874u: goto label_2fc874;
        case 0x2fc878u: goto label_2fc878;
        case 0x2fc87cu: goto label_2fc87c;
        case 0x2fc880u: goto label_2fc880;
        case 0x2fc884u: goto label_2fc884;
        case 0x2fc888u: goto label_2fc888;
        case 0x2fc88cu: goto label_2fc88c;
        case 0x2fc890u: goto label_2fc890;
        case 0x2fc894u: goto label_2fc894;
        case 0x2fc898u: goto label_2fc898;
        case 0x2fc89cu: goto label_2fc89c;
        case 0x2fc8a0u: goto label_2fc8a0;
        case 0x2fc8a4u: goto label_2fc8a4;
        case 0x2fc8a8u: goto label_2fc8a8;
        case 0x2fc8acu: goto label_2fc8ac;
        case 0x2fc8b0u: goto label_2fc8b0;
        case 0x2fc8b4u: goto label_2fc8b4;
        case 0x2fc8b8u: goto label_2fc8b8;
        case 0x2fc8bcu: goto label_2fc8bc;
        case 0x2fc8c0u: goto label_2fc8c0;
        case 0x2fc8c4u: goto label_2fc8c4;
        case 0x2fc8c8u: goto label_2fc8c8;
        case 0x2fc8ccu: goto label_2fc8cc;
        case 0x2fc8d0u: goto label_2fc8d0;
        case 0x2fc8d4u: goto label_2fc8d4;
        case 0x2fc8d8u: goto label_2fc8d8;
        case 0x2fc8dcu: goto label_2fc8dc;
        case 0x2fc8e0u: goto label_2fc8e0;
        case 0x2fc8e4u: goto label_2fc8e4;
        case 0x2fc8e8u: goto label_2fc8e8;
        case 0x2fc8ecu: goto label_2fc8ec;
        case 0x2fc8f0u: goto label_2fc8f0;
        case 0x2fc8f4u: goto label_2fc8f4;
        case 0x2fc8f8u: goto label_2fc8f8;
        case 0x2fc8fcu: goto label_2fc8fc;
        case 0x2fc900u: goto label_2fc900;
        case 0x2fc904u: goto label_2fc904;
        case 0x2fc908u: goto label_2fc908;
        case 0x2fc90cu: goto label_2fc90c;
        case 0x2fc910u: goto label_2fc910;
        case 0x2fc914u: goto label_2fc914;
        case 0x2fc918u: goto label_2fc918;
        case 0x2fc91cu: goto label_2fc91c;
        default: break;
    }

    ctx->pc = 0x2fc760u;

label_2fc760:
    // 0x2fc760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fc764:
    // 0x2fc764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fc768:
    // 0x2fc768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fc76c:
    // 0x2fc76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fc770:
    // 0x2fc770: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fc770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fc774:
    // 0x2fc774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fc778:
    // 0x2fc778: 0xaf829f90  sw          $v0, -0x6070($gp)
    ctx->pc = 0x2fc778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942608), GPR_U32(ctx, 2));
label_2fc77c:
    // 0x2fc77c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fc77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fc780:
    // 0x2fc780: 0x8f859f90  lw          $a1, -0x6070($gp)
    ctx->pc = 0x2fc780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fc784:
    // 0x2fc784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fc784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fc788:
    // 0x2fc788: 0xaf829f94  sw          $v0, -0x606C($gp)
    ctx->pc = 0x2fc788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942612), GPR_U32(ctx, 2));
label_2fc78c:
    // 0x2fc78c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fc78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fc790:
    // 0x2fc790: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2fc790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2fc794:
    // 0x2fc794: 0xaf829f98  sw          $v0, -0x6068($gp)
    ctx->pc = 0x2fc794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942616), GPR_U32(ctx, 2));
label_2fc798:
    // 0x2fc798: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2fc798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2fc79c:
    // 0x2fc79c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2fc79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2fc7a0:
    // 0x2fc7a0: 0xaf829f9c  sw          $v0, -0x6064($gp)
    ctx->pc = 0x2fc7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942620), GPR_U32(ctx, 2));
label_2fc7a4:
    // 0x2fc7a4: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2fc7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fc7a8:
    // 0x2fc7a8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fc7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2fc7ac:
    // 0x2fc7ac: 0xc04b950  jal         func_12E540
label_2fc7b0:
    if (ctx->pc == 0x2FC7B0u) {
        ctx->pc = 0x2FC7B0u;
            // 0x2fc7b0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2FC7B4u;
        goto label_2fc7b4;
    }
    ctx->pc = 0x2FC7ACu;
    SET_GPR_U32(ctx, 31, 0x2FC7B4u);
    ctx->pc = 0x2FC7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7ACu;
            // 0x2fc7b0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7B4u; }
        if (ctx->pc != 0x2FC7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7B4u; }
        if (ctx->pc != 0x2FC7B4u) { return; }
    }
    ctx->pc = 0x2FC7B4u;
label_2fc7b4:
    // 0x2fc7b4: 0x8f859f94  lw          $a1, -0x606C($gp)
    ctx->pc = 0x2fc7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942612)));
label_2fc7b8:
    // 0x2fc7b8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fc7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2fc7bc:
    // 0x2fc7bc: 0xc04b950  jal         func_12E540
label_2fc7c0:
    if (ctx->pc == 0x2FC7C0u) {
        ctx->pc = 0x2FC7C0u;
            // 0x2fc7c0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2FC7C4u;
        goto label_2fc7c4;
    }
    ctx->pc = 0x2FC7BCu;
    SET_GPR_U32(ctx, 31, 0x2FC7C4u);
    ctx->pc = 0x2FC7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7BCu;
            // 0x2fc7c0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7C4u; }
        if (ctx->pc != 0x2FC7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7C4u; }
        if (ctx->pc != 0x2FC7C4u) { return; }
    }
    ctx->pc = 0x2FC7C4u;
label_2fc7c4:
    // 0x2fc7c4: 0x8f859f98  lw          $a1, -0x6068($gp)
    ctx->pc = 0x2fc7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
label_2fc7c8:
    // 0x2fc7c8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2fc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2fc7cc:
    // 0x2fc7cc: 0xc04b950  jal         func_12E540
label_2fc7d0:
    if (ctx->pc == 0x2FC7D0u) {
        ctx->pc = 0x2FC7D0u;
            // 0x2fc7d0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x2FC7D4u;
        goto label_2fc7d4;
    }
    ctx->pc = 0x2FC7CCu;
    SET_GPR_U32(ctx, 31, 0x2FC7D4u);
    ctx->pc = 0x2FC7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7CCu;
            // 0x2fc7d0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7D4u; }
        if (ctx->pc != 0x2FC7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC7D4u; }
        if (ctx->pc != 0x2FC7D4u) { return; }
    }
    ctx->pc = 0x2FC7D4u;
label_2fc7d4:
    // 0x2fc7d4: 0xaf80a024  sw          $zero, -0x5FDC($gp)
    ctx->pc = 0x2fc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942756), GPR_U32(ctx, 0));
label_2fc7d8:
    // 0x2fc7d8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2fc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2fc7dc:
    // 0x2fc7dc: 0xaf82a01c  sw          $v0, -0x5FE4($gp)
    ctx->pc = 0x2fc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942748), GPR_U32(ctx, 2));
label_2fc7e0:
    // 0x2fc7e0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2fc7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2fc7e4:
    // 0x2fc7e4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_2fc7e8:
    if (ctx->pc == 0x2FC7E8u) {
        ctx->pc = 0x2FC7E8u;
            // 0x2fc7e8: 0x3c010010  lui         $at, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x2FC7ECu;
        goto label_2fc7ec;
    }
    ctx->pc = 0x2FC7E4u;
    {
        const bool branch_taken_0x2fc7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7E4u;
            // 0x2fc7e8: 0x3c010010  lui         $at, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc7e4) {
            ctx->pc = 0x2FC868u;
            goto label_2fc868;
        }
    }
    ctx->pc = 0x2FC7ECu;
label_2fc7ec:
    // 0x2fc7ec: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x2fc7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2fc7f0:
    // 0x2fc7f0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fc7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fc7f4:
    // 0x2fc7f4: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x2fc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2fc7f8:
    // 0x2fc7f8: 0xc04e79c  jal         func_139E70
label_2fc7fc:
    if (ctx->pc == 0x2FC7FCu) {
        ctx->pc = 0x2FC7FCu;
            // 0x2fc7fc: 0x24849d60  addiu       $a0, $a0, -0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
        ctx->pc = 0x2FC800u;
        goto label_2fc800;
    }
    ctx->pc = 0x2FC7F8u;
    SET_GPR_U32(ctx, 31, 0x2FC800u);
    ctx->pc = 0x2FC7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC7F8u;
            // 0x2fc7fc: 0x24849d60  addiu       $a0, $a0, -0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC800u; }
        if (ctx->pc != 0x2FC800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC800u; }
        if (ctx->pc != 0x2FC800u) { return; }
    }
    ctx->pc = 0x2FC800u;
label_2fc800:
    // 0x2fc800: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fc804:
    // 0x2fc804: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fc804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fc808:
    // 0x2fc808: 0xac209d84  sw          $zero, -0x627C($at)
    ctx->pc = 0x2fc808u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942084), GPR_U32(ctx, 0));
label_2fc80c:
    // 0x2fc80c: 0x24849d60  addiu       $a0, $a0, -0x62A0
    ctx->pc = 0x2fc80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
label_2fc810:
    // 0x2fc810: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fc814:
    // 0x2fc814: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2fc814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2fc818:
    // 0x2fc818: 0xc04e704  jal         func_139C10
label_2fc81c:
    if (ctx->pc == 0x2FC81Cu) {
        ctx->pc = 0x2FC81Cu;
            // 0x2fc81c: 0xac209d7c  sw          $zero, -0x6284($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942076), GPR_U32(ctx, 0));
        ctx->pc = 0x2FC820u;
        goto label_2fc820;
    }
    ctx->pc = 0x2FC818u;
    SET_GPR_U32(ctx, 31, 0x2FC820u);
    ctx->pc = 0x2FC81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC818u;
            // 0x2fc81c: 0xac209d7c  sw          $zero, -0x6284($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942076), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC820u; }
        if (ctx->pc != 0x2FC820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC820u; }
        if (ctx->pc != 0x2FC820u) { return; }
    }
    ctx->pc = 0x2FC820u;
label_2fc820:
    // 0x2fc820: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fc820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fc824:
    // 0x2fc824: 0xaf82a01c  sw          $v0, -0x5FE4($gp)
    ctx->pc = 0x2fc824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942748), GPR_U32(ctx, 2));
label_2fc828:
    // 0x2fc828: 0xc04e780  jal         func_139E00
label_2fc82c:
    if (ctx->pc == 0x2FC82Cu) {
        ctx->pc = 0x2FC82Cu;
            // 0x2fc82c: 0x24849d60  addiu       $a0, $a0, -0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
        ctx->pc = 0x2FC830u;
        goto label_2fc830;
    }
    ctx->pc = 0x2FC828u;
    SET_GPR_U32(ctx, 31, 0x2FC830u);
    ctx->pc = 0x2FC82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC828u;
            // 0x2fc82c: 0x24849d60  addiu       $a0, $a0, -0x62A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC830u; }
        if (ctx->pc != 0x2FC830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC830u; }
        if (ctx->pc != 0x2FC830u) { return; }
    }
    ctx->pc = 0x2FC830u;
label_2fc830:
    // 0x2fc830: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fc834:
    // 0x2fc834: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fc834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fc838:
    // 0x2fc838: 0x8c239d88  lw          $v1, -0x6278($at)
    ctx->pc = 0x2fc838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942088)));
label_2fc83c:
    // 0x2fc83c: 0x24849d30  addiu       $a0, $a0, -0x62D0
    ctx->pc = 0x2fc83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942000));
label_2fc840:
    // 0x2fc840: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fc844:
    // 0x2fc844: 0x8c259d84  lw          $a1, -0x627C($at)
    ctx->pc = 0x2fc844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942084)));
label_2fc848:
    // 0x2fc848: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fc84c:
    // 0x2fc84c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2fc84cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2fc850:
    // 0x2fc850: 0x8c229d80  lw          $v0, -0x6280($at)
    ctx->pc = 0x2fc850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942080)));
label_2fc854:
    // 0x2fc854: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2fc854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2fc858:
    // 0x2fc858: 0xc04e79c  jal         func_139E70
label_2fc85c:
    if (ctx->pc == 0x2FC85Cu) {
        ctx->pc = 0x2FC85Cu;
            // 0x2fc85c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2FC860u;
        goto label_2fc860;
    }
    ctx->pc = 0x2FC858u;
    SET_GPR_U32(ctx, 31, 0x2FC860u);
    ctx->pc = 0x2FC85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC858u;
            // 0x2fc85c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC860u; }
        if (ctx->pc != 0x2FC860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC860u; }
        if (ctx->pc != 0x2FC860u) { return; }
    }
    ctx->pc = 0x2FC860u;
label_2fc860:
    // 0x2fc860: 0x10000007  b           . + 4 + (0x7 << 2)
label_2fc864:
    if (ctx->pc == 0x2FC864u) {
        ctx->pc = 0x2FC864u;
            // 0x2fc864: 0x8e252e50  lw          $a1, 0x2E50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
        ctx->pc = 0x2FC868u;
        goto label_2fc868;
    }
    ctx->pc = 0x2FC860u;
    {
        const bool branch_taken_0x2fc860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC860u;
            // 0x2fc864: 0x8e252e50  lw          $a1, 0x2E50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc860) {
            ctx->pc = 0x2FC880u;
            goto label_2fc880;
        }
    }
    ctx->pc = 0x2FC868u;
label_2fc868:
    // 0x2fc868: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fc868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fc86c:
    // 0x2fc86c: 0x412821  addu        $a1, $v0, $at
    ctx->pc = 0x2fc86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2fc870:
    // 0x2fc870: 0x24849d30  addiu       $a0, $a0, -0x62D0
    ctx->pc = 0x2fc870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942000));
label_2fc874:
    // 0x2fc874: 0xc04e79c  jal         func_139E70
label_2fc878:
    if (ctx->pc == 0x2FC878u) {
        ctx->pc = 0x2FC878u;
            // 0x2fc878: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x2FC87Cu;
        goto label_2fc87c;
    }
    ctx->pc = 0x2FC874u;
    SET_GPR_U32(ctx, 31, 0x2FC87Cu);
    ctx->pc = 0x2FC878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC874u;
            // 0x2fc878: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC87Cu; }
        if (ctx->pc != 0x2FC87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC87Cu; }
        if (ctx->pc != 0x2FC87Cu) { return; }
    }
    ctx->pc = 0x2FC87Cu;
label_2fc87c:
    // 0x2fc87c: 0x8e252e50  lw          $a1, 0x2E50($s1)
    ctx->pc = 0x2fc87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
label_2fc880:
    // 0x2fc880: 0xc0a0ed8  jal         func_283B60
label_2fc884:
    if (ctx->pc == 0x2FC884u) {
        ctx->pc = 0x2FC884u;
            // 0x2fc884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC888u;
        goto label_2fc888;
    }
    ctx->pc = 0x2FC880u;
    SET_GPR_U32(ctx, 31, 0x2FC888u);
    ctx->pc = 0x2FC884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC880u;
            // 0x2fc884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC888u; }
        if (ctx->pc != 0x2FC888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC888u; }
        if (ctx->pc != 0x2FC888u) { return; }
    }
    ctx->pc = 0x2FC888u;
label_2fc888:
    // 0x2fc888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fc888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fc88c:
    // 0x2fc88c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_2fc890:
    if (ctx->pc == 0x2FC890u) {
        ctx->pc = 0x2FC890u;
            // 0x2fc890: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2FC894u;
        goto label_2fc894;
    }
    ctx->pc = 0x2FC88Cu;
    {
        const bool branch_taken_0x2fc88c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC88Cu;
            // 0x2fc890: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc88c) {
            ctx->pc = 0x2FC8ECu;
            goto label_2fc8ec;
        }
    }
    ctx->pc = 0x2FC894u;
label_2fc894:
    // 0x2fc894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc898:
    // 0x2fc898: 0x24a51e08  addiu       $a1, $a1, 0x1E08
    ctx->pc = 0x2fc898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7688));
label_2fc89c:
    // 0x2fc89c: 0xc05d2b4  jal         func_174AD0
label_2fc8a0:
    if (ctx->pc == 0x2FC8A0u) {
        ctx->pc = 0x2FC8A0u;
            // 0x2fc8a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8A4u;
        goto label_2fc8a4;
    }
    ctx->pc = 0x2FC89Cu;
    SET_GPR_U32(ctx, 31, 0x2FC8A4u);
    ctx->pc = 0x2FC8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC89Cu;
            // 0x2fc8a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC8A4u; }
        if (ctx->pc != 0x2FC8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC8A4u; }
        if (ctx->pc != 0x2FC8A4u) { return; }
    }
    ctx->pc = 0x2FC8A4u;
label_2fc8a4:
    // 0x2fc8a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2fc8a8:
    if (ctx->pc == 0x2FC8A8u) {
        ctx->pc = 0x2FC8ACu;
        goto label_2fc8ac;
    }
    ctx->pc = 0x2FC8A4u;
    {
        const bool branch_taken_0x2fc8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc8a4) {
            ctx->pc = 0x2FC8D0u;
            goto label_2fc8d0;
        }
    }
    ctx->pc = 0x2FC8ACu;
label_2fc8ac:
    // 0x2fc8ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2fc8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fc8b0:
    // 0x2fc8b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fc8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fc8b4:
    // 0x2fc8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc8b8:
    // 0x2fc8b8: 0x24a51e08  addiu       $a1, $a1, 0x1E08
    ctx->pc = 0x2fc8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7688));
label_2fc8bc:
    // 0x2fc8bc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2fc8bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2fc8c0:
    // 0x2fc8c0: 0x320f809  jalr        $t9
label_2fc8c4:
    if (ctx->pc == 0x2FC8C4u) {
        ctx->pc = 0x2FC8C4u;
            // 0x2fc8c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8C8u;
        goto label_2fc8c8;
    }
    ctx->pc = 0x2FC8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC8C8u);
        ctx->pc = 0x2FC8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC8C0u;
            // 0x2fc8c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC8C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC8C8u; }
            if (ctx->pc != 0x2FC8C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FC8C8u;
label_2fc8c8:
    // 0x2fc8c8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2fc8cc:
    if (ctx->pc == 0x2FC8CCu) {
        ctx->pc = 0x2FC8CCu;
            // 0x2fc8cc: 0xaf809fe8  sw          $zero, -0x6018($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942696), GPR_U32(ctx, 0));
        ctx->pc = 0x2FC8D0u;
        goto label_2fc8d0;
    }
    ctx->pc = 0x2FC8C8u;
    {
        const bool branch_taken_0x2fc8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC8C8u;
            // 0x2fc8cc: 0xaf809fe8  sw          $zero, -0x6018($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8c8) {
            ctx->pc = 0x2FC8F0u;
            goto label_2fc8f0;
        }
    }
    ctx->pc = 0x2FC8D0u;
label_2fc8d0:
    // 0x2fc8d0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2fc8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fc8d4:
    // 0x2fc8d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fc8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fc8d8:
    // 0x2fc8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc8dc:
    // 0x2fc8dc: 0x24a51e18  addiu       $a1, $a1, 0x1E18
    ctx->pc = 0x2fc8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7704));
label_2fc8e0:
    // 0x2fc8e0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2fc8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2fc8e4:
    // 0x2fc8e4: 0x320f809  jalr        $t9
label_2fc8e8:
    if (ctx->pc == 0x2FC8E8u) {
        ctx->pc = 0x2FC8E8u;
            // 0x2fc8e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FC8ECu;
        goto label_2fc8ec;
    }
    ctx->pc = 0x2FC8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FC8ECu);
        ctx->pc = 0x2FC8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC8E4u;
            // 0x2fc8e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FC8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FC8ECu; }
            if (ctx->pc != 0x2FC8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2FC8ECu;
label_2fc8ec:
    // 0x2fc8ec: 0xaf809fe8  sw          $zero, -0x6018($gp)
    ctx->pc = 0x2fc8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942696), GPR_U32(ctx, 0));
label_2fc8f0:
    // 0x2fc8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fc8f4:
    // 0x2fc8f4: 0xaf809fec  sw          $zero, -0x6014($gp)
    ctx->pc = 0x2fc8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942700), GPR_U32(ctx, 0));
label_2fc8f8:
    // 0x2fc8f8: 0xaf809ff0  sw          $zero, -0x6010($gp)
    ctx->pc = 0x2fc8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942704), GPR_U32(ctx, 0));
label_2fc8fc:
    // 0x2fc8fc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2fc8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2fc900:
    // 0x2fc900: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2fc900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_2fc904:
    // 0x2fc904: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2fc904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2fc908:
    // 0x2fc908: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2fc908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_2fc90c:
    // 0x2fc90c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fc910:
    // 0x2fc910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fc910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc914:
    // 0x2fc914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fc918:
    // 0x2fc918: 0x3e00008  jr          $ra
label_2fc91c:
    if (ctx->pc == 0x2FC91Cu) {
        ctx->pc = 0x2FC91Cu;
            // 0x2fc91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FC920u;
        goto label_fallthrough_0x2fc918;
    }
    ctx->pc = 0x2FC918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC918u;
            // 0x2fc91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fc918:
    ctx->pc = 0x2FC920u;
}
