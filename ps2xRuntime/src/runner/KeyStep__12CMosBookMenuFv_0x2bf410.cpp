#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyStep__12CMosBookMenuFv
// Address: 0x2bf410 - 0x2bf958
void KeyStep__12CMosBookMenuFv_0x2bf410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyStep__12CMosBookMenuFv_0x2bf410");
#endif

    switch (ctx->pc) {
        case 0x2bf410u: goto label_2bf410;
        case 0x2bf414u: goto label_2bf414;
        case 0x2bf418u: goto label_2bf418;
        case 0x2bf41cu: goto label_2bf41c;
        case 0x2bf420u: goto label_2bf420;
        case 0x2bf424u: goto label_2bf424;
        case 0x2bf428u: goto label_2bf428;
        case 0x2bf42cu: goto label_2bf42c;
        case 0x2bf430u: goto label_2bf430;
        case 0x2bf434u: goto label_2bf434;
        case 0x2bf438u: goto label_2bf438;
        case 0x2bf43cu: goto label_2bf43c;
        case 0x2bf440u: goto label_2bf440;
        case 0x2bf444u: goto label_2bf444;
        case 0x2bf448u: goto label_2bf448;
        case 0x2bf44cu: goto label_2bf44c;
        case 0x2bf450u: goto label_2bf450;
        case 0x2bf454u: goto label_2bf454;
        case 0x2bf458u: goto label_2bf458;
        case 0x2bf45cu: goto label_2bf45c;
        case 0x2bf460u: goto label_2bf460;
        case 0x2bf464u: goto label_2bf464;
        case 0x2bf468u: goto label_2bf468;
        case 0x2bf46cu: goto label_2bf46c;
        case 0x2bf470u: goto label_2bf470;
        case 0x2bf474u: goto label_2bf474;
        case 0x2bf478u: goto label_2bf478;
        case 0x2bf47cu: goto label_2bf47c;
        case 0x2bf480u: goto label_2bf480;
        case 0x2bf484u: goto label_2bf484;
        case 0x2bf488u: goto label_2bf488;
        case 0x2bf48cu: goto label_2bf48c;
        case 0x2bf490u: goto label_2bf490;
        case 0x2bf494u: goto label_2bf494;
        case 0x2bf498u: goto label_2bf498;
        case 0x2bf49cu: goto label_2bf49c;
        case 0x2bf4a0u: goto label_2bf4a0;
        case 0x2bf4a4u: goto label_2bf4a4;
        case 0x2bf4a8u: goto label_2bf4a8;
        case 0x2bf4acu: goto label_2bf4ac;
        case 0x2bf4b0u: goto label_2bf4b0;
        case 0x2bf4b4u: goto label_2bf4b4;
        case 0x2bf4b8u: goto label_2bf4b8;
        case 0x2bf4bcu: goto label_2bf4bc;
        case 0x2bf4c0u: goto label_2bf4c0;
        case 0x2bf4c4u: goto label_2bf4c4;
        case 0x2bf4c8u: goto label_2bf4c8;
        case 0x2bf4ccu: goto label_2bf4cc;
        case 0x2bf4d0u: goto label_2bf4d0;
        case 0x2bf4d4u: goto label_2bf4d4;
        case 0x2bf4d8u: goto label_2bf4d8;
        case 0x2bf4dcu: goto label_2bf4dc;
        case 0x2bf4e0u: goto label_2bf4e0;
        case 0x2bf4e4u: goto label_2bf4e4;
        case 0x2bf4e8u: goto label_2bf4e8;
        case 0x2bf4ecu: goto label_2bf4ec;
        case 0x2bf4f0u: goto label_2bf4f0;
        case 0x2bf4f4u: goto label_2bf4f4;
        case 0x2bf4f8u: goto label_2bf4f8;
        case 0x2bf4fcu: goto label_2bf4fc;
        case 0x2bf500u: goto label_2bf500;
        case 0x2bf504u: goto label_2bf504;
        case 0x2bf508u: goto label_2bf508;
        case 0x2bf50cu: goto label_2bf50c;
        case 0x2bf510u: goto label_2bf510;
        case 0x2bf514u: goto label_2bf514;
        case 0x2bf518u: goto label_2bf518;
        case 0x2bf51cu: goto label_2bf51c;
        case 0x2bf520u: goto label_2bf520;
        case 0x2bf524u: goto label_2bf524;
        case 0x2bf528u: goto label_2bf528;
        case 0x2bf52cu: goto label_2bf52c;
        case 0x2bf530u: goto label_2bf530;
        case 0x2bf534u: goto label_2bf534;
        case 0x2bf538u: goto label_2bf538;
        case 0x2bf53cu: goto label_2bf53c;
        case 0x2bf540u: goto label_2bf540;
        case 0x2bf544u: goto label_2bf544;
        case 0x2bf548u: goto label_2bf548;
        case 0x2bf54cu: goto label_2bf54c;
        case 0x2bf550u: goto label_2bf550;
        case 0x2bf554u: goto label_2bf554;
        case 0x2bf558u: goto label_2bf558;
        case 0x2bf55cu: goto label_2bf55c;
        case 0x2bf560u: goto label_2bf560;
        case 0x2bf564u: goto label_2bf564;
        case 0x2bf568u: goto label_2bf568;
        case 0x2bf56cu: goto label_2bf56c;
        case 0x2bf570u: goto label_2bf570;
        case 0x2bf574u: goto label_2bf574;
        case 0x2bf578u: goto label_2bf578;
        case 0x2bf57cu: goto label_2bf57c;
        case 0x2bf580u: goto label_2bf580;
        case 0x2bf584u: goto label_2bf584;
        case 0x2bf588u: goto label_2bf588;
        case 0x2bf58cu: goto label_2bf58c;
        case 0x2bf590u: goto label_2bf590;
        case 0x2bf594u: goto label_2bf594;
        case 0x2bf598u: goto label_2bf598;
        case 0x2bf59cu: goto label_2bf59c;
        case 0x2bf5a0u: goto label_2bf5a0;
        case 0x2bf5a4u: goto label_2bf5a4;
        case 0x2bf5a8u: goto label_2bf5a8;
        case 0x2bf5acu: goto label_2bf5ac;
        case 0x2bf5b0u: goto label_2bf5b0;
        case 0x2bf5b4u: goto label_2bf5b4;
        case 0x2bf5b8u: goto label_2bf5b8;
        case 0x2bf5bcu: goto label_2bf5bc;
        case 0x2bf5c0u: goto label_2bf5c0;
        case 0x2bf5c4u: goto label_2bf5c4;
        case 0x2bf5c8u: goto label_2bf5c8;
        case 0x2bf5ccu: goto label_2bf5cc;
        case 0x2bf5d0u: goto label_2bf5d0;
        case 0x2bf5d4u: goto label_2bf5d4;
        case 0x2bf5d8u: goto label_2bf5d8;
        case 0x2bf5dcu: goto label_2bf5dc;
        case 0x2bf5e0u: goto label_2bf5e0;
        case 0x2bf5e4u: goto label_2bf5e4;
        case 0x2bf5e8u: goto label_2bf5e8;
        case 0x2bf5ecu: goto label_2bf5ec;
        case 0x2bf5f0u: goto label_2bf5f0;
        case 0x2bf5f4u: goto label_2bf5f4;
        case 0x2bf5f8u: goto label_2bf5f8;
        case 0x2bf5fcu: goto label_2bf5fc;
        case 0x2bf600u: goto label_2bf600;
        case 0x2bf604u: goto label_2bf604;
        case 0x2bf608u: goto label_2bf608;
        case 0x2bf60cu: goto label_2bf60c;
        case 0x2bf610u: goto label_2bf610;
        case 0x2bf614u: goto label_2bf614;
        case 0x2bf618u: goto label_2bf618;
        case 0x2bf61cu: goto label_2bf61c;
        case 0x2bf620u: goto label_2bf620;
        case 0x2bf624u: goto label_2bf624;
        case 0x2bf628u: goto label_2bf628;
        case 0x2bf62cu: goto label_2bf62c;
        case 0x2bf630u: goto label_2bf630;
        case 0x2bf634u: goto label_2bf634;
        case 0x2bf638u: goto label_2bf638;
        case 0x2bf63cu: goto label_2bf63c;
        case 0x2bf640u: goto label_2bf640;
        case 0x2bf644u: goto label_2bf644;
        case 0x2bf648u: goto label_2bf648;
        case 0x2bf64cu: goto label_2bf64c;
        case 0x2bf650u: goto label_2bf650;
        case 0x2bf654u: goto label_2bf654;
        case 0x2bf658u: goto label_2bf658;
        case 0x2bf65cu: goto label_2bf65c;
        case 0x2bf660u: goto label_2bf660;
        case 0x2bf664u: goto label_2bf664;
        case 0x2bf668u: goto label_2bf668;
        case 0x2bf66cu: goto label_2bf66c;
        case 0x2bf670u: goto label_2bf670;
        case 0x2bf674u: goto label_2bf674;
        case 0x2bf678u: goto label_2bf678;
        case 0x2bf67cu: goto label_2bf67c;
        case 0x2bf680u: goto label_2bf680;
        case 0x2bf684u: goto label_2bf684;
        case 0x2bf688u: goto label_2bf688;
        case 0x2bf68cu: goto label_2bf68c;
        case 0x2bf690u: goto label_2bf690;
        case 0x2bf694u: goto label_2bf694;
        case 0x2bf698u: goto label_2bf698;
        case 0x2bf69cu: goto label_2bf69c;
        case 0x2bf6a0u: goto label_2bf6a0;
        case 0x2bf6a4u: goto label_2bf6a4;
        case 0x2bf6a8u: goto label_2bf6a8;
        case 0x2bf6acu: goto label_2bf6ac;
        case 0x2bf6b0u: goto label_2bf6b0;
        case 0x2bf6b4u: goto label_2bf6b4;
        case 0x2bf6b8u: goto label_2bf6b8;
        case 0x2bf6bcu: goto label_2bf6bc;
        case 0x2bf6c0u: goto label_2bf6c0;
        case 0x2bf6c4u: goto label_2bf6c4;
        case 0x2bf6c8u: goto label_2bf6c8;
        case 0x2bf6ccu: goto label_2bf6cc;
        case 0x2bf6d0u: goto label_2bf6d0;
        case 0x2bf6d4u: goto label_2bf6d4;
        case 0x2bf6d8u: goto label_2bf6d8;
        case 0x2bf6dcu: goto label_2bf6dc;
        case 0x2bf6e0u: goto label_2bf6e0;
        case 0x2bf6e4u: goto label_2bf6e4;
        case 0x2bf6e8u: goto label_2bf6e8;
        case 0x2bf6ecu: goto label_2bf6ec;
        case 0x2bf6f0u: goto label_2bf6f0;
        case 0x2bf6f4u: goto label_2bf6f4;
        case 0x2bf6f8u: goto label_2bf6f8;
        case 0x2bf6fcu: goto label_2bf6fc;
        case 0x2bf700u: goto label_2bf700;
        case 0x2bf704u: goto label_2bf704;
        case 0x2bf708u: goto label_2bf708;
        case 0x2bf70cu: goto label_2bf70c;
        case 0x2bf710u: goto label_2bf710;
        case 0x2bf714u: goto label_2bf714;
        case 0x2bf718u: goto label_2bf718;
        case 0x2bf71cu: goto label_2bf71c;
        case 0x2bf720u: goto label_2bf720;
        case 0x2bf724u: goto label_2bf724;
        case 0x2bf728u: goto label_2bf728;
        case 0x2bf72cu: goto label_2bf72c;
        case 0x2bf730u: goto label_2bf730;
        case 0x2bf734u: goto label_2bf734;
        case 0x2bf738u: goto label_2bf738;
        case 0x2bf73cu: goto label_2bf73c;
        case 0x2bf740u: goto label_2bf740;
        case 0x2bf744u: goto label_2bf744;
        case 0x2bf748u: goto label_2bf748;
        case 0x2bf74cu: goto label_2bf74c;
        case 0x2bf750u: goto label_2bf750;
        case 0x2bf754u: goto label_2bf754;
        case 0x2bf758u: goto label_2bf758;
        case 0x2bf75cu: goto label_2bf75c;
        case 0x2bf760u: goto label_2bf760;
        case 0x2bf764u: goto label_2bf764;
        case 0x2bf768u: goto label_2bf768;
        case 0x2bf76cu: goto label_2bf76c;
        case 0x2bf770u: goto label_2bf770;
        case 0x2bf774u: goto label_2bf774;
        case 0x2bf778u: goto label_2bf778;
        case 0x2bf77cu: goto label_2bf77c;
        case 0x2bf780u: goto label_2bf780;
        case 0x2bf784u: goto label_2bf784;
        case 0x2bf788u: goto label_2bf788;
        case 0x2bf78cu: goto label_2bf78c;
        case 0x2bf790u: goto label_2bf790;
        case 0x2bf794u: goto label_2bf794;
        case 0x2bf798u: goto label_2bf798;
        case 0x2bf79cu: goto label_2bf79c;
        case 0x2bf7a0u: goto label_2bf7a0;
        case 0x2bf7a4u: goto label_2bf7a4;
        case 0x2bf7a8u: goto label_2bf7a8;
        case 0x2bf7acu: goto label_2bf7ac;
        case 0x2bf7b0u: goto label_2bf7b0;
        case 0x2bf7b4u: goto label_2bf7b4;
        case 0x2bf7b8u: goto label_2bf7b8;
        case 0x2bf7bcu: goto label_2bf7bc;
        case 0x2bf7c0u: goto label_2bf7c0;
        case 0x2bf7c4u: goto label_2bf7c4;
        case 0x2bf7c8u: goto label_2bf7c8;
        case 0x2bf7ccu: goto label_2bf7cc;
        case 0x2bf7d0u: goto label_2bf7d0;
        case 0x2bf7d4u: goto label_2bf7d4;
        case 0x2bf7d8u: goto label_2bf7d8;
        case 0x2bf7dcu: goto label_2bf7dc;
        case 0x2bf7e0u: goto label_2bf7e0;
        case 0x2bf7e4u: goto label_2bf7e4;
        case 0x2bf7e8u: goto label_2bf7e8;
        case 0x2bf7ecu: goto label_2bf7ec;
        case 0x2bf7f0u: goto label_2bf7f0;
        case 0x2bf7f4u: goto label_2bf7f4;
        case 0x2bf7f8u: goto label_2bf7f8;
        case 0x2bf7fcu: goto label_2bf7fc;
        case 0x2bf800u: goto label_2bf800;
        case 0x2bf804u: goto label_2bf804;
        case 0x2bf808u: goto label_2bf808;
        case 0x2bf80cu: goto label_2bf80c;
        case 0x2bf810u: goto label_2bf810;
        case 0x2bf814u: goto label_2bf814;
        case 0x2bf818u: goto label_2bf818;
        case 0x2bf81cu: goto label_2bf81c;
        case 0x2bf820u: goto label_2bf820;
        case 0x2bf824u: goto label_2bf824;
        case 0x2bf828u: goto label_2bf828;
        case 0x2bf82cu: goto label_2bf82c;
        case 0x2bf830u: goto label_2bf830;
        case 0x2bf834u: goto label_2bf834;
        case 0x2bf838u: goto label_2bf838;
        case 0x2bf83cu: goto label_2bf83c;
        case 0x2bf840u: goto label_2bf840;
        case 0x2bf844u: goto label_2bf844;
        case 0x2bf848u: goto label_2bf848;
        case 0x2bf84cu: goto label_2bf84c;
        case 0x2bf850u: goto label_2bf850;
        case 0x2bf854u: goto label_2bf854;
        case 0x2bf858u: goto label_2bf858;
        case 0x2bf85cu: goto label_2bf85c;
        case 0x2bf860u: goto label_2bf860;
        case 0x2bf864u: goto label_2bf864;
        case 0x2bf868u: goto label_2bf868;
        case 0x2bf86cu: goto label_2bf86c;
        case 0x2bf870u: goto label_2bf870;
        case 0x2bf874u: goto label_2bf874;
        case 0x2bf878u: goto label_2bf878;
        case 0x2bf87cu: goto label_2bf87c;
        case 0x2bf880u: goto label_2bf880;
        case 0x2bf884u: goto label_2bf884;
        case 0x2bf888u: goto label_2bf888;
        case 0x2bf88cu: goto label_2bf88c;
        case 0x2bf890u: goto label_2bf890;
        case 0x2bf894u: goto label_2bf894;
        case 0x2bf898u: goto label_2bf898;
        case 0x2bf89cu: goto label_2bf89c;
        case 0x2bf8a0u: goto label_2bf8a0;
        case 0x2bf8a4u: goto label_2bf8a4;
        case 0x2bf8a8u: goto label_2bf8a8;
        case 0x2bf8acu: goto label_2bf8ac;
        case 0x2bf8b0u: goto label_2bf8b0;
        case 0x2bf8b4u: goto label_2bf8b4;
        case 0x2bf8b8u: goto label_2bf8b8;
        case 0x2bf8bcu: goto label_2bf8bc;
        case 0x2bf8c0u: goto label_2bf8c0;
        case 0x2bf8c4u: goto label_2bf8c4;
        case 0x2bf8c8u: goto label_2bf8c8;
        case 0x2bf8ccu: goto label_2bf8cc;
        case 0x2bf8d0u: goto label_2bf8d0;
        case 0x2bf8d4u: goto label_2bf8d4;
        case 0x2bf8d8u: goto label_2bf8d8;
        case 0x2bf8dcu: goto label_2bf8dc;
        case 0x2bf8e0u: goto label_2bf8e0;
        case 0x2bf8e4u: goto label_2bf8e4;
        case 0x2bf8e8u: goto label_2bf8e8;
        case 0x2bf8ecu: goto label_2bf8ec;
        case 0x2bf8f0u: goto label_2bf8f0;
        case 0x2bf8f4u: goto label_2bf8f4;
        case 0x2bf8f8u: goto label_2bf8f8;
        case 0x2bf8fcu: goto label_2bf8fc;
        case 0x2bf900u: goto label_2bf900;
        case 0x2bf904u: goto label_2bf904;
        case 0x2bf908u: goto label_2bf908;
        case 0x2bf90cu: goto label_2bf90c;
        case 0x2bf910u: goto label_2bf910;
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf918u: goto label_2bf918;
        case 0x2bf91cu: goto label_2bf91c;
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf924u: goto label_2bf924;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf92cu: goto label_2bf92c;
        case 0x2bf930u: goto label_2bf930;
        case 0x2bf934u: goto label_2bf934;
        case 0x2bf938u: goto label_2bf938;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf940u: goto label_2bf940;
        case 0x2bf944u: goto label_2bf944;
        case 0x2bf948u: goto label_2bf948;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bf954u: goto label_2bf954;
        default: break;
    }

    ctx->pc = 0x2bf410u;

label_2bf410:
    // 0x2bf410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bf410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2bf414:
    // 0x2bf414: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bf414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2bf418:
    // 0x2bf418: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bf418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2bf41c:
    // 0x2bf41c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bf41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2bf420:
    // 0x2bf420: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bf420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf424:
    // 0x2bf424: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bf424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2bf428:
    // 0x2bf428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bf42c:
    // 0x2bf42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bf430:
    // 0x2bf430: 0xc08f80c  jal         func_23E030
label_2bf434:
    if (ctx->pc == 0x2BF434u) {
        ctx->pc = 0x2BF434u;
            // 0x2bf434: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x2BF438u;
        goto label_2bf438;
    }
    ctx->pc = 0x2BF430u;
    SET_GPR_U32(ctx, 31, 0x2BF438u);
    ctx->pc = 0x2BF434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF430u;
            // 0x2bf434: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF438u; }
        if (ctx->pc != 0x2BF438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF438u; }
        if (ctx->pc != 0x2BF438u) { return; }
    }
    ctx->pc = 0x2BF438u;
label_2bf438:
    // 0x2bf438: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2bf438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bf43c:
    // 0x2bf43c: 0xc08f840  jal         func_23E100
label_2bf440:
    if (ctx->pc == 0x2BF440u) {
        ctx->pc = 0x2BF440u;
            // 0x2bf440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF444u;
        goto label_2bf444;
    }
    ctx->pc = 0x2BF43Cu;
    SET_GPR_U32(ctx, 31, 0x2BF444u);
    ctx->pc = 0x2BF440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF43Cu;
            // 0x2bf440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF444u; }
        if (ctx->pc != 0x2BF444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF444u; }
        if (ctx->pc != 0x2BF444u) { return; }
    }
    ctx->pc = 0x2BF444u;
label_2bf444:
    // 0x2bf444: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2bf444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bf448:
    // 0x2bf448: 0xc08f8c8  jal         func_23E320
label_2bf44c:
    if (ctx->pc == 0x2BF44Cu) {
        ctx->pc = 0x2BF44Cu;
            // 0x2bf44c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF450u;
        goto label_2bf450;
    }
    ctx->pc = 0x2BF448u;
    SET_GPR_U32(ctx, 31, 0x2BF450u);
    ctx->pc = 0x2BF44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF448u;
            // 0x2bf44c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF450u; }
        if (ctx->pc != 0x2BF450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF450u; }
        if (ctx->pc != 0x2BF450u) { return; }
    }
    ctx->pc = 0x2BF450u;
label_2bf450:
    // 0x2bf450: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bf450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bf454:
    // 0x2bf454: 0xc08e8a8  jal         func_23A2A0
label_2bf458:
    if (ctx->pc == 0x2BF458u) {
        ctx->pc = 0x2BF458u;
            // 0x2bf458: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF45Cu;
        goto label_2bf45c;
    }
    ctx->pc = 0x2BF454u;
    SET_GPR_U32(ctx, 31, 0x2BF45Cu);
    ctx->pc = 0x2BF458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF454u;
            // 0x2bf458: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF45Cu; }
        if (ctx->pc != 0x2BF45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF45Cu; }
        if (ctx->pc != 0x2BF45Cu) { return; }
    }
    ctx->pc = 0x2BF45Cu;
label_2bf45c:
    // 0x2bf45c: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x2bf45cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2bf460:
    // 0x2bf460: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_2bf464:
    if (ctx->pc == 0x2BF464u) {
        ctx->pc = 0x2BF464u;
            // 0x2bf464: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BF468u;
        goto label_2bf468;
    }
    ctx->pc = 0x2BF460u;
    {
        const bool branch_taken_0x2bf460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF460u;
            // 0x2bf464: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf460) {
            ctx->pc = 0x2BF4CCu;
            goto label_2bf4cc;
        }
    }
    ctx->pc = 0x2BF468u;
label_2bf468:
    // 0x2bf468: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bf468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bf46c:
    // 0x2bf46c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_2bf470:
    if (ctx->pc == 0x2BF470u) {
        ctx->pc = 0x2BF470u;
            // 0x2bf470: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF474u;
        goto label_2bf474;
    }
    ctx->pc = 0x2BF46Cu;
    {
        const bool branch_taken_0x2bf46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BF470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF46Cu;
            // 0x2bf470: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf46c) {
            ctx->pc = 0x2BF4A0u;
            goto label_2bf4a0;
        }
    }
    ctx->pc = 0x2BF474u;
label_2bf474:
    // 0x2bf474: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2bf478:
    if (ctx->pc == 0x2BF478u) {
        ctx->pc = 0x2BF47Cu;
        goto label_2bf47c;
    }
    ctx->pc = 0x2BF474u;
    {
        const bool branch_taken_0x2bf474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2bf474) {
            ctx->pc = 0x2BF484u;
            goto label_2bf484;
        }
    }
    ctx->pc = 0x2BF47Cu;
label_2bf47c:
    // 0x2bf47c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2bf480:
    if (ctx->pc == 0x2BF480u) {
        ctx->pc = 0x2BF480u;
            // 0x2bf480: 0x260082a  slt         $at, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->pc = 0x2BF484u;
        goto label_2bf484;
    }
    ctx->pc = 0x2BF47Cu;
    {
        const bool branch_taken_0x2bf47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF47Cu;
            // 0x2bf480: 0x260082a  slt         $at, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf47c) {
            ctx->pc = 0x2BF634u;
            goto label_2bf634;
        }
    }
    ctx->pc = 0x2BF484u;
label_2bf484:
    // 0x2bf484: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_2bf488:
    if (ctx->pc == 0x2BF488u) {
        ctx->pc = 0x2BF48Cu;
        goto label_2bf48c;
    }
    ctx->pc = 0x2BF484u;
    {
        const bool branch_taken_0x2bf484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf484) {
            ctx->pc = 0x2BF630u;
            goto label_2bf630;
        }
    }
    ctx->pc = 0x2BF48Cu;
label_2bf48c:
    // 0x2bf48c: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x2bf48cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_2bf490:
    // 0x2bf490: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2bf490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2bf494:
    // 0x2bf494: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2bf494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_2bf498:
    // 0x2bf498: 0x10000065  b           . + 4 + (0x65 << 2)
label_2bf49c:
    if (ctx->pc == 0x2BF49Cu) {
        ctx->pc = 0x2BF49Cu;
            // 0x2bf49c: 0xae8301d0  sw          $v1, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 3));
        ctx->pc = 0x2BF4A0u;
        goto label_2bf4a0;
    }
    ctx->pc = 0x2BF498u;
    {
        const bool branch_taken_0x2bf498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF498u;
            // 0x2bf49c: 0xae8301d0  sw          $v1, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf498) {
            ctx->pc = 0x2BF630u;
            goto label_2bf630;
        }
    }
    ctx->pc = 0x2BF4A0u;
label_2bf4a0:
    // 0x2bf4a0: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_2bf4a4:
    if (ctx->pc == 0x2BF4A4u) {
        ctx->pc = 0x2BF4A4u;
            // 0x2bf4a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4A8u;
        goto label_2bf4a8;
    }
    ctx->pc = 0x2BF4A0u;
    {
        const bool branch_taken_0x2bf4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF4A0u;
            // 0x2bf4a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4a0) {
            ctx->pc = 0x2BF630u;
            goto label_2bf630;
        }
    }
    ctx->pc = 0x2BF4A8u;
label_2bf4a8:
    // 0x2bf4a8: 0xc08dc80  jal         func_237200
label_2bf4ac:
    if (ctx->pc == 0x2BF4ACu) {
        ctx->pc = 0x2BF4B0u;
        goto label_2bf4b0;
    }
    ctx->pc = 0x2BF4A8u;
    SET_GPR_U32(ctx, 31, 0x2BF4B0u);
    ctx->pc = 0x237200u;
    if (runtime->hasFunction(0x237200u)) {
        auto targetFn = runtime->lookupFunction(0x237200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4B0u; }
        if (ctx->pc != 0x2BF4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexBlock__14CBaseMenuClassFv_0x237200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF4B0u; }
        if (ctx->pc != 0x2BF4B0u) { return; }
    }
    ctx->pc = 0x2BF4B0u;
label_2bf4b0:
    // 0x2bf4b0: 0x87839c44  lh          $v1, -0x63BC($gp)
    ctx->pc = 0x2bf4b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941764)));
label_2bf4b4:
    // 0x2bf4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bf4b8:
    // 0x2bf4b8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2bf4bc:
    if (ctx->pc == 0x2BF4BCu) {
        ctx->pc = 0x2BF4C0u;
        goto label_2bf4c0;
    }
    ctx->pc = 0x2BF4B8u;
    {
        const bool branch_taken_0x2bf4b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bf4b8) {
            ctx->pc = 0x2BF4C4u;
            goto label_2bf4c4;
        }
    }
    ctx->pc = 0x2BF4C0u;
label_2bf4c0:
    // 0x2bf4c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bf4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2bf4c4:
    // 0x2bf4c4: 0x1000011d  b           . + 4 + (0x11D << 2)
label_2bf4c8:
    if (ctx->pc == 0x2BF4C8u) {
        ctx->pc = 0x2BF4C8u;
            // 0x2bf4c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2BF4CCu;
        goto label_2bf4cc;
    }
    ctx->pc = 0x2BF4C4u;
    {
        const bool branch_taken_0x2bf4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF4C4u;
            // 0x2bf4c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4c4) {
            ctx->pc = 0x2BF93Cu;
            goto label_2bf93c;
        }
    }
    ctx->pc = 0x2BF4CCu;
label_2bf4cc:
    // 0x2bf4cc: 0x32230010  andi        $v1, $s1, 0x10
    ctx->pc = 0x2bf4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
label_2bf4d0:
    // 0x2bf4d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2bf4d4:
    if (ctx->pc == 0x2BF4D4u) {
        ctx->pc = 0x2BF4D4u;
            // 0x2bf4d4: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2BF4D8u;
        goto label_2bf4d8;
    }
    ctx->pc = 0x2BF4D0u;
    {
        const bool branch_taken_0x2bf4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF4D0u;
            // 0x2bf4d4: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4d0) {
            ctx->pc = 0x2BF4F8u;
            goto label_2bf4f8;
        }
    }
    ctx->pc = 0x2BF4D8u;
label_2bf4d8:
    // 0x2bf4d8: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x2bf4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
label_2bf4dc:
    // 0x2bf4dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2bf4e0:
    if (ctx->pc == 0x2BF4E0u) {
        ctx->pc = 0x2BF4E0u;
            // 0x2bf4e0: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2BF4E4u;
        goto label_2bf4e4;
    }
    ctx->pc = 0x2BF4DCu;
    {
        const bool branch_taken_0x2bf4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF4DCu;
            // 0x2bf4e0: 0x32020004  andi        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4dc) {
            ctx->pc = 0x2BF4F4u;
            goto label_2bf4f4;
        }
    }
    ctx->pc = 0x2BF4E4u;
label_2bf4e4:
    // 0x2bf4e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bf4e8:
    if (ctx->pc == 0x2BF4E8u) {
        ctx->pc = 0x2BF4E8u;
            // 0x2bf4e8: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x2BF4ECu;
        goto label_2bf4ec;
    }
    ctx->pc = 0x2BF4E4u;
    {
        const bool branch_taken_0x2bf4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF4E4u;
            // 0x2bf4e8: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4e4) {
            ctx->pc = 0x2BF4F4u;
            goto label_2bf4f4;
        }
    }
    ctx->pc = 0x2BF4ECu;
label_2bf4ec:
    // 0x2bf4ec: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2bf4f0:
    if (ctx->pc == 0x2BF4F0u) {
        ctx->pc = 0x2BF4F0u;
            // 0x2bf4f0: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x2BF4F4u;
        goto label_2bf4f4;
    }
    ctx->pc = 0x2BF4ECu;
    {
        const bool branch_taken_0x2bf4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF4ECu;
            // 0x2bf4f0: 0x32420002  andi        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4ec) {
            ctx->pc = 0x2BF5D0u;
            goto label_2bf5d0;
        }
    }
    ctx->pc = 0x2BF4F4u;
label_2bf4f4:
    // 0x2bf4f4: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x2bf4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
label_2bf4f8:
    // 0x2bf4f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2bf4fc:
    if (ctx->pc == 0x2BF4FCu) {
        ctx->pc = 0x2BF4FCu;
            // 0x2bf4fc: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2BF500u;
        goto label_2bf500;
    }
    ctx->pc = 0x2BF4F8u;
    {
        const bool branch_taken_0x2bf4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF4F8u;
            // 0x2bf4fc: 0x24130064  addiu       $s3, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf4f8) {
            ctx->pc = 0x2BF50Cu;
            goto label_2bf50c;
        }
    }
    ctx->pc = 0x2BF500u;
label_2bf500:
    // 0x2bf500: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf504:
    // 0x2bf504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bf504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2bf508:
    // 0x2bf508: 0xae8201e0  sw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf508u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 2));
label_2bf50c:
    // 0x2bf50c: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x2bf50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_2bf510:
    // 0x2bf510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2bf514:
    if (ctx->pc == 0x2BF514u) {
        ctx->pc = 0x2BF514u;
            // 0x2bf514: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x2BF518u;
        goto label_2bf518;
    }
    ctx->pc = 0x2BF510u;
    {
        const bool branch_taken_0x2bf510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF510u;
            // 0x2bf514: 0x32220040  andi        $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf510) {
            ctx->pc = 0x2BF528u;
            goto label_2bf528;
        }
    }
    ctx->pc = 0x2BF518u;
label_2bf518:
    // 0x2bf518: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf51c:
    // 0x2bf51c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bf520:
    // 0x2bf520: 0xae8201e0  sw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf520u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 2));
label_2bf524:
    // 0x2bf524: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x2bf524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
label_2bf528:
    // 0x2bf528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bf52c:
    if (ctx->pc == 0x2BF52Cu) {
        ctx->pc = 0x2BF530u;
        goto label_2bf530;
    }
    ctx->pc = 0x2BF528u;
    {
        const bool branch_taken_0x2bf528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf528) {
            ctx->pc = 0x2BF538u;
            goto label_2bf538;
        }
    }
    ctx->pc = 0x2BF530u;
label_2bf530:
    // 0x2bf530: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2bf534:
    if (ctx->pc == 0x2BF534u) {
        ctx->pc = 0x2BF534u;
            // 0x2bf534: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x2BF538u;
        goto label_2bf538;
    }
    ctx->pc = 0x2BF530u;
    {
        const bool branch_taken_0x2bf530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF530u;
            // 0x2bf534: 0x32220080  andi        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf530) {
            ctx->pc = 0x2BF548u;
            goto label_2bf548;
        }
    }
    ctx->pc = 0x2BF538u;
label_2bf538:
    // 0x2bf538: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf53c:
    // 0x2bf53c: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x2bf53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_2bf540:
    // 0x2bf540: 0xae8201e0  sw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf540u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 2));
label_2bf544:
    // 0x2bf544: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x2bf544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_2bf548:
    // 0x2bf548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bf54c:
    if (ctx->pc == 0x2BF54Cu) {
        ctx->pc = 0x2BF54Cu;
            // 0x2bf54c: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x2BF550u;
        goto label_2bf550;
    }
    ctx->pc = 0x2BF548u;
    {
        const bool branch_taken_0x2bf548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF548u;
            // 0x2bf54c: 0x32220020  andi        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf548) {
            ctx->pc = 0x2BF558u;
            goto label_2bf558;
        }
    }
    ctx->pc = 0x2BF550u;
label_2bf550:
    // 0x2bf550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2bf554:
    if (ctx->pc == 0x2BF554u) {
        ctx->pc = 0x2BF558u;
        goto label_2bf558;
    }
    ctx->pc = 0x2BF550u;
    {
        const bool branch_taken_0x2bf550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf550) {
            ctx->pc = 0x2BF564u;
            goto label_2bf564;
        }
    }
    ctx->pc = 0x2BF558u;
label_2bf558:
    // 0x2bf558: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf55c:
    // 0x2bf55c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2bf55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_2bf560:
    // 0x2bf560: 0xae8201e0  sw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 2));
label_2bf564:
    // 0x2bf564: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf568:
    // 0x2bf568: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_2bf56c:
    if (ctx->pc == 0x2BF56Cu) {
        ctx->pc = 0x2BF570u;
        goto label_2bf570;
    }
    ctx->pc = 0x2BF568u;
    {
        const bool branch_taken_0x2bf568 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bf568) {
            ctx->pc = 0x2BF57Cu;
            goto label_2bf57c;
        }
    }
    ctx->pc = 0x2BF570u;
label_2bf570:
    // 0x2bf570: 0x8e8207e8  lw          $v0, 0x7E8($s4)
    ctx->pc = 0x2bf570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2024)));
label_2bf574:
    // 0x2bf574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bf574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2bf578:
    // 0x2bf578: 0xae8201e0  sw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 2));
label_2bf57c:
    // 0x2bf57c: 0x8e8307e8  lw          $v1, 0x7E8($s4)
    ctx->pc = 0x2bf57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2024)));
label_2bf580:
    // 0x2bf580: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf584:
    // 0x2bf584: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2bf584u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2bf588:
    // 0x2bf588: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2bf58c:
    if (ctx->pc == 0x2BF58Cu) {
        ctx->pc = 0x2BF590u;
        goto label_2bf590;
    }
    ctx->pc = 0x2BF588u;
    {
        const bool branch_taken_0x2bf588 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf588) {
            ctx->pc = 0x2BF594u;
            goto label_2bf594;
        }
    }
    ctx->pc = 0x2BF590u;
label_2bf590:
    // 0x2bf590: 0xae8001e0  sw          $zero, 0x1E0($s4)
    ctx->pc = 0x2bf590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 0));
label_2bf594:
    // 0x2bf594: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf598:
    // 0x2bf598: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2bf59c:
    if (ctx->pc == 0x2BF59Cu) {
        ctx->pc = 0x2BF5A0u;
        goto label_2bf5a0;
    }
    ctx->pc = 0x2BF598u;
    {
        const bool branch_taken_0x2bf598 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2bf598) {
            ctx->pc = 0x2BF5A4u;
            goto label_2bf5a4;
        }
    }
    ctx->pc = 0x2BF5A0u;
label_2bf5a0:
    // 0x2bf5a0: 0xae8001e0  sw          $zero, 0x1E0($s4)
    ctx->pc = 0x2bf5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 480), GPR_U32(ctx, 0));
label_2bf5a4:
    // 0x2bf5a4: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf5a8:
    // 0x2bf5a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bf5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2bf5ac:
    // 0x2bf5ac: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bf5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bf5b0:
    // 0x2bf5b0: 0xc066a20  jal         func_19A880
label_2bf5b4:
    if (ctx->pc == 0x2BF5B4u) {
        ctx->pc = 0x2BF5B4u;
            // 0x2bf5b4: 0x8c4401e8  lw          $a0, 0x1E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
        ctx->pc = 0x2BF5B8u;
        goto label_2bf5b8;
    }
    ctx->pc = 0x2BF5B0u;
    SET_GPR_U32(ctx, 31, 0x2BF5B8u);
    ctx->pc = 0x2BF5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5B0u;
            // 0x2bf5b4: 0x8c4401e8  lw          $a0, 0x1E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A880u;
    if (runtime->hasFunction(0x19A880u)) {
        auto targetFn = runtime->lookupFunction(0x19A880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5B8u; }
        if (ctx->pc != 0x2BF5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBaseInfo__Fi_0x19a880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5B8u; }
        if (ctx->pc != 0x2BF5B8u) { return; }
    }
    ctx->pc = 0x2BF5B8u;
label_2bf5b8:
    // 0x2bf5b8: 0xae8201e4  sw          $v0, 0x1E4($s4)
    ctx->pc = 0x2bf5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 484), GPR_U32(ctx, 2));
label_2bf5bc:
    // 0x2bf5bc: 0x8e8501e4  lw          $a1, 0x1E4($s4)
    ctx->pc = 0x2bf5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 484)));
label_2bf5c0:
    // 0x2bf5c0: 0xc0af82c  jal         func_2BE0B0
label_2bf5c4:
    if (ctx->pc == 0x2BF5C4u) {
        ctx->pc = 0x2BF5C4u;
            // 0x2bf5c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5C8u;
        goto label_2bf5c8;
    }
    ctx->pc = 0x2BF5C0u;
    SET_GPR_U32(ctx, 31, 0x2BF5C8u);
    ctx->pc = 0x2BF5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5C0u;
            // 0x2bf5c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE0B0u;
    if (runtime->hasFunction(0x2BE0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BE0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5C8u; }
        if (ctx->pc != 0x2BF5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMonsterInfo__12CMosBookMenuFP16BASE_MONSTER_TBL_0x2be0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5C8u; }
        if (ctx->pc != 0x2BF5C8u) { return; }
    }
    ctx->pc = 0x2BF5C8u;
label_2bf5c8:
    // 0x2bf5c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2bf5cc:
    if (ctx->pc == 0x2BF5CCu) {
        ctx->pc = 0x2BF5D0u;
        goto label_2bf5d0;
    }
    ctx->pc = 0x2BF5C8u;
    {
        const bool branch_taken_0x2bf5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf5c8) {
            ctx->pc = 0x2BF630u;
            goto label_2bf630;
        }
    }
    ctx->pc = 0x2BF5D0u;
label_2bf5d0:
    // 0x2bf5d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2bf5d4:
    if (ctx->pc == 0x2BF5D4u) {
        ctx->pc = 0x2BF5D4u;
            // 0x2bf5d4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2BF5D8u;
        goto label_2bf5d8;
    }
    ctx->pc = 0x2BF5D0u;
    {
        const bool branch_taken_0x2bf5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5D0u;
            // 0x2bf5d4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5d0) {
            ctx->pc = 0x2BF5E8u;
            goto label_2bf5e8;
        }
    }
    ctx->pc = 0x2BF5D8u;
label_2bf5d8:
    // 0x2bf5d8: 0xc094274  jal         func_2509D0
label_2bf5dc:
    if (ctx->pc == 0x2BF5DCu) {
        ctx->pc = 0x2BF5DCu;
            // 0x2bf5dc: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2BF5E0u;
        goto label_2bf5e0;
    }
    ctx->pc = 0x2BF5D8u;
    SET_GPR_U32(ctx, 31, 0x2BF5E0u);
    ctx->pc = 0x2BF5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5D8u;
            // 0x2bf5dc: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5E0u; }
        if (ctx->pc != 0x2BF5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF5E0u; }
        if (ctx->pc != 0x2BF5E0u) { return; }
    }
    ctx->pc = 0x2BF5E0u;
label_2bf5e0:
    // 0x2bf5e0: 0x10000013  b           . + 4 + (0x13 << 2)
label_2bf5e4:
    if (ctx->pc == 0x2BF5E4u) {
        ctx->pc = 0x2BF5E8u;
        goto label_2bf5e8;
    }
    ctx->pc = 0x2BF5E0u;
    {
        const bool branch_taken_0x2bf5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf5e0) {
            ctx->pc = 0x2BF630u;
            goto label_2bf630;
        }
    }
    ctx->pc = 0x2BF5E8u;
label_2bf5e8:
    // 0x2bf5e8: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2bf5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2bf5ec:
    // 0x2bf5ec: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2bf5f0:
    if (ctx->pc == 0x2BF5F0u) {
        ctx->pc = 0x2BF5F0u;
            // 0x2bf5f0: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x2BF5F4u;
        goto label_2bf5f4;
    }
    ctx->pc = 0x2BF5ECu;
    {
        const bool branch_taken_0x2bf5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5ECu;
            // 0x2bf5f0: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5ec) {
            ctx->pc = 0x2BF630u;
            goto label_2bf630;
        }
    }
    ctx->pc = 0x2BF5F4u;
label_2bf5f4:
    // 0x2bf5f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2bf5f8:
    if (ctx->pc == 0x2BF5F8u) {
        ctx->pc = 0x2BF5F8u;
            // 0x2bf5f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5FCu;
        goto label_2bf5fc;
    }
    ctx->pc = 0x2BF5F4u;
    {
        const bool branch_taken_0x2bf5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF5F4u;
            // 0x2bf5f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf5f4) {
            ctx->pc = 0x2BF630u;
            goto label_2bf630;
        }
    }
    ctx->pc = 0x2BF5FCu;
label_2bf5fc:
    // 0x2bf5fc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2bf5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2bf600:
    // 0x2bf600: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2bf604:
    if (ctx->pc == 0x2BF604u) {
        ctx->pc = 0x2BF604u;
            // 0x2bf604: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->pc = 0x2BF608u;
        goto label_2bf608;
    }
    ctx->pc = 0x2BF600u;
    {
        const bool branch_taken_0x2bf600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF600u;
            // 0x2bf604: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf600) {
            ctx->pc = 0x2BF618u;
            goto label_2bf618;
        }
    }
    ctx->pc = 0x2BF608u;
label_2bf608:
    // 0x2bf608: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_2bf60c:
    if (ctx->pc == 0x2BF60Cu) {
        ctx->pc = 0x2BF60Cu;
            // 0x2bf60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF610u;
        goto label_2bf610;
    }
    ctx->pc = 0x2BF608u;
    {
        const bool branch_taken_0x2bf608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF608u;
            // 0x2bf60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf608) {
            ctx->pc = 0x2BF618u;
            goto label_2bf618;
        }
    }
    ctx->pc = 0x2BF610u;
label_2bf610:
    // 0x2bf610: 0xc068444  jal         func_1A1110
label_2bf614:
    if (ctx->pc == 0x2BF614u) {
        ctx->pc = 0x2BF614u;
            // 0x2bf614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF618u;
        goto label_2bf618;
    }
    ctx->pc = 0x2BF610u;
    SET_GPR_U32(ctx, 31, 0x2BF618u);
    ctx->pc = 0x2BF614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF610u;
            // 0x2bf614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1110u;
    if (runtime->hasFunction(0x1A1110u)) {
        auto targetFn = runtime->lookupFunction(0x1A1110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF618u; }
        if (ctx->pc != 0x2BF618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KillMonsterCount__Fii_0x1a1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF618u; }
        if (ctx->pc != 0x2BF618u) { return; }
    }
    ctx->pc = 0x2BF618u;
label_2bf618:
    // 0x2bf618: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2bf618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2bf61c:
    // 0x2bf61c: 0x2a020119  slti        $v0, $s0, 0x119
    ctx->pc = 0x2bf61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)281) ? 1 : 0);
label_2bf620:
    // 0x2bf620: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2bf624:
    if (ctx->pc == 0x2BF624u) {
        ctx->pc = 0x2BF624u;
            // 0x2bf624: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2BF628u;
        goto label_2bf628;
    }
    ctx->pc = 0x2BF620u;
    {
        const bool branch_taken_0x2bf620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF620u;
            // 0x2bf624: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf620) {
            ctx->pc = 0x2BF600u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bf600;
        }
    }
    ctx->pc = 0x2BF628u;
label_2bf628:
    // 0x2bf628: 0xc094274  jal         func_2509D0
label_2bf62c:
    if (ctx->pc == 0x2BF62Cu) {
        ctx->pc = 0x2BF62Cu;
            // 0x2bf62c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF630u;
        goto label_2bf630;
    }
    ctx->pc = 0x2BF628u;
    SET_GPR_U32(ctx, 31, 0x2BF630u);
    ctx->pc = 0x2BF62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF628u;
            // 0x2bf62c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF630u; }
        if (ctx->pc != 0x2BF630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF630u; }
        if (ctx->pc != 0x2BF630u) { return; }
    }
    ctx->pc = 0x2BF630u;
label_2bf630:
    // 0x2bf630: 0x260082a  slt         $at, $s3, $zero
    ctx->pc = 0x2bf630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2bf634:
    // 0x2bf634: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
label_2bf638:
    if (ctx->pc == 0x2BF638u) {
        ctx->pc = 0x2BF638u;
            // 0x2bf638: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2BF63Cu;
        goto label_2bf63c;
    }
    ctx->pc = 0x2BF634u;
    {
        const bool branch_taken_0x2bf634 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF634u;
            // 0x2bf638: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf634) {
            ctx->pc = 0x2BF678u;
            goto label_2bf678;
        }
    }
    ctx->pc = 0x2BF63Cu;
label_2bf63c:
    // 0x2bf63c: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
label_2bf640:
    if (ctx->pc == 0x2BF640u) {
        ctx->pc = 0x2BF640u;
            // 0x2bf640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF644u;
        goto label_2bf644;
    }
    ctx->pc = 0x2BF63Cu;
    {
        const bool branch_taken_0x2bf63c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF63Cu;
            // 0x2bf640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf63c) {
            ctx->pc = 0x2BF674u;
            goto label_2bf674;
        }
    }
    ctx->pc = 0x2BF644u;
label_2bf644:
    // 0x2bf644: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2bf644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2bf648:
    // 0x2bf648: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_2bf64c:
    if (ctx->pc == 0x2BF64Cu) {
        ctx->pc = 0x2BF64Cu;
            // 0x2bf64c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BF650u;
        goto label_2bf650;
    }
    ctx->pc = 0x2BF648u;
    {
        const bool branch_taken_0x2bf648 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF648u;
            // 0x2bf64c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf648) {
            ctx->pc = 0x2BF658u;
            goto label_2bf658;
        }
    }
    ctx->pc = 0x2BF650u;
label_2bf650:
    // 0x2bf650: 0x1000000a  b           . + 4 + (0xA << 2)
label_2bf654:
    if (ctx->pc == 0x2BF654u) {
        ctx->pc = 0x2BF654u;
            // 0x2bf654: 0x8e8301d0  lw          $v1, 0x1D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
        ctx->pc = 0x2BF658u;
        goto label_2bf658;
    }
    ctx->pc = 0x2BF650u;
    {
        const bool branch_taken_0x2bf650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF650u;
            // 0x2bf654: 0x8e8301d0  lw          $v1, 0x1D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf650) {
            ctx->pc = 0x2BF67Cu;
            goto label_2bf67c;
        }
    }
    ctx->pc = 0x2BF658u;
label_2bf658:
    // 0x2bf658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bf658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bf65c:
    // 0x2bf65c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2bf65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf660:
    // 0x2bf660: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x2bf660u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_2bf664:
    // 0x2bf664: 0xc08e898  jal         func_23A260
label_2bf668:
    if (ctx->pc == 0x2BF668u) {
        ctx->pc = 0x2BF668u;
            // 0x2bf668: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2BF66Cu;
        goto label_2bf66c;
    }
    ctx->pc = 0x2BF664u;
    SET_GPR_U32(ctx, 31, 0x2BF66Cu);
    ctx->pc = 0x2BF668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF664u;
            // 0x2bf668: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF66Cu; }
        if (ctx->pc != 0x2BF66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF66Cu; }
        if (ctx->pc != 0x2BF66Cu) { return; }
    }
    ctx->pc = 0x2BF66Cu;
label_2bf66c:
    // 0x2bf66c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2bf670:
    if (ctx->pc == 0x2BF670u) {
        ctx->pc = 0x2BF674u;
        goto label_2bf674;
    }
    ctx->pc = 0x2BF66Cu;
    {
        const bool branch_taken_0x2bf66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf66c) {
            ctx->pc = 0x2BF678u;
            goto label_2bf678;
        }
    }
    ctx->pc = 0x2BF674u;
label_2bf674:
    // 0x2bf674: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bf674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_2bf678:
    // 0x2bf678: 0x8e8301d0  lw          $v1, 0x1D0($s4)
    ctx->pc = 0x2bf678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bf67c:
    // 0x2bf67c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bf67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2bf680:
    // 0x2bf680: 0x1062008a  beq         $v1, $v0, . + 4 + (0x8A << 2)
label_2bf684:
    if (ctx->pc == 0x2BF684u) {
        ctx->pc = 0x2BF684u;
            // 0x2bf684: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2BF688u;
        goto label_2bf688;
    }
    ctx->pc = 0x2BF680u;
    {
        const bool branch_taken_0x2bf680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF680u;
            // 0x2bf684: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf680) {
            ctx->pc = 0x2BF8ACu;
            goto label_2bf8ac;
        }
    }
    ctx->pc = 0x2BF688u;
label_2bf688:
    // 0x2bf688: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_2bf68c:
    if (ctx->pc == 0x2BF68Cu) {
        ctx->pc = 0x2BF68Cu;
            // 0x2bf68c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2BF690u;
        goto label_2bf690;
    }
    ctx->pc = 0x2BF688u;
    {
        const bool branch_taken_0x2bf688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF688u;
            // 0x2bf68c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf688) {
            ctx->pc = 0x2BF740u;
            goto label_2bf740;
        }
    }
    ctx->pc = 0x2BF690u;
label_2bf690:
    // 0x2bf690: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2bf694:
    if (ctx->pc == 0x2BF694u) {
        ctx->pc = 0x2BF694u;
            // 0x2bf694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF698u;
        goto label_2bf698;
    }
    ctx->pc = 0x2BF690u;
    {
        const bool branch_taken_0x2bf690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BF694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF690u;
            // 0x2bf694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf690) {
            ctx->pc = 0x2BF6C4u;
            goto label_2bf6c4;
        }
    }
    ctx->pc = 0x2BF698u;
label_2bf698:
    // 0x2bf698: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2bf69c:
    if (ctx->pc == 0x2BF69Cu) {
        ctx->pc = 0x2BF6A0u;
        goto label_2bf6a0;
    }
    ctx->pc = 0x2BF698u;
    {
        const bool branch_taken_0x2bf698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bf698) {
            ctx->pc = 0x2BF6B0u;
            goto label_2bf6b0;
        }
    }
    ctx->pc = 0x2BF6A0u;
label_2bf6a0:
    // 0x2bf6a0: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
label_2bf6a4:
    if (ctx->pc == 0x2BF6A4u) {
        ctx->pc = 0x2BF6A8u;
        goto label_2bf6a8;
    }
    ctx->pc = 0x2BF6A0u;
    {
        const bool branch_taken_0x2bf6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf6a0) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF6A8u;
label_2bf6a8:
    // 0x2bf6a8: 0x10000094  b           . + 4 + (0x94 << 2)
label_2bf6ac:
    if (ctx->pc == 0x2BF6ACu) {
        ctx->pc = 0x2BF6ACu;
            // 0x2bf6ac: 0xc6820180  lwc1        $f2, 0x180($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x2BF6B0u;
        goto label_2bf6b0;
    }
    ctx->pc = 0x2BF6A8u;
    {
        const bool branch_taken_0x2bf6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF6A8u;
            // 0x2bf6ac: 0xc6820180  lwc1        $f2, 0x180($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6a8) {
            ctx->pc = 0x2BF8FCu;
            goto label_2bf8fc;
        }
    }
    ctx->pc = 0x2BF6B0u;
label_2bf6b0:
    // 0x2bf6b0: 0xae8001d4  sw          $zero, 0x1D4($s4)
    ctx->pc = 0x2bf6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 0));
label_2bf6b4:
    // 0x2bf6b4: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bf6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bf6b8:
    // 0x2bf6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bf6bc:
    // 0x2bf6bc: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2bf6c0:
    if (ctx->pc == 0x2BF6C0u) {
        ctx->pc = 0x2BF6C0u;
            // 0x2bf6c0: 0xae8201d0  sw          $v0, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
        ctx->pc = 0x2BF6C4u;
        goto label_2bf6c4;
    }
    ctx->pc = 0x2BF6BCu;
    {
        const bool branch_taken_0x2bf6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF6BCu;
            // 0x2bf6c0: 0xae8201d0  sw          $v0, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf6bc) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF6C4u;
label_2bf6c4:
    // 0x2bf6c4: 0x8e8201d4  lw          $v0, 0x1D4($s4)
    ctx->pc = 0x2bf6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
label_2bf6c8:
    // 0x2bf6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bf6cc:
    // 0x2bf6cc: 0xae8201d4  sw          $v0, 0x1D4($s4)
    ctx->pc = 0x2bf6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 468), GPR_U32(ctx, 2));
label_2bf6d0:
    // 0x2bf6d0: 0x8e8201d4  lw          $v0, 0x1D4($s4)
    ctx->pc = 0x2bf6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 468)));
label_2bf6d4:
    // 0x2bf6d4: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x2bf6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_2bf6d8:
    // 0x2bf6d8: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
label_2bf6dc:
    if (ctx->pc == 0x2BF6DCu) {
        ctx->pc = 0x2BF6E0u;
        goto label_2bf6e0;
    }
    ctx->pc = 0x2BF6D8u;
    {
        const bool branch_taken_0x2bf6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf6d8) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF6E0u;
label_2bf6e0:
    // 0x2bf6e0: 0xc052330  jal         func_148CC0
label_2bf6e4:
    if (ctx->pc == 0x2BF6E4u) {
        ctx->pc = 0x2BF6E8u;
        goto label_2bf6e8;
    }
    ctx->pc = 0x2BF6E0u;
    SET_GPR_U32(ctx, 31, 0x2BF6E8u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF6E8u; }
        if (ctx->pc != 0x2BF6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF6E8u; }
        if (ctx->pc != 0x2BF6E8u) { return; }
    }
    ctx->pc = 0x2BF6E8u;
label_2bf6e8:
    // 0x2bf6e8: 0xae8001a8  sw          $zero, 0x1A8($s4)
    ctx->pc = 0x2bf6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 0));
label_2bf6ec:
    // 0x2bf6ec: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2bf6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2bf6f0:
    // 0x2bf6f0: 0xae8001a0  sw          $zero, 0x1A0($s4)
    ctx->pc = 0x2bf6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 416), GPR_U32(ctx, 0));
label_2bf6f4:
    // 0x2bf6f4: 0x26840184  addiu       $a0, $s4, 0x184
    ctx->pc = 0x2bf6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 388));
label_2bf6f8:
    // 0x2bf6f8: 0x8e8201e0  lw          $v0, 0x1E0($s4)
    ctx->pc = 0x2bf6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 480)));
label_2bf6fc:
    // 0x2bf6fc: 0x24a5ca80  addiu       $a1, $a1, -0x3580
    ctx->pc = 0x2bf6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953600));
label_2bf700:
    // 0x2bf700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bf700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2bf704:
    // 0x2bf704: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2bf704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2bf708:
    // 0x2bf708: 0x8c4601e8  lw          $a2, 0x1E8($v0)
    ctx->pc = 0x2bf708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
label_2bf70c:
    // 0x2bf70c: 0xc0aebc4  jal         func_2BAF10
label_2bf710:
    if (ctx->pc == 0x2BF710u) {
        ctx->pc = 0x2BF710u;
            // 0x2bf710: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF714u;
        goto label_2bf714;
    }
    ctx->pc = 0x2BF70Cu;
    SET_GPR_U32(ctx, 31, 0x2BF714u);
    ctx->pc = 0x2BF710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF70Cu;
            // 0x2bf710: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF10u;
    if (runtime->hasFunction(0x2BAF10u)) {
        auto targetFn = runtime->lookupFunction(0x2BAF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF714u; }
        if (ctx->pc != 0x2BF714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBG__FP9mgCMemoryPP17MENU_BGREAD_INFO2ii_0x2baf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF714u; }
        if (ctx->pc != 0x2BF714u) { return; }
    }
    ctx->pc = 0x2BF714u;
label_2bf714:
    // 0x2bf714: 0xae8001b8  sw          $zero, 0x1B8($s4)
    ctx->pc = 0x2bf714u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 440), GPR_U32(ctx, 0));
label_2bf718:
    // 0x2bf718: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2bf718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2bf71c:
    // 0x2bf71c: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bf71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bf720:
    // 0x2bf720: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bf724:
    // 0x2bf724: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bf724u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_2bf728:
    // 0x2bf728: 0x8c22ca80  lw          $v0, -0x3580($at)
    ctx->pc = 0x2bf728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953600)));
label_2bf72c:
    // 0x2bf72c: 0x80420070  lb          $v0, 0x70($v0)
    ctx->pc = 0x2bf72cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_2bf730:
    // 0x2bf730: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
label_2bf734:
    if (ctx->pc == 0x2BF734u) {
        ctx->pc = 0x2BF738u;
        goto label_2bf738;
    }
    ctx->pc = 0x2BF730u;
    {
        const bool branch_taken_0x2bf730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf730) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF738u;
label_2bf738:
    // 0x2bf738: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2bf73c:
    if (ctx->pc == 0x2BF73Cu) {
        ctx->pc = 0x2BF73Cu;
            // 0x2bf73c: 0xae8001d0  sw          $zero, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
        ctx->pc = 0x2BF740u;
        goto label_2bf740;
    }
    ctx->pc = 0x2BF738u;
    {
        const bool branch_taken_0x2bf738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF738u;
            // 0x2bf73c: 0xae8001d0  sw          $zero, 0x1D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf738) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF740u;
label_2bf740:
    // 0x2bf740: 0xc05239c  jal         func_148E70
label_2bf744:
    if (ctx->pc == 0x2BF744u) {
        ctx->pc = 0x2BF748u;
        goto label_2bf748;
    }
    ctx->pc = 0x2BF740u;
    SET_GPR_U32(ctx, 31, 0x2BF748u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF748u; }
        if (ctx->pc != 0x2BF748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF748u; }
        if (ctx->pc != 0x2BF748u) { return; }
    }
    ctx->pc = 0x2BF748u;
label_2bf748:
    // 0x2bf748: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_2bf74c:
    if (ctx->pc == 0x2BF74Cu) {
        ctx->pc = 0x2BF750u;
        goto label_2bf750;
    }
    ctx->pc = 0x2BF748u;
    {
        const bool branch_taken_0x2bf748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bf748) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF750u;
label_2bf750:
    // 0x2bf750: 0x8e8201d0  lw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bf750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 464)));
label_2bf754:
    // 0x2bf754: 0x26840184  addiu       $a0, $s4, 0x184
    ctx->pc = 0x2bf754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 388));
label_2bf758:
    // 0x2bf758: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x2bf758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_2bf75c:
    // 0x2bf75c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bf760:
    // 0x2bf760: 0xae8201d0  sw          $v0, 0x1D0($s4)
    ctx->pc = 0x2bf760u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 464), GPR_U32(ctx, 2));
label_2bf764:
    // 0x2bf764: 0xc04e748  jal         func_139D20
label_2bf768:
    if (ctx->pc == 0x2BF768u) {
        ctx->pc = 0x2BF768u;
            // 0x2bf768: 0xae8001d8  sw          $zero, 0x1D8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 0));
        ctx->pc = 0x2BF76Cu;
        goto label_2bf76c;
    }
    ctx->pc = 0x2BF764u;
    SET_GPR_U32(ctx, 31, 0x2BF76Cu);
    ctx->pc = 0x2BF768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF764u;
            // 0x2bf768: 0xae8001d8  sw          $zero, 0x1D8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF76Cu; }
        if (ctx->pc != 0x2BF76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF76Cu; }
        if (ctx->pc != 0x2BF76Cu) { return; }
    }
    ctx->pc = 0x2BF76Cu;
label_2bf76c:
    // 0x2bf76c: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x2bf76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_2bf770:
    // 0x2bf770: 0xc04e638  jal         func_1398E0
label_2bf774:
    if (ctx->pc == 0x2BF774u) {
        ctx->pc = 0x2BF774u;
            // 0x2bf774: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF778u;
        goto label_2bf778;
    }
    ctx->pc = 0x2BF770u;
    SET_GPR_U32(ctx, 31, 0x2BF778u);
    ctx->pc = 0x2BF774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF770u;
            // 0x2bf774: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF778u; }
        if (ctx->pc != 0x2BF778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF778u; }
        if (ctx->pc != 0x2BF778u) { return; }
    }
    ctx->pc = 0x2BF778u;
label_2bf778:
    // 0x2bf778: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2bf77c:
    if (ctx->pc == 0x2BF77Cu) {
        ctx->pc = 0x2BF77Cu;
            // 0x2bf77c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF780u;
        goto label_2bf780;
    }
    ctx->pc = 0x2BF778u;
    {
        const bool branch_taken_0x2bf778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF778u;
            // 0x2bf77c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf778) {
            ctx->pc = 0x2BF820u;
            goto label_2bf820;
        }
    }
    ctx->pc = 0x2BF780u;
label_2bf780:
    // 0x2bf780: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bf780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bf784:
    // 0x2bf784: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2bf788:
    // 0x2bf788: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bf788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bf78c:
    // 0x2bf78c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bf78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bf790:
    // 0x2bf790: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bf790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bf794:
    // 0x2bf794: 0x320f809  jalr        $t9
label_2bf798:
    if (ctx->pc == 0x2BF798u) {
        ctx->pc = 0x2BF798u;
            // 0x2bf798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF79Cu;
        goto label_2bf79c;
    }
    ctx->pc = 0x2BF794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF79Cu);
        ctx->pc = 0x2BF798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF794u;
            // 0x2bf798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF79Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF79Cu; }
            if (ctx->pc != 0x2BF79Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BF79Cu;
label_2bf79c:
    // 0x2bf79c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bf79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bf7a0:
    // 0x2bf7a0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2bf7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2bf7a4:
    // 0x2bf7a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bf7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bf7a8:
    // 0x2bf7a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bf7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bf7ac:
    // 0x2bf7ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bf7acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bf7b0:
    // 0x2bf7b0: 0x320f809  jalr        $t9
label_2bf7b4:
    if (ctx->pc == 0x2BF7B4u) {
        ctx->pc = 0x2BF7B4u;
            // 0x2bf7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7B8u;
        goto label_2bf7b8;
    }
    ctx->pc = 0x2BF7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF7B8u);
        ctx->pc = 0x2BF7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7B0u;
            // 0x2bf7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF7B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF7B8u; }
            if (ctx->pc != 0x2BF7B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF7B8u;
label_2bf7b8:
    // 0x2bf7b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bf7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bf7bc:
    // 0x2bf7bc: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2bf7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2bf7c0:
    // 0x2bf7c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bf7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bf7c4:
    // 0x2bf7c4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bf7c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bf7c8:
    // 0x2bf7c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bf7c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bf7cc:
    // 0x2bf7cc: 0x320f809  jalr        $t9
label_2bf7d0:
    if (ctx->pc == 0x2BF7D0u) {
        ctx->pc = 0x2BF7D0u;
            // 0x2bf7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7D4u;
        goto label_2bf7d4;
    }
    ctx->pc = 0x2BF7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF7D4u);
        ctx->pc = 0x2BF7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7CCu;
            // 0x2bf7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF7D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF7D4u; }
            if (ctx->pc != 0x2BF7D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF7D4u;
label_2bf7d4:
    // 0x2bf7d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bf7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bf7d8:
    // 0x2bf7d8: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2bf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2bf7dc:
    // 0x2bf7dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bf7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bf7e0:
    // 0x2bf7e0: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x2bf7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_2bf7e4:
    // 0x2bf7e4: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x2bf7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_2bf7e8:
    // 0x2bf7e8: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x2bf7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_2bf7ec:
    // 0x2bf7ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2bf7ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bf7f0:
    // 0x2bf7f0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2bf7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2bf7f4:
    // 0x2bf7f4: 0x320f809  jalr        $t9
label_2bf7f8:
    if (ctx->pc == 0x2BF7F8u) {
        ctx->pc = 0x2BF7F8u;
            // 0x2bf7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF7FCu;
        goto label_2bf7fc;
    }
    ctx->pc = 0x2BF7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF7FCu);
        ctx->pc = 0x2BF7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF7F4u;
            // 0x2bf7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF7FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF7FCu; }
            if (ctx->pc != 0x2BF7FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2BF7FCu;
label_2bf7fc:
    // 0x2bf7fc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2bf7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2bf800:
    // 0x2bf800: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x2bf800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_2bf804:
    // 0x2bf804: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2bf804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_2bf808:
    // 0x2bf808: 0xc061b34  jal         func_186CD0
label_2bf80c:
    if (ctx->pc == 0x2BF80Cu) {
        ctx->pc = 0x2BF80Cu;
            // 0x2bf80c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BF810u;
        goto label_2bf810;
    }
    ctx->pc = 0x2BF808u;
    SET_GPR_U32(ctx, 31, 0x2BF810u);
    ctx->pc = 0x2BF80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF808u;
            // 0x2bf80c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF810u; }
        if (ctx->pc != 0x2BF810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF810u; }
        if (ctx->pc != 0x2BF810u) { return; }
    }
    ctx->pc = 0x2BF810u;
label_2bf810:
    // 0x2bf810: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x2bf810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_2bf814:
    // 0x2bf814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf818:
    // 0x2bf818: 0xc049c86  jal         func_127218
label_2bf81c:
    if (ctx->pc == 0x2BF81Cu) {
        ctx->pc = 0x2BF81Cu;
            // 0x2bf81c: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2BF820u;
        goto label_2bf820;
    }
    ctx->pc = 0x2BF818u;
    SET_GPR_U32(ctx, 31, 0x2BF820u);
    ctx->pc = 0x2BF81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF818u;
            // 0x2bf81c: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF820u; }
        if (ctx->pc != 0x2BF820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF820u; }
        if (ctx->pc != 0x2BF820u) { return; }
    }
    ctx->pc = 0x2BF820u;
label_2bf820:
    // 0x2bf820: 0xae9001b8  sw          $s0, 0x1B8($s4)
    ctx->pc = 0x2bf820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 440), GPR_U32(ctx, 16));
label_2bf824:
    // 0x2bf824: 0x8e8401b8  lw          $a0, 0x1B8($s4)
    ctx->pc = 0x2bf824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_2bf828:
    // 0x2bf828: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf82c:
    // 0x2bf82c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2bf82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2bf830:
    // 0x2bf830: 0x320f809  jalr        $t9
label_2bf834:
    if (ctx->pc == 0x2BF834u) {
        ctx->pc = 0x2BF834u;
            // 0x2bf834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF838u;
        goto label_2bf838;
    }
    ctx->pc = 0x2BF830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF838u);
        ctx->pc = 0x2BF834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF830u;
            // 0x2bf834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF838u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF838u; }
            if (ctx->pc != 0x2BF838u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF838u;
label_2bf838:
    // 0x2bf838: 0x8e8601b4  lw          $a2, 0x1B4($s4)
    ctx->pc = 0x2bf838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
label_2bf83c:
    // 0x2bf83c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2bf83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2bf840:
    // 0x2bf840: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2bf840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
label_2bf844:
    // 0x2bf844: 0x268501b8  addiu       $a1, $s4, 0x1B8
    ctx->pc = 0x2bf844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 440));
label_2bf848:
    // 0x2bf848: 0xc0aec40  jal         func_2BB100
label_2bf84c:
    if (ctx->pc == 0x2BF84Cu) {
        ctx->pc = 0x2BF84Cu;
            // 0x2bf84c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BF850u;
        goto label_2bf850;
    }
    ctx->pc = 0x2BF848u;
    SET_GPR_U32(ctx, 31, 0x2BF850u);
    ctx->pc = 0x2BF84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF848u;
            // 0x2bf84c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB100u;
    if (runtime->hasFunction(0x2BB100u)) {
        auto targetFn = runtime->lookupFunction(0x2BB100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF850u; }
        if (ctx->pc != 0x2BF850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterLoadBGCheck__FPP17MENU_BGREAD_INFO2PP12CActionCharaii_0x2bb100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF850u; }
        if (ctx->pc != 0x2BF850u) { return; }
    }
    ctx->pc = 0x2BF850u;
label_2bf850:
    // 0x2bf850: 0x8e8401b8  lw          $a0, 0x1B8($s4)
    ctx->pc = 0x2bf850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_2bf854:
    // 0x2bf854: 0x3c03c14c  lui         $v1, 0xC14C
    ctx->pc = 0x2bf854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49484 << 16));
label_2bf858:
    // 0x2bf858: 0x3c02c0e0  lui         $v0, 0xC0E0
    ctx->pc = 0x2bf858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49376 << 16));
label_2bf85c:
    // 0x2bf85c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bf85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2bf860:
    // 0x2bf860: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2bf860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bf864:
    // 0x2bf864: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2bf864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2bf868:
    // 0x2bf868: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2bf868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2bf86c:
    // 0x2bf86c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf870:
    // 0x2bf870: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2bf870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2bf874:
    // 0x2bf874: 0x320f809  jalr        $t9
label_2bf878:
    if (ctx->pc == 0x2BF878u) {
        ctx->pc = 0x2BF87Cu;
        goto label_2bf87c;
    }
    ctx->pc = 0x2BF874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF87Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF87Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF87Cu; }
            if (ctx->pc != 0x2BF87Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BF87Cu;
label_2bf87c:
    // 0x2bf87c: 0x8e8401b8  lw          $a0, 0x1B8($s4)
    ctx->pc = 0x2bf87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_2bf880:
    // 0x2bf880: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2bf880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2bf884:
    // 0x2bf884: 0x24a5f7f8  addiu       $a1, $a1, -0x808
    ctx->pc = 0x2bf884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965240));
label_2bf888:
    // 0x2bf888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bf888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf88c:
    // 0x2bf88c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf890:
    // 0x2bf890: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x2bf890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_2bf894:
    // 0x2bf894: 0x320f809  jalr        $t9
label_2bf898:
    if (ctx->pc == 0x2BF898u) {
        ctx->pc = 0x2BF898u;
            // 0x2bf898: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BF89Cu;
        goto label_2bf89c;
    }
    ctx->pc = 0x2BF894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF89Cu);
        ctx->pc = 0x2BF898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF894u;
            // 0x2bf898: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF89Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF89Cu; }
            if (ctx->pc != 0x2BF89Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BF89Cu;
label_2bf89c:
    // 0x2bf89c: 0xc0ad8b4  jal         func_2B62D0
label_2bf8a0:
    if (ctx->pc == 0x2BF8A0u) {
        ctx->pc = 0x2BF8A0u;
            // 0x2bf8a0: 0x8e8401b8  lw          $a0, 0x1B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
        ctx->pc = 0x2BF8A4u;
        goto label_2bf8a4;
    }
    ctx->pc = 0x2BF89Cu;
    SET_GPR_U32(ctx, 31, 0x2BF8A4u);
    ctx->pc = 0x2BF8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF89Cu;
            // 0x2bf8a0: 0x8e8401b8  lw          $a0, 0x1B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B62D0u;
    if (runtime->hasFunction(0x2B62D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B62D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF8A4u; }
        if (ctx->pc != 0x2BF8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterScaleCheck__FP11CCharacter2_0x2b62d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF8A4u; }
        if (ctx->pc != 0x2BF8A4u) { return; }
    }
    ctx->pc = 0x2BF8A4u;
label_2bf8a4:
    // 0x2bf8a4: 0x10000014  b           . + 4 + (0x14 << 2)
label_2bf8a8:
    if (ctx->pc == 0x2BF8A8u) {
        ctx->pc = 0x2BF8ACu;
        goto label_2bf8ac;
    }
    ctx->pc = 0x2BF8A4u;
    {
        const bool branch_taken_0x2bf8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf8a4) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF8ACu;
label_2bf8ac:
    // 0x2bf8ac: 0x828201dc  lb          $v0, 0x1DC($s4)
    ctx->pc = 0x2bf8acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 476)));
label_2bf8b0:
    // 0x2bf8b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bf8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2bf8b4:
    // 0x2bf8b4: 0xa28201dc  sb          $v0, 0x1DC($s4)
    ctx->pc = 0x2bf8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 476), (uint8_t)GPR_U32(ctx, 2));
label_2bf8b8:
    // 0x2bf8b8: 0x828201dc  lb          $v0, 0x1DC($s4)
    ctx->pc = 0x2bf8b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 476)));
label_2bf8bc:
    // 0x2bf8bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bf8c0:
    if (ctx->pc == 0x2BF8C0u) {
        ctx->pc = 0x2BF8C4u;
        goto label_2bf8c4;
    }
    ctx->pc = 0x2BF8BCu;
    {
        const bool branch_taken_0x2bf8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf8bc) {
            ctx->pc = 0x2BF8D8u;
            goto label_2bf8d8;
        }
    }
    ctx->pc = 0x2BF8C4u;
label_2bf8c4:
    // 0x2bf8c4: 0x8e8401b8  lw          $a0, 0x1B8($s4)
    ctx->pc = 0x2bf8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_2bf8c8:
    // 0x2bf8c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf8c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf8cc:
    // 0x2bf8cc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2bf8ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2bf8d0:
    // 0x2bf8d0: 0x320f809  jalr        $t9
label_2bf8d4:
    if (ctx->pc == 0x2BF8D4u) {
        ctx->pc = 0x2BF8D8u;
        goto label_2bf8d8;
    }
    ctx->pc = 0x2BF8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF8D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF8D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF8D8u; }
            if (ctx->pc != 0x2BF8D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF8D8u;
label_2bf8d8:
    // 0x2bf8d8: 0x8e8201d8  lw          $v0, 0x1D8($s4)
    ctx->pc = 0x2bf8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 472)));
label_2bf8dc:
    // 0x2bf8dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bf8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bf8e0:
    // 0x2bf8e0: 0xae8201d8  sw          $v0, 0x1D8($s4)
    ctx->pc = 0x2bf8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 2));
label_2bf8e4:
    // 0x2bf8e4: 0x8e8201d8  lw          $v0, 0x1D8($s4)
    ctx->pc = 0x2bf8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 472)));
label_2bf8e8:
    // 0x2bf8e8: 0x28410015  slti        $at, $v0, 0x15
    ctx->pc = 0x2bf8e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)21) ? 1 : 0);
label_2bf8ec:
    // 0x2bf8ec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2bf8f0:
    if (ctx->pc == 0x2BF8F0u) {
        ctx->pc = 0x2BF8F0u;
            // 0x2bf8f0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2BF8F4u;
        goto label_2bf8f4;
    }
    ctx->pc = 0x2BF8ECu;
    {
        const bool branch_taken_0x2bf8ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BF8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF8ECu;
            // 0x2bf8f0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf8ec) {
            ctx->pc = 0x2BF8F8u;
            goto label_2bf8f8;
        }
    }
    ctx->pc = 0x2BF8F4u;
label_2bf8f4:
    // 0x2bf8f4: 0xae8201d8  sw          $v0, 0x1D8($s4)
    ctx->pc = 0x2bf8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 472), GPR_U32(ctx, 2));
label_2bf8f8:
    // 0x2bf8f8: 0xc6820180  lwc1        $f2, 0x180($s4)
    ctx->pc = 0x2bf8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2bf8fc:
    // 0x2bf8fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2bf8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2bf900:
    // 0x2bf900: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bf900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2bf904:
    // 0x2bf904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bf904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf908:
    // 0x2bf908: 0x0  nop
    ctx->pc = 0x2bf908u;
    // NOP
label_2bf90c:
    // 0x2bf90c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2bf90cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2bf910:
    // 0x2bf910: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bf910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2bf914:
    // 0x2bf914: 0x0  nop
    ctx->pc = 0x2bf914u;
    // NOP
label_2bf918:
    // 0x2bf918: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2bf91c:
    if (ctx->pc == 0x2BF91Cu) {
        ctx->pc = 0x2BF91Cu;
            // 0x2bf91c: 0xe6810180  swc1        $f1, 0x180($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 384), bits); }
        ctx->pc = 0x2BF920u;
        goto label_2bf920;
    }
    ctx->pc = 0x2BF918u;
    {
        const bool branch_taken_0x2bf918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF918u;
            // 0x2bf91c: 0xe6810180  swc1        $f1, 0x180($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 384), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf918) {
            ctx->pc = 0x2BF934u;
            goto label_2bf934;
        }
    }
    ctx->pc = 0x2BF920u;
label_2bf920:
    // 0x2bf920: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2bf920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_2bf924:
    // 0x2bf924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2bf928:
    // 0x2bf928: 0x0  nop
    ctx->pc = 0x2bf928u;
    // NOP
label_2bf92c:
    // 0x2bf92c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2bf92cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2bf930:
    // 0x2bf930: 0xe6800180  swc1        $f0, 0x180($s4)
    ctx->pc = 0x2bf930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 384), bits); }
label_2bf934:
    // 0x2bf934: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bf934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bf938:
    // 0x2bf938: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bf938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2bf93c:
    // 0x2bf93c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bf93cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bf940:
    // 0x2bf940: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bf940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bf944:
    // 0x2bf944: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bf944u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bf948:
    // 0x2bf948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bf948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bf94c:
    // 0x2bf94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bf94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bf950:
    // 0x2bf950: 0x3e00008  jr          $ra
label_2bf954:
    if (ctx->pc == 0x2BF954u) {
        ctx->pc = 0x2BF954u;
            // 0x2bf954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2BF958u;
        goto label_fallthrough_0x2bf950;
    }
    ctx->pc = 0x2BF950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF950u;
            // 0x2bf954: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2bf950:
    ctx->pc = 0x2BF958u;
}
