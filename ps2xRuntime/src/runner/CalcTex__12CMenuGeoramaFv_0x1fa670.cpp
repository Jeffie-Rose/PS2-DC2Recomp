#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__12CMenuGeoramaFv
// Address: 0x1fa670 - 0x1faba8
void CalcTex__12CMenuGeoramaFv_0x1fa670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__12CMenuGeoramaFv_0x1fa670");
#endif

    switch (ctx->pc) {
        case 0x1fa670u: goto label_1fa670;
        case 0x1fa674u: goto label_1fa674;
        case 0x1fa678u: goto label_1fa678;
        case 0x1fa67cu: goto label_1fa67c;
        case 0x1fa680u: goto label_1fa680;
        case 0x1fa684u: goto label_1fa684;
        case 0x1fa688u: goto label_1fa688;
        case 0x1fa68cu: goto label_1fa68c;
        case 0x1fa690u: goto label_1fa690;
        case 0x1fa694u: goto label_1fa694;
        case 0x1fa698u: goto label_1fa698;
        case 0x1fa69cu: goto label_1fa69c;
        case 0x1fa6a0u: goto label_1fa6a0;
        case 0x1fa6a4u: goto label_1fa6a4;
        case 0x1fa6a8u: goto label_1fa6a8;
        case 0x1fa6acu: goto label_1fa6ac;
        case 0x1fa6b0u: goto label_1fa6b0;
        case 0x1fa6b4u: goto label_1fa6b4;
        case 0x1fa6b8u: goto label_1fa6b8;
        case 0x1fa6bcu: goto label_1fa6bc;
        case 0x1fa6c0u: goto label_1fa6c0;
        case 0x1fa6c4u: goto label_1fa6c4;
        case 0x1fa6c8u: goto label_1fa6c8;
        case 0x1fa6ccu: goto label_1fa6cc;
        case 0x1fa6d0u: goto label_1fa6d0;
        case 0x1fa6d4u: goto label_1fa6d4;
        case 0x1fa6d8u: goto label_1fa6d8;
        case 0x1fa6dcu: goto label_1fa6dc;
        case 0x1fa6e0u: goto label_1fa6e0;
        case 0x1fa6e4u: goto label_1fa6e4;
        case 0x1fa6e8u: goto label_1fa6e8;
        case 0x1fa6ecu: goto label_1fa6ec;
        case 0x1fa6f0u: goto label_1fa6f0;
        case 0x1fa6f4u: goto label_1fa6f4;
        case 0x1fa6f8u: goto label_1fa6f8;
        case 0x1fa6fcu: goto label_1fa6fc;
        case 0x1fa700u: goto label_1fa700;
        case 0x1fa704u: goto label_1fa704;
        case 0x1fa708u: goto label_1fa708;
        case 0x1fa70cu: goto label_1fa70c;
        case 0x1fa710u: goto label_1fa710;
        case 0x1fa714u: goto label_1fa714;
        case 0x1fa718u: goto label_1fa718;
        case 0x1fa71cu: goto label_1fa71c;
        case 0x1fa720u: goto label_1fa720;
        case 0x1fa724u: goto label_1fa724;
        case 0x1fa728u: goto label_1fa728;
        case 0x1fa72cu: goto label_1fa72c;
        case 0x1fa730u: goto label_1fa730;
        case 0x1fa734u: goto label_1fa734;
        case 0x1fa738u: goto label_1fa738;
        case 0x1fa73cu: goto label_1fa73c;
        case 0x1fa740u: goto label_1fa740;
        case 0x1fa744u: goto label_1fa744;
        case 0x1fa748u: goto label_1fa748;
        case 0x1fa74cu: goto label_1fa74c;
        case 0x1fa750u: goto label_1fa750;
        case 0x1fa754u: goto label_1fa754;
        case 0x1fa758u: goto label_1fa758;
        case 0x1fa75cu: goto label_1fa75c;
        case 0x1fa760u: goto label_1fa760;
        case 0x1fa764u: goto label_1fa764;
        case 0x1fa768u: goto label_1fa768;
        case 0x1fa76cu: goto label_1fa76c;
        case 0x1fa770u: goto label_1fa770;
        case 0x1fa774u: goto label_1fa774;
        case 0x1fa778u: goto label_1fa778;
        case 0x1fa77cu: goto label_1fa77c;
        case 0x1fa780u: goto label_1fa780;
        case 0x1fa784u: goto label_1fa784;
        case 0x1fa788u: goto label_1fa788;
        case 0x1fa78cu: goto label_1fa78c;
        case 0x1fa790u: goto label_1fa790;
        case 0x1fa794u: goto label_1fa794;
        case 0x1fa798u: goto label_1fa798;
        case 0x1fa79cu: goto label_1fa79c;
        case 0x1fa7a0u: goto label_1fa7a0;
        case 0x1fa7a4u: goto label_1fa7a4;
        case 0x1fa7a8u: goto label_1fa7a8;
        case 0x1fa7acu: goto label_1fa7ac;
        case 0x1fa7b0u: goto label_1fa7b0;
        case 0x1fa7b4u: goto label_1fa7b4;
        case 0x1fa7b8u: goto label_1fa7b8;
        case 0x1fa7bcu: goto label_1fa7bc;
        case 0x1fa7c0u: goto label_1fa7c0;
        case 0x1fa7c4u: goto label_1fa7c4;
        case 0x1fa7c8u: goto label_1fa7c8;
        case 0x1fa7ccu: goto label_1fa7cc;
        case 0x1fa7d0u: goto label_1fa7d0;
        case 0x1fa7d4u: goto label_1fa7d4;
        case 0x1fa7d8u: goto label_1fa7d8;
        case 0x1fa7dcu: goto label_1fa7dc;
        case 0x1fa7e0u: goto label_1fa7e0;
        case 0x1fa7e4u: goto label_1fa7e4;
        case 0x1fa7e8u: goto label_1fa7e8;
        case 0x1fa7ecu: goto label_1fa7ec;
        case 0x1fa7f0u: goto label_1fa7f0;
        case 0x1fa7f4u: goto label_1fa7f4;
        case 0x1fa7f8u: goto label_1fa7f8;
        case 0x1fa7fcu: goto label_1fa7fc;
        case 0x1fa800u: goto label_1fa800;
        case 0x1fa804u: goto label_1fa804;
        case 0x1fa808u: goto label_1fa808;
        case 0x1fa80cu: goto label_1fa80c;
        case 0x1fa810u: goto label_1fa810;
        case 0x1fa814u: goto label_1fa814;
        case 0x1fa818u: goto label_1fa818;
        case 0x1fa81cu: goto label_1fa81c;
        case 0x1fa820u: goto label_1fa820;
        case 0x1fa824u: goto label_1fa824;
        case 0x1fa828u: goto label_1fa828;
        case 0x1fa82cu: goto label_1fa82c;
        case 0x1fa830u: goto label_1fa830;
        case 0x1fa834u: goto label_1fa834;
        case 0x1fa838u: goto label_1fa838;
        case 0x1fa83cu: goto label_1fa83c;
        case 0x1fa840u: goto label_1fa840;
        case 0x1fa844u: goto label_1fa844;
        case 0x1fa848u: goto label_1fa848;
        case 0x1fa84cu: goto label_1fa84c;
        case 0x1fa850u: goto label_1fa850;
        case 0x1fa854u: goto label_1fa854;
        case 0x1fa858u: goto label_1fa858;
        case 0x1fa85cu: goto label_1fa85c;
        case 0x1fa860u: goto label_1fa860;
        case 0x1fa864u: goto label_1fa864;
        case 0x1fa868u: goto label_1fa868;
        case 0x1fa86cu: goto label_1fa86c;
        case 0x1fa870u: goto label_1fa870;
        case 0x1fa874u: goto label_1fa874;
        case 0x1fa878u: goto label_1fa878;
        case 0x1fa87cu: goto label_1fa87c;
        case 0x1fa880u: goto label_1fa880;
        case 0x1fa884u: goto label_1fa884;
        case 0x1fa888u: goto label_1fa888;
        case 0x1fa88cu: goto label_1fa88c;
        case 0x1fa890u: goto label_1fa890;
        case 0x1fa894u: goto label_1fa894;
        case 0x1fa898u: goto label_1fa898;
        case 0x1fa89cu: goto label_1fa89c;
        case 0x1fa8a0u: goto label_1fa8a0;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8a8u: goto label_1fa8a8;
        case 0x1fa8acu: goto label_1fa8ac;
        case 0x1fa8b0u: goto label_1fa8b0;
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8bcu: goto label_1fa8bc;
        case 0x1fa8c0u: goto label_1fa8c0;
        case 0x1fa8c4u: goto label_1fa8c4;
        case 0x1fa8c8u: goto label_1fa8c8;
        case 0x1fa8ccu: goto label_1fa8cc;
        case 0x1fa8d0u: goto label_1fa8d0;
        case 0x1fa8d4u: goto label_1fa8d4;
        case 0x1fa8d8u: goto label_1fa8d8;
        case 0x1fa8dcu: goto label_1fa8dc;
        case 0x1fa8e0u: goto label_1fa8e0;
        case 0x1fa8e4u: goto label_1fa8e4;
        case 0x1fa8e8u: goto label_1fa8e8;
        case 0x1fa8ecu: goto label_1fa8ec;
        case 0x1fa8f0u: goto label_1fa8f0;
        case 0x1fa8f4u: goto label_1fa8f4;
        case 0x1fa8f8u: goto label_1fa8f8;
        case 0x1fa8fcu: goto label_1fa8fc;
        case 0x1fa900u: goto label_1fa900;
        case 0x1fa904u: goto label_1fa904;
        case 0x1fa908u: goto label_1fa908;
        case 0x1fa90cu: goto label_1fa90c;
        case 0x1fa910u: goto label_1fa910;
        case 0x1fa914u: goto label_1fa914;
        case 0x1fa918u: goto label_1fa918;
        case 0x1fa91cu: goto label_1fa91c;
        case 0x1fa920u: goto label_1fa920;
        case 0x1fa924u: goto label_1fa924;
        case 0x1fa928u: goto label_1fa928;
        case 0x1fa92cu: goto label_1fa92c;
        case 0x1fa930u: goto label_1fa930;
        case 0x1fa934u: goto label_1fa934;
        case 0x1fa938u: goto label_1fa938;
        case 0x1fa93cu: goto label_1fa93c;
        case 0x1fa940u: goto label_1fa940;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa948u: goto label_1fa948;
        case 0x1fa94cu: goto label_1fa94c;
        case 0x1fa950u: goto label_1fa950;
        case 0x1fa954u: goto label_1fa954;
        case 0x1fa958u: goto label_1fa958;
        case 0x1fa95cu: goto label_1fa95c;
        case 0x1fa960u: goto label_1fa960;
        case 0x1fa964u: goto label_1fa964;
        case 0x1fa968u: goto label_1fa968;
        case 0x1fa96cu: goto label_1fa96c;
        case 0x1fa970u: goto label_1fa970;
        case 0x1fa974u: goto label_1fa974;
        case 0x1fa978u: goto label_1fa978;
        case 0x1fa97cu: goto label_1fa97c;
        case 0x1fa980u: goto label_1fa980;
        case 0x1fa984u: goto label_1fa984;
        case 0x1fa988u: goto label_1fa988;
        case 0x1fa98cu: goto label_1fa98c;
        case 0x1fa990u: goto label_1fa990;
        case 0x1fa994u: goto label_1fa994;
        case 0x1fa998u: goto label_1fa998;
        case 0x1fa99cu: goto label_1fa99c;
        case 0x1fa9a0u: goto label_1fa9a0;
        case 0x1fa9a4u: goto label_1fa9a4;
        case 0x1fa9a8u: goto label_1fa9a8;
        case 0x1fa9acu: goto label_1fa9ac;
        case 0x1fa9b0u: goto label_1fa9b0;
        case 0x1fa9b4u: goto label_1fa9b4;
        case 0x1fa9b8u: goto label_1fa9b8;
        case 0x1fa9bcu: goto label_1fa9bc;
        case 0x1fa9c0u: goto label_1fa9c0;
        case 0x1fa9c4u: goto label_1fa9c4;
        case 0x1fa9c8u: goto label_1fa9c8;
        case 0x1fa9ccu: goto label_1fa9cc;
        case 0x1fa9d0u: goto label_1fa9d0;
        case 0x1fa9d4u: goto label_1fa9d4;
        case 0x1fa9d8u: goto label_1fa9d8;
        case 0x1fa9dcu: goto label_1fa9dc;
        case 0x1fa9e0u: goto label_1fa9e0;
        case 0x1fa9e4u: goto label_1fa9e4;
        case 0x1fa9e8u: goto label_1fa9e8;
        case 0x1fa9ecu: goto label_1fa9ec;
        case 0x1fa9f0u: goto label_1fa9f0;
        case 0x1fa9f4u: goto label_1fa9f4;
        case 0x1fa9f8u: goto label_1fa9f8;
        case 0x1fa9fcu: goto label_1fa9fc;
        case 0x1faa00u: goto label_1faa00;
        case 0x1faa04u: goto label_1faa04;
        case 0x1faa08u: goto label_1faa08;
        case 0x1faa0cu: goto label_1faa0c;
        case 0x1faa10u: goto label_1faa10;
        case 0x1faa14u: goto label_1faa14;
        case 0x1faa18u: goto label_1faa18;
        case 0x1faa1cu: goto label_1faa1c;
        case 0x1faa20u: goto label_1faa20;
        case 0x1faa24u: goto label_1faa24;
        case 0x1faa28u: goto label_1faa28;
        case 0x1faa2cu: goto label_1faa2c;
        case 0x1faa30u: goto label_1faa30;
        case 0x1faa34u: goto label_1faa34;
        case 0x1faa38u: goto label_1faa38;
        case 0x1faa3cu: goto label_1faa3c;
        case 0x1faa40u: goto label_1faa40;
        case 0x1faa44u: goto label_1faa44;
        case 0x1faa48u: goto label_1faa48;
        case 0x1faa4cu: goto label_1faa4c;
        case 0x1faa50u: goto label_1faa50;
        case 0x1faa54u: goto label_1faa54;
        case 0x1faa58u: goto label_1faa58;
        case 0x1faa5cu: goto label_1faa5c;
        case 0x1faa60u: goto label_1faa60;
        case 0x1faa64u: goto label_1faa64;
        case 0x1faa68u: goto label_1faa68;
        case 0x1faa6cu: goto label_1faa6c;
        case 0x1faa70u: goto label_1faa70;
        case 0x1faa74u: goto label_1faa74;
        case 0x1faa78u: goto label_1faa78;
        case 0x1faa7cu: goto label_1faa7c;
        case 0x1faa80u: goto label_1faa80;
        case 0x1faa84u: goto label_1faa84;
        case 0x1faa88u: goto label_1faa88;
        case 0x1faa8cu: goto label_1faa8c;
        case 0x1faa90u: goto label_1faa90;
        case 0x1faa94u: goto label_1faa94;
        case 0x1faa98u: goto label_1faa98;
        case 0x1faa9cu: goto label_1faa9c;
        case 0x1faaa0u: goto label_1faaa0;
        case 0x1faaa4u: goto label_1faaa4;
        case 0x1faaa8u: goto label_1faaa8;
        case 0x1faaacu: goto label_1faaac;
        case 0x1faab0u: goto label_1faab0;
        case 0x1faab4u: goto label_1faab4;
        case 0x1faab8u: goto label_1faab8;
        case 0x1faabcu: goto label_1faabc;
        case 0x1faac0u: goto label_1faac0;
        case 0x1faac4u: goto label_1faac4;
        case 0x1faac8u: goto label_1faac8;
        case 0x1faaccu: goto label_1faacc;
        case 0x1faad0u: goto label_1faad0;
        case 0x1faad4u: goto label_1faad4;
        case 0x1faad8u: goto label_1faad8;
        case 0x1faadcu: goto label_1faadc;
        case 0x1faae0u: goto label_1faae0;
        case 0x1faae4u: goto label_1faae4;
        case 0x1faae8u: goto label_1faae8;
        case 0x1faaecu: goto label_1faaec;
        case 0x1faaf0u: goto label_1faaf0;
        case 0x1faaf4u: goto label_1faaf4;
        case 0x1faaf8u: goto label_1faaf8;
        case 0x1faafcu: goto label_1faafc;
        case 0x1fab00u: goto label_1fab00;
        case 0x1fab04u: goto label_1fab04;
        case 0x1fab08u: goto label_1fab08;
        case 0x1fab0cu: goto label_1fab0c;
        case 0x1fab10u: goto label_1fab10;
        case 0x1fab14u: goto label_1fab14;
        case 0x1fab18u: goto label_1fab18;
        case 0x1fab1cu: goto label_1fab1c;
        case 0x1fab20u: goto label_1fab20;
        case 0x1fab24u: goto label_1fab24;
        case 0x1fab28u: goto label_1fab28;
        case 0x1fab2cu: goto label_1fab2c;
        case 0x1fab30u: goto label_1fab30;
        case 0x1fab34u: goto label_1fab34;
        case 0x1fab38u: goto label_1fab38;
        case 0x1fab3cu: goto label_1fab3c;
        case 0x1fab40u: goto label_1fab40;
        case 0x1fab44u: goto label_1fab44;
        case 0x1fab48u: goto label_1fab48;
        case 0x1fab4cu: goto label_1fab4c;
        case 0x1fab50u: goto label_1fab50;
        case 0x1fab54u: goto label_1fab54;
        case 0x1fab58u: goto label_1fab58;
        case 0x1fab5cu: goto label_1fab5c;
        case 0x1fab60u: goto label_1fab60;
        case 0x1fab64u: goto label_1fab64;
        case 0x1fab68u: goto label_1fab68;
        case 0x1fab6cu: goto label_1fab6c;
        case 0x1fab70u: goto label_1fab70;
        case 0x1fab74u: goto label_1fab74;
        case 0x1fab78u: goto label_1fab78;
        case 0x1fab7cu: goto label_1fab7c;
        case 0x1fab80u: goto label_1fab80;
        case 0x1fab84u: goto label_1fab84;
        case 0x1fab88u: goto label_1fab88;
        case 0x1fab8cu: goto label_1fab8c;
        case 0x1fab90u: goto label_1fab90;
        case 0x1fab94u: goto label_1fab94;
        case 0x1fab98u: goto label_1fab98;
        case 0x1fab9cu: goto label_1fab9c;
        case 0x1faba0u: goto label_1faba0;
        case 0x1faba4u: goto label_1faba4;
        default: break;
    }

    ctx->pc = 0x1fa670u;

label_1fa670:
    // 0x1fa670: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fa670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1fa674:
    // 0x1fa674: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1fa674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1fa678:
    // 0x1fa678: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fa678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1fa67c:
    // 0x1fa67c: 0x3462b8e8  ori         $v0, $v1, 0xB8E8
    ctx->pc = 0x1fa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47336);
label_1fa680:
    // 0x1fa680: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fa680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fa684:
    // 0x1fa684: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fa688:
    // 0x1fa688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fa688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fa68c:
    // 0x1fa68c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fa690:
    // 0x1fa690: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fa694:
    // 0x1fa694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fa694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa698:
    // 0x1fa698: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fa698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa69c:
    // 0x1fa69c: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
label_1fa6a0:
    if (ctx->pc == 0x1FA6A0u) {
        ctx->pc = 0x1FA6A0u;
            // 0x1fa6a0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1FA6A4u;
        goto label_1fa6a4;
    }
    ctx->pc = 0x1FA69Cu;
    {
        const bool branch_taken_0x1fa69c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA69Cu;
            // 0x1fa6a0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa69c) {
            ctx->pc = 0x1FA84Cu;
            goto label_1fa84c;
        }
    }
    ctx->pc = 0x1FA6A4u;
label_1fa6a4:
    // 0x1fa6a4: 0x3462b8ec  ori         $v0, $v1, 0xB8EC
    ctx->pc = 0x1fa6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47340);
label_1fa6a8:
    // 0x1fa6a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1fa6ac:
    // 0x1fa6ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa6b0:
    // 0x1fa6b0: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_1fa6b4:
    if (ctx->pc == 0x1FA6B4u) {
        ctx->pc = 0x1FA6B8u;
        goto label_1fa6b8;
    }
    ctx->pc = 0x1FA6B0u;
    {
        const bool branch_taken_0x1fa6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa6b0) {
            ctx->pc = 0x1FA848u;
            goto label_1fa848;
        }
    }
    ctx->pc = 0x1FA6B8u;
label_1fa6b8:
    // 0x1fa6b8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1fa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1fa6bc:
    // 0x1fa6bc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1fa6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_1fa6c0:
    // 0x1fa6c0: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_1fa6c4:
    if (ctx->pc == 0x1FA6C4u) {
        ctx->pc = 0x1FA6C4u;
            // 0x1fa6c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6C8u;
        goto label_1fa6c8;
    }
    ctx->pc = 0x1FA6C0u;
    {
        const bool branch_taken_0x1fa6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA6C0u;
            // 0x1fa6c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6c0) {
            ctx->pc = 0x1FA824u;
            goto label_1fa824;
        }
    }
    ctx->pc = 0x1FA6C8u;
label_1fa6c8:
    // 0x1fa6c8: 0xc7839010  lwc1        $f3, -0x6FF0($gp)
    ctx->pc = 0x1fa6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fa6cc:
    // 0x1fa6cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fa6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa6d0:
    // 0x1fa6d0: 0x0  nop
    ctx->pc = 0x1fa6d0u;
    // NOP
label_1fa6d4:
    // 0x1fa6d4: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x1fa6d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa6d8:
    // 0x1fa6d8: 0x0  nop
    ctx->pc = 0x1fa6d8u;
    // NOP
label_1fa6dc:
    // 0x1fa6dc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1fa6e0:
    if (ctx->pc == 0x1FA6E0u) {
        ctx->pc = 0x1FA6E4u;
        goto label_1fa6e4;
    }
    ctx->pc = 0x1FA6DCu;
    {
        const bool branch_taken_0x1fa6dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa6dc) {
            ctx->pc = 0x1FA6FCu;
            goto label_1fa6fc;
        }
    }
    ctx->pc = 0x1FA6E4u;
label_1fa6e4:
    // 0x1fa6e4: 0xc7819014  lwc1        $f1, -0x6FEC($gp)
    ctx->pc = 0x1fa6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa6e8:
    // 0x1fa6e8: 0x3c024340  lui         $v0, 0x4340
    ctx->pc = 0x1fa6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17216 << 16));
label_1fa6ec:
    // 0x1fa6ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa6f0:
    // 0x1fa6f0: 0x0  nop
    ctx->pc = 0x1fa6f0u;
    // NOP
label_1fa6f4:
    // 0x1fa6f4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x1fa6f4u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
label_1fa6f8:
    // 0x1fa6f8: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1fa6f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1fa6fc:
    // 0x1fa6fc: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1fa6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa700:
    // 0x1fa700: 0x3c024260  lui         $v0, 0x4260
    ctx->pc = 0x1fa700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16992 << 16));
label_1fa704:
    // 0x1fa704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa708:
    // 0x1fa708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa70c:
    // 0x1fa70c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1fa70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fa710:
    // 0x1fa710: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1fa710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1fa714:
    // 0x1fa714: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1fa714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fa718:
    // 0x1fa718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fa718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fa71c:
    // 0x1fa71c: 0x27849048  addiu       $a0, $gp, -0x6FB8
    ctx->pc = 0x1fa71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938696));
label_1fa720:
    // 0x1fa720: 0xc094514  jal         func_251450
label_1fa724:
    if (ctx->pc == 0x1FA724u) {
        ctx->pc = 0x1FA724u;
            // 0x1fa724: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x1FA728u;
        goto label_1fa728;
    }
    ctx->pc = 0x1FA720u;
    SET_GPR_U32(ctx, 31, 0x1FA728u);
    ctx->pc = 0x1FA724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA720u;
            // 0x1fa724: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA728u; }
        if (ctx->pc != 0x1FA728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA728u; }
        if (ctx->pc != 0x1FA728u) { return; }
    }
    ctx->pc = 0x1FA728u;
label_1fa728:
    // 0x1fa728: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa72c:
    // 0x1fa72c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fa730:
    // 0x1fa730: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa730u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa734:
    // 0x1fa734: 0x8c24b8ec  lw          $a0, -0x4714($at)
    ctx->pc = 0x1fa734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949100)));
label_1fa738:
    // 0x1fa738: 0xc089664  jal         func_225990
label_1fa73c:
    if (ctx->pc == 0x1FA73Cu) {
        ctx->pc = 0x1FA73Cu;
            // 0x1fa73c: 0x24a58c98  addiu       $a1, $a1, -0x7368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937752));
        ctx->pc = 0x1FA740u;
        goto label_1fa740;
    }
    ctx->pc = 0x1FA738u;
    SET_GPR_U32(ctx, 31, 0x1FA740u);
    ctx->pc = 0x1FA73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA738u;
            // 0x1fa73c: 0x24a58c98  addiu       $a1, $a1, -0x7368 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA740u; }
        if (ctx->pc != 0x1FA740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA740u; }
        if (ctx->pc != 0x1FA740u) { return; }
    }
    ctx->pc = 0x1FA740u;
label_1fa740:
    // 0x1fa740: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa744:
    // 0x1fa744: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fa748:
    // 0x1fa748: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa74c:
    // 0x1fa74c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fa74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa750:
    // 0x1fa750: 0x8c24b8ec  lw          $a0, -0x4714($at)
    ctx->pc = 0x1fa750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949100)));
label_1fa754:
    // 0x1fa754: 0xc089664  jal         func_225990
label_1fa758:
    if (ctx->pc == 0x1FA758u) {
        ctx->pc = 0x1FA758u;
            // 0x1fa758: 0x24a58ca0  addiu       $a1, $a1, -0x7360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937760));
        ctx->pc = 0x1FA75Cu;
        goto label_1fa75c;
    }
    ctx->pc = 0x1FA754u;
    SET_GPR_U32(ctx, 31, 0x1FA75Cu);
    ctx->pc = 0x1FA758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA754u;
            // 0x1fa758: 0x24a58ca0  addiu       $a1, $a1, -0x7360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA75Cu; }
        if (ctx->pc != 0x1FA75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA75Cu; }
        if (ctx->pc != 0x1FA75Cu) { return; }
    }
    ctx->pc = 0x1FA75Cu;
label_1fa75c:
    // 0x1fa75c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa760:
    // 0x1fa760: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fa764:
    // 0x1fa764: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa764u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa768:
    // 0x1fa768: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fa768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fa76c:
    // 0x1fa76c: 0x8c24b8ec  lw          $a0, -0x4714($at)
    ctx->pc = 0x1fa76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949100)));
label_1fa770:
    // 0x1fa770: 0xc089664  jal         func_225990
label_1fa774:
    if (ctx->pc == 0x1FA774u) {
        ctx->pc = 0x1FA774u;
            // 0x1fa774: 0x24a58ca8  addiu       $a1, $a1, -0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937768));
        ctx->pc = 0x1FA778u;
        goto label_1fa778;
    }
    ctx->pc = 0x1FA770u;
    SET_GPR_U32(ctx, 31, 0x1FA778u);
    ctx->pc = 0x1FA774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA770u;
            // 0x1fa774: 0x24a58ca8  addiu       $a1, $a1, -0x7358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA778u; }
        if (ctx->pc != 0x1FA778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA778u; }
        if (ctx->pc != 0x1FA778u) { return; }
    }
    ctx->pc = 0x1FA778u;
label_1fa778:
    // 0x1fa778: 0xc7818180  lwc1        $f1, -0x7E80($gp)
    ctx->pc = 0x1fa778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa77c:
    // 0x1fa77c: 0x3c034321  lui         $v1, 0x4321
    ctx->pc = 0x1fa77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17185 << 16));
label_1fa780:
    // 0x1fa780: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1fa780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa784:
    // 0x1fa784: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1fa784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_1fa788:
    // 0x1fa788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa78c:
    // 0x1fa78c: 0x0  nop
    ctx->pc = 0x1fa78cu;
    // NOP
label_1fa790:
    // 0x1fa790: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1fa794:
    // 0x1fa794: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fa794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1fa798:
    // 0x1fa798: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1fa798u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1fa79c:
    // 0x1fa79c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1fa79cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1fa7a0:
    // 0x1fa7a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1fa7a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1fa7a4:
    // 0x1fa7a4: 0x0  nop
    ctx->pc = 0x1fa7a4u;
    // NOP
label_1fa7a8:
    // 0x1fa7a8: 0x0  nop
    ctx->pc = 0x1fa7a8u;
    // NOP
label_1fa7ac:
    // 0x1fa7ac: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x1fa7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa7b0:
    // 0x1fa7b0: 0x0  nop
    ctx->pc = 0x1fa7b0u;
    // NOP
label_1fa7b4:
    // 0x1fa7b4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1fa7b8:
    if (ctx->pc == 0x1FA7B8u) {
        ctx->pc = 0x1FA7BCu;
        goto label_1fa7bc;
    }
    ctx->pc = 0x1FA7B4u;
    {
        const bool branch_taken_0x1fa7b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa7b4) {
            ctx->pc = 0x1FA7C4u;
            goto label_1fa7c4;
        }
    }
    ctx->pc = 0x1FA7BCu;
label_1fa7bc:
    // 0x1fa7bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fa7c0:
    if (ctx->pc == 0x1FA7C0u) {
        ctx->pc = 0x1FA7C0u;
            // 0x1fa7c0: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->pc = 0x1FA7C4u;
        goto label_1fa7c4;
    }
    ctx->pc = 0x1FA7BCu;
    {
        const bool branch_taken_0x1fa7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7BCu;
            // 0x1fa7c0: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7bc) {
            ctx->pc = 0x1FA7CCu;
            goto label_1fa7cc;
        }
    }
    ctx->pc = 0x1FA7C4u;
label_1fa7c4:
    // 0x1fa7c4: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x1fa7c4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_1fa7c8:
    // 0x1fa7c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1fa7c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa7cc:
    // 0x1fa7cc: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_1fa7d0:
    if (ctx->pc == 0x1FA7D0u) {
        ctx->pc = 0x1FA7D0u;
            // 0x1fa7d0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x1FA7D4u;
        goto label_1fa7d4;
    }
    ctx->pc = 0x1FA7CCu;
    {
        const bool branch_taken_0x1fa7cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA7CCu;
            // 0x1fa7d0: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7cc) {
            ctx->pc = 0x1FA808u;
            goto label_1fa808;
        }
    }
    ctx->pc = 0x1FA7D4u;
label_1fa7d4:
    // 0x1fa7d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fa7d8:
    if (ctx->pc == 0x1FA7D8u) {
        ctx->pc = 0x1FA7DCu;
        goto label_1fa7dc;
    }
    ctx->pc = 0x1FA7D4u;
    {
        const bool branch_taken_0x1fa7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7d4) {
            ctx->pc = 0x1FA804u;
            goto label_1fa804;
        }
    }
    ctx->pc = 0x1FA7DCu;
label_1fa7dc:
    // 0x1fa7dc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1fa7e0:
    if (ctx->pc == 0x1FA7E0u) {
        ctx->pc = 0x1FA7E4u;
        goto label_1fa7e4;
    }
    ctx->pc = 0x1FA7DCu;
    {
        const bool branch_taken_0x1fa7dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7dc) {
            ctx->pc = 0x1FA804u;
            goto label_1fa804;
        }
    }
    ctx->pc = 0x1FA7E4u;
label_1fa7e4:
    // 0x1fa7e4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1fa7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa7e8:
    // 0x1fa7e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fa7e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fa7ec:
    // 0x1fa7ec: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1fa7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1fa7f0:
    // 0x1fa7f0: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x1fa7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1fa7f4:
    // 0x1fa7f4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1fa7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa7f8:
    // 0x1fa7f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1fa7f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1fa7fc:
    // 0x1fa7fc: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1fa7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
label_1fa800:
    // 0x1fa800: 0xe6430028  swc1        $f3, 0x28($s2)
    ctx->pc = 0x1fa800u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_1fa804:
    // 0x1fa804: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa808:
    // 0x1fa808: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fa80c:
    // 0x1fa80c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa80cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa810:
    // 0x1fa810: 0x8f868180  lw          $a2, -0x7E80($gp)
    ctx->pc = 0x1fa810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
label_1fa814:
    // 0x1fa814: 0x8c24b8ec  lw          $a0, -0x4714($at)
    ctx->pc = 0x1fa814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949100)));
label_1fa818:
    // 0x1fa818: 0xc089728  jal         func_225CA0
label_1fa81c:
    if (ctx->pc == 0x1FA81Cu) {
        ctx->pc = 0x1FA81Cu;
            // 0x1fa81c: 0x24a58cb0  addiu       $a1, $a1, -0x7350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937776));
        ctx->pc = 0x1FA820u;
        goto label_1fa820;
    }
    ctx->pc = 0x1FA818u;
    SET_GPR_U32(ctx, 31, 0x1FA820u);
    ctx->pc = 0x1FA81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA818u;
            // 0x1fa81c: 0x24a58cb0  addiu       $a1, $a1, -0x7350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA820u; }
        if (ctx->pc != 0x1FA820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA820u; }
        if (ctx->pc != 0x1FA820u) { return; }
    }
    ctx->pc = 0x1FA820u;
label_1fa820:
    // 0x1fa820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa824:
    // 0x1fa824: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa828:
    // 0x1fa828: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1fa828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fa82c:
    // 0x1fa82c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa82cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa830:
    // 0x1fa830: 0x8c22b8e8  lw          $v0, -0x4718($at)
    ctx->pc = 0x1fa830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949096)));
label_1fa834:
    // 0x1fa834: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa838:
    // 0x1fa838: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1fa838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1fa83c:
    // 0x1fa83c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa83cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa840:
    // 0x1fa840: 0x8c22b8ec  lw          $v0, -0x4714($at)
    ctx->pc = 0x1fa840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949100)));
label_1fa844:
    // 0x1fa844: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1fa844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1fa848:
    // 0x1fa848: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fa848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1fa84c:
    // 0x1fa84c: 0x3442b834  ori         $v0, $v0, 0xB834
    ctx->pc = 0x1fa84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47156);
label_1fa850:
    // 0x1fa850: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fa850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1fa854:
    // 0x1fa854: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa858:
    // 0x1fa858: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1fa85c:
    if (ctx->pc == 0x1FA85Cu) {
        ctx->pc = 0x1FA85Cu;
            // 0x1fa85c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA860u;
        goto label_1fa860;
    }
    ctx->pc = 0x1FA858u;
    {
        const bool branch_taken_0x1fa858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA858u;
            // 0x1fa85c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa858) {
            ctx->pc = 0x1FA918u;
            goto label_1fa918;
        }
    }
    ctx->pc = 0x1FA860u;
label_1fa860:
    // 0x1fa860: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fa860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1fa864:
    // 0x1fa864: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fa864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1fa868:
    // 0x1fa868: 0x24a58cb8  addiu       $a1, $a1, -0x7348
    ctx->pc = 0x1fa868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937784));
label_1fa86c:
    // 0x1fa86c: 0xc04a234  jal         func_1288D0
label_1fa870:
    if (ctx->pc == 0x1FA870u) {
        ctx->pc = 0x1FA870u;
            // 0x1fa870: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FA874u;
        goto label_1fa874;
    }
    ctx->pc = 0x1FA86Cu;
    SET_GPR_U32(ctx, 31, 0x1FA874u);
    ctx->pc = 0x1FA870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA86Cu;
            // 0x1fa870: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA874u; }
        if (ctx->pc != 0x1FA874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA874u; }
        if (ctx->pc != 0x1FA874u) { return; }
    }
    ctx->pc = 0x1FA874u;
label_1fa874:
    // 0x1fa874: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa878:
    // 0x1fa878: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa87c:
    // 0x1fa87c: 0x8c24b834  lw          $a0, -0x47CC($at)
    ctx->pc = 0x1fa87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
label_1fa880:
    // 0x1fa880: 0xc089664  jal         func_225990
label_1fa884:
    if (ctx->pc == 0x1FA884u) {
        ctx->pc = 0x1FA884u;
            // 0x1fa884: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1FA888u;
        goto label_1fa888;
    }
    ctx->pc = 0x1FA880u;
    SET_GPR_U32(ctx, 31, 0x1FA888u);
    ctx->pc = 0x1FA884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA880u;
            // 0x1fa884: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA888u; }
        if (ctx->pc != 0x1FA888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA888u; }
        if (ctx->pc != 0x1FA888u) { return; }
    }
    ctx->pc = 0x1FA888u;
label_1fa888:
    // 0x1fa888: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1fa88c:
    if (ctx->pc == 0x1FA88Cu) {
        ctx->pc = 0x1FA890u;
        goto label_1fa890;
    }
    ctx->pc = 0x1FA888u;
    {
        const bool branch_taken_0x1fa888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa888) {
            ctx->pc = 0x1FA904u;
            goto label_1fa904;
        }
    }
    ctx->pc = 0x1FA890u;
label_1fa890:
    // 0x1fa890: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x1fa890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
label_1fa894:
    // 0x1fa894: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1fa894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1fa898:
    // 0x1fa898: 0x12230007  beq         $s1, $v1, . + 4 + (0x7 << 2)
label_1fa89c:
    if (ctx->pc == 0x1FA89Cu) {
        ctx->pc = 0x1FA8A0u;
        goto label_1fa8a0;
    }
    ctx->pc = 0x1FA898u;
    {
        const bool branch_taken_0x1fa898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fa898) {
            ctx->pc = 0x1FA8B8u;
            goto label_1fa8b8;
        }
    }
    ctx->pc = 0x1FA8A0u;
label_1fa8a0:
    // 0x1fa8a0: 0x86040014  lh          $a0, 0x14($s0)
    ctx->pc = 0x1fa8a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1fa8a4:
    // 0x1fa8a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fa8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fa8a8:
    // 0x1fa8a8: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
label_1fa8ac:
    if (ctx->pc == 0x1FA8ACu) {
        ctx->pc = 0x1FA8ACu;
            // 0x1fa8ac: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1FA8B0u;
        goto label_1fa8b0;
    }
    ctx->pc = 0x1FA8A8u;
    {
        const bool branch_taken_0x1fa8a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FA8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA8A8u;
            // 0x1fa8ac: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8a8) {
            ctx->pc = 0x1FA904u;
            goto label_1fa904;
        }
    }
    ctx->pc = 0x1FA8B0u;
label_1fa8b0:
    // 0x1fa8b0: 0x16230014  bne         $s1, $v1, . + 4 + (0x14 << 2)
label_1fa8b4:
    if (ctx->pc == 0x1FA8B4u) {
        ctx->pc = 0x1FA8B8u;
        goto label_1fa8b8;
    }
    ctx->pc = 0x1FA8B0u;
    {
        const bool branch_taken_0x1fa8b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fa8b0) {
            ctx->pc = 0x1FA904u;
            goto label_1fa904;
        }
    }
    ctx->pc = 0x1FA8B8u;
label_1fa8b8:
    // 0x1fa8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa8bc:
    // 0x1fa8bc: 0xa0430005  sb          $v1, 0x5($v0)
    ctx->pc = 0x1fa8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 3));
label_1fa8c0:
    // 0x1fa8c0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa8c4:
    // 0x1fa8c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1fa8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1fa8c8:
    // 0x1fa8c8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa8cc:
    // 0x1fa8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa8d0:
    // 0x1fa8d0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1fa8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa8d4:
    // 0x1fa8d4: 0x8c23b834  lw          $v1, -0x47CC($at)
    ctx->pc = 0x1fa8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
label_1fa8d8:
    // 0x1fa8d8: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1fa8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fa8dc:
    // 0x1fa8dc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa8e0:
    // 0x1fa8e0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa8e4:
    // 0x1fa8e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1fa8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1fa8e8:
    // 0x1fa8e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fa8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fa8ec:
    // 0x1fa8ec: 0xe7809058  swc1        $f0, -0x6FA8($gp)
    ctx->pc = 0x1fa8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938712), bits); }
label_1fa8f0:
    // 0x1fa8f0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1fa8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa8f4:
    // 0x1fa8f4: 0x8c22b834  lw          $v0, -0x47CC($at)
    ctx->pc = 0x1fa8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948916)));
label_1fa8f8:
    // 0x1fa8f8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1fa8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fa8fc:
    // 0x1fa8fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa8fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fa900:
    // 0x1fa900: 0xe780905c  swc1        $f0, -0x6FA4($gp)
    ctx->pc = 0x1fa900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938716), bits); }
label_1fa904:
    // 0x1fa904: 0x0  nop
    ctx->pc = 0x1fa904u;
    // NOP
label_1fa908:
    // 0x1fa908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fa90c:
    // 0x1fa90c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1fa90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1fa910:
    // 0x1fa910: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_1fa914:
    if (ctx->pc == 0x1FA914u) {
        ctx->pc = 0x1FA918u;
        goto label_1fa918;
    }
    ctx->pc = 0x1FA910u;
    {
        const bool branch_taken_0x1fa910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa910) {
            ctx->pc = 0x1FA860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fa860;
        }
    }
    ctx->pc = 0x1FA918u;
label_1fa918:
    // 0x1fa918: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x1fa918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_1fa91c:
    // 0x1fa91c: 0x24c6e940  addiu       $a2, $a2, -0x16C0
    ctx->pc = 0x1fa91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961472));
label_1fa920:
    // 0x1fa920: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fa920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1fa924:
    // 0x1fa924: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x1fa924u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa928:
    // 0x1fa928: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x1fa928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fa92c:
    // 0x1fa92c: 0x78c30010  lq          $v1, 0x10($a2)
    ctx->pc = 0x1fa92cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_1fa930:
    // 0x1fa930: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1fa930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fa934:
    // 0x1fa934: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1fa934u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
label_1fa938:
    // 0x1fa938: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa938u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa93c:
    // 0x1fa93c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fa93cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa940:
    // 0x1fa940: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fa940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa944:
    // 0x1fa944: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fa944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa948:
    // 0x1fa948: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1fa948u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
label_1fa94c:
    // 0x1fa94c: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x1fa94cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
label_1fa950:
    // 0x1fa950: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x1fa950u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
label_1fa954:
    // 0x1fa954: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1fa954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_1fa958:
    // 0x1fa958: 0x8c220fbc  lw          $v0, 0xFBC($at)
    ctx->pc = 0x1fa958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4028)));
label_1fa95c:
    // 0x1fa95c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fa95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1fa960:
    // 0x1fa960: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1fa960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1fa964:
    // 0x1fa964: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa964u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa968:
    // 0x1fa968: 0x8c22bbb8  lw          $v0, -0x4448($at)
    ctx->pc = 0x1fa968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949816)));
label_1fa96c:
    // 0x1fa96c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fa96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1fa970:
    // 0x1fa970: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fa970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fa974:
    // 0x1fa974: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1fa978:
    // 0x1fa978: 0x8c2263c0  lw          $v0, 0x63C0($at)
    ctx->pc = 0x1fa978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25536)));
label_1fa97c:
    // 0x1fa97c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1fa97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1fa980:
    // 0x1fa980: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1fa984:
    // 0x1fa984: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fa984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fa988:
    // 0x1fa988: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1fa988u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1fa98c:
    // 0x1fa98c: 0x8c22b8cc  lw          $v0, -0x4734($at)
    ctx->pc = 0x1fa98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949068)));
label_1fa990:
    // 0x1fa990: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_1fa994:
    if (ctx->pc == 0x1FA994u) {
        ctx->pc = 0x1FA994u;
            // 0x1fa994: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->pc = 0x1FA998u;
        goto label_1fa998;
    }
    ctx->pc = 0x1FA990u;
    {
        const bool branch_taken_0x1fa990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA990u;
            // 0x1fa994: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa990) {
            ctx->pc = 0x1FAA80u;
            goto label_1faa80;
        }
    }
    ctx->pc = 0x1FA998u;
label_1fa998:
    // 0x1fa998: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1fa998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1fa99c:
    // 0x1fa99c: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x1fa99cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1fa9a0:
    // 0x1fa9a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1fa9a4:
    if (ctx->pc == 0x1FA9A4u) {
        ctx->pc = 0x1FA9A8u;
        goto label_1fa9a8;
    }
    ctx->pc = 0x1FA9A0u;
    {
        const bool branch_taken_0x1fa9a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9a0) {
            ctx->pc = 0x1FA9ACu;
            goto label_1fa9ac;
        }
    }
    ctx->pc = 0x1FA9A8u;
label_1fa9a8:
    // 0x1fa9a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fa9ac:
    // 0x1fa9ac: 0x0  nop
    ctx->pc = 0x1fa9acu;
    // NOP
label_1fa9b0:
    // 0x1fa9b0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1fa9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1fa9b4:
    // 0x1fa9b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fa9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fa9b8:
    // 0x1fa9b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1fa9bc:
    // 0x1fa9bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fa9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fa9c0:
    // 0x1fa9c0: 0x3421b878  ori         $at, $at, 0xB878
    ctx->pc = 0x1fa9c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47224);
label_1fa9c4:
    // 0x1fa9c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fa9c8:
    // 0x1fa9c8: 0x3c02433a  lui         $v0, 0x433A
    ctx->pc = 0x1fa9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17210 << 16));
label_1fa9cc:
    // 0x1fa9cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fa9ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1fa9d0:
    // 0x1fa9d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1fa9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1fa9d4:
    // 0x1fa9d4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1fa9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1fa9d8:
    // 0x1fa9d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1fa9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1fa9dc:
    // 0x1fa9dc: 0x811021  addu        $v0, $a0, $at
    ctx->pc = 0x1fa9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1fa9e0:
    // 0x1fa9e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1fa9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1fa9e4:
    // 0x1fa9e4: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1fa9e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_1fa9e8:
    // 0x1fa9e8: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x1fa9e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1fa9ec:
    // 0x1fa9ec: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x1fa9ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fa9f0:
    // 0x1fa9f0: 0x0  nop
    ctx->pc = 0x1fa9f0u;
    // NOP
label_1fa9f4:
    // 0x1fa9f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1fa9f8:
    if (ctx->pc == 0x1FA9F8u) {
        ctx->pc = 0x1FA9FCu;
        goto label_1fa9fc;
    }
    ctx->pc = 0x1FA9F4u;
    {
        const bool branch_taken_0x1fa9f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa9f4) {
            ctx->pc = 0x1FAA00u;
            goto label_1faa00;
        }
    }
    ctx->pc = 0x1FA9FCu;
label_1fa9fc:
    // 0x1fa9fc: 0x460020c6  mov.s       $f3, $f4
    ctx->pc = 0x1fa9fcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[4]);
label_1faa00:
    // 0x1faa00: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1faa04:
    // 0x1faa04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1faa04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1faa08:
    // 0x1faa08: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1faa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1faa0c:
    // 0x1faa0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1faa0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1faa10:
    // 0x1faa10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1faa10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1faa14:
    // 0x1faa14: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1faa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1faa18:
    // 0x1faa18: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1faa18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1faa1c:
    // 0x1faa1c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1faa1cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_1faa20:
    // 0x1faa20: 0xc421b7f8  lwc1        $f1, -0x4808($at)
    ctx->pc = 0x1faa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294948856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1faa24:
    // 0x1faa24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1faa24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1faa28:
    // 0x1faa28: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1faa28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1faa2c:
    // 0x1faa2c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1faa2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1faa30:
    // 0x1faa30: 0x0  nop
    ctx->pc = 0x1faa30u;
    // NOP
label_1faa34:
    // 0x1faa34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1faa38:
    if (ctx->pc == 0x1FAA38u) {
        ctx->pc = 0x1FAA3Cu;
        goto label_1faa3c;
    }
    ctx->pc = 0x1FAA34u;
    {
        const bool branch_taken_0x1faa34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1faa34) {
            ctx->pc = 0x1FAA40u;
            goto label_1faa40;
        }
    }
    ctx->pc = 0x1FAA3Cu;
label_1faa3c:
    // 0x1faa3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1faa3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1faa40:
    // 0x1faa40: 0x3c02433a  lui         $v0, 0x433A
    ctx->pc = 0x1faa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17210 << 16));
label_1faa44:
    // 0x1faa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1faa48:
    // 0x1faa48: 0x0  nop
    ctx->pc = 0x1faa48u;
    // NOP
label_1faa4c:
    // 0x1faa4c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1faa4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1faa50:
    // 0x1faa50: 0x0  nop
    ctx->pc = 0x1faa50u;
    // NOP
label_1faa54:
    // 0x1faa54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1faa58:
    if (ctx->pc == 0x1FAA58u) {
        ctx->pc = 0x1FAA5Cu;
        goto label_1faa5c;
    }
    ctx->pc = 0x1FAA54u;
    {
        const bool branch_taken_0x1faa54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1faa54) {
            ctx->pc = 0x1FAA60u;
            goto label_1faa60;
        }
    }
    ctx->pc = 0x1FAA5Cu;
label_1faa5c:
    // 0x1faa5c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1faa5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1faa60:
    // 0x1faa60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1faa60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1faa64:
    // 0x1faa64: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1faa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1faa68:
    // 0x1faa68: 0x3421b85c  ori         $at, $at, 0xB85C
    ctx->pc = 0x1faa68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47196);
label_1faa6c:
    // 0x1faa6c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1faa6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1faa70:
    // 0x1faa70: 0x812021  addu        $a0, $a0, $at
    ctx->pc = 0x1faa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1faa74:
    // 0x1faa74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1faa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1faa78:
    // 0x1faa78: 0xc094514  jal         func_251450
label_1faa7c:
    if (ctx->pc == 0x1FAA7Cu) {
        ctx->pc = 0x1FAA7Cu;
            // 0x1faa7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA80u;
        goto label_1faa80;
    }
    ctx->pc = 0x1FAA78u;
    SET_GPR_U32(ctx, 31, 0x1FAA80u);
    ctx->pc = 0x1FAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA78u;
            // 0x1faa7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251450u;
    if (runtime->hasFunction(0x251450u)) {
        auto targetFn = runtime->lookupFunction(0x251450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA80u; }
        if (ctx->pc != 0x1FAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenu1__FfPfffi_0x251450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAA80u; }
        if (ctx->pc != 0x1FAA80u) { return; }
    }
    ctx->pc = 0x1FAA80u;
label_1faa80:
    // 0x1faa80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1faa80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1faa84:
    // 0x1faa84: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x1faa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
label_1faa88:
    // 0x1faa88: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1faa88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1faa8c:
    // 0x1faa8c: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_1faa90:
    if (ctx->pc == 0x1FAA90u) {
        ctx->pc = 0x1FAA90u;
            // 0x1faa90: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x1FAA94u;
        goto label_1faa94;
    }
    ctx->pc = 0x1FAA8Cu;
    {
        const bool branch_taken_0x1faa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAA8Cu;
            // 0x1faa90: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa8c) {
            ctx->pc = 0x1FA980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fa980;
        }
    }
    ctx->pc = 0x1FAA94u;
label_1faa94:
    // 0x1faa94: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1faa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1faa98:
    // 0x1faa98: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1faa9c:
    // 0x1faa9c: 0x8c24b8dc  lw          $a0, -0x4724($at)
    ctx->pc = 0x1faa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949084)));
label_1faaa0:
    // 0x1faaa0: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_1faaa4:
    if (ctx->pc == 0x1FAAA4u) {
        ctx->pc = 0x1FAAA4u;
            // 0x1faaa4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1FAAA8u;
        goto label_1faaa8;
    }
    ctx->pc = 0x1FAAA0u;
    {
        const bool branch_taken_0x1faaa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAA0u;
            // 0x1faaa4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faaa0) {
            ctx->pc = 0x1FAAE8u;
            goto label_1faae8;
        }
    }
    ctx->pc = 0x1FAAA8u;
label_1faaa8:
    // 0x1faaa8: 0x3442b8f0  ori         $v0, $v0, 0xB8F0
    ctx->pc = 0x1faaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47344);
label_1faaac:
    // 0x1faaac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1faaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1faab0:
    // 0x1faab0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1faab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1faab4:
    // 0x1faab4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1faab8:
    if (ctx->pc == 0x1FAAB8u) {
        ctx->pc = 0x1FAABCu;
        goto label_1faabc;
    }
    ctx->pc = 0x1FAAB4u;
    {
        const bool branch_taken_0x1faab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faab4) {
            ctx->pc = 0x1FAAE8u;
            goto label_1faae8;
        }
    }
    ctx->pc = 0x1FAABCu;
label_1faabc:
    // 0x1faabc: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x1faabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1faac0:
    // 0x1faac0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1faac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1faac4:
    // 0x1faac4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1faac8:
    if (ctx->pc == 0x1FAAC8u) {
        ctx->pc = 0x1FAAC8u;
            // 0x1faac8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FAACCu;
        goto label_1faacc;
    }
    ctx->pc = 0x1FAAC4u;
    {
        const bool branch_taken_0x1faac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAC4u;
            // 0x1faac8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faac4) {
            ctx->pc = 0x1FAAD0u;
            goto label_1faad0;
        }
    }
    ctx->pc = 0x1FAACCu;
label_1faacc:
    // 0x1faacc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1faaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1faad0:
    // 0x1faad0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1faad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1faad4:
    // 0x1faad4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1faad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1faad8:
    // 0x1faad8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1faad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1faadc:
    // 0x1faadc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1faadcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1faae0:
    // 0x1faae0: 0x8c22b8f0  lw          $v0, -0x4710($at)
    ctx->pc = 0x1faae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949104)));
label_1faae4:
    // 0x1faae4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1faae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1faae8:
    // 0x1faae8: 0xc07eaec  jal         func_1FABB0
label_1faaec:
    if (ctx->pc == 0x1FAAECu) {
        ctx->pc = 0x1FAAECu;
            // 0x1faaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAF0u;
        goto label_1faaf0;
    }
    ctx->pc = 0x1FAAE8u;
    SET_GPR_U32(ctx, 31, 0x1FAAF0u);
    ctx->pc = 0x1FAAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAAE8u;
            // 0x1faaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (runtime->hasFunction(0x1FABB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAAF0u; }
        if (ctx->pc != 0x1FAAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMakeBrd__12CMenuGeoramaFv_0x1fabb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAAF0u; }
        if (ctx->pc != 0x1FAAF0u) { return; }
    }
    ctx->pc = 0x1FAAF0u;
label_1faaf0:
    // 0x1faaf0: 0x8f848fcc  lw          $a0, -0x7034($gp)
    ctx->pc = 0x1faaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938572)));
label_1faaf4:
    // 0x1faaf4: 0x10800025  beqz        $a0, . + 4 + (0x25 << 2)
label_1faaf8:
    if (ctx->pc == 0x1FAAF8u) {
        ctx->pc = 0x1FAAFCu;
        goto label_1faafc;
    }
    ctx->pc = 0x1FAAF4u;
    {
        const bool branch_taken_0x1faaf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faaf4) {
            ctx->pc = 0x1FAB8Cu;
            goto label_1fab8c;
        }
    }
    ctx->pc = 0x1FAAFCu;
label_1faafc:
    // 0x1faafc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1faafcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fab00:
    // 0x1fab00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1fab04:
    // 0x1fab04: 0x320f809  jalr        $t9
label_1fab08:
    if (ctx->pc == 0x1FAB08u) {
        ctx->pc = 0x1FAB08u;
            // 0x1fab08: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1FAB0Cu;
        goto label_1fab0c;
    }
    ctx->pc = 0x1FAB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FAB0Cu);
        ctx->pc = 0x1FAB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB04u;
            // 0x1fab08: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FAB0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB0Cu; }
            if (ctx->pc != 0x1FAB0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FAB0Cu;
label_1fab0c:
    // 0x1fab0c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1fab0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1fab10:
    // 0x1fab10: 0x93828fc8  lbu         $v0, -0x7038($gp)
    ctx->pc = 0x1fab10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938568)));
label_1fab14:
    // 0x1fab14: 0xc420e384  lwc1        $f0, -0x1C7C($at)
    ctx->pc = 0x1fab14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fab18:
    // 0x1fab18: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1fab1c:
    if (ctx->pc == 0x1FAB1Cu) {
        ctx->pc = 0x1FAB1Cu;
            // 0x1fab1c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->pc = 0x1FAB20u;
        goto label_1fab20;
    }
    ctx->pc = 0x1FAB18u;
    {
        const bool branch_taken_0x1fab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB18u;
            // 0x1fab1c: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab18) {
            ctx->pc = 0x1FAB50u;
            goto label_1fab50;
        }
    }
    ctx->pc = 0x1FAB20u;
label_1fab20:
    // 0x1fab20: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1fab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fab24:
    // 0x1fab24: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1fab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1fab28:
    // 0x1fab28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1fab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fab2c:
    // 0x1fab2c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1fab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1fab30:
    // 0x1fab30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fab30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fab34:
    // 0x1fab34: 0x0  nop
    ctx->pc = 0x1fab34u;
    // NOP
label_1fab38:
    // 0x1fab38: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fab38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1fab3c:
    // 0x1fab3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fab3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1fab40:
    // 0x1fab40: 0x0  nop
    ctx->pc = 0x1fab40u;
    // NOP
label_1fab44:
    // 0x1fab44: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fab44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fab48:
    // 0x1fab48: 0x1000000b  b           . + 4 + (0xB << 2)
label_1fab4c:
    if (ctx->pc == 0x1FAB4Cu) {
        ctx->pc = 0x1FAB4Cu;
            // 0x1fab4c: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->pc = 0x1FAB50u;
        goto label_1fab50;
    }
    ctx->pc = 0x1FAB48u;
    {
        const bool branch_taken_0x1fab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB48u;
            // 0x1fab4c: 0xe7a000a0  swc1        $f0, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fab48) {
            ctx->pc = 0x1FAB78u;
            goto label_1fab78;
        }
    }
    ctx->pc = 0x1FAB50u;
label_1fab50:
    // 0x1fab50: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1fab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1fab54:
    // 0x1fab54: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1fab54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1fab58:
    // 0x1fab58: 0xc421e380  lwc1        $f1, -0x1C80($at)
    ctx->pc = 0x1fab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fab5c:
    // 0x1fab5c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1fab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fab60:
    // 0x1fab60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fab60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fab64:
    // 0x1fab64: 0x0  nop
    ctx->pc = 0x1fab64u;
    // NOP
label_1fab68:
    // 0x1fab68: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fab68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1fab6c:
    // 0x1fab6c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1fab6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1fab70:
    // 0x1fab70: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1fab70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1fab74:
    // 0x1fab74: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1fab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1fab78:
    // 0x1fab78: 0x8f848fcc  lw          $a0, -0x7034($gp)
    ctx->pc = 0x1fab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938572)));
label_1fab7c:
    // 0x1fab7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fab7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fab80:
    // 0x1fab80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1fab80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1fab84:
    // 0x1fab84: 0x320f809  jalr        $t9
label_1fab88:
    if (ctx->pc == 0x1FAB88u) {
        ctx->pc = 0x1FAB88u;
            // 0x1fab88: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1FAB8Cu;
        goto label_1fab8c;
    }
    ctx->pc = 0x1FAB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FAB8Cu);
        ctx->pc = 0x1FAB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAB84u;
            // 0x1fab88: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FAB8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FAB8Cu; }
            if (ctx->pc != 0x1FAB8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FAB8Cu;
label_1fab8c:
    // 0x1fab8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fab8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fab90:
    // 0x1fab90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fab90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fab94:
    // 0x1fab94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fab94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fab98:
    // 0x1fab98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fab98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fab9c:
    // 0x1fab9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fab9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1faba0:
    // 0x1faba0: 0x3e00008  jr          $ra
label_1faba4:
    if (ctx->pc == 0x1FABA4u) {
        ctx->pc = 0x1FABA4u;
            // 0x1faba4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1FABA8u;
        goto label_fallthrough_0x1faba0;
    }
    ctx->pc = 0x1FABA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FABA0u;
            // 0x1faba4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1faba0:
    ctx->pc = 0x1FABA8u;
}
