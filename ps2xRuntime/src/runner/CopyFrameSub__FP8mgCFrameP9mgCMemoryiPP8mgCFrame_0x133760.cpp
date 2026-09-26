#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyFrameSub__FP8mgCFrameP9mgCMemoryiPP8mgCFrame
// Address: 0x133760 - 0x133870
void CopyFrameSub__FP8mgCFrameP9mgCMemoryiPP8mgCFrame_0x133760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyFrameSub__FP8mgCFrameP9mgCMemoryiPP8mgCFrame_0x133760");
#endif

    switch (ctx->pc) {
        case 0x13379cu: goto label_13379c;
        case 0x1337acu: goto label_1337ac;
        case 0x1337c4u: goto label_1337c4;
        case 0x1337f8u: goto label_1337f8;
        case 0x133804u: goto label_133804;
        case 0x13381cu: goto label_13381c;
        case 0x133834u: goto label_133834;
        default: break;
    }

    ctx->pc = 0x133760u;

label_133760:
    // 0x133760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x133764: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x133764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x133768: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13376c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13377c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13377cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133780: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x133780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133784: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x133784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133788: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x133788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13378c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133790: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x133790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133794: 0xc04e748  jal         func_139D20
    ctx->pc = 0x133794u;
    SET_GPR_U32(ctx, 31, 0x13379Cu);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13379Cu; }
        if (ctx->pc != 0x13379Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13379Cu; }
        if (ctx->pc != 0x13379Cu) { return; }
    }
    ctx->pc = 0x13379Cu;
label_13379c:
    // 0x13379c: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x13379cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1337a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1337a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337a4: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1337A4u;
    SET_GPR_U32(ctx, 31, 0x1337ACu);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337ACu; }
        if (ctx->pc != 0x1337ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337ACu; }
        if (ctx->pc != 0x1337ACu) { return; }
    }
    ctx->pc = 0x1337ACu;
label_1337ac:
    // 0x1337ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1337acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1337B0u;
    {
        const bool branch_taken_0x1337b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337b0) {
            ctx->pc = 0x1337C8u;
            goto label_1337c8;
        }
    }
    ctx->pc = 0x1337B8u;
    // 0x1337b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1337b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337bc: 0xc04d924  jal         func_136490
    ctx->pc = 0x1337BCu;
    SET_GPR_U32(ctx, 31, 0x1337C4u);
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337C4u; }
        if (ctx->pc != 0x1337C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337C4u; }
        if (ctx->pc != 0x1337C4u) { return; }
    }
    ctx->pc = 0x1337C4u;
label_1337c4:
    // 0x1337c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1337c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1337c8:
    // 0x1337c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1337C8u;
    {
        const bool branch_taken_0x1337c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1337c8) {
            ctx->pc = 0x1337DCu;
            goto label_1337dc;
        }
    }
    ctx->pc = 0x1337D0u;
    // 0x1337d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1337d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337d4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1337D4u;
    {
        const bool branch_taken_0x1337d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337d4) {
            ctx->pc = 0x13384Cu;
            goto label_13384c;
        }
    }
    ctx->pc = 0x1337DCu;
label_1337dc:
    // 0x1337dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1337dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1337e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1337e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1337e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337ec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1337ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337f0: 0xc04cd00  jal         func_133400
    ctx->pc = 0x1337F0u;
    SET_GPR_U32(ctx, 31, 0x1337F8u);
    ctx->pc = 0x133400u;
    if (runtime->hasFunction(0x133400u)) {
        auto targetFn = runtime->lookupFunction(0x133400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337F8u; }
        if (ctx->pc != 0x1337F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyFrame__FP8mgCFrameP8mgCFrameP9mgCMemoryiPP8mgCFrame_0x133400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1337F8u; }
        if (ctx->pc != 0x1337F8u) { return; }
    }
    ctx->pc = 0x1337F8u;
label_1337f8:
    // 0x1337f8: 0x8e310058  lw          $s1, 0x58($s1)
    ctx->pc = 0x1337f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1337fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1337FCu;
    {
        const bool branch_taken_0x1337fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337fc) {
            ctx->pc = 0x133840u;
            goto label_133840;
        }
    }
    ctx->pc = 0x133804u;
label_133804:
    // 0x133804: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133808: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x133808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13380c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13380cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133810: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x133810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133814: 0xc04cdd8  jal         func_133760
    ctx->pc = 0x133814u;
    SET_GPR_U32(ctx, 31, 0x13381Cu);
    ctx->pc = 0x133760u;
    goto label_133760;
    ctx->pc = 0x13381Cu;
label_13381c:
    // 0x13381c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13381Cu;
    {
        const bool branch_taken_0x13381c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13381c) {
            ctx->pc = 0x133834u;
            goto label_133834;
        }
    }
    ctx->pc = 0x133824u;
    // 0x133824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13382c: 0xc04dab8  jal         func_136AE0
    ctx->pc = 0x13382Cu;
    SET_GPR_U32(ctx, 31, 0x133834u);
    ctx->pc = 0x136AE0u;
    if (runtime->hasFunction(0x136AE0u)) {
        auto targetFn = runtime->lookupFunction(0x136AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133834u; }
        if (ctx->pc != 0x133834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetParent__8mgCFrameFP8mgCFrame_0x136ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133834u; }
        if (ctx->pc != 0x133834u) { return; }
    }
    ctx->pc = 0x133834u;
label_133834:
    // 0x133834: 0x0  nop
    ctx->pc = 0x133834u;
    // NOP
    // 0x133838: 0x8e31005c  lw          $s1, 0x5C($s1)
    ctx->pc = 0x133838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x13383c: 0x0  nop
    ctx->pc = 0x13383cu;
    // NOP
label_133840:
    // 0x133840: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x133840u;
    {
        const bool branch_taken_0x133840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x133840) {
            ctx->pc = 0x133804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_133804;
        }
    }
    ctx->pc = 0x133848u;
    // 0x133848: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13384c:
    // 0x13384c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x13384cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133850: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133854: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133858: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13385c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13385cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133860: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133864: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x133864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x133868: 0x3e00008  jr          $ra
    ctx->pc = 0x133868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133870u;
}
