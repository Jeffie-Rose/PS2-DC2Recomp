#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CollisionCheck__11CMonsterManFP14CActiveMonsterPfPfPf
// Address: 0x1dd4f0 - 0x1dd8e8
void CollisionCheck__11CMonsterManFP14CActiveMonsterPfPfPf_0x1dd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CollisionCheck__11CMonsterManFP14CActiveMonsterPfPfPf_0x1dd4f0");
#endif

    switch (ctx->pc) {
        case 0x1dd4f0u: goto label_1dd4f0;
        case 0x1dd4f4u: goto label_1dd4f4;
        case 0x1dd4f8u: goto label_1dd4f8;
        case 0x1dd4fcu: goto label_1dd4fc;
        case 0x1dd500u: goto label_1dd500;
        case 0x1dd504u: goto label_1dd504;
        case 0x1dd508u: goto label_1dd508;
        case 0x1dd50cu: goto label_1dd50c;
        case 0x1dd510u: goto label_1dd510;
        case 0x1dd514u: goto label_1dd514;
        case 0x1dd518u: goto label_1dd518;
        case 0x1dd51cu: goto label_1dd51c;
        case 0x1dd520u: goto label_1dd520;
        case 0x1dd524u: goto label_1dd524;
        case 0x1dd528u: goto label_1dd528;
        case 0x1dd52cu: goto label_1dd52c;
        case 0x1dd530u: goto label_1dd530;
        case 0x1dd534u: goto label_1dd534;
        case 0x1dd538u: goto label_1dd538;
        case 0x1dd53cu: goto label_1dd53c;
        case 0x1dd540u: goto label_1dd540;
        case 0x1dd544u: goto label_1dd544;
        case 0x1dd548u: goto label_1dd548;
        case 0x1dd54cu: goto label_1dd54c;
        case 0x1dd550u: goto label_1dd550;
        case 0x1dd554u: goto label_1dd554;
        case 0x1dd558u: goto label_1dd558;
        case 0x1dd55cu: goto label_1dd55c;
        case 0x1dd560u: goto label_1dd560;
        case 0x1dd564u: goto label_1dd564;
        case 0x1dd568u: goto label_1dd568;
        case 0x1dd56cu: goto label_1dd56c;
        case 0x1dd570u: goto label_1dd570;
        case 0x1dd574u: goto label_1dd574;
        case 0x1dd578u: goto label_1dd578;
        case 0x1dd57cu: goto label_1dd57c;
        case 0x1dd580u: goto label_1dd580;
        case 0x1dd584u: goto label_1dd584;
        case 0x1dd588u: goto label_1dd588;
        case 0x1dd58cu: goto label_1dd58c;
        case 0x1dd590u: goto label_1dd590;
        case 0x1dd594u: goto label_1dd594;
        case 0x1dd598u: goto label_1dd598;
        case 0x1dd59cu: goto label_1dd59c;
        case 0x1dd5a0u: goto label_1dd5a0;
        case 0x1dd5a4u: goto label_1dd5a4;
        case 0x1dd5a8u: goto label_1dd5a8;
        case 0x1dd5acu: goto label_1dd5ac;
        case 0x1dd5b0u: goto label_1dd5b0;
        case 0x1dd5b4u: goto label_1dd5b4;
        case 0x1dd5b8u: goto label_1dd5b8;
        case 0x1dd5bcu: goto label_1dd5bc;
        case 0x1dd5c0u: goto label_1dd5c0;
        case 0x1dd5c4u: goto label_1dd5c4;
        case 0x1dd5c8u: goto label_1dd5c8;
        case 0x1dd5ccu: goto label_1dd5cc;
        case 0x1dd5d0u: goto label_1dd5d0;
        case 0x1dd5d4u: goto label_1dd5d4;
        case 0x1dd5d8u: goto label_1dd5d8;
        case 0x1dd5dcu: goto label_1dd5dc;
        case 0x1dd5e0u: goto label_1dd5e0;
        case 0x1dd5e4u: goto label_1dd5e4;
        case 0x1dd5e8u: goto label_1dd5e8;
        case 0x1dd5ecu: goto label_1dd5ec;
        case 0x1dd5f0u: goto label_1dd5f0;
        case 0x1dd5f4u: goto label_1dd5f4;
        case 0x1dd5f8u: goto label_1dd5f8;
        case 0x1dd5fcu: goto label_1dd5fc;
        case 0x1dd600u: goto label_1dd600;
        case 0x1dd604u: goto label_1dd604;
        case 0x1dd608u: goto label_1dd608;
        case 0x1dd60cu: goto label_1dd60c;
        case 0x1dd610u: goto label_1dd610;
        case 0x1dd614u: goto label_1dd614;
        case 0x1dd618u: goto label_1dd618;
        case 0x1dd61cu: goto label_1dd61c;
        case 0x1dd620u: goto label_1dd620;
        case 0x1dd624u: goto label_1dd624;
        case 0x1dd628u: goto label_1dd628;
        case 0x1dd62cu: goto label_1dd62c;
        case 0x1dd630u: goto label_1dd630;
        case 0x1dd634u: goto label_1dd634;
        case 0x1dd638u: goto label_1dd638;
        case 0x1dd63cu: goto label_1dd63c;
        case 0x1dd640u: goto label_1dd640;
        case 0x1dd644u: goto label_1dd644;
        case 0x1dd648u: goto label_1dd648;
        case 0x1dd64cu: goto label_1dd64c;
        case 0x1dd650u: goto label_1dd650;
        case 0x1dd654u: goto label_1dd654;
        case 0x1dd658u: goto label_1dd658;
        case 0x1dd65cu: goto label_1dd65c;
        case 0x1dd660u: goto label_1dd660;
        case 0x1dd664u: goto label_1dd664;
        case 0x1dd668u: goto label_1dd668;
        case 0x1dd66cu: goto label_1dd66c;
        case 0x1dd670u: goto label_1dd670;
        case 0x1dd674u: goto label_1dd674;
        case 0x1dd678u: goto label_1dd678;
        case 0x1dd67cu: goto label_1dd67c;
        case 0x1dd680u: goto label_1dd680;
        case 0x1dd684u: goto label_1dd684;
        case 0x1dd688u: goto label_1dd688;
        case 0x1dd68cu: goto label_1dd68c;
        case 0x1dd690u: goto label_1dd690;
        case 0x1dd694u: goto label_1dd694;
        case 0x1dd698u: goto label_1dd698;
        case 0x1dd69cu: goto label_1dd69c;
        case 0x1dd6a0u: goto label_1dd6a0;
        case 0x1dd6a4u: goto label_1dd6a4;
        case 0x1dd6a8u: goto label_1dd6a8;
        case 0x1dd6acu: goto label_1dd6ac;
        case 0x1dd6b0u: goto label_1dd6b0;
        case 0x1dd6b4u: goto label_1dd6b4;
        case 0x1dd6b8u: goto label_1dd6b8;
        case 0x1dd6bcu: goto label_1dd6bc;
        case 0x1dd6c0u: goto label_1dd6c0;
        case 0x1dd6c4u: goto label_1dd6c4;
        case 0x1dd6c8u: goto label_1dd6c8;
        case 0x1dd6ccu: goto label_1dd6cc;
        case 0x1dd6d0u: goto label_1dd6d0;
        case 0x1dd6d4u: goto label_1dd6d4;
        case 0x1dd6d8u: goto label_1dd6d8;
        case 0x1dd6dcu: goto label_1dd6dc;
        case 0x1dd6e0u: goto label_1dd6e0;
        case 0x1dd6e4u: goto label_1dd6e4;
        case 0x1dd6e8u: goto label_1dd6e8;
        case 0x1dd6ecu: goto label_1dd6ec;
        case 0x1dd6f0u: goto label_1dd6f0;
        case 0x1dd6f4u: goto label_1dd6f4;
        case 0x1dd6f8u: goto label_1dd6f8;
        case 0x1dd6fcu: goto label_1dd6fc;
        case 0x1dd700u: goto label_1dd700;
        case 0x1dd704u: goto label_1dd704;
        case 0x1dd708u: goto label_1dd708;
        case 0x1dd70cu: goto label_1dd70c;
        case 0x1dd710u: goto label_1dd710;
        case 0x1dd714u: goto label_1dd714;
        case 0x1dd718u: goto label_1dd718;
        case 0x1dd71cu: goto label_1dd71c;
        case 0x1dd720u: goto label_1dd720;
        case 0x1dd724u: goto label_1dd724;
        case 0x1dd728u: goto label_1dd728;
        case 0x1dd72cu: goto label_1dd72c;
        case 0x1dd730u: goto label_1dd730;
        case 0x1dd734u: goto label_1dd734;
        case 0x1dd738u: goto label_1dd738;
        case 0x1dd73cu: goto label_1dd73c;
        case 0x1dd740u: goto label_1dd740;
        case 0x1dd744u: goto label_1dd744;
        case 0x1dd748u: goto label_1dd748;
        case 0x1dd74cu: goto label_1dd74c;
        case 0x1dd750u: goto label_1dd750;
        case 0x1dd754u: goto label_1dd754;
        case 0x1dd758u: goto label_1dd758;
        case 0x1dd75cu: goto label_1dd75c;
        case 0x1dd760u: goto label_1dd760;
        case 0x1dd764u: goto label_1dd764;
        case 0x1dd768u: goto label_1dd768;
        case 0x1dd76cu: goto label_1dd76c;
        case 0x1dd770u: goto label_1dd770;
        case 0x1dd774u: goto label_1dd774;
        case 0x1dd778u: goto label_1dd778;
        case 0x1dd77cu: goto label_1dd77c;
        case 0x1dd780u: goto label_1dd780;
        case 0x1dd784u: goto label_1dd784;
        case 0x1dd788u: goto label_1dd788;
        case 0x1dd78cu: goto label_1dd78c;
        case 0x1dd790u: goto label_1dd790;
        case 0x1dd794u: goto label_1dd794;
        case 0x1dd798u: goto label_1dd798;
        case 0x1dd79cu: goto label_1dd79c;
        case 0x1dd7a0u: goto label_1dd7a0;
        case 0x1dd7a4u: goto label_1dd7a4;
        case 0x1dd7a8u: goto label_1dd7a8;
        case 0x1dd7acu: goto label_1dd7ac;
        case 0x1dd7b0u: goto label_1dd7b0;
        case 0x1dd7b4u: goto label_1dd7b4;
        case 0x1dd7b8u: goto label_1dd7b8;
        case 0x1dd7bcu: goto label_1dd7bc;
        case 0x1dd7c0u: goto label_1dd7c0;
        case 0x1dd7c4u: goto label_1dd7c4;
        case 0x1dd7c8u: goto label_1dd7c8;
        case 0x1dd7ccu: goto label_1dd7cc;
        case 0x1dd7d0u: goto label_1dd7d0;
        case 0x1dd7d4u: goto label_1dd7d4;
        case 0x1dd7d8u: goto label_1dd7d8;
        case 0x1dd7dcu: goto label_1dd7dc;
        case 0x1dd7e0u: goto label_1dd7e0;
        case 0x1dd7e4u: goto label_1dd7e4;
        case 0x1dd7e8u: goto label_1dd7e8;
        case 0x1dd7ecu: goto label_1dd7ec;
        case 0x1dd7f0u: goto label_1dd7f0;
        case 0x1dd7f4u: goto label_1dd7f4;
        case 0x1dd7f8u: goto label_1dd7f8;
        case 0x1dd7fcu: goto label_1dd7fc;
        case 0x1dd800u: goto label_1dd800;
        case 0x1dd804u: goto label_1dd804;
        case 0x1dd808u: goto label_1dd808;
        case 0x1dd80cu: goto label_1dd80c;
        case 0x1dd810u: goto label_1dd810;
        case 0x1dd814u: goto label_1dd814;
        case 0x1dd818u: goto label_1dd818;
        case 0x1dd81cu: goto label_1dd81c;
        case 0x1dd820u: goto label_1dd820;
        case 0x1dd824u: goto label_1dd824;
        case 0x1dd828u: goto label_1dd828;
        case 0x1dd82cu: goto label_1dd82c;
        case 0x1dd830u: goto label_1dd830;
        case 0x1dd834u: goto label_1dd834;
        case 0x1dd838u: goto label_1dd838;
        case 0x1dd83cu: goto label_1dd83c;
        case 0x1dd840u: goto label_1dd840;
        case 0x1dd844u: goto label_1dd844;
        case 0x1dd848u: goto label_1dd848;
        case 0x1dd84cu: goto label_1dd84c;
        case 0x1dd850u: goto label_1dd850;
        case 0x1dd854u: goto label_1dd854;
        case 0x1dd858u: goto label_1dd858;
        case 0x1dd85cu: goto label_1dd85c;
        case 0x1dd860u: goto label_1dd860;
        case 0x1dd864u: goto label_1dd864;
        case 0x1dd868u: goto label_1dd868;
        case 0x1dd86cu: goto label_1dd86c;
        case 0x1dd870u: goto label_1dd870;
        case 0x1dd874u: goto label_1dd874;
        case 0x1dd878u: goto label_1dd878;
        case 0x1dd87cu: goto label_1dd87c;
        case 0x1dd880u: goto label_1dd880;
        case 0x1dd884u: goto label_1dd884;
        case 0x1dd888u: goto label_1dd888;
        case 0x1dd88cu: goto label_1dd88c;
        case 0x1dd890u: goto label_1dd890;
        case 0x1dd894u: goto label_1dd894;
        case 0x1dd898u: goto label_1dd898;
        case 0x1dd89cu: goto label_1dd89c;
        case 0x1dd8a0u: goto label_1dd8a0;
        case 0x1dd8a4u: goto label_1dd8a4;
        case 0x1dd8a8u: goto label_1dd8a8;
        case 0x1dd8acu: goto label_1dd8ac;
        case 0x1dd8b0u: goto label_1dd8b0;
        case 0x1dd8b4u: goto label_1dd8b4;
        case 0x1dd8b8u: goto label_1dd8b8;
        case 0x1dd8bcu: goto label_1dd8bc;
        case 0x1dd8c0u: goto label_1dd8c0;
        case 0x1dd8c4u: goto label_1dd8c4;
        case 0x1dd8c8u: goto label_1dd8c8;
        case 0x1dd8ccu: goto label_1dd8cc;
        case 0x1dd8d0u: goto label_1dd8d0;
        case 0x1dd8d4u: goto label_1dd8d4;
        case 0x1dd8d8u: goto label_1dd8d8;
        case 0x1dd8dcu: goto label_1dd8dc;
        case 0x1dd8e0u: goto label_1dd8e0;
        case 0x1dd8e4u: goto label_1dd8e4;
        default: break;
    }

    ctx->pc = 0x1dd4f0u;

label_1dd4f0:
    // 0x1dd4f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1dd4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1dd4f4:
    // 0x1dd4f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1dd4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1dd4f8:
    // 0x1dd4f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1dd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1dd4fc:
    // 0x1dd4fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1dd4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1dd500:
    // 0x1dd500: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1dd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1dd504:
    // 0x1dd504: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dd504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1dd508:
    // 0x1dd508: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1dd508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dd50c:
    // 0x1dd50c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1dd50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1dd510:
    // 0x1dd510: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1dd510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd514:
    // 0x1dd514: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dd514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1dd518:
    // 0x1dd518: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1dd518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dd51c:
    // 0x1dd51c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dd51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1dd520:
    // 0x1dd520: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1dd520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1dd524:
    // 0x1dd524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dd524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1dd528:
    // 0x1dd528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd52c:
    // 0x1dd52c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dd52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1dd530:
    // 0x1dd530: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1dd530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1dd534:
    // 0x1dd534: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1dd534u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1dd538:
    // 0x1dd538: 0xc041c5c  jal         func_107170
label_1dd53c:
    if (ctx->pc == 0x1DD53Cu) {
        ctx->pc = 0x1DD53Cu;
            // 0x1dd53c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1DD540u;
        goto label_1dd540;
    }
    ctx->pc = 0x1DD538u;
    SET_GPR_U32(ctx, 31, 0x1DD540u);
    ctx->pc = 0x1DD53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD538u;
            // 0x1dd53c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD540u; }
        if (ctx->pc != 0x1DD540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD540u; }
        if (ctx->pc != 0x1DD540u) { return; }
    }
    ctx->pc = 0x1DD540u;
label_1dd540:
    // 0x1dd540: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x1dd540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd544:
    // 0x1dd544: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1dd544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1dd548:
    // 0x1dd548: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1dd548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd54c:
    // 0x1dd54c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1dd54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1dd550:
    // 0x1dd550: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dd550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1dd554:
    // 0x1dd554: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd558:
    // 0x1dd558: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1dd558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1dd55c:
    // 0x1dd55c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x1dd55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd560:
    // 0x1dd560: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1dd560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd564:
    // 0x1dd564: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd568:
    // 0x1dd568: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dd568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1dd56c:
    // 0x1dd56c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x1dd56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd570:
    // 0x1dd570: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1dd570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd574:
    // 0x1dd574: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd574u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd578:
    // 0x1dd578: 0xc041c5c  jal         func_107170
label_1dd57c:
    if (ctx->pc == 0x1DD57Cu) {
        ctx->pc = 0x1DD57Cu;
            // 0x1dd57c: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x1DD580u;
        goto label_1dd580;
    }
    ctx->pc = 0x1DD578u;
    SET_GPR_U32(ctx, 31, 0x1DD580u);
    ctx->pc = 0x1DD57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD578u;
            // 0x1dd57c: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD580u; }
        if (ctx->pc != 0x1DD580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD580u; }
        if (ctx->pc != 0x1DD580u) { return; }
    }
    ctx->pc = 0x1DD580u;
label_1dd580:
    // 0x1dd580: 0x27a300c4  addiu       $v1, $sp, 0xC4
    ctx->pc = 0x1dd580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1dd584:
    // 0x1dd584: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dd584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1dd588:
    // 0x1dd588: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dd588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1dd58c:
    // 0x1dd58c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dd58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd590:
    // 0x1dd590: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1dd590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dd594:
    // 0x1dd594: 0x86830730  lh          $v1, 0x730($s4)
    ctx->pc = 0x1dd594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1840)));
label_1dd598:
    // 0x1dd598: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1dd598u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1dd59c:
    // 0x1dd59c: 0x106400c4  beq         $v1, $a0, . + 4 + (0xC4 << 2)
label_1dd5a0:
    if (ctx->pc == 0x1DD5A0u) {
        ctx->pc = 0x1DD5A0u;
            // 0x1dd5a0: 0x8c37c4d0  lw          $s7, -0x3B30($at) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
        ctx->pc = 0x1DD5A4u;
        goto label_1dd5a4;
    }
    ctx->pc = 0x1DD59Cu;
    {
        const bool branch_taken_0x1dd59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DD5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD59Cu;
            // 0x1dd5a0: 0x8c37c4d0  lw          $s7, -0x3B30($at) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd59c) {
            ctx->pc = 0x1DD8B0u;
            goto label_1dd8b0;
        }
    }
    ctx->pc = 0x1DD5A4u;
label_1dd5a4:
    // 0x1dd5a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dd5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5a8:
    // 0x1dd5a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dd5a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5ac:
    // 0x1dd5ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1dd5b0:
    if (ctx->pc == 0x1DD5B0u) {
        ctx->pc = 0x1DD5B4u;
        goto label_1dd5b4;
    }
    ctx->pc = 0x1DD5ACu;
    {
        const bool branch_taken_0x1dd5ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5ac) {
            ctx->pc = 0x1DD5C4u;
            goto label_1dd5c4;
        }
    }
    ctx->pc = 0x1DD5B4u;
label_1dd5b4:
    // 0x1dd5b4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1dd5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dd5b8:
    // 0x1dd5b8: 0xc0a0ed8  jal         func_283B60
label_1dd5bc:
    if (ctx->pc == 0x1DD5BCu) {
        ctx->pc = 0x1DD5BCu;
            // 0x1dd5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5C0u;
        goto label_1dd5c0;
    }
    ctx->pc = 0x1DD5B8u;
    SET_GPR_U32(ctx, 31, 0x1DD5C0u);
    ctx->pc = 0x1DD5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5B8u;
            // 0x1dd5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5C0u; }
        if (ctx->pc != 0x1DD5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD5C0u; }
        if (ctx->pc != 0x1DD5C0u) { return; }
    }
    ctx->pc = 0x1DD5C0u;
label_1dd5c0:
    // 0x1dd5c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1dd5c4:
    // 0x1dd5c4: 0x0  nop
    ctx->pc = 0x1dd5c4u;
    // NOP
label_1dd5c8:
    // 0x1dd5c8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dd5cc:
    if (ctx->pc == 0x1DD5CCu) {
        ctx->pc = 0x1DD5CCu;
            // 0x1dd5cc: 0x2b21821  addu        $v1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->pc = 0x1DD5D0u;
        goto label_1dd5d0;
    }
    ctx->pc = 0x1DD5C8u;
    {
        const bool branch_taken_0x1dd5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD5C8u;
            // 0x1dd5cc: 0x2b21821  addu        $v1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5c8) {
            ctx->pc = 0x1DD5D8u;
            goto label_1dd5d8;
        }
    }
    ctx->pc = 0x1DD5D0u;
label_1dd5d0:
    // 0x1dd5d0: 0x8c710480  lw          $s1, 0x480($v1)
    ctx->pc = 0x1dd5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1152)));
label_1dd5d4:
    // 0x1dd5d4: 0x0  nop
    ctx->pc = 0x1dd5d4u;
    // NOP
label_1dd5d8:
    // 0x1dd5d8: 0x122000b0  beqz        $s1, . + 4 + (0xB0 << 2)
label_1dd5dc:
    if (ctx->pc == 0x1DD5DCu) {
        ctx->pc = 0x1DD5E0u;
        goto label_1dd5e0;
    }
    ctx->pc = 0x1DD5D8u;
    {
        const bool branch_taken_0x1dd5d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5d8) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD5E0u;
label_1dd5e0:
    // 0x1dd5e0: 0x123400ae  beq         $s1, $s4, . + 4 + (0xAE << 2)
label_1dd5e4:
    if (ctx->pc == 0x1DD5E4u) {
        ctx->pc = 0x1DD5E8u;
        goto label_1dd5e8;
    }
    ctx->pc = 0x1DD5E0u;
    {
        const bool branch_taken_0x1dd5e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x1dd5e0) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD5E8u;
label_1dd5e8:
    // 0x1dd5e8: 0x8623068a  lh          $v1, 0x68A($s1)
    ctx->pc = 0x1dd5e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1674)));
label_1dd5ec:
    // 0x1dd5ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1dd5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd5f0:
    // 0x1dd5f0: 0x146400aa  bne         $v1, $a0, . + 4 + (0xAA << 2)
label_1dd5f4:
    if (ctx->pc == 0x1DD5F4u) {
        ctx->pc = 0x1DD5F8u;
        goto label_1dd5f8;
    }
    ctx->pc = 0x1DD5F0u;
    {
        const bool branch_taken_0x1dd5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1dd5f0) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD5F8u;
label_1dd5f8:
    // 0x1dd5f8: 0x86830730  lh          $v1, 0x730($s4)
    ctx->pc = 0x1dd5f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1840)));
label_1dd5fc:
    // 0x1dd5fc: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1dd600:
    if (ctx->pc == 0x1DD600u) {
        ctx->pc = 0x1DD604u;
        goto label_1dd604;
    }
    ctx->pc = 0x1DD5FCu;
    {
        const bool branch_taken_0x1dd5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1dd5fc) {
            ctx->pc = 0x1DD60Cu;
            goto label_1dd60c;
        }
    }
    ctx->pc = 0x1DD604u;
label_1dd604:
    // 0x1dd604: 0x120000a5  beqz        $s0, . + 4 + (0xA5 << 2)
label_1dd608:
    if (ctx->pc == 0x1DD608u) {
        ctx->pc = 0x1DD60Cu;
        goto label_1dd60c;
    }
    ctx->pc = 0x1DD604u;
    {
        const bool branch_taken_0x1dd604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd604) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD60Cu;
label_1dd60c:
    // 0x1dd60c: 0x0  nop
    ctx->pc = 0x1dd60cu;
    // NOP
label_1dd610:
    // 0x1dd610: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1dd610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dd614:
    // 0x1dd614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dd618:
    // 0x1dd618: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dd618u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dd61c:
    // 0x1dd61c: 0x320f809  jalr        $t9
label_1dd620:
    if (ctx->pc == 0x1DD620u) {
        ctx->pc = 0x1DD620u;
            // 0x1dd620: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1DD624u;
        goto label_1dd624;
    }
    ctx->pc = 0x1DD61Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD624u);
        ctx->pc = 0x1DD620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD61Cu;
            // 0x1dd620: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DD624u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DD624u; }
            if (ctx->pc != 0x1DD624u) { return; }
        }
        }
    }
    ctx->pc = 0x1DD624u;
label_1dd624:
    // 0x1dd624: 0x86840730  lh          $a0, 0x730($s4)
    ctx->pc = 0x1dd624u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1840)));
label_1dd628:
    // 0x1dd628: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd62c:
    // 0x1dd62c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1dd62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1dd630:
    // 0x1dd630: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd634:
    // 0x1dd634: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1dd638:
    if (ctx->pc == 0x1DD638u) {
        ctx->pc = 0x1DD63Cu;
        goto label_1dd63c;
    }
    ctx->pc = 0x1DD634u;
    {
        const bool branch_taken_0x1dd634 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd634) {
            ctx->pc = 0x1DD658u;
            goto label_1dd658;
        }
    }
    ctx->pc = 0x1DD63Cu;
label_1dd63c:
    // 0x1dd63c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1dd640:
    if (ctx->pc == 0x1DD640u) {
        ctx->pc = 0x1DD640u;
            // 0x1dd640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD644u;
        goto label_1dd644;
    }
    ctx->pc = 0x1DD63Cu;
    {
        const bool branch_taken_0x1dd63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD63Cu;
            // 0x1dd640: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd63c) {
            ctx->pc = 0x1DD658u;
            goto label_1dd658;
        }
    }
    ctx->pc = 0x1DD644u;
label_1dd644:
    // 0x1dd644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dd644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd648:
    // 0x1dd648: 0xc05d3d4  jal         func_174F50
label_1dd64c:
    if (ctx->pc == 0x1DD64Cu) {
        ctx->pc = 0x1DD64Cu;
            // 0x1dd64c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1DD650u;
        goto label_1dd650;
    }
    ctx->pc = 0x1DD648u;
    SET_GPR_U32(ctx, 31, 0x1DD650u);
    ctx->pc = 0x1DD64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD648u;
            // 0x1dd64c: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD650u; }
        if (ctx->pc != 0x1DD650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD650u; }
        if (ctx->pc != 0x1DD650u) { return; }
    }
    ctx->pc = 0x1DD650u;
label_1dd650:
    // 0x1dd650: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1dd650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1dd654:
    // 0x1dd654: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1dd654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1dd658:
    // 0x1dd658: 0x27a300b4  addiu       $v1, $sp, 0xB4
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1dd65c:
    // 0x1dd65c: 0xc6800110  lwc1        $f0, 0x110($s4)
    ctx->pc = 0x1dd65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd660:
    // 0x1dd660: 0x27be00d4  addiu       $fp, $sp, 0xD4
    ctx->pc = 0x1dd660u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_1dd664:
    // 0x1dd664: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1dd664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1dd668:
    // 0x1dd668: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x1dd668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd66c:
    // 0x1dd66c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1dd66cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1dd670:
    // 0x1dd670: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1dd670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1dd674:
    // 0x1dd674: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dd674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd678:
    // 0x1dd678: 0x0  nop
    ctx->pc = 0x1dd678u;
    // NOP
label_1dd67c:
    // 0x1dd67c: 0x45010087  bc1t        . + 4 + (0x87 << 2)
label_1dd680:
    if (ctx->pc == 0x1DD680u) {
        ctx->pc = 0x1DD684u;
        goto label_1dd684;
    }
    ctx->pc = 0x1DD67Cu;
    {
        const bool branch_taken_0x1dd67c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd67c) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD684u;
label_1dd684:
    // 0x1dd684: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x1dd684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd688:
    // 0x1dd688: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1dd688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1dd68c:
    // 0x1dd68c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd68cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd690:
    // 0x1dd690: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1dd690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd694:
    // 0x1dd694: 0x0  nop
    ctx->pc = 0x1dd694u;
    // NOP
label_1dd698:
    // 0x1dd698: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_1dd69c:
    if (ctx->pc == 0x1DD69Cu) {
        ctx->pc = 0x1DD6A0u;
        goto label_1dd6a0;
    }
    ctx->pc = 0x1DD698u;
    {
        const bool branch_taken_0x1dd698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd698) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD6A0u;
label_1dd6a0:
    // 0x1dd6a0: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x1dd6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_1dd6a4:
    // 0x1dd6a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1dd6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1dd6a8:
    // 0x1dd6a8: 0xc680010c  lwc1        $f0, 0x10C($s4)
    ctx->pc = 0x1dd6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd6ac:
    // 0x1dd6ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1dd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1dd6b0:
    // 0x1dd6b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dd6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dd6b4:
    // 0x1dd6b4: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1dd6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1dd6b8:
    // 0x1dd6b8: 0xc621010c  lwc1        $f1, 0x10C($s1)
    ctx->pc = 0x1dd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd6bc:
    // 0x1dd6bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1dd6bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1dd6c0:
    // 0x1dd6c0: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x1dd6c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1dd6c4:
    // 0x1dd6c4: 0xc04c018  jal         func_130060
label_1dd6c8:
    if (ctx->pc == 0x1DD6C8u) {
        ctx->pc = 0x1DD6C8u;
            // 0x1dd6c8: 0x4603051c  madd.s      $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
        ctx->pc = 0x1DD6CCu;
        goto label_1dd6cc;
    }
    ctx->pc = 0x1DD6C4u;
    SET_GPR_U32(ctx, 31, 0x1DD6CCu);
    ctx->pc = 0x1DD6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6C4u;
            // 0x1dd6c8: 0x4603051c  madd.s      $f20, $f0, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6CCu; }
        if (ctx->pc != 0x1DD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD6CCu; }
        if (ctx->pc != 0x1DD6CCu) { return; }
    }
    ctx->pc = 0x1DD6CCu;
label_1dd6cc:
    // 0x1dd6cc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1dd6ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1dd6d0:
    // 0x1dd6d0: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1dd6d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dd6d4:
    // 0x1dd6d4: 0x0  nop
    ctx->pc = 0x1dd6d4u;
    // NOP
label_1dd6d8:
    // 0x1dd6d8: 0x45000070  bc1f        . + 4 + (0x70 << 2)
label_1dd6dc:
    if (ctx->pc == 0x1DD6DCu) {
        ctx->pc = 0x1DD6E0u;
        goto label_1dd6e0;
    }
    ctx->pc = 0x1DD6D8u;
    {
        const bool branch_taken_0x1dd6d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dd6d8) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD6E0u;
label_1dd6e0:
    // 0x1dd6e0: 0x86840730  lh          $a0, 0x730($s4)
    ctx->pc = 0x1dd6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1840)));
label_1dd6e4:
    // 0x1dd6e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd6e8:
    // 0x1dd6e8: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
label_1dd6ec:
    if (ctx->pc == 0x1DD6ECu) {
        ctx->pc = 0x1DD6F0u;
        goto label_1dd6f0;
    }
    ctx->pc = 0x1DD6E8u;
    {
        const bool branch_taken_0x1dd6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd6e8) {
            ctx->pc = 0x1DD7A8u;
            goto label_1dd7a8;
        }
    }
    ctx->pc = 0x1DD6F0u;
label_1dd6f0:
    // 0x1dd6f0: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_1dd6f4:
    if (ctx->pc == 0x1DD6F4u) {
        ctx->pc = 0x1DD6F4u;
            // 0x1dd6f4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1DD6F8u;
        goto label_1dd6f8;
    }
    ctx->pc = 0x1DD6F0u;
    {
        const bool branch_taken_0x1dd6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6F0u;
            // 0x1dd6f4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6f0) {
            ctx->pc = 0x1DD7A8u;
            goto label_1dd7a8;
        }
    }
    ctx->pc = 0x1DD6F8u;
label_1dd6f8:
    // 0x1dd6f8: 0xc04a0d2  jal         func_128348
label_1dd6fc:
    if (ctx->pc == 0x1DD6FCu) {
        ctx->pc = 0x1DD6FCu;
            // 0x1dd6fc: 0x24847f68  addiu       $a0, $a0, 0x7F68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32616));
        ctx->pc = 0x1DD700u;
        goto label_1dd700;
    }
    ctx->pc = 0x1DD6F8u;
    SET_GPR_U32(ctx, 31, 0x1DD700u);
    ctx->pc = 0x1DD6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD6F8u;
            // 0x1dd6fc: 0x24847f68  addiu       $a0, $a0, 0x7F68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD700u; }
        if (ctx->pc != 0x1DD700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD700u; }
        if (ctx->pc != 0x1DD700u) { return; }
    }
    ctx->pc = 0x1DD700u;
label_1dd700:
    // 0x1dd700: 0x24020578  addiu       $v0, $zero, 0x578
    ctx->pc = 0x1dd700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
label_1dd704:
    // 0x1dd704: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1dd704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1dd708:
    // 0x1dd708: 0xa6221158  sh          $v0, 0x1158($s1)
    ctx->pc = 0x1dd708u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1dd70c:
    // 0x1dd70c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd710:
    // 0x1dd710: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1dd710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
label_1dd714:
    // 0x1dd714: 0xa623133a  sh          $v1, 0x133A($s1)
    ctx->pc = 0x1dd714u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4922), (uint16_t)GPR_U32(ctx, 3));
label_1dd718:
    // 0x1dd718: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1dd718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1dd71c:
    // 0x1dd71c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd720:
    // 0x1dd720: 0xc041e96  jal         func_107A58
label_1dd724:
    if (ctx->pc == 0x1DD724u) {
        ctx->pc = 0x1DD724u;
            // 0x1dd724: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD728u;
        goto label_1dd728;
    }
    ctx->pc = 0x1DD720u;
    SET_GPR_U32(ctx, 31, 0x1DD728u);
    ctx->pc = 0x1DD724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD720u;
            // 0x1dd724: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD728u; }
        if (ctx->pc != 0x1DD728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD728u; }
        if (ctx->pc != 0x1DD728u) { return; }
    }
    ctx->pc = 0x1DD728u;
label_1dd728:
    // 0x1dd728: 0x26240f40  addiu       $a0, $s1, 0xF40
    ctx->pc = 0x1dd728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
label_1dd72c:
    // 0x1dd72c: 0xc041c5c  jal         func_107170
label_1dd730:
    if (ctx->pc == 0x1DD730u) {
        ctx->pc = 0x1DD730u;
            // 0x1dd730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD734u;
        goto label_1dd734;
    }
    ctx->pc = 0x1DD72Cu;
    SET_GPR_U32(ctx, 31, 0x1DD734u);
    ctx->pc = 0x1DD730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD72Cu;
            // 0x1dd730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD734u; }
        if (ctx->pc != 0x1DD734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD734u; }
        if (ctx->pc != 0x1DD734u) { return; }
    }
    ctx->pc = 0x1DD734u;
label_1dd734:
    // 0x1dd734: 0x26240f40  addiu       $a0, $s1, 0xF40
    ctx->pc = 0x1dd734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
label_1dd738:
    // 0x1dd738: 0xae200f44  sw          $zero, 0xF44($s1)
    ctx->pc = 0x1dd738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3908), GPR_U32(ctx, 0));
label_1dd73c:
    // 0x1dd73c: 0xc041be0  jal         func_106F80
label_1dd740:
    if (ctx->pc == 0x1DD740u) {
        ctx->pc = 0x1DD740u;
            // 0x1dd740: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD744u;
        goto label_1dd744;
    }
    ctx->pc = 0x1DD73Cu;
    SET_GPR_U32(ctx, 31, 0x1DD744u);
    ctx->pc = 0x1DD740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD73Cu;
            // 0x1dd740: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD744u; }
        if (ctx->pc != 0x1DD744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD744u; }
        if (ctx->pc != 0x1DD744u) { return; }
    }
    ctx->pc = 0x1DD744u;
label_1dd744:
    // 0x1dd744: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1dd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1dd748:
    // 0x1dd748: 0x26240f40  addiu       $a0, $s1, 0xF40
    ctx->pc = 0x1dd748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3904));
label_1dd74c:
    // 0x1dd74c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd750:
    // 0x1dd750: 0xc041e96  jal         func_107A58
label_1dd754:
    if (ctx->pc == 0x1DD754u) {
        ctx->pc = 0x1DD754u;
            // 0x1dd754: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD758u;
        goto label_1dd758;
    }
    ctx->pc = 0x1DD750u;
    SET_GPR_U32(ctx, 31, 0x1DD758u);
    ctx->pc = 0x1DD754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD750u;
            // 0x1dd754: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD758u; }
        if (ctx->pc != 0x1DD758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD758u; }
        if (ctx->pc != 0x1DD758u) { return; }
    }
    ctx->pc = 0x1DD758u;
label_1dd758:
    // 0x1dd758: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1dd758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1dd75c:
    // 0x1dd75c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd760:
    // 0x1dd760: 0xae220f54  sw          $v0, 0xF54($s1)
    ctx->pc = 0x1dd760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3924), GPR_U32(ctx, 2));
label_1dd764:
    // 0x1dd764: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1dd764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1dd768:
    // 0x1dd768: 0xae230f50  sw          $v1, 0xF50($s1)
    ctx->pc = 0x1dd768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3920), GPR_U32(ctx, 3));
label_1dd76c:
    // 0x1dd76c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dd770:
    // 0x1dd770: 0xae200f58  sw          $zero, 0xF58($s1)
    ctx->pc = 0x1dd770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3928), GPR_U32(ctx, 0));
label_1dd774:
    // 0x1dd774: 0xae220f5c  sw          $v0, 0xF5C($s1)
    ctx->pc = 0x1dd774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3932), GPR_U32(ctx, 2));
label_1dd778:
    // 0x1dd778: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1dd778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1dd77c:
    // 0x1dd77c: 0xc077680  jal         func_1DDA00
label_1dd780:
    if (ctx->pc == 0x1DD780u) {
        ctx->pc = 0x1DD780u;
            // 0x1dd780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD784u;
        goto label_1dd784;
    }
    ctx->pc = 0x1DD77Cu;
    SET_GPR_U32(ctx, 31, 0x1DD784u);
    ctx->pc = 0x1DD780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD77Cu;
            // 0x1dd780: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDA00u;
    if (runtime->hasFunction(0x1DDA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DDA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD784u; }
        if (ctx->pc != 0x1DD784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitEffectSet__FP6CScenePfi_0x1dda00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD784u; }
        if (ctx->pc != 0x1DD784u) { return; }
    }
    ctx->pc = 0x1DD784u;
label_1dd784:
    // 0x1dd784: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1dd784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1dd788:
    // 0x1dd788: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1dd788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1dd78c:
    // 0x1dd78c: 0xc063818  jal         func_18E060
label_1dd790:
    if (ctx->pc == 0x1DD790u) {
        ctx->pc = 0x1DD790u;
            // 0x1dd790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DD794u;
        goto label_1dd794;
    }
    ctx->pc = 0x1DD78Cu;
    SET_GPR_U32(ctx, 31, 0x1DD794u);
    ctx->pc = 0x1DD790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD78Cu;
            // 0x1dd790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD794u; }
        if (ctx->pc != 0x1DD794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD794u; }
        if (ctx->pc != 0x1DD794u) { return; }
    }
    ctx->pc = 0x1DD794u;
label_1dd794:
    // 0x1dd794: 0x24040578  addiu       $a0, $zero, 0x578
    ctx->pc = 0x1dd794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
label_1dd798:
    // 0x1dd798: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1dd798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1dd79c:
    // 0x1dd79c: 0xa6841158  sh          $a0, 0x1158($s4)
    ctx->pc = 0x1dd79cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4440), (uint16_t)GPR_U32(ctx, 4));
label_1dd7a0:
    // 0x1dd7a0: 0xa683133a  sh          $v1, 0x133A($s4)
    ctx->pc = 0x1dd7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4922), (uint16_t)GPR_U32(ctx, 3));
label_1dd7a4:
    // 0x1dd7a4: 0xa6800730  sh          $zero, 0x730($s4)
    ctx->pc = 0x1dd7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1840), (uint16_t)GPR_U32(ctx, 0));
label_1dd7a8:
    // 0x1dd7a8: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_1dd7ac:
    if (ctx->pc == 0x1DD7ACu) {
        ctx->pc = 0x1DD7B0u;
        goto label_1dd7b0;
    }
    ctx->pc = 0x1DD7A8u;
    {
        const bool branch_taken_0x1dd7a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7a8) {
            ctx->pc = 0x1DD884u;
            goto label_1dd884;
        }
    }
    ctx->pc = 0x1DD7B0u;
label_1dd7b0:
    // 0x1dd7b0: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1dd7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd7b4:
    // 0x1dd7b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1dd7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1dd7b8:
    // 0x1dd7b8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1dd7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd7bc:
    // 0x1dd7bc: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1dd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1dd7c0:
    // 0x1dd7c0: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1dd7c0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
label_1dd7c4:
    // 0x1dd7c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd7c8:
    // 0x1dd7c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dd7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd7cc:
    // 0x1dd7cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd7d0:
    // 0x1dd7d0: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dd7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1dd7d4:
    // 0x1dd7d4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1dd7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd7d8:
    // 0x1dd7d8: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1dd7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd7dc:
    // 0x1dd7dc: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1dd7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1dd7e0:
    // 0x1dd7e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd7e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd7e4:
    // 0x1dd7e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dd7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1dd7e8:
    // 0x1dd7e8: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1dd7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd7ec:
    // 0x1dd7ec: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1dd7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1dd7f0:
    // 0x1dd7f0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1dd7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd7f4:
    // 0x1dd7f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1dd7f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1dd7f8:
    // 0x1dd7f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dd7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1dd7fc:
    // 0x1dd7fc: 0xc041be0  jal         func_106F80
label_1dd800:
    if (ctx->pc == 0x1DD800u) {
        ctx->pc = 0x1DD800u;
            // 0x1dd800: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->pc = 0x1DD804u;
        goto label_1dd804;
    }
    ctx->pc = 0x1DD7FCu;
    SET_GPR_U32(ctx, 31, 0x1DD804u);
    ctx->pc = 0x1DD800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD7FCu;
            // 0x1dd800: 0xafa300ec  sw          $v1, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD804u; }
        if (ctx->pc != 0x1DD804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD804u; }
        if (ctx->pc != 0x1DD804u) { return; }
    }
    ctx->pc = 0x1DD804u;
label_1dd804:
    // 0x1dd804: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1dd804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd808:
    // 0x1dd808: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1dd808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1dd80c:
    // 0x1dd80c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1dd80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1dd810:
    // 0x1dd810: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd814:
    // 0x1dd814: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1dd814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd818:
    // 0x1dd818: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dd818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd81c:
    // 0x1dd81c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1dd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1dd820:
    // 0x1dd820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dd820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dd824:
    // 0x1dd824: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1dd824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1dd828:
    // 0x1dd828: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1dd828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1dd82c:
    // 0x1dd82c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1dd82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_1dd830:
    // 0x1dd830: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd834:
    // 0x1dd834: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1dd834u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1dd838:
    // 0x1dd838: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1dd838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1dd83c:
    // 0x1dd83c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dd83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd840:
    // 0x1dd840: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1dd840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd844:
    // 0x1dd844: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1dd844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1dd848:
    // 0x1dd848: 0x27a200e8  addiu       $v0, $sp, 0xE8
    ctx->pc = 0x1dd848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1dd84c:
    // 0x1dd84c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd84cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd850:
    // 0x1dd850: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1dd850u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1dd854:
    // 0x1dd854: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1dd854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_1dd858:
    // 0x1dd858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dd858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dd85c:
    // 0x1dd85c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x1dd85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1dd860:
    // 0x1dd860: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1dd860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1dd864:
    // 0x1dd864: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1dd864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1dd868:
    // 0x1dd868: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1dd868u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1dd86c:
    // 0x1dd86c: 0x0  nop
    ctx->pc = 0x1dd86cu;
    // NOP
label_1dd870:
    // 0x1dd870: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1dd870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1dd874:
    // 0x1dd874: 0xc041c4a  jal         func_107128
label_1dd878:
    if (ctx->pc == 0x1DD878u) {
        ctx->pc = 0x1DD878u;
            // 0x1dd878: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x1DD87Cu;
        goto label_1dd87c;
    }
    ctx->pc = 0x1DD874u;
    SET_GPR_U32(ctx, 31, 0x1DD87Cu);
    ctx->pc = 0x1DD878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD874u;
            // 0x1dd878: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD87Cu; }
        if (ctx->pc != 0x1DD87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD87Cu; }
        if (ctx->pc != 0x1DD87Cu) { return; }
    }
    ctx->pc = 0x1DD87Cu;
label_1dd87c:
    // 0x1dd87c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1dd880:
    if (ctx->pc == 0x1DD880u) {
        ctx->pc = 0x1DD884u;
        goto label_1dd884;
    }
    ctx->pc = 0x1DD87Cu;
    {
        const bool branch_taken_0x1dd87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd87c) {
            ctx->pc = 0x1DD89Cu;
            goto label_1dd89c;
        }
    }
    ctx->pc = 0x1DD884u;
label_1dd884:
    // 0x1dd884: 0x0  nop
    ctx->pc = 0x1dd884u;
    // NOP
label_1dd888:
    // 0x1dd888: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1dd888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1dd88c:
    // 0x1dd88c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1dd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1dd890:
    // 0x1dd890: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dd890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dd894:
    // 0x1dd894: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1dd894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1dd898:
    // 0x1dd898: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1dd898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_1dd89c:
    // 0x1dd89c: 0x0  nop
    ctx->pc = 0x1dd89cu;
    // NOP
label_1dd8a0:
    // 0x1dd8a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dd8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1dd8a4:
    // 0x1dd8a4: 0x2a030019  slti        $v1, $s0, 0x19
    ctx->pc = 0x1dd8a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
label_1dd8a8:
    // 0x1dd8a8: 0x1460ff40  bnez        $v1, . + 4 + (-0xC0 << 2)
label_1dd8ac:
    if (ctx->pc == 0x1DD8ACu) {
        ctx->pc = 0x1DD8ACu;
            // 0x1dd8ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DD8B0u;
        goto label_1dd8b0;
    }
    ctx->pc = 0x1DD8A8u;
    {
        const bool branch_taken_0x1dd8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8A8u;
            // 0x1dd8ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8a8) {
            ctx->pc = 0x1DD5ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd5ac;
        }
    }
    ctx->pc = 0x1DD8B0u;
label_1dd8b0:
    // 0x1dd8b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1dd8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1dd8b4:
    // 0x1dd8b4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1dd8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1dd8b8:
    // 0x1dd8b8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1dd8b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1dd8bc:
    // 0x1dd8bc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dd8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dd8c0:
    // 0x1dd8c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1dd8c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1dd8c4:
    // 0x1dd8c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1dd8c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1dd8c8:
    // 0x1dd8c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dd8c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1dd8cc:
    // 0x1dd8cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dd8ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1dd8d0:
    // 0x1dd8d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dd8d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dd8d4:
    // 0x1dd8d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dd8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dd8d8:
    // 0x1dd8d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dd8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd8dc:
    // 0x1dd8dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dd8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd8e0:
    // 0x1dd8e0: 0x3e00008  jr          $ra
label_1dd8e4:
    if (ctx->pc == 0x1DD8E4u) {
        ctx->pc = 0x1DD8E4u;
            // 0x1dd8e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1DD8E8u;
        goto label_fallthrough_0x1dd8e0;
    }
    ctx->pc = 0x1DD8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD8E0u;
            // 0x1dd8e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dd8e0:
    ctx->pc = 0x1DD8E8u;
}
