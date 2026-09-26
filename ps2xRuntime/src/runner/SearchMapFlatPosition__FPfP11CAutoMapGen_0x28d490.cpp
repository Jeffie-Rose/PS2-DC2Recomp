#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchMapFlatPosition__FPfP11CAutoMapGen
// Address: 0x28d490 - 0x28d8a0
void SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490");
#endif

    switch (ctx->pc) {
        case 0x28d490u: goto label_28d490;
        case 0x28d494u: goto label_28d494;
        case 0x28d498u: goto label_28d498;
        case 0x28d49cu: goto label_28d49c;
        case 0x28d4a0u: goto label_28d4a0;
        case 0x28d4a4u: goto label_28d4a4;
        case 0x28d4a8u: goto label_28d4a8;
        case 0x28d4acu: goto label_28d4ac;
        case 0x28d4b0u: goto label_28d4b0;
        case 0x28d4b4u: goto label_28d4b4;
        case 0x28d4b8u: goto label_28d4b8;
        case 0x28d4bcu: goto label_28d4bc;
        case 0x28d4c0u: goto label_28d4c0;
        case 0x28d4c4u: goto label_28d4c4;
        case 0x28d4c8u: goto label_28d4c8;
        case 0x28d4ccu: goto label_28d4cc;
        case 0x28d4d0u: goto label_28d4d0;
        case 0x28d4d4u: goto label_28d4d4;
        case 0x28d4d8u: goto label_28d4d8;
        case 0x28d4dcu: goto label_28d4dc;
        case 0x28d4e0u: goto label_28d4e0;
        case 0x28d4e4u: goto label_28d4e4;
        case 0x28d4e8u: goto label_28d4e8;
        case 0x28d4ecu: goto label_28d4ec;
        case 0x28d4f0u: goto label_28d4f0;
        case 0x28d4f4u: goto label_28d4f4;
        case 0x28d4f8u: goto label_28d4f8;
        case 0x28d4fcu: goto label_28d4fc;
        case 0x28d500u: goto label_28d500;
        case 0x28d504u: goto label_28d504;
        case 0x28d508u: goto label_28d508;
        case 0x28d50cu: goto label_28d50c;
        case 0x28d510u: goto label_28d510;
        case 0x28d514u: goto label_28d514;
        case 0x28d518u: goto label_28d518;
        case 0x28d51cu: goto label_28d51c;
        case 0x28d520u: goto label_28d520;
        case 0x28d524u: goto label_28d524;
        case 0x28d528u: goto label_28d528;
        case 0x28d52cu: goto label_28d52c;
        case 0x28d530u: goto label_28d530;
        case 0x28d534u: goto label_28d534;
        case 0x28d538u: goto label_28d538;
        case 0x28d53cu: goto label_28d53c;
        case 0x28d540u: goto label_28d540;
        case 0x28d544u: goto label_28d544;
        case 0x28d548u: goto label_28d548;
        case 0x28d54cu: goto label_28d54c;
        case 0x28d550u: goto label_28d550;
        case 0x28d554u: goto label_28d554;
        case 0x28d558u: goto label_28d558;
        case 0x28d55cu: goto label_28d55c;
        case 0x28d560u: goto label_28d560;
        case 0x28d564u: goto label_28d564;
        case 0x28d568u: goto label_28d568;
        case 0x28d56cu: goto label_28d56c;
        case 0x28d570u: goto label_28d570;
        case 0x28d574u: goto label_28d574;
        case 0x28d578u: goto label_28d578;
        case 0x28d57cu: goto label_28d57c;
        case 0x28d580u: goto label_28d580;
        case 0x28d584u: goto label_28d584;
        case 0x28d588u: goto label_28d588;
        case 0x28d58cu: goto label_28d58c;
        case 0x28d590u: goto label_28d590;
        case 0x28d594u: goto label_28d594;
        case 0x28d598u: goto label_28d598;
        case 0x28d59cu: goto label_28d59c;
        case 0x28d5a0u: goto label_28d5a0;
        case 0x28d5a4u: goto label_28d5a4;
        case 0x28d5a8u: goto label_28d5a8;
        case 0x28d5acu: goto label_28d5ac;
        case 0x28d5b0u: goto label_28d5b0;
        case 0x28d5b4u: goto label_28d5b4;
        case 0x28d5b8u: goto label_28d5b8;
        case 0x28d5bcu: goto label_28d5bc;
        case 0x28d5c0u: goto label_28d5c0;
        case 0x28d5c4u: goto label_28d5c4;
        case 0x28d5c8u: goto label_28d5c8;
        case 0x28d5ccu: goto label_28d5cc;
        case 0x28d5d0u: goto label_28d5d0;
        case 0x28d5d4u: goto label_28d5d4;
        case 0x28d5d8u: goto label_28d5d8;
        case 0x28d5dcu: goto label_28d5dc;
        case 0x28d5e0u: goto label_28d5e0;
        case 0x28d5e4u: goto label_28d5e4;
        case 0x28d5e8u: goto label_28d5e8;
        case 0x28d5ecu: goto label_28d5ec;
        case 0x28d5f0u: goto label_28d5f0;
        case 0x28d5f4u: goto label_28d5f4;
        case 0x28d5f8u: goto label_28d5f8;
        case 0x28d5fcu: goto label_28d5fc;
        case 0x28d600u: goto label_28d600;
        case 0x28d604u: goto label_28d604;
        case 0x28d608u: goto label_28d608;
        case 0x28d60cu: goto label_28d60c;
        case 0x28d610u: goto label_28d610;
        case 0x28d614u: goto label_28d614;
        case 0x28d618u: goto label_28d618;
        case 0x28d61cu: goto label_28d61c;
        case 0x28d620u: goto label_28d620;
        case 0x28d624u: goto label_28d624;
        case 0x28d628u: goto label_28d628;
        case 0x28d62cu: goto label_28d62c;
        case 0x28d630u: goto label_28d630;
        case 0x28d634u: goto label_28d634;
        case 0x28d638u: goto label_28d638;
        case 0x28d63cu: goto label_28d63c;
        case 0x28d640u: goto label_28d640;
        case 0x28d644u: goto label_28d644;
        case 0x28d648u: goto label_28d648;
        case 0x28d64cu: goto label_28d64c;
        case 0x28d650u: goto label_28d650;
        case 0x28d654u: goto label_28d654;
        case 0x28d658u: goto label_28d658;
        case 0x28d65cu: goto label_28d65c;
        case 0x28d660u: goto label_28d660;
        case 0x28d664u: goto label_28d664;
        case 0x28d668u: goto label_28d668;
        case 0x28d66cu: goto label_28d66c;
        case 0x28d670u: goto label_28d670;
        case 0x28d674u: goto label_28d674;
        case 0x28d678u: goto label_28d678;
        case 0x28d67cu: goto label_28d67c;
        case 0x28d680u: goto label_28d680;
        case 0x28d684u: goto label_28d684;
        case 0x28d688u: goto label_28d688;
        case 0x28d68cu: goto label_28d68c;
        case 0x28d690u: goto label_28d690;
        case 0x28d694u: goto label_28d694;
        case 0x28d698u: goto label_28d698;
        case 0x28d69cu: goto label_28d69c;
        case 0x28d6a0u: goto label_28d6a0;
        case 0x28d6a4u: goto label_28d6a4;
        case 0x28d6a8u: goto label_28d6a8;
        case 0x28d6acu: goto label_28d6ac;
        case 0x28d6b0u: goto label_28d6b0;
        case 0x28d6b4u: goto label_28d6b4;
        case 0x28d6b8u: goto label_28d6b8;
        case 0x28d6bcu: goto label_28d6bc;
        case 0x28d6c0u: goto label_28d6c0;
        case 0x28d6c4u: goto label_28d6c4;
        case 0x28d6c8u: goto label_28d6c8;
        case 0x28d6ccu: goto label_28d6cc;
        case 0x28d6d0u: goto label_28d6d0;
        case 0x28d6d4u: goto label_28d6d4;
        case 0x28d6d8u: goto label_28d6d8;
        case 0x28d6dcu: goto label_28d6dc;
        case 0x28d6e0u: goto label_28d6e0;
        case 0x28d6e4u: goto label_28d6e4;
        case 0x28d6e8u: goto label_28d6e8;
        case 0x28d6ecu: goto label_28d6ec;
        case 0x28d6f0u: goto label_28d6f0;
        case 0x28d6f4u: goto label_28d6f4;
        case 0x28d6f8u: goto label_28d6f8;
        case 0x28d6fcu: goto label_28d6fc;
        case 0x28d700u: goto label_28d700;
        case 0x28d704u: goto label_28d704;
        case 0x28d708u: goto label_28d708;
        case 0x28d70cu: goto label_28d70c;
        case 0x28d710u: goto label_28d710;
        case 0x28d714u: goto label_28d714;
        case 0x28d718u: goto label_28d718;
        case 0x28d71cu: goto label_28d71c;
        case 0x28d720u: goto label_28d720;
        case 0x28d724u: goto label_28d724;
        case 0x28d728u: goto label_28d728;
        case 0x28d72cu: goto label_28d72c;
        case 0x28d730u: goto label_28d730;
        case 0x28d734u: goto label_28d734;
        case 0x28d738u: goto label_28d738;
        case 0x28d73cu: goto label_28d73c;
        case 0x28d740u: goto label_28d740;
        case 0x28d744u: goto label_28d744;
        case 0x28d748u: goto label_28d748;
        case 0x28d74cu: goto label_28d74c;
        case 0x28d750u: goto label_28d750;
        case 0x28d754u: goto label_28d754;
        case 0x28d758u: goto label_28d758;
        case 0x28d75cu: goto label_28d75c;
        case 0x28d760u: goto label_28d760;
        case 0x28d764u: goto label_28d764;
        case 0x28d768u: goto label_28d768;
        case 0x28d76cu: goto label_28d76c;
        case 0x28d770u: goto label_28d770;
        case 0x28d774u: goto label_28d774;
        case 0x28d778u: goto label_28d778;
        case 0x28d77cu: goto label_28d77c;
        case 0x28d780u: goto label_28d780;
        case 0x28d784u: goto label_28d784;
        case 0x28d788u: goto label_28d788;
        case 0x28d78cu: goto label_28d78c;
        case 0x28d790u: goto label_28d790;
        case 0x28d794u: goto label_28d794;
        case 0x28d798u: goto label_28d798;
        case 0x28d79cu: goto label_28d79c;
        case 0x28d7a0u: goto label_28d7a0;
        case 0x28d7a4u: goto label_28d7a4;
        case 0x28d7a8u: goto label_28d7a8;
        case 0x28d7acu: goto label_28d7ac;
        case 0x28d7b0u: goto label_28d7b0;
        case 0x28d7b4u: goto label_28d7b4;
        case 0x28d7b8u: goto label_28d7b8;
        case 0x28d7bcu: goto label_28d7bc;
        case 0x28d7c0u: goto label_28d7c0;
        case 0x28d7c4u: goto label_28d7c4;
        case 0x28d7c8u: goto label_28d7c8;
        case 0x28d7ccu: goto label_28d7cc;
        case 0x28d7d0u: goto label_28d7d0;
        case 0x28d7d4u: goto label_28d7d4;
        case 0x28d7d8u: goto label_28d7d8;
        case 0x28d7dcu: goto label_28d7dc;
        case 0x28d7e0u: goto label_28d7e0;
        case 0x28d7e4u: goto label_28d7e4;
        case 0x28d7e8u: goto label_28d7e8;
        case 0x28d7ecu: goto label_28d7ec;
        case 0x28d7f0u: goto label_28d7f0;
        case 0x28d7f4u: goto label_28d7f4;
        case 0x28d7f8u: goto label_28d7f8;
        case 0x28d7fcu: goto label_28d7fc;
        case 0x28d800u: goto label_28d800;
        case 0x28d804u: goto label_28d804;
        case 0x28d808u: goto label_28d808;
        case 0x28d80cu: goto label_28d80c;
        case 0x28d810u: goto label_28d810;
        case 0x28d814u: goto label_28d814;
        case 0x28d818u: goto label_28d818;
        case 0x28d81cu: goto label_28d81c;
        case 0x28d820u: goto label_28d820;
        case 0x28d824u: goto label_28d824;
        case 0x28d828u: goto label_28d828;
        case 0x28d82cu: goto label_28d82c;
        case 0x28d830u: goto label_28d830;
        case 0x28d834u: goto label_28d834;
        case 0x28d838u: goto label_28d838;
        case 0x28d83cu: goto label_28d83c;
        case 0x28d840u: goto label_28d840;
        case 0x28d844u: goto label_28d844;
        case 0x28d848u: goto label_28d848;
        case 0x28d84cu: goto label_28d84c;
        case 0x28d850u: goto label_28d850;
        case 0x28d854u: goto label_28d854;
        case 0x28d858u: goto label_28d858;
        case 0x28d85cu: goto label_28d85c;
        case 0x28d860u: goto label_28d860;
        case 0x28d864u: goto label_28d864;
        case 0x28d868u: goto label_28d868;
        case 0x28d86cu: goto label_28d86c;
        case 0x28d870u: goto label_28d870;
        case 0x28d874u: goto label_28d874;
        case 0x28d878u: goto label_28d878;
        case 0x28d87cu: goto label_28d87c;
        case 0x28d880u: goto label_28d880;
        case 0x28d884u: goto label_28d884;
        case 0x28d888u: goto label_28d888;
        case 0x28d88cu: goto label_28d88c;
        case 0x28d890u: goto label_28d890;
        case 0x28d894u: goto label_28d894;
        case 0x28d898u: goto label_28d898;
        case 0x28d89cu: goto label_28d89c;
        default: break;
    }

    ctx->pc = 0x28d490u;

label_28d490:
    // 0x28d490: 0x27bdd420  addiu       $sp, $sp, -0x2BE0
    ctx->pc = 0x28d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956064));
label_28d494:
    // 0x28d494: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x28d494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_28d498:
    // 0x28d498: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x28d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_28d49c:
    // 0x28d49c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x28d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_28d4a0:
    // 0x28d4a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x28d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_28d4a4:
    // 0x28d4a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_28d4a8:
    // 0x28d4a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28d4ac:
    // 0x28d4ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28d4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28d4b0:
    // 0x28d4b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28d4b4:
    // 0x28d4b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28d4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28d4b8:
    // 0x28d4b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28d4bc:
    // 0x28d4bc: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x28d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_28d4c0:
    // 0x28d4c0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28d4c4:
    // 0x28d4c4: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x28d4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
label_28d4c8:
    // 0x28d4c8: 0xc0a0f58  jal         func_283D60
label_28d4cc:
    if (ctx->pc == 0x28D4CCu) {
        ctx->pc = 0x28D4CCu;
            // 0x28d4cc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x28D4D0u;
        goto label_28d4d0;
    }
    ctx->pc = 0x28D4C8u;
    SET_GPR_U32(ctx, 31, 0x28D4D0u);
    ctx->pc = 0x28D4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4C8u;
            // 0x28d4cc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4D0u; }
        if (ctx->pc != 0x28D4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4D0u; }
        if (ctx->pc != 0x28D4D0u) { return; }
    }
    ctx->pc = 0x28D4D0u;
label_28d4d0:
    // 0x28d4d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28d4d4:
    if (ctx->pc == 0x28D4D4u) {
        ctx->pc = 0x28D4D4u;
            // 0x28d4d4: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x28D4D8u;
        goto label_28d4d8;
    }
    ctx->pc = 0x28D4D0u;
    {
        const bool branch_taken_0x28d4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4D0u;
            // 0x28d4d4: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4d0) {
            ctx->pc = 0x28D4E0u;
            goto label_28d4e0;
        }
    }
    ctx->pc = 0x28D4D8u;
label_28d4d8:
    // 0x28d4d8: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_28d4dc:
    if (ctx->pc == 0x28D4DCu) {
        ctx->pc = 0x28D4DCu;
            // 0x28d4dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D4E0u;
        goto label_28d4e0;
    }
    ctx->pc = 0x28D4D8u;
    {
        const bool branch_taken_0x28d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4D8u;
            // 0x28d4dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4d8) {
            ctx->pc = 0x28D870u;
            goto label_28d870;
        }
    }
    ctx->pc = 0x28D4E0u;
label_28d4e0:
    // 0x28d4e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d4e4:
    // 0x28d4e4: 0xc0572f4  jal         func_15CBD0
label_28d4e8:
    if (ctx->pc == 0x28D4E8u) {
        ctx->pc = 0x28D4E8u;
            // 0x28d4e8: 0x27a52bdc  addiu       $a1, $sp, 0x2BDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11228));
        ctx->pc = 0x28D4ECu;
        goto label_28d4ec;
    }
    ctx->pc = 0x28D4E4u;
    SET_GPR_U32(ctx, 31, 0x28D4ECu);
    ctx->pc = 0x28D4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4E4u;
            // 0x28d4e8: 0x27a52bdc  addiu       $a1, $sp, 0x2BDC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CBD0u;
    if (runtime->hasFunction(0x15CBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15CBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4ECu; }
        if (ctx->pc != 0x28D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlacPartsTable__4CMapFPi_0x15cbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D4ECu; }
        if (ctx->pc != 0x28D4ECu) { return; }
    }
    ctx->pc = 0x28D4ECu;
label_28d4ec:
    // 0x28d4ec: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x28d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_28d4f0:
    // 0x28d4f0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x28d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_28d4f4:
    // 0x28d4f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28d4f8:
    if (ctx->pc == 0x28D4F8u) {
        ctx->pc = 0x28D4F8u;
            // 0x28d4f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D4FCu;
        goto label_28d4fc;
    }
    ctx->pc = 0x28D4F4u;
    {
        const bool branch_taken_0x28d4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D4F4u;
            // 0x28d4f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4f4) {
            ctx->pc = 0x28D504u;
            goto label_28d504;
        }
    }
    ctx->pc = 0x28D4FCu;
label_28d4fc:
    // 0x28d4fc: 0x100000dc  b           . + 4 + (0xDC << 2)
label_28d500:
    if (ctx->pc == 0x28D500u) {
        ctx->pc = 0x28D504u;
        goto label_28d504;
    }
    ctx->pc = 0x28D4FCu;
    {
        const bool branch_taken_0x28d4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d4fc) {
            ctx->pc = 0x28D870u;
            goto label_28d870;
        }
    }
    ctx->pc = 0x28D504u;
label_28d504:
    // 0x28d504: 0x8fa22bdc  lw          $v0, 0x2BDC($sp)
    ctx->pc = 0x28d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11228)));
label_28d508:
    // 0x28d508: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_28d50c:
    if (ctx->pc == 0x28D50Cu) {
        ctx->pc = 0x28D50Cu;
            // 0x28d50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D510u;
        goto label_28d510;
    }
    ctx->pc = 0x28D508u;
    {
        const bool branch_taken_0x28d508 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28D50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D508u;
            // 0x28d50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d508) {
            ctx->pc = 0x28D518u;
            goto label_28d518;
        }
    }
    ctx->pc = 0x28D510u;
label_28d510:
    // 0x28d510: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_28d514:
    if (ctx->pc == 0x28D514u) {
        ctx->pc = 0x28D518u;
        goto label_28d518;
    }
    ctx->pc = 0x28D510u;
    {
        const bool branch_taken_0x28d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d510) {
            ctx->pc = 0x28D870u;
            goto label_28d870;
        }
    }
    ctx->pc = 0x28D518u;
label_28d518:
    // 0x28d518: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x28d518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_28d51c:
    // 0x28d51c: 0x10000005  b           . + 4 + (0x5 << 2)
label_28d520:
    if (ctx->pc == 0x28D520u) {
        ctx->pc = 0x28D520u;
            // 0x28d520: 0xafa02bdc  sw          $zero, 0x2BDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11228), GPR_U32(ctx, 0));
        ctx->pc = 0x28D524u;
        goto label_28d524;
    }
    ctx->pc = 0x28D51Cu;
    {
        const bool branch_taken_0x28d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D51Cu;
            // 0x28d520: 0xafa02bdc  sw          $zero, 0x2BDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 11228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d51c) {
            ctx->pc = 0x28D534u;
            goto label_28d534;
        }
    }
    ctx->pc = 0x28D524u;
label_28d524:
    // 0x28d524: 0x8fa22bdc  lw          $v0, 0x2BDC($sp)
    ctx->pc = 0x28d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11228)));
label_28d528:
    // 0x28d528: 0x24630310  addiu       $v1, $v1, 0x310
    ctx->pc = 0x28d528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 784));
label_28d52c:
    // 0x28d52c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28d530:
    // 0x28d530: 0xafa22bdc  sw          $v0, 0x2BDC($sp)
    ctx->pc = 0x28d530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 11228), GPR_U32(ctx, 2));
label_28d534:
    // 0x28d534: 0x0  nop
    ctx->pc = 0x28d534u;
    // NOP
label_28d538:
    // 0x28d538: 0x80620070  lb          $v0, 0x70($v1)
    ctx->pc = 0x28d538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
label_28d53c:
    // 0x28d53c: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x28d53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_28d540:
    // 0x28d540: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28d540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_28d544:
    // 0x28d544: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_28d548:
    if (ctx->pc == 0x28D548u) {
        ctx->pc = 0x28D548u;
            // 0x28d548: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->pc = 0x28D54Cu;
        goto label_28d54c;
    }
    ctx->pc = 0x28D544u;
    {
        const bool branch_taken_0x28d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D544u;
            // 0x28d548: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d544) {
            ctx->pc = 0x28D524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d524;
        }
    }
    ctx->pc = 0x28D54Cu;
label_28d54c:
    // 0x28d54c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x28d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_28d550:
    // 0x28d550: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28d554:
    // 0x28d554: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x28d554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_28d558:
    // 0x28d558: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x28d558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_28d55c:
    // 0x28d55c: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x28d55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_28d560:
    // 0x28d560: 0xafa2292c  sw          $v0, 0x292C($sp)
    ctx->pc = 0x28d560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10540), GPR_U32(ctx, 2));
label_28d564:
    // 0x28d564: 0xafa2293c  sw          $v0, 0x293C($sp)
    ctx->pc = 0x28d564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10556), GPR_U32(ctx, 2));
label_28d568:
    // 0x28d568: 0xc0724a4  jal         func_1C9290
label_28d56c:
    if (ctx->pc == 0x28D56Cu) {
        ctx->pc = 0x28D56Cu;
            // 0x28d56c: 0x8fa42bdc  lw          $a0, 0x2BDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11228)));
        ctx->pc = 0x28D570u;
        goto label_28d570;
    }
    ctx->pc = 0x28D568u;
    SET_GPR_U32(ctx, 31, 0x28D570u);
    ctx->pc = 0x28D56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D568u;
            // 0x28d56c: 0x8fa42bdc  lw          $a0, 0x2BDC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 11228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D570u; }
        if (ctx->pc != 0x28D570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D570u; }
        if (ctx->pc != 0x28D570u) { return; }
    }
    ctx->pc = 0x28D570u;
label_28d570:
    // 0x28d570: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28d570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28d574:
    // 0x28d574: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28d574u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28d578:
    // 0x28d578: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28d57c:
    // 0x28d57c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d580:
    // 0x28d580: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28d580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28d584:
    // 0x28d584: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x28d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_28d588:
    // 0x28d588: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x28d588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28d58c:
    // 0x28d58c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x28d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_28d590:
    // 0x28d590: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_28d594:
    if (ctx->pc == 0x28D594u) {
        ctx->pc = 0x28D594u;
            // 0x28d594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D598u;
        goto label_28d598;
    }
    ctx->pc = 0x28D590u;
    {
        const bool branch_taken_0x28d590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D590u;
            // 0x28d594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d590) {
            ctx->pc = 0x28D5E4u;
            goto label_28d5e4;
        }
    }
    ctx->pc = 0x28D598u;
label_28d598:
    // 0x28d598: 0x8c4601cc  lw          $a2, 0x1CC($v0)
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
label_28d59c:
    // 0x28d59c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28d59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d5a0:
    // 0x28d5a0: 0x844301b8  lh          $v1, 0x1B8($v0)
    ctx->pc = 0x28d5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_28d5a4:
    // 0x28d5a4: 0x844201ba  lh          $v0, 0x1BA($v0)
    ctx->pc = 0x28d5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 442)));
label_28d5a8:
    // 0x28d5a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_28d5ac:
    if (ctx->pc == 0x28D5ACu) {
        ctx->pc = 0x28D5ACu;
            // 0x28d5ac: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->pc = 0x28D5B0u;
        goto label_28d5b0;
    }
    ctx->pc = 0x28D5A8u;
    {
        const bool branch_taken_0x28d5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5A8u;
            // 0x28d5ac: 0x621818  mult        $v1, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5a8) {
            ctx->pc = 0x28D5D8u;
            goto label_28d5d8;
        }
    }
    ctx->pc = 0x28D5B0u;
label_28d5b0:
    // 0x28d5b0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x28d5b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_28d5b4:
    // 0x28d5b4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28d5b8:
    if (ctx->pc == 0x28D5B8u) {
        ctx->pc = 0x28D5BCu;
        goto label_28d5bc;
    }
    ctx->pc = 0x28D5B4u;
    {
        const bool branch_taken_0x28d5b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28d5b4) {
            ctx->pc = 0x28D5D0u;
            goto label_28d5d0;
        }
    }
    ctx->pc = 0x28D5BCu;
label_28d5bc:
    // 0x28d5bc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x28d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_28d5c0:
    // 0x28d5c0: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_28d5c4:
    if (ctx->pc == 0x28D5C4u) {
        ctx->pc = 0x28D5C8u;
        goto label_28d5c8;
    }
    ctx->pc = 0x28D5C0u;
    {
        const bool branch_taken_0x28d5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x28d5c0) {
            ctx->pc = 0x28D5D0u;
            goto label_28d5d0;
        }
    }
    ctx->pc = 0x28D5C8u;
label_28d5c8:
    // 0x28d5c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_28d5cc:
    if (ctx->pc == 0x28D5CCu) {
        ctx->pc = 0x28D5CCu;
            // 0x28d5cc: 0x84c50006  lh          $a1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->pc = 0x28D5D0u;
        goto label_28d5d0;
    }
    ctx->pc = 0x28D5C8u;
    {
        const bool branch_taken_0x28d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5C8u;
            // 0x28d5cc: 0x84c50006  lh          $a1, 0x6($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5c8) {
            ctx->pc = 0x28D5E4u;
            goto label_28d5e4;
        }
    }
    ctx->pc = 0x28D5D0u;
label_28d5d0:
    // 0x28d5d0: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x28d5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_28d5d4:
    // 0x28d5d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28d5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_28d5d8:
    // 0x28d5d8: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x28d5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28d5dc:
    // 0x28d5dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_28d5e0:
    if (ctx->pc == 0x28D5E0u) {
        ctx->pc = 0x28D5E4u;
        goto label_28d5e4;
    }
    ctx->pc = 0x28D5DCu;
    {
        const bool branch_taken_0x28d5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5dc) {
            ctx->pc = 0x28D5B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d5b0;
        }
    }
    ctx->pc = 0x28D5E4u;
label_28d5e4:
    // 0x28d5e4: 0x0  nop
    ctx->pc = 0x28d5e4u;
    // NOP
label_28d5e8:
    // 0x28d5e8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x28d5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_28d5ec:
    // 0x28d5ec: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_28d5f0:
    if (ctx->pc == 0x28D5F0u) {
        ctx->pc = 0x28D5F4u;
        goto label_28d5f4;
    }
    ctx->pc = 0x28D5ECu;
    {
        const bool branch_taken_0x28d5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d5ec) {
            ctx->pc = 0x28D568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d568;
        }
    }
    ctx->pc = 0x28D5F4u;
label_28d5f4:
    // 0x28d5f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28d5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28d5f8:
    // 0x28d5f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28d5fc:
    // 0x28d5fc: 0x320f809  jalr        $t9
label_28d600:
    if (ctx->pc == 0x28D600u) {
        ctx->pc = 0x28D600u;
            // 0x28d600: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x28D604u;
        goto label_28d604;
    }
    ctx->pc = 0x28D5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28D604u);
        ctx->pc = 0x28D600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5FCu;
            // 0x28d600: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28D604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28D604u; }
            if (ctx->pc != 0x28D604u) { return; }
        }
        }
    }
    ctx->pc = 0x28D604u;
label_28d604:
    // 0x28d604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d608:
    // 0x28d608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28d608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d60c:
    // 0x28d60c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x28d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_28d610:
    // 0x28d610: 0x3c034582  lui         $v1, 0x4582
    ctx->pc = 0x28d610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17794 << 16));
label_28d614:
    // 0x28d614: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x28d614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28d618:
    // 0x28d618: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d61c:
    // 0x28d61c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28d61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28d620:
    // 0x28d620: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
label_28d624:
    if (ctx->pc == 0x28D624u) {
        ctx->pc = 0x28D624u;
            // 0x28d624: 0xdd1021  addu        $v0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->pc = 0x28D628u;
        goto label_28d628;
    }
    ctx->pc = 0x28D620u;
    {
        const bool branch_taken_0x28d620 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x28D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D620u;
            // 0x28d624: 0xdd1021  addu        $v0, $a2, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d620) {
            ctx->pc = 0x28D644u;
            goto label_28d644;
        }
    }
    ctx->pc = 0x28D628u;
label_28d628:
    // 0x28d628: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x28d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28d62c:
    // 0x28d62c: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x28d62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28d630:
    // 0x28d630: 0x24422920  addiu       $v0, $v0, 0x2920
    ctx->pc = 0x28d630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10528));
label_28d634:
    // 0x28d634: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d638:
    // 0x28d638: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x28d638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_28d63c:
    // 0x28d63c: 0x10000009  b           . + 4 + (0x9 << 2)
label_28d640:
    if (ctx->pc == 0x28D640u) {
        ctx->pc = 0x28D640u;
            // 0x28d640: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->pc = 0x28D644u;
        goto label_28d644;
    }
    ctx->pc = 0x28D63Cu;
    {
        const bool branch_taken_0x28d63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D63Cu;
            // 0x28d640: 0xe4400010  swc1        $f0, 0x10($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d63c) {
            ctx->pc = 0x28D664u;
            goto label_28d664;
        }
    }
    ctx->pc = 0x28D644u;
label_28d644:
    // 0x28d644: 0x0  nop
    ctx->pc = 0x28d644u;
    // NOP
label_28d648:
    // 0x28d648: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x28d648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_28d64c:
    // 0x28d64c: 0xc44100f0  lwc1        $f1, 0xF0($v0)
    ctx->pc = 0x28d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28d650:
    // 0x28d650: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x28d650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_28d654:
    // 0x28d654: 0x24422920  addiu       $v0, $v0, 0x2920
    ctx->pc = 0x28d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10528));
label_28d658:
    // 0x28d658: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28d658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28d65c:
    // 0x28d65c: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x28d65cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_28d660:
    // 0x28d660: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x28d660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_28d664:
    // 0x28d664: 0x0  nop
    ctx->pc = 0x28d664u;
    // NOP
label_28d668:
    // 0x28d668: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28d668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28d66c:
    // 0x28d66c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x28d66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_28d670:
    // 0x28d670: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_28d674:
    if (ctx->pc == 0x28D674u) {
        ctx->pc = 0x28D674u;
            // 0x28d674: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x28D678u;
        goto label_28d678;
    }
    ctx->pc = 0x28D670u;
    {
        const bool branch_taken_0x28d670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D670u;
            // 0x28d674: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d670) {
            ctx->pc = 0x28D620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d620;
        }
    }
    ctx->pc = 0x28D678u;
label_28d678:
    // 0x28d678: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x28d678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_28d67c:
    // 0x28d67c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x28d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_28d680:
    // 0x28d680: 0x27a62920  addiu       $a2, $sp, 0x2920
    ctx->pc = 0x28d680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10528));
label_28d684:
    // 0x28d684: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28d684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28d688:
    // 0x28d688: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x28d688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_28d68c:
    // 0x28d68c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x28d68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_28d690:
    // 0x28d690: 0x320f809  jalr        $t9
label_28d694:
    if (ctx->pc == 0x28D694u) {
        ctx->pc = 0x28D694u;
            // 0x28d694: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x28D698u;
        goto label_28d698;
    }
    ctx->pc = 0x28D690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28D698u);
        ctx->pc = 0x28D694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D690u;
            // 0x28d694: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28D698u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28D698u; }
            if (ctx->pc != 0x28D698u) { return; }
        }
        }
    }
    ctx->pc = 0x28D698u;
label_28d698:
    // 0x28d698: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28d698u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d69c:
    // 0x28d69c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28d69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d6a0:
    // 0x28d6a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28d6a4:
    // 0x28d6a4: 0xc041c5c  jal         func_107170
label_28d6a8:
    if (ctx->pc == 0x28D6A8u) {
        ctx->pc = 0x28D6A8u;
            // 0x28d6a8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x28D6ACu;
        goto label_28d6ac;
    }
    ctx->pc = 0x28D6A4u;
    SET_GPR_U32(ctx, 31, 0x28D6ACu);
    ctx->pc = 0x28D6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D6A4u;
            // 0x28d6a8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6ACu; }
        if (ctx->pc != 0x28D6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6ACu; }
        if (ctx->pc != 0x28D6ACu) { return; }
    }
    ctx->pc = 0x28D6ACu;
label_28d6ac:
    // 0x28d6ac: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_28d6b0:
    // 0x28d6b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28d6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28d6b4:
    // 0x28d6b4: 0xc0724bc  jal         func_1C92F0
label_28d6b8:
    if (ctx->pc == 0x28D6B8u) {
        ctx->pc = 0x28D6BCu;
        goto label_28d6bc;
    }
    ctx->pc = 0x28D6B4u;
    SET_GPR_U32(ctx, 31, 0x28D6BCu);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6BCu; }
        if (ctx->pc != 0x28D6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6BCu; }
        if (ctx->pc != 0x28D6BCu) { return; }
    }
    ctx->pc = 0x28D6BCu;
label_28d6bc:
    // 0x28d6bc: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x28d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_28d6c0:
    // 0x28d6c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28d6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28d6c4:
    // 0x28d6c4: 0xc7a10100  lwc1        $f1, 0x100($sp)
    ctx->pc = 0x28d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28d6c8:
    // 0x28d6c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28d6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28d6cc:
    // 0x28d6cc: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x28d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_28d6d0:
    // 0x28d6d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28d6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28d6d4:
    // 0x28d6d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28d6d8:
    // 0x28d6d8: 0xc0724bc  jal         func_1C92F0
label_28d6dc:
    if (ctx->pc == 0x28D6DCu) {
        ctx->pc = 0x28D6DCu;
            // 0x28d6dc: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->pc = 0x28D6E0u;
        goto label_28d6e0;
    }
    ctx->pc = 0x28D6D8u;
    SET_GPR_U32(ctx, 31, 0x28D6E0u);
    ctx->pc = 0x28D6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D6D8u;
            // 0x28d6dc: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6E0u; }
        if (ctx->pc != 0x28D6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D6E0u; }
        if (ctx->pc != 0x28D6E0u) { return; }
    }
    ctx->pc = 0x28D6E0u;
label_28d6e0:
    // 0x28d6e0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x28d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_28d6e4:
    // 0x28d6e4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x28d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_28d6e8:
    // 0x28d6e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28d6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28d6ec:
    // 0x28d6ec: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x28d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28d6f0:
    // 0x28d6f0: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x28d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28d6f4:
    // 0x28d6f4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28d6f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28d6f8:
    // 0x28d6f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28d6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28d6fc:
    // 0x28d6fc: 0xc041c5c  jal         func_107170
label_28d700:
    if (ctx->pc == 0x28D700u) {
        ctx->pc = 0x28D700u;
            // 0x28d700: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->pc = 0x28D704u;
        goto label_28d704;
    }
    ctx->pc = 0x28D6FCu;
    SET_GPR_U32(ctx, 31, 0x28D704u);
    ctx->pc = 0x28D700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D6FCu;
            // 0x28d700: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D704u; }
        if (ctx->pc != 0x28D704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D704u; }
        if (ctx->pc != 0x28D704u) { return; }
    }
    ctx->pc = 0x28D704u;
label_28d704:
    // 0x28d704: 0x27be0104  addiu       $fp, $sp, 0x104
    ctx->pc = 0x28d704u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_28d708:
    // 0x28d708: 0x3c024583  lui         $v0, 0x4583
    ctx->pc = 0x28d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17795 << 16));
label_28d70c:
    // 0x28d70c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x28d70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d710:
    // 0x28d710: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x28d710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_28d714:
    // 0x28d714: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28d718:
    // 0x28d718: 0x27b70114  addiu       $s7, $sp, 0x114
    ctx->pc = 0x28d718u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_28d71c:
    // 0x28d71c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x28d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_28d720:
    // 0x28d720: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28d720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28d724:
    // 0x28d724: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28d728:
    // 0x28d728: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x28d728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_28d72c:
    // 0x28d72c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x28d72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_28d730:
    // 0x28d730: 0x27a92940  addiu       $t1, $sp, 0x2940
    ctx->pc = 0x28d730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
label_28d734:
    // 0x28d734: 0x27aa29c0  addiu       $t2, $sp, 0x29C0
    ctx->pc = 0x28d734u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 10688));
label_28d738:
    // 0x28d738: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28d738u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d73c:
    // 0x28d73c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28d740:
    // 0x28d740: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x28d740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_28d744:
    // 0x28d744: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x28d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d748:
    // 0x28d748: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28d74c:
    // 0x28d74c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x28d74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_28d750:
    // 0x28d750: 0xc0538ec  jal         func_14E3B0
label_28d754:
    if (ctx->pc == 0x28D754u) {
        ctx->pc = 0x28D754u;
            // 0x28d754: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->pc = 0x28D758u;
        goto label_28d758;
    }
    ctx->pc = 0x28D750u;
    SET_GPR_U32(ctx, 31, 0x28D758u);
    ctx->pc = 0x28D754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D750u;
            // 0x28d754: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D758u; }
        if (ctx->pc != 0x28D758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D758u; }
        if (ctx->pc != 0x28D758u) { return; }
    }
    ctx->pc = 0x28D758u;
label_28d758:
    // 0x28d758: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28d758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28d75c:
    // 0x28d75c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x28d75cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28d760:
    // 0x28d760: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
label_28d764:
    if (ctx->pc == 0x28D764u) {
        ctx->pc = 0x28D764u;
            // 0x28d764: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D768u;
        goto label_28d768;
    }
    ctx->pc = 0x28D760u;
    {
        const bool branch_taken_0x28d760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D760u;
            // 0x28d764: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d760) {
            ctx->pc = 0x28D838u;
            goto label_28d838;
        }
    }
    ctx->pc = 0x28D768u;
label_28d768:
    // 0x28d768: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28d768u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d76c:
    // 0x28d76c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28d76cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d770:
    // 0x28d770: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x28d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_28d774:
    // 0x28d774: 0x8c442940  lw          $a0, 0x2940($v0)
    ctx->pc = 0x28d774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10560)));
label_28d778:
    // 0x28d778: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28d778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28d77c:
    // 0x28d77c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28d780:
    // 0x28d780: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28d784:
    // 0x28d784: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28d784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_28d788:
    // 0x28d788: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x28d788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_28d78c:
    // 0x28d78c: 0x84630164  lh          $v1, 0x164($v1)
    ctx->pc = 0x28d78cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 356)));
label_28d790:
    // 0x28d790: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_28d794:
    if (ctx->pc == 0x28D794u) {
        ctx->pc = 0x28D794u;
            // 0x28d794: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x28D798u;
        goto label_28d798;
    }
    ctx->pc = 0x28D790u;
    {
        const bool branch_taken_0x28d790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D790u;
            // 0x28d794: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d790) {
            ctx->pc = 0x28D838u;
            goto label_28d838;
        }
    }
    ctx->pc = 0x28D798u;
label_28d798:
    // 0x28d798: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
label_28d79c:
    if (ctx->pc == 0x28D79Cu) {
        ctx->pc = 0x28D79Cu;
            // 0x28d79c: 0x29d1021  addu        $v0, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->pc = 0x28D7A0u;
        goto label_28d7a0;
    }
    ctx->pc = 0x28D798u;
    {
        const bool branch_taken_0x28d798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28D79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D798u;
            // 0x28d79c: 0x29d1021  addu        $v0, $s4, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d798) {
            ctx->pc = 0x28D824u;
            goto label_28d824;
        }
    }
    ctx->pc = 0x28D7A0u;
label_28d7a0:
    // 0x28d7a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x28d7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28d7a4:
    // 0x28d7a4: 0x245529c0  addiu       $s5, $v0, 0x29C0
    ctx->pc = 0x28d7a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 10688));
label_28d7a8:
    // 0x28d7a8: 0xc041c5c  jal         func_107170
label_28d7ac:
    if (ctx->pc == 0x28D7ACu) {
        ctx->pc = 0x28D7ACu;
            // 0x28d7ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D7B0u;
        goto label_28d7b0;
    }
    ctx->pc = 0x28D7A8u;
    SET_GPR_U32(ctx, 31, 0x28D7B0u);
    ctx->pc = 0x28D7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7A8u;
            // 0x28d7ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7B0u; }
        if (ctx->pc != 0x28D7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7B0u; }
        if (ctx->pc != 0x28D7B0u) { return; }
    }
    ctx->pc = 0x28D7B0u;
label_28d7b0:
    // 0x28d7b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28d7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28d7b4:
    // 0x28d7b4: 0xc041c5c  jal         func_107170
label_28d7b8:
    if (ctx->pc == 0x28D7B8u) {
        ctx->pc = 0x28D7B8u;
            // 0x28d7b8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x28D7BCu;
        goto label_28d7bc;
    }
    ctx->pc = 0x28D7B4u;
    SET_GPR_U32(ctx, 31, 0x28D7BCu);
    ctx->pc = 0x28D7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7B4u;
            // 0x28d7b8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7BCu; }
        if (ctx->pc != 0x28D7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7BCu; }
        if (ctx->pc != 0x28D7BCu) { return; }
    }
    ctx->pc = 0x28D7BCu;
label_28d7bc:
    // 0x28d7bc: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x28d7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d7c0:
    // 0x28d7c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_28d7c4:
    // 0x28d7c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28d7c8:
    // 0x28d7c8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x28d7c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d7cc:
    // 0x28d7cc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x28d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_28d7d0:
    // 0x28d7d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28d7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28d7d4:
    // 0x28d7d4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28d7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_28d7d8:
    // 0x28d7d8: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x28d7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_28d7dc:
    // 0x28d7dc: 0x27a82bc0  addiu       $t0, $sp, 0x2BC0
    ctx->pc = 0x28d7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 11200));
label_28d7e0:
    // 0x28d7e0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x28d7e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28d7e4:
    // 0x28d7e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28d7e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_28d7e8:
    // 0x28d7e8: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x28d7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
label_28d7ec:
    // 0x28d7ec: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x28d7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28d7f0:
    // 0x28d7f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x28d7f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_28d7f4:
    // 0x28d7f4: 0xc053794  jal         func_14DE50
label_28d7f8:
    if (ctx->pc == 0x28D7F8u) {
        ctx->pc = 0x28D7F8u;
            // 0x28d7f8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->pc = 0x28D7FCu;
        goto label_28d7fc;
    }
    ctx->pc = 0x28D7F4u;
    SET_GPR_U32(ctx, 31, 0x28D7FCu);
    ctx->pc = 0x28D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D7F4u;
            // 0x28d7f8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7FCu; }
        if (ctx->pc != 0x28D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D7FCu; }
        if (ctx->pc != 0x28D7FCu) { return; }
    }
    ctx->pc = 0x28D7FCu;
label_28d7fc:
    // 0x28d7fc: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_28d800:
    if (ctx->pc == 0x28D800u) {
        ctx->pc = 0x28D804u;
        goto label_28d804;
    }
    ctx->pc = 0x28D7FCu;
    {
        const bool branch_taken_0x28d7fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28d7fc) {
            ctx->pc = 0x28D824u;
            goto label_28d824;
        }
    }
    ctx->pc = 0x28D804u;
label_28d804:
    // 0x28d804: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x28d804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28d808:
    // 0x28d808: 0xc041c5c  jal         func_107170
label_28d80c:
    if (ctx->pc == 0x28D80Cu) {
        ctx->pc = 0x28D80Cu;
            // 0x28d80c: 0x27a52bc0  addiu       $a1, $sp, 0x2BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11200));
        ctx->pc = 0x28D810u;
        goto label_28d810;
    }
    ctx->pc = 0x28D808u;
    SET_GPR_U32(ctx, 31, 0x28D810u);
    ctx->pc = 0x28D80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D808u;
            // 0x28d80c: 0x27a52bc0  addiu       $a1, $sp, 0x2BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D810u; }
        if (ctx->pc != 0x28D810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D810u; }
        if (ctx->pc != 0x28D810u) { return; }
    }
    ctx->pc = 0x28D810u;
label_28d810:
    // 0x28d810: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x28d810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_28d814:
    // 0x28d814: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x28d814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_28d818:
    // 0x28d818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28d81c:
    // 0x28d81c: 0x10000014  b           . + 4 + (0x14 << 2)
label_28d820:
    if (ctx->pc == 0x28D820u) {
        ctx->pc = 0x28D820u;
            // 0x28d820: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->pc = 0x28D824u;
        goto label_28d824;
    }
    ctx->pc = 0x28D81Cu;
    {
        const bool branch_taken_0x28d81c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D81Cu;
            // 0x28d820: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d81c) {
            ctx->pc = 0x28D870u;
            goto label_28d870;
        }
    }
    ctx->pc = 0x28D824u;
label_28d824:
    // 0x28d824: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28d824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28d828:
    // 0x28d828: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_28d82c:
    // 0x28d82c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x28d82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_28d830:
    // 0x28d830: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_28d834:
    if (ctx->pc == 0x28D834u) {
        ctx->pc = 0x28D834u;
            // 0x28d834: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x28D838u;
        goto label_28d838;
    }
    ctx->pc = 0x28D830u;
    {
        const bool branch_taken_0x28d830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D830u;
            // 0x28d834: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d830) {
            ctx->pc = 0x28D770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d770;
        }
    }
    ctx->pc = 0x28D838u;
label_28d838:
    // 0x28d838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28d838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28d83c:
    // 0x28d83c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x28d83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_28d840:
    // 0x28d840: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_28d844:
    if (ctx->pc == 0x28D844u) {
        ctx->pc = 0x28D848u;
        goto label_28d848;
    }
    ctx->pc = 0x28D840u;
    {
        const bool branch_taken_0x28d840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28d840) {
            ctx->pc = 0x28D6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d6a0;
        }
    }
    ctx->pc = 0x28D848u;
label_28d848:
    // 0x28d848: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28d84c:
    // 0x28d84c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_28d850:
    if (ctx->pc == 0x28D850u) {
        ctx->pc = 0x28D850u;
            // 0x28d850: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x28D854u;
        goto label_28d854;
    }
    ctx->pc = 0x28D84Cu;
    {
        const bool branch_taken_0x28d84c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28D850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D84Cu;
            // 0x28d850: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d84c) {
            ctx->pc = 0x28D864u;
            goto label_28d864;
        }
    }
    ctx->pc = 0x28D854u;
label_28d854:
    // 0x28d854: 0xc04a0d2  jal         func_128348
label_28d858:
    if (ctx->pc == 0x28D858u) {
        ctx->pc = 0x28D858u;
            // 0x28d858: 0x2484d708  addiu       $a0, $a0, -0x28F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956808));
        ctx->pc = 0x28D85Cu;
        goto label_28d85c;
    }
    ctx->pc = 0x28D854u;
    SET_GPR_U32(ctx, 31, 0x28D85Cu);
    ctx->pc = 0x28D858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D854u;
            // 0x28d858: 0x2484d708  addiu       $a0, $a0, -0x28F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D85Cu; }
        if (ctx->pc != 0x28D85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D85Cu; }
        if (ctx->pc != 0x28D85Cu) { return; }
    }
    ctx->pc = 0x28D85Cu;
label_28d85c:
    // 0x28d85c: 0x10000004  b           . + 4 + (0x4 << 2)
label_28d860:
    if (ctx->pc == 0x28D860u) {
        ctx->pc = 0x28D860u;
            // 0x28d860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28D864u;
        goto label_28d864;
    }
    ctx->pc = 0x28D85Cu;
    {
        const bool branch_taken_0x28d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D85Cu;
            // 0x28d860: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d85c) {
            ctx->pc = 0x28D870u;
            goto label_28d870;
        }
    }
    ctx->pc = 0x28D864u;
label_28d864:
    // 0x28d864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28d868:
    // 0x28d868: 0x1000ff3f  b           . + 4 + (-0xC1 << 2)
label_28d86c:
    if (ctx->pc == 0x28D86Cu) {
        ctx->pc = 0x28D86Cu;
            // 0x28d86c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x28D870u;
        goto label_28d870;
    }
    ctx->pc = 0x28D868u;
    {
        const bool branch_taken_0x28d868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D868u;
            // 0x28d86c: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d868) {
            ctx->pc = 0x28D568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28d568;
        }
    }
    ctx->pc = 0x28D870u;
label_28d870:
    // 0x28d870: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28d870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28d874:
    // 0x28d874: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x28d874u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28d878:
    // 0x28d878: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x28d878u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28d87c:
    // 0x28d87c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x28d87cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28d880:
    // 0x28d880: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28d880u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28d884:
    // 0x28d884: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28d884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28d888:
    // 0x28d888: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28d888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28d88c:
    // 0x28d88c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28d88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28d890:
    // 0x28d890: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d894:
    // 0x28d894: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28d894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28d898:
    // 0x28d898: 0x3e00008  jr          $ra
label_28d89c:
    if (ctx->pc == 0x28D89Cu) {
        ctx->pc = 0x28D89Cu;
            // 0x28d89c: 0x27bd2be0  addiu       $sp, $sp, 0x2BE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 11232));
        ctx->pc = 0x28D8A0u;
        goto label_fallthrough_0x28d898;
    }
    ctx->pc = 0x28D898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D898u;
            // 0x28d89c: 0x27bd2be0  addiu       $sp, $sp, 0x2BE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 11232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28d898:
    ctx->pc = 0x28D8A0u;
}
